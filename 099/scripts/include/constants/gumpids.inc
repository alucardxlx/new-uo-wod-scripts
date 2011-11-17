////////////////////////////////////////////////////////////////
// Gumpids.inc
//
// Contains various gump numbers && settings
//
////////////////////////////////////////////////////////////////


const GUMPID_SETTING_NO_CLOSE			:= "noclose";
const GUMPID_SETTING_NO_DISPOSE			:= "nodispose";
const GUMPID_SETTING_NO_MOVE			:= "nomove";

// Stretchable backgrounds
/////////////////////////////////////////////////////////////////
const GUMPID_BKGND_BLACKSLAB			:= 3600;	// Raised edge (blocky)
const GUMPID_BKGND_FANCY			:= 2600;	// Fancy corner gray background
const GUMPID_BKGND_GOLDTRIM			:= 2620;	// Gold-press, black backing
const GUMPID_BKGND_PAPER			:= 3000;	// Very thin edging
const GUMPID_BKGND_PAPER_EX			:= 3500;	//  \_with fancy inner border
const GUMPID_BKGND_SCROLL			:= 2520;	// Unrolling scroll style
const GUMPID_BKGND_SILVERTRIM			:= 83;		// Fancy, dark-grey backing
const GUMPID_BKGND_STONE			:= 5100;	// Marble stone, rounded edge
const GUMPID_BKGND_STONESLAB			:= 5054;	// Plain, small corners
/////////////////////////////////////////////////////////////////


