forward OnGuardMessageServerForChat(targetid, const target_ip[], sentence, code, const code_string[]);


stock OnGuardStateDesyncPlayer(targetid, argument)
	return CallRemoteFunction("_OnGuardStateDesyncPlayer","id", targetid, argument);

stock EnableGuardForPlayer(targetid, cheatid, stateid)
	return CallRemoteFunction("_EnableGuardForPlayer","idd", targetid, cheatid, stateid);
	
stock OnGuardEditForAntiCheat(targetid)
	return CallRemoteFunction("_OnGuardEditForAntiCheat","i", targetid);
	
stock OnGuardStateListToPlayer(targetid)
	return CallRemoteFunction("_OnGuardStateListToPlayer","i", targetid);
	
stock OnGuardRegisterAdmin(targetid)
	return CallRemoteFunction("_OnGuardRegisterAdmin","i", targetid);
	
	
	
//################################################################ [ RESET PLAYER WEAPONS ] ####################################################################
stock __ResetPlayerWeapons(targetid)
	return CallRemoteFunction("AC_ResetPlayerWeapons","i", targetid);	
	
#if defined _ALS_ResetPlayerWeapons
	#undef ResetPlayerWeapons
#else
	#define _ALS_ResetPlayerWeapons
#endif
#define ResetPlayerWeapons __ResetPlayerWeapons
	
	
	
//############################################################### [ TOGGLE PLAYER SPECTATING ] #################################################################
stock __TogglePlayerSpectating(targetid, toggle)
	return CallRemoteFunction("AC_TogglePlayerSpectating","id", targetid, toggle);
	
#if defined _ALS_TogglePlayerSpectating
	#undef TogglePlayerSpectating
#else
	#define _ALS_TogglePlayerSpectating
#endif
#define TogglePlayerSpectating __TogglePlayerSpectating
	
	
	
//##################################################################### [ SPAWN PLAYER ] #######################################################################
stock __SpawnPlayer(targetid)
	return CallRemoteFunction("AC_SpawnPlayer","i", targetid);
	
#if defined _ALS_SpawnPlayer
	#undef SpawnPlayer
#else
	#define _ALS_SpawnPlayer
#endif
#define SpawnPlayer __SpawnPlayer

	
	
//################################################################### [ SET PLAYER AMMO ] ######################################################################
stock __SetPlayerAmmo(targetid, weaponid, ammo)
	return CallRemoteFunction("AC_SetPlayerAmmo","idd", targetid, weaponid, ammo);
	
#if defined _ALS_SetPlayerAmmo
	#undef SetPlayerAmmo
#else
	#define _ALS_SetPlayerAmmo
#endif
#define SetPlayerAmmo __SetPlayerAmmo
	
	
	
//################################################################## [ GIVE PLAYER WEAPON ] ####################################################################
stock __GivePlayerWeapon(targetid, weaponid, ammo)
	return CallRemoteFunction("AC_GivePlayerWeapon","idd", targetid, weaponid, ammo);

#if defined _ALS_GivePlayerWeapon
	#undef GivePlayerWeapon
#else
	#define _ALS_GivePlayerWeapon
#endif
#define GivePlayerWeapon __GivePlayerWeapon
	
	
	
//################################################################### [ SET PLAYER ARMOUR ] ####################################################################
stock __SetPlayerArmour(targetid, Float: armour)
	return CallRemoteFunction("AC_SetPlayerArmour","if", targetid, armour);
	
#if defined _ALS_SetPlayerArmour
	#undef SetPlayerArmour
#else
	#define _ALS_SetPlayerArmour
#endif
#define SetPlayerArmour __SetPlayerArmour
	
	
	
//################################################################### [ SET PLAYER HEALTH ] ####################################################################
stock __SetPlayerHealth(targetid, Float: health)
	return CallRemoteFunction("AC_SetPlayerHealth","if",targetid, Float: health);
	
#if defined _ALS_SetPlayerHealth
	#undef SetPlayerHealth
#else
	#define _ALS_SetPlayerHealth
#endif
#define SetPlayerHealth __SetPlayerHealth
	
	
	
//################################################################# [ PUT PLAYER IN VEHICLE ] ##################################################################
stock __PutPlayerInVehicle(targetid, vehicleid, seatid)
	return CallRemoteFunction("AC_PutPlayerInVehicle","iddd",targetid, vehicleid, seatid);
	
#if defined _ALS_PutPlayerInVehicle
	#undef PutPlayerInVehicle
#else
	#define _ALS_PutPlayerInVehicle
#endif
#define PutPlayerInVehicle __PutPlayerInVehicle

	
	
//################################################################## [ SET PLAYER POS FIND Z ] #################################################################
stock __SetPlayerPosFindZ(targetid, Float: pos_x, Float: pos_y, Float: pos_z)
	return CallRemoteFunction("AC_SetPlayerPosFindZ","ifff", targetid, pos_x, pos_y, pos_z);
	
#if defined _ALS_SetPlayerPosFindZ
	#undef SetPlayerPosFindZ
#else
	#define _ALS_SetPlayerPosFindZ
#endif
#define SetPlayerPosFindZ __SetPlayerPosFindZ



//##################################################################### [ SET PLAYER POS ] #####################################################################
stock __SetPlayerPos(targetid, Float: pos_x, Float: pos_y, Float: pos_z)
	return CallRemoteFunction("AC_SetPlayerPos","ifff", targetid, pos_x, pos_y, pos_z);
	
#if defined _ALS_SetPlayerPos
	#undef SetPlayerPos
#else
	#define _ALS_SetPlayerPos
#endif
#define SetPlayerPos __SetPlayerPos
	
	
	
//##################################################################### [ SET VEHICLE POS ] ####################################################################
stock __SetVehiclePos(vehicleid, Float: pos_x, Float: pos_y, Float: pos_z)
	return CallRemoteFunction("AC_SetVehiclePos","dfff", vehicleid, pos_x, pos_y, pos_z);
	
#if defined _SetVehiclePos
	#undef SetVehiclePos
#else
	#define _ALS_SetVehiclePos
#endif
#define SetVehiclePos __SetVehiclePos
	
	
	
//################################################################# [ CREATE  STATIC VEHICLE ] #################################################################
stock __AddStaticVehicle(vehicleid, Float: pos_x, Float: pos_y, Float: pos_z, Float: pos_r, color, color1, respawn = 0)
	return CallRemoteFunction("AC_AddStaticVehicle","dffffddd", vehicleid, pos_x, pos_y, pos_z, pos_r, color, color1, respawn);
	
#if defined _ALS_AddStaticVehicle
	#undef AddStaticVehicle
#else
	#define _ALS_AddStaticVehicle
#endif
#define AddStaticVehicle __AddStaticVehicle



//##################################################################### [ CREATE VEHICLE ] #####################################################################
stock __CreateVehicle(vehicleid, Float: pos_x, Float: pos_y, Float: pos_z, Float: pos_r, color, color1, respawn = 0)
	return CallRemoteFunction("AC_CreateVehicle","dffffddd", vehicleid, pos_x, pos_y, pos_z, pos_r, color, color1, respawn);
	
#if defined _ALS_CreateVehicle
	#undef CreateVehicle
#else
	#define _ALS_CreateVehicle
#endif
#define CreateVehicle __CreateVehicle