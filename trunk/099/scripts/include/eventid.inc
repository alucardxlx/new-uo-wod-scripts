///////////////////
//  System-defined events (See sysevent.inc for definitions)
///////////////////

Const EVID_SPEECH				:= 0x0001;
Const EVID_ENGAGED				:= 0x0002;
Const EVID_DISENGAGED			:= 0x0004;
Const EVID_DAMAGED				:= 0x0008;
Const EVID_ENTEREDAREA			:= 0x0010;
Const EVID_LEFTAREA				:= 0x0020;
Const EVID_OPPONENT_MOVED		:= 0x0040;
Const EVID_HOSTILE_MOVED			:= 0x0080; // not implemented
Const EVID_MERCHANT_BOUGHT		:= 0x0100;
Const EVID_MERCHANT_SOLD			:= 0x0200;
Const EVID_ITEM_GIVEN			:= 0x0400;
Const EVID_DOUBLECLICKED			:= 0x0800;

const EVID_RESERVED_1000			:= 0x00001000;
const EVID_RESERVED_2000			:= 0x00002000;
const EVID_RESERVED_4000			:= 0x00004000;
const EVID_RESERVED_8000			:= 0x00008000;
const EVID_RESERVED_00010000		:= 0x00010000;
const EVID_RESERVED_00020000		:= 0x00020000;
const EVID_RESERVED_00040000		:= 0x00040000;
const EVID_RESERVED_00080000		:= 0x00080000;
const EVID_RESERVED_00100000		:= 0x00100000;
const EVID_RESERVED_00200000		:= 0x00200000;
const EVID_RESERVED_00400000		:= 0x00400000;
const EVID_RESERVED_00800000		:= 0x00800000;
const EVID_RESERVED_01000000		:= 0x01000000;
const EVID_RESERVED_02000000		:= 0x02000000;
const EVID_RESERVED_04000000		:= 0x04000000;
const EVID_RESERVED_08000000		:= 0x08000000;
const EVID_RESERVED_10000000		:= 0x10000000;
const EVID_RESERVED_20000000		:= 0x20000000;
const EVID_RESERVED_40000000		:= 0x40000000;
const EVID_RESERVED_80000000		:= 0x80000000;


///////////////////
//  User defined events
///////////////////

Const EVID_ALL_FOLLOW_CMD		:= 0x11;
Const EVID_ALL_ATTACK_CMD		:= 0x12;
Const EVID_ALL_GUARD_CMD			:= 0x13;
Const EVID_PEACEMADE			:= 0x90000000;