// Buttons, 0 is unpressed, 1 is pressed (All have a 0 && 1)
/////////////////////////////////////////////////////////////////
const GUMPID_BUTTON_ADD_0			:= 2460;
const GUMPID_BUTTON_ADD_1			:= 2461;
const GUMPID_BUTTON_APPLY_0			:= 2124;
const GUMPID_BUTTON_APPLY_1			:= 2125;
const GUMPID_BUTTON_ARROW_BLACKGOLD_DOWN_0	:= 252;
const GUMPID_BUTTON_ARROW_BLACKGOLD_DOWN_1	:= 253;
const GUMPID_BUTTON_ARROW_BLACKGOLD_UP_0	:= 250;
const GUMPID_BUTTON_ARROW_BLACKGOLD_UP_1	:= 251;
const GUMPID_BUTTON_ARROW_GOLD_DOWN_0		:= 2437;
const GUMPID_BUTTON_ARROW_GOLD_DOWN_1		:= 2438;
const GUMPID_BUTTON_ARROW_GOLD_UP_0		:= 2436;
const GUMPID_BUTTON_ARROW_GOLD_UP_1		:= 2435;
const GUMPID_BUTTON_ARROW_MARBLE_DOWN_0		:= 2648;
const GUMPID_BUTTON_ARROW_MARBLE_DOWN_1		:= 2649;
const GUMPID_BUTTON_ARROW_MARBLE_UP_0		:= 2650;
const GUMPID_BUTTON_ARROW_MARBLE_UP_1		:= 2651;
const GUMPID_BUTTON_ARROW_GREEN_RIGHT_0		:= 5540;
const GUMPID_BUTTON_ARROW_GREEN_RIGHT_1		:= 5542;
const GUMPID_BUTTON_ARROW_RED_LEFT_0		:= 5537;
const GUMPID_BUTTON_ARROW_RED_LEFT_1		:= 5539;
const GUMPID_BUTTON_CANCEL_0			:= 2121;
const GUMPID_BUTTON_CANCEL_1			:= 2120;
const GUMPID_BUTTON_CIRCLE_GRAY_0		:= 208;
const GUMPID_BUTTON_CIRCLE_GRAY_1		:= 209;
const GUMPID_BUTTON_CIRCLE_SMALL_BLUE_0		:= 2104;
const GUMPID_BUTTON_CIRCLE_SMALL_BLUE_1		:= 2103;
const GUMPID_BUTTON_DEFAULT_0			:= 2127;
const GUMPID_BUTTON_DEFAULT_1			:= 2126;
const GUMPID_BUTTON_DELETE_0			:= 2463;
const GUMPID_BUTTON_DELETE_1			:= 2464;
const GUMPID_BUTTON_DIAMOND_BLUE_0		:= 2152;
const GUMPID_BUTTON_DIAMOND_BLUE_1		:= 2151;
const GUMPID_BUTTON_DIAMOND_RED_0		:= 2472;
const GUMPID_BUTTON_DIAMOND_RED_1		:= 2473;
const GUMPID_BUTTON_GOLDTRIM_MINUS_0		:= 2644;
const GUMPID_BUTTON_GOLDTRIM_MINUS_1		:= 2645;
const GUMPID_BUTTON_GOLDTRIM_X_0		:= 2640;
const GUMPID_BUTTON_GOLDTRIM_X_1		:= 2641;
const GUMPID_BUTTON_LARGE_CIRCLE_BLUE_0		:= 2118;
const GUMPID_BUTTON_LARGE_CIRCLE_BLUE_1		:= 2117;
const GUMPID_BUTTON_MARBLE_MINUS_0		:= 2710;
const GUMPID_BUTTON_MARBLE_MINUS_1		:= 2711;
const GUMPID_BUTTON_MARBLE_X_0			:= 2708;
const GUMPID_BUTTON_MARBLE_X_1			:= 2709;
const GUMPID_BUTTON_MINI_SCROLL_0		:= 4032;
const GUMPID_BUTTON_MINI_SCROLL_1		:= 4033;
const GUMPID_BUTTON_NEXT_0			:= 2469;
const GUMPID_BUTTON_NEXT_1			:= 2470;
const GUMPID_BUTTON_OKAY_0			:= 2130;
const GUMPID_BUTTON_OKAY_1			:= 2129;
const GUMPID_BUTTON_PARTY_0			:= 4008;
const GUMPID_BUTTON_PARTY_1			:= 4010;
const GUMPID_BUTTON_PARTY_ARROW_LEFT_0		:= 4014;
const GUMPID_BUTTON_PARTY_ARROW_LEFT_1		:= 4016;
const GUMPID_BUTTON_PARTY_ARROW_RIGHT_0		:= 4005;
const GUMPID_BUTTON_PARTY_ARROW_RIGHT_1		:= 4007;
const GUMPID_BUTTON_PARTY_CANCEL_0		:= 4020;
const GUMPID_BUTTON_PARTY_CANCEL_1		:= 4022;
const GUMPID_BUTTON_PARTY_E_0			:= 4026;
const GUMPID_BUTTON_PARTY_E_1			:= 4028;
const GUMPID_BUTTON_PARTY_OK_0			:= 4023;
const GUMPID_BUTTON_PARTY_OK_1			:= 4025;
const GUMPID_BUTTON_PARTY_SAVE_0		:= 4029;
const GUMPID_BUTTON_PARTY_SAVE_1		:= 4031;
const GUMPID_BUTTON_PARTY_SCROLL_0		:= 4011;
const GUMPID_BUTTON_PARTY_SCROLL_1		:= 4013;
const GUMPID_BUTTON_PARTY_X_0			:= 4017;
const GUMPID_BUTTON_PARTY_X_1			:= 4019;
const GUMPID_BUTTON_PARTY_X_GUY_0		:= 4002;
const GUMPID_BUTTON_PARTY_X_GUY_1		:= 4004;
const GUMPID_BUTTON_PREVIOUS_0			:= 2466;
const GUMPID_BUTTON_PREVIOUS_1			:= 2467;
const GUMPID_BUTTON_STONE_CHECK_0		:= 5050;
const GUMPID_BUTTON_STONE_CHECK_1		:= 5051;
const GUMPID_BUTTON_STONE_X_0			:= 5052;
const GUMPID_BUTTON_STONE_X_1			:= 5053;


