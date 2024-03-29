use uo;
use util;

include "include/client";
include "include/utility";
include "include/attributes";




///////////////////
//  Determines if there's already a mod on that particular attribute
///////////////////

function CanMod (byref who, stat, persistedprop := 0)
	var modarray := "#mods";
	if (persistedprop)
		modarray := "mods";
	endif

	var currentmods := GetObjProperty (who, modarray);
	if (!currentmods)
		return 1;
	endif

	foreach mmod in currentmods
		if (mmod[1] == stat)
			return 0;
		endif
	endforeach
	return 1;
endfunction




///////////////////
//  For mods that aren't persisted through server restarts
///////////////////

function DoTempMod (byref who, stat, amt, duration, description)
	var allmods := GetObjProperty (who, "#mods");
	if (!allmods)
		allmods := {};
	endif
	var mmod := {};
	mmod[1] := stat;
	mmod[2] := amt;
	mmod[3] := ReadGameClock()+duration;
	mmod[4] := description;

	AddToStatMods (allmods, mmod);
	SetObjProperty (who, "#mods", allmods);

	case (stat)
		"cstr":
		"str" :	var current_mod := GetAttributeTemporaryMod (who, "Strength");
				SetAttributeTemporaryMod (who, "Strength", current_mod + mmod[2]*10);
		"cdex":
		"dex" :	var current_mod := GetAttributeTemporaryMod (who, "Dexterity");
				SetAttributeTemporaryMod (who, "Dexterity", current_mod + mmod[2]*10);
		"cint":
		"int" :	var current_mod := GetAttributeTemporaryMod (who, "Intelligence");
				SetAttributeTemporaryMod (who, "Intelligence", current_mod + mmod[2]*10);
		"car":
		"ar"  :	who.ar_mod := who.ar_mod + mmod[2];
		"p"   :	who.SetParalyzed (1);
		"call":
		"all" :
				var current_mod := GetAttributeTemporaryMod (who, "Strength");
				SetAttributeTemporaryMod (who, "Strength", current_mod + mmod[2]*10);
				current_mod := GetAttributeTemporaryMod (who, "Dexterity");
				SetAttributeTemporaryMod (who, "Dexterity", current_mod + mmod[2]*10);
				current_mod := GetAttributeTemporaryMod (who, "Intelligence");
				SetAttributeTemporaryMod (who, "Intelligence", current_mod + mmod[2]*10);
		"cpoly":
		"poly":
				var current_mod := GetAttributeTemporaryMod (who, "Strength");
				SetAttributeTemporaryMod (who, "Strength", current_mod + mmod[2]*10);
				current_mod := GetAttributeTemporaryMod (who, "Dexterity");
				SetAttributeTemporaryMod (who, "Dexterity", current_mod + mmod[2]*10);
				current_mod := GetAttributeTemporaryMod (who, "Intelligence");
				SetAttributeTemporaryMod (who, "Intelligence", current_mod + mmod[2]*10);
				who.ar_mod := who.ar_mod + CINT (mmod[2]/3);
		"natures_blessing":
				DoSkillMod (who, SKILLID_SWORDSMANSHIP, amt, duration);
				DoSkillMod (who, SKILLID_MACEFIGHTING, amt, duration);
				DoSkillMod (who, SKILLID_WRESTLING, amt, duration);
				DoSkillMod (who, SKILLID_FENCING, amt, duration);
				DoSkillMod (who, SKILLID_TACTICS, amt, duration);
				DoSkillMod (who, SKILLID_PARRY, amt, duration);
				DoSkillMod (who, SKILLID_ARCHERY, amt, duration);
		"natures_curse":
				DoSkillMod (who, 100+SKILLID_SWORDSMANSHIP, amt, duration);
				DoSkillMod (who, 100+SKILLID_MACEFIGHTING, amt, duration);
				DoSkillMod (who, 100+SKILLID_WRESTLING, amt, duration);
				DoSkillMod (who, 100+SKILLID_FENCING, amt, duration);
				DoSkillMod (who, 100+SKILLID_TACTICS, amt, duration);
				DoSkillMod (who, 100+SKILLID_PARRY, amt, duration);
				DoSkillMod (who, 100+SKILLID_ARCHERY, amt, duration);
		default:
				Syslog ("Error:  Invalid Statmod");
	endcase

	RecalcVitals (who);
	if (who.npctemplate)
		var parms := {};
		parms[1] := who;
		parms[2] := mmod[1];
		parms[3] := mmod[2];
		parms[4] := duration;
		parms[5] := 0;//nonpersisted mods
		start_script ("::/misc/unmodnpc", parms);
	endif
	set_critical(0);
endfunction




///////////////////
//  for name, graphic and color changes, or other changes that would be persisted through a server restart
///////////////////

function DoPersistedMod (byref who, prop, newvalue, oldvalue, duration, description)
	set_critical(1);

	var allmods := GetObjProperty  (who, "mods");
	if (!allmods)
		allmods := {};
	endif
	var mmod := {};
	mmod[1] := prop;
	mmod[2] := oldvalue;
	mmod[3] := ReadGameClock()+duration;
	mmod[4] := description;

	AddToPersistedMods (allmods, mmod);
	SetObjProperty (who, "mods", allmods);

	case (prop)
        	"title_prefix": 
			who.title_prefix := newvalue;
        	"title_suffix": 
			who.title_suffix := newvalue;
        	"name": 
			who.name := newvalue;
		"graphic":
			dismount (who, 0);
			who.graphic := newvalue;
		"color":
			who.color := newvalue;
		"gender":
			who.gender := newvalue;
		"spiritspeak":
			GrantPrivilege (who, "hearghosts");
			who.enable ("hearghosts");
		"hair":
			DestroyItem (GetEquipmentByLayer (who, LAYER_HAIR));
			if (newvalue)
				var newhair := CreateItemAtLocation (5288 , 1176 , 0, newvalue, 1);
				newhair.color := RandomHairColor();
				EquipItem(who,newhair);
			endif
		"beard":
			DestroyItem (GetEquipmentByLayer (who, LAYER_BEARD));
			if (newvalue)
				var newhair := CreateItemAtLocation (5288, 1176, 0, newvalue, 1);
				newhair.color := GetObjProperty (who, "beardcolor");
				EquipItem (who, newhair);
			endif
		"stamina_regen_rate":
			SetObjProperty (who, "#dotempmod_stamina_regen_rate", newvalue);
			RecalcVitals (who);
		default:
				Syslog ("Error:  Invalid Statmod");
	endcase

	if (who.npctemplate)
		var parms := {};
		parms[1] := who;
		parms[2] := mmod[1];
		parms[3] := mmod[2];
		parms[4] := duration;
		parms[5] := 1;//persisted mod
		start_script("::/misc/unmodnpc", parms);
	endif

	set_critical(0);

endfunction

function RemoveNPCMod (byref parms)

	var who := parms[1];
	var prop := parms[2];
	var amount := parms[3];	//for persisted mods, this is the oldvalue
	var duration := parms[4];
	var persistedmod := parms[5];

	sleep( duration + 1);

	set_critical(1);
	if (who)
		CheckMods(who, persistedmod);
	else
		set_critical(0);
		return;
	endif

endfunction

function CheckMods (byref who, persisted)

//For Reference:
//	mmod[1] := stat;
//	mmod[2] := amt;
//	mmod[3] := ReadGameClock()+duration;

	set_critical(1);
	var now := ReadGameClock();
	var modarray := "#mods";
	if (persisted)
		modarray := "mods";
	endif

	var newmods := {};
	var currentmods := GetObjProperty(who,modarray);
	if (!currentmods)
		set_critical(0);
		return;
	endif

	foreach mmod in currentmods
		if ( now > mmod[3] )
			UndoTheMod( who, mmod[1], mmod[2] );
		else
			newmods.append(mmod);
		endif
	endforeach

	if (len(newmods))
		SetObjProperty(who,modarray,newmods);
	else
		EraseObjProperty(who,modarray);
	endif

	RecalcVitals (who);

	set_critical(0);
endfunction

function UndoTheMod (byref who, prop, amt )

	var msg, sound;
	var oldvalue := amt;
	case (prop)
		"cstr":
		"str" :	var current_mod := GetAttributeTemporaryMod (who, "Strength");
				SetAttributeTemporaryMod (who, "Strength", current_mod - amt*10);
		"cdex":
		"dex" :	var current_mod := GetAttributeTemporaryMod (who, "Dexterity");
				SetAttributeTemporaryMod (who, "Dexterity", current_mod - amt*10);
		"cint":
		"int" :	var current_mod := GetAttributeTemporaryMod (who, "Intelligence");
				SetAttributeTemporaryMod (who, "Intelligence", current_mod - amt*10);
		"car":
		"ar"  :	who.ar_mod := who.ar_mod - amt;
				msg := "Armor is now " + who.ar;
				sound := SFX_1E3;
		"p"   :	SetScriptController (who);
				who.SetParalyzed (0);
		"call":
		"all" :
				var current_mod := GetAttributeTemporaryMod (who, "Strength");
				SetAttributeTemporaryMod (who, "Strength", current_mod - amt*10);
				current_mod := GetAttributeTemporaryMod (who, "Dexterity");
				SetAttributeTemporaryMod (who, "Dexterity", current_mod - amt*10);
				current_mod := GetAttributeTemporaryMod (who, "Intelligence");
				SetAttributeTemporaryMod (who, "Intelligence", current_mod - amt*10);
		"cpoly":
		"poly":
				var current_mod := GetAttributeTemporaryMod (who, "Strength");
				SetAttributeTemporaryMod (who, "Strength", current_mod - amt*10);
				current_mod := GetAttributeTemporaryMod (who, "Dexterity");
				SetAttributeTemporaryMod (who, "Dexterity", current_mod - amt*10);
				current_mod := GetAttributeTemporaryMod (who, "Intelligence");
				SetAttributeTemporaryMod (who, "Intelligence", current_mod - amt*10);
				msg := "Armor is now " + who.ar;
				sound := SFX_1E3;
				who.ar_mod := who.ar_mod - CINT (amt/3);
		"name"    : who.name := oldvalue;
				msg := "Your name is now " + who.name;
				sound := SFX_1E3;
		"graphic" : who.graphic := oldvalue;
		"color"   : who.color := oldvalue;
		"spiritspeak":
			if (!amt) RevokePrivilege( who, "hearghosts" ); endif
		"title_prefix": 
			who.title_prefix := oldvalue;
		"title_suffix": 
			who.title_suffix := oldvalue;
		"gender":
			who.gender := oldvalue;
		"hair":
			DestroyItem(GetEquipmentByLayer(who,LAYER_HAIR));
			if (oldvalue)
				var newhair := CreateItemAtLocation(5288 , 1176 , 0, oldvalue, 1);
				newhair.color := GetObjProperty(who,"haircolor");
				EquipItem(who,newhair);
			endif
		"beard":
			DestroyItem(GetEquipmentByLayer(who,LAYER_BEARD));
			if (oldvalue)
				var newhair := CreateItemAtLocation(5288 , 1176 , 0, oldvalue, 1);
				newhair.color := GetObjProperty(who,"haircolor");
				EquipItem(who,newhair);
			endif
		"stamina_regen_rate":
			EraseObjProperty (who, "#dotempmod_stamina_regen_rate");
		"poison":
			who.SetPoisoned (0);
	endcase
	RecalcVitals (who);

	if (sound) PlaySoundEffectPrivate(who, sound, who); endif
	if (msg) PrintTextAbovePrivate(who,msg,who); endif

endfunction

function GetModAmount ( magery ) 

    var mod_amount := randomint(10) + CINT (magery/6);
    return mod_amount;

endfunction

function GetModDuration ( magery )

    var duration := 60 + ((magery / 15) * 60);
    return (duration);

endfunction

function AddToStatMods (byref allmods, byref mmod)

//For Reference:
//	mmod[1] := stat;
//	mmod[2] := amt;
//	mmod[3] := ReadGameClock()+duration;

	foreach oldmod in allmods
		if (oldmod[1] == mmod[1])
			if ( (mmod[2] > 0 and oldmod[2] > 0) or (mmod[2] < 0 and oldmod[2] < 0) )
				mmod[2] := 0;
			else
				oldmod[2] := oldmod[2] + mmod[2];
			endif
			oldmod[3] := mmod[3];
			return 0;
		endif
	endforeach

	allmods.append (mmod);
	return 1;

endfunction

function AddToPersistedMods (byref allmods, byref mmod)
//For Reference:
//	mmod[1] := prop;
//	mmod[2] := oldvalue;
//	mmod[3] := ReadGameClock()+duration;

//note:  If the player already has this mod, we don't want to 
//change the oldvalue - we just want to extend the duration.
//and do the mod:

	foreach oldmod in allmods
		if ( oldmod[1]==mmod[1] )
			mmod[2] := oldmod[2]; //keep the original oldvalue
			oldmod[3] := mmod[3]; //reset the duration
			return 0;
		endif
	endforeach

	allmods.append(mmod);
	return 1;
endfunction

function RandomHairColor()
	return RandomInt(46)+1102;
endfunction