// Checkboxes, 0 is unchecked while 1 is checked
/////////////////////////////////////////////////////////////////
const GUMPID_CHECKBOX_GRAY_0			:= 210;
const GUMPID_CHECKBOX_GRAY_1			:= 211;
const GUMPID_CHECKBOX_SQUARE_SMALL_0		:= 2510;
const GUMPID_CHECKBOX_SQUARE_SMALL_1		:= 2511;
const GUMPID_CHECKBOX_STONE_0			:= 5230;
const GUMPID_CHECKBOX_STONE_1			:= 5231;


// Gumppics
/////////////////////////////////////////////////////////////////
const GUMPID_GUMPPIC_ARROW_STONE_UP		:= 5208;
const GUMPID_GUMPPIC_ARROW_STONE_DOWN		:= 5209;
const GUMPID_GUMPPIC_ARROW_STONE_LEFT		:= 5223;
const GUMPID_GUMPPIC_ARROW_STONE_RIGHT		:= 5224;
const GUMPID_GUMPPIC_BOOK_LARGE_GOLDCORNER	:= 500;
const GUMPID_GUMPPIC_BOOK_LARGE_WOODCORNER	:= 510;
const GUMPID_GUMPPIC_BOOK_SMALL_1		:= 2200;
const GUMPID_GUMPPIC_BOOK_SMALL_2		:= 2201;
const GUMPID_GUMPPIC_BOOK_SMALL_3		:= 2202;
const GUMPID_GUMPPIC_BOOK_SMALL_4		:= 2203;
const GUMPID_GUMPPIC_BOOK_TITLE_GUMPPIC		:= 2204;
const GUMPID_GUMPPIC_BUYWIN_MINUS		:= 56;
const GUMPID_GUMPPIC_BUYWIN_PLUS		:= 55;
const GUMPID_GUMPPIC_CIRCLE_SMALL_BLUE		:= 2362;
const GUMPID_GUMPPIC_CIRCLE_SMALL_GREEN		:= 2361;
const GUMPID_GUMPPIC_CIRCLE_SMALL_RED		:= 2360;
const GUMPID_GUMPPIC_CONFIRM_DIALOG_SMALL	:= 2070;
const GUMPID_GUMPPIC_CORNER_LEFT		:= 2205;
const GUMPID_GUMPPIC_CORNER_RIGHT		:= 2206;
const GUMPID_GUMPPIC_CORNER_GOLD_LEFT		:= 501;
const GUMPID_GUMPPIC_CORNER_GOLD_RIGHT		:= 502;
const GUMPID_GUMPPIC_CORNER_WOOD_LEFT		:= 511;
const GUMPID_GUMPPIC_CORNER_WOOD_RIGHT		:= 512;
const GUMPID_GUMPPIC_DECO_LINE_LEFT		:= 57;
const GUMPID_GUMPPIC_DECO_LINE_CENTER		:= 58;
const GUMPID_GUMPPIC_DECO_LINE_RIGHT		:= 59;
const GUMPID_GUMPPIC_GOLDEN_BOARD		:= 100;
const GUMPID_GUMPPIC_GRAVESTONE_ROUND		:= 101;
const GUMPID_GUMPPIC_GRAVESTONE_SQUARE		:= 102;
const GUMPID_GUMPPIC_PAPERDOLL_OTHERS		:= 2001;
const GUMPID_GUMPPIC_PAPERDOLL_SELF		:= 2000;
const GUMPID_GUMPPIC_SKILLWIN_ARROW_SMALL_DOWN	:= 2086;
const GUMPID_GUMPPIC_SKILLWIN_ARROW_SMALL_RIGHT	:= 2087;
const GUMPID_GUMPPIC_SKILLWIN_LINE_LONG		:= 2091;
const GUMPID_GUMPPIC_SKILLWIN_LINE_SHORT	:= 2101;
const GUMPID_GUMPPIC_SKILLWIN_LOCKER		:= 2092;
const GUMPID_GUMPPIC_SPELLBOOK			:= 2220;
const GUMPID_GUMPPIC_SPELLBOOK_CORNER_LEFT	:= 2235;
const GUMPID_GUMPPIC_SPELLBOOK_CORNER_RIGHT	:= 2236;
const GUMPID_GUMPPIC_SPELLBOOK_REDUCED		:= 2234;
const GUMPID_GUMPPIC_SPELLCIRCLE_1		:= 2225;
const GUMPID_GUMPPIC_SPELLCIRCLE_2		:= 2226;
const GUMPID_GUMPPIC_SPELLCIRCLE_3		:= 2227;
const GUMPID_GUMPPIC_SPELLCIRCLE_4		:= 2228;
const GUMPID_GUMPPIC_SPELLCIRCLE_5		:= 2229;
const GUMPID_GUMPPIC_SPELLCIRCLE_6		:= 2230;
const GUMPID_GUMPPIC_SPELLCIRCLE_7		:= 2231;
const GUMPID_GUMPPIC_SPELLCIRCLE_8		:= 2232;
const GUMPID_GUMPPIC_SPELLICON_CLUMSY		:= 2240;
const GUMPID_GUMPPIC_SPELLICON_CREATE_FOOD	:= 2241;
const GUMPID_GUMPPIC_SPELLICON_FEEBLEMIND	:= 2242;
const GUMPID_GUMPPIC_SPELLICON_HEAL		:= 2243;
const GUMPID_GUMPPIC_SPELLICON_MAGIC_ARROW	:= 2244;
const GUMPID_GUMPPIC_SPELLICON_NIGHTSIGHT	:= 2245;
const GUMPID_GUMPPIC_SPELLICON_REACTIVE_ARMOR	:= 2246;
const GUMPID_GUMPPIC_SPELLICON_WEAKEN		:= 2247;
const GUMPID_GUMPPIC_SPELLICON_AGILITY		:= 2248;
const GUMPID_GUMPPIC_SPELLICON_CUNNING		:= 2249;
const GUMPID_GUMPPIC_SPELLICON_CURE		:= 2250;
const GUMPID_GUMPPIC_SPELLICON_HARM		:= 2251;
const GUMPID_GUMPPIC_SPELLICON_MAGIC_TRAP	:= 2252;
const GUMPID_GUMPPIC_SPELLICON_MAGIC_UNTRAP	:= 2253;
const GUMPID_GUMPPIC_SPELLICON_PROTECTION	:= 2254;
const GUMPID_GUMPPIC_SPELLICON_STRENGTH		:= 2255;
const GUMPID_GUMPPIC_SPELLICON_BLESS		:= 2256;
const GUMPID_GUMPPIC_SPELLICON_FIREBALL		:= 2257;
const GUMPID_GUMPPIC_SPELLICON_MAGIC_LOCK	:= 2258;
const GUMPID_GUMPPIC_SPELLICON_POISON		:= 2259;
const GUMPID_GUMPPIC_SPELLICON_TELEKINESIS	:= 2260;
const GUMPID_GUMPPIC_SPELLICON_TELEPORT		:= 2261;
const GUMPID_GUMPPIC_SPELLICON_UNLOCK		:= 2262;
const GUMPID_GUMPPIC_SPELLICON_WALL_OF_STONE	:= 2263;
const GUMPID_GUMPPIC_SPELLICON_ARCH_CURE	:= 2264;
const GUMPID_GUMPPIC_SPELLICON_ARCH_PROTECTION	:= 2265;
const GUMPID_GUMPPIC_SPELLICON_CURSE		:= 2266;
const GUMPID_GUMPPIC_SPELLICON_FIRE_FIELD	:= 2267;
const GUMPID_GUMPPIC_SPELLICON_GREATER_HEAL	:= 2268;
const GUMPID_GUMPPIC_SPELLICON_LIGHTNING	:= 2269;
const GUMPID_GUMPPIC_SPELLICON_MANA_DRAIN	:= 2270;
const GUMPID_GUMPPIC_SPELLICON_RECALL		:= 2271;
const GUMPID_GUMPPIC_SPELLICON_BLADE_SPIRIT	:= 2272;
const GUMPID_GUMPPIC_SPELLICON_DISPEL_FIELD	:= 2273;
const GUMPID_GUMPPIC_SPELLICON_INCOGNITO	:= 2274;
const GUMPID_GUMPPIC_SPELLICON_MAGIC_REFLECTION	:= 2275;
const GUMPID_GUMPPIC_SPELLICON_MIND_BLAST	:= 2276;
const GUMPID_GUMPPIC_SPELLICON_PARALYZE		:= 2277;
const GUMPID_GUMPPIC_SPELLICON_POISON_FIELD	:= 2278;
const GUMPID_GUMPPIC_SPELLICON_SUMMON_CREATURE	:= 2279;
const GUMPID_GUMPPIC_SPELLICON_DISPEL		:= 2280;
const GUMPID_GUMPPIC_SPELLICON_ENERGY_BOLT	:= 2281;
const GUMPID_GUMPPIC_SPELLICON_EXPLOSION	:= 2282;
const GUMPID_GUMPPIC_SPELLICON_INVISIBILITY	:= 2283;
const GUMPID_GUMPPIC_SPELLICON_MARK		:= 2284;
const GUMPID_GUMPPIC_SPELLICON_MASS_CURSE	:= 2285;
const GUMPID_GUMPPIC_SPELLICON_PARALYZE_FIELD	:= 2286;
const GUMPID_GUMPPIC_SPELLICON_REVEAL		:= 2287;
const GUMPID_GUMPPIC_SPELLICON_CHAIN_LIGHTNING	:= 2288;
const GUMPID_GUMPPIC_SPELLICON_ENERGY_FIELD	:= 2289;
const GUMPID_GUMPPIC_SPELLICON_FLAME_STRIKE	:= 2290;
const GUMPID_GUMPPIC_SPELLICON_GATE_TRAVEL	:= 2291;
const GUMPID_GUMPPIC_SPELLICON_MANA_VAMPIRE	:= 2292;
const GUMPID_GUMPPIC_SPELLICON_MASS_DISPEL	:= 2293;
const GUMPID_GUMPPIC_SPELLICON_METEOR_SWARM	:= 2294;
const GUMPID_GUMPPIC_SPELLICON_POLYMORPH	:= 2295;
const GUMPID_GUMPPIC_SPELLICON_EARTHQUAKE	:= 2296;
const GUMPID_GUMPPIC_SPELLICON_ENERGY_VORTEX	:= 2297;
const GUMPID_GUMPPIC_SPELLICON_RESURRECTION	:= 2298;
const GUMPID_GUMPPIC_SPELLICON_SUMMON_AIR_ELEMENTAL	:= 2299;
const GUMPID_GUMPPIC_SPELLICON_SUMMON_DAEMON	:= 2300;
const GUMPID_GUMPPIC_SPELLICON_SUMMON_EARTH_ELEMENTAL	:= 2301;
const GUMPID_GUMPPIC_SPELLICON_SUMMON_FIRE_ELEMENTAL	:= 2302;
const GUMPID_GUMPPIC_SPELLICON_SUMMON_WATER_ELEMENTAL	:= 2303;


// Text areas
/////////////////////////////////////////////////////////////////
const GUMPID_TEXTAREA_GOLDTRIM_LONG		:= 1142;
const GUMPID_TEXTAREA_GOLDTRIM_LONG_DARK	:= 1141;
const GUMPID_TEXTAREA_GOLDTRIM_LONG_LIGHT	:= 1143;
const GUMPID_TEXTAREA_MARBLE_MEDIUM		:= 2445;
const GUMPID_TEXTAREA_MARBLE_SHORT_DARK		:= 2444;
const GUMPID_TEXTAREA_MARBLE_SQUARE_LONG	:= 2446;