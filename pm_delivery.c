#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int* iLocal_37 = NULL;
	var uLocal_38 = 3;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 1092616192;
	var uLocal_45 = 1101004800;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 3;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	bool bLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88[2] = { 0, 0 };
	int iLocal_91[2] = { 0, 0 };
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	var uLocal_97[2] = { 0, 0 };
	int iLocal_100 = 0;
	char* sLocal_101 = NULL;
	char* sLocal_102 = NULL;
	char* sLocal_103 = NULL;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = -1;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 1000;
	var uLocal_114 = 1000;
	var uLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	iLocal_18 = 3;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_28 = 80f;
	fLocal_29 = 140f;
	fLocal_30 = 180f;
	iLocal_83 = -1;
	sLocal_101 = "PMDL_OBJ";
	sLocal_102 = "PMDL_LOC";
	sLocal_103 = "PMDL_BCK";
	MISC::SET_MISSION_FLAG(true);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_144(2);
		func_115();
	}
	iLocal_34 = func_113();
	while (true)
	{
		switch (iLocal_35)
		{
			case 0:
				if (!iLocal_74)
				{
					func_108();
				}
				else
				{
					func_107();
				}
				if (bLocal_73)
				{
					iLocal_75 = 1;
					iLocal_35 = 1;
				}
				break;
			
			case 1:
				if (!func_106())
				{
					switch (iLocal_36)
					{
						case 0:
							func_103();
							break;
						
						case 1:
							if (iLocal_34 == 5 || iLocal_34 == 6)
							{
								func_67();
							}
							else
							{
								func_66();
							}
							break;
						
						case 2:
							func_9();
							if (iLocal_34 < 3)
							{
								func_7();
							}
							else if (iLocal_34 > 6)
							{
								func_7();
								func_2();
							}
							break;
						
						case 3:
						case 4:
							func_1();
							break;
					}
				}
				else
				{
					func_1();
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x153
{
	func_144(2);
	func_115();
}

void func_2()//Position - 0x164
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_94))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false))
		{
			iVar0 = 200;
			iVar1 = (ENTITY::GET_ENTITY_HEALTH(iLocal_94) - 800);
			if (ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_94))
			{
				ENTITY::SET_ENTITY_HEALTH(iLocal_94, (ENTITY::GET_ENTITY_HEALTH(iLocal_94) - 5), 0, 0);
			}
			if (iVar1 <= 0)
			{
				iLocal_36 = 4;
			}
			else if (iVar1 < 75)
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 6, 0, 1, 2);
			}
			else
			{
				func_3(iVar1, iVar0, "PMDL_DMG", 1, 0, 1, 2);
			}
		}
		else
		{
			iLocal_36 = 4;
		}
	}
	else
	{
		iLocal_36 = 4;
	}
}

void func_3(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1E8
{
	func_4(iParam0, iParam1, sParam2, iParam3, iParam4, iParam6, -1f, -1f, 0, iParam5, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, -1, 0, -1, -1082130432, -1082130432, 0, 1, 0, 0, 1, -1, 0, -1, 1, 255, 0, -1082130432);
}

void func_4(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4, var uParam5, float fParam6, float fParam7, int iParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25, int iParam26, int iParam27, int iParam28, int iParam29, int iParam30, int iParam31, int iParam32, int iParam33, int iParam34, int iParam35, int iParam36, int iParam37, int iParam38, int iParam39)//Position - 0x230
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_6(0, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1669875.f_1 = 1;
		func_5(0, iVar0);
		Global_1669875.f_1177[iVar0] = uParam0;
		Global_1669875.f_1177.f_11[iVar0] = uParam1;
		StringCopy(&(Global_1669875.f_1177.f_22[iVar0 /*16*/]), sParam2, 64);
		Global_1669875.f_1177.f_194[iVar0] = uParam3;
		Global_1669875.f_1177.f_183[iVar0] = uParam4;
		Global_1669875.f_1177.f_227[iVar0] = uParam5;
		Global_1669875.f_1177.f_238[iVar0 /*3*/] = fParam6;
		Global_1669875.f_1177.f_238[iVar0 /*3*/].f_1 = fParam7;
		Global_1669875.f_1177.f_269[iVar0] = iParam8;
		Global_1669875.f_1177.f_280[iVar0] = uParam9;
		Global_1669875.f_1177.f_323[iVar0] = iParam10;
		Global_1669875.f_1177.f_334[iVar0] = iParam11;
		Global_1669875.f_1177.f_345[iVar0] = iParam12;
		Global_1669875.f_1177.f_356[iVar0] = iParam13;
		Global_1669875.f_1172 = 1;
		Global_1669875.f_1177.f_367[iVar0] = iParam14;
		Global_1669875.f_1177.f_378[iVar0] = iParam15;
		Global_1669875.f_1177.f_389[iVar0] = iParam16;
		Global_1669875.f_1177.f_400[iVar0] = iParam17;
		Global_1669875.f_1177.f_411[iVar0] = iParam18;
		Global_1669875.f_1177.f_422[iVar0] = iParam19;
		Global_1669875.f_1177.f_433[iVar0] = iParam20;
		Global_1669875.f_1177.f_444[iVar0] = iParam21;
		Global_1669875.f_1177.f_455[iVar0] = iParam22;
		Global_1669875.f_1177.f_466[iVar0] = iParam23;
		Global_1669875.f_1177.f_477[iVar0] = iParam24;
		Global_1669875.f_1177.f_205[iVar0] = iParam25;
		Global_1669875.f_1177.f_216[iVar0] = iParam39;
		Global_1669875.f_1177.f_488[iVar0] = iParam26;
		Global_1669875.f_1177.f_499[iVar0] = iParam27;
		Global_1669875.f_1177.f_510[iVar0] = iParam28;
		Global_1669875.f_1177.f_521[iVar0] = iParam29;
		Global_1669875.f_1177.f_532[iVar0] = iParam30;
		Global_1669875.f_1177.f_543[iVar0] = iParam31;
		Global_1669875.f_1177.f_554[iVar0] = iParam32;
		Global_1669875.f_1177.f_565[iVar0] = iParam33;
		Global_1669875.f_1177.f_576[iVar0] = iParam34;
		Global_1669875.f_1177.f_587[iVar0] = iParam35;
		Global_1669875.f_1177.f_598[iVar0] = iParam36;
		Global_1669875.f_1177.f_609[iVar0] = iParam37;
		Global_1669875.f_1177.f_620[iVar0] = iParam38;
	}
}

void func_5(int iParam0, int iParam1)//Position - 0x4F7
{
	MISC::SET_BIT(&(Global_1669875.f_7064[iParam0]), iParam1);
}

int func_6(int iParam0, int iParam1)//Position - 0x510
{
	return BitTest(Global_1669875.f_7064[iParam0], iParam1);
}

void func_7()//Position - 0x526
{
	int iVar0;
	
	iVar0 = (iLocal_78 - MISC::GET_GAME_TIMER());
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_82)
	{
		func_8(iVar0, "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	else
	{
		func_8(iVar0, "TIMER_TIME" /* GXT: TIME */, 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
	}
	switch (iLocal_79)
	{
		case 0:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 10000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 1:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 9000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 8000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 3:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 7000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 4:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 6000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 5:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 5000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 6:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 4500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 7:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 4000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 8:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 3500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 9:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 3000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 10:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 2500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 11:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 2000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 12:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 1500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 13:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 1000))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 14:
			if (MISC::GET_GAME_TIMER() >= (iLocal_78 - 500))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 15:
			if (MISC::GET_GAME_TIMER() >= iLocal_78)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", true);
				iLocal_79++;
			}
			break;
		
		case 16:
			break;
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_78)
	{
		iLocal_36 = 3;
	}
}

void func_8(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)//Position - 0x816
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_6(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1669875.f_1 = 1;
		func_5(7, iVar0);
		Global_1669875.f_4714[iVar0] = iParam0;
		StringCopy(&(Global_1669875.f_4714.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1669875.f_4714.f_172[iVar0] = iParam2;
		Global_1669875.f_4714.f_216[iVar0] = iParam3;
		Global_1669875.f_4714.f_183[iVar0] = iParam4;
		Global_1669875.f_4714.f_194[iVar0] = iParam5;
		Global_1669875.f_4714.f_249[iVar0] = iParam6;
		Global_1669875.f_4714.f_260[iVar0] = iParam7;
		Global_1669875.f_4714.f_205[iVar0] = iParam8;
		Global_1669875.f_4714.f_314[iVar0] = iParam9;
		Global_1669875.f_4714.f_325[iVar0] = iParam10;
		Global_1669875.f_4714.f_357[iVar0] = iParam11;
		Global_1669875.f_4714.f_238[iVar0] = iParam12;
		Global_1669875.f_4714.f_271[iVar0] = iParam13;
		Global_1669875.f_4714.f_368[iVar0] = iParam14;
		Global_1669875.f_4714.f_379[iVar0] = iParam15;
		Global_1669875.f_4714.f_390[iVar0] = iParam16;
		Global_1669875.f_4714.f_227[iVar0] = iParam17;
	}
}

void func_9()//Position - 0x973
{
	int iVar0;
	int iVar1;
	
	if (iLocal_34 >= 3 && iLocal_34 <= 4)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_91)
		{
			if (!iLocal_76)
			{
				if (!PED::IS_PED_INJURED(iLocal_91[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_62, 50f, 50f, 50f, false, true, 0))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
						iLocal_76 = 1;
					}
				}
			}
			else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_91[iVar0]))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_91[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					PED::SET_PED_KEEP_TASK(iLocal_91[iVar0], true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_91[iVar0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_95))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_95);
				}
			}
			iVar0++;
		}
	}
	if (func_22(&iLocal_37, Local_65, Global_23, 1, iLocal_94, sLocal_102, "", sLocal_103, 1, 0, 1, -1))
	{
		func_19(iLocal_94, 10.5f, 2, 1056964608, 0, 1, 0);
		TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 2000, 0);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_94, false);
		func_14(&iLocal_37, 1, 0);
		func_13();
	}
	iVar1 = 0;
	while (iVar1 < iLocal_88)
	{
		if (!PED::IS_PED_INJURED(iLocal_88[iVar1]))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_97[iVar1]))
			{
				uLocal_97[iVar1] = func_10(iLocal_88[iVar1], 1, 145);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_118);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_118);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_88[iVar1], iLocal_118);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_118);
				PED::SET_PED_KEEP_TASK(iLocal_88[iVar1], true);
			}
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_88[iVar1], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, false, true, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_97[iVar1]))
				{
					HUD::REMOVE_BLIP(&(uLocal_97[iVar1]));
				}
				TASK::TASK_SMART_FLEE_PED(iLocal_88[iVar1], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_88[iVar1], true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_88[iVar1]));
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uLocal_97[iVar1]))
		{
			HUD::REMOVE_BLIP(&(uLocal_97[iVar1]));
		}
		iVar1++;
	}
}

int func_10(int iParam0, bool bParam1, int iParam2)//Position - 0xB9D
{
	int iVar0;
	
	iVar0 = func_11(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2139[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2139[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_11(int iParam0, bool bParam1, bool bParam2)//Position - 0xBE7
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_12(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_12(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_12(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_12(bool bParam0, float fParam1, float fParam2)//Position - 0xC8B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_13()//Position - 0xCA2
{
	func_144(1);
	func_115();
}

void func_14(int* iParam0, bool bParam1, bool bParam2)//Position - 0xCB3
{
	int iVar0;
	
	if (BitTest(iParam0->f_13, 30))
	{
		bParam1 = true;
	}
	func_18(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1[iVar0]));
		}
		func_17(iVar0, iParam0);
		func_16(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			MISC::CLEAR_BIT(&(iParam0->f_13), iVar0);
			MISC::CLEAR_BIT(&(iParam0->f_14), iVar0);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_12 = 0;
	iParam0->f_15 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_17[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_17[iVar0], true);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_17[iVar0], true);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 32, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 305, false);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0->f_17[iVar0], 268, false);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar0], func_15()) && iParam0->f_17[iVar0] != PLAYER::PLAYER_PED_ID())
				{
					PED::REMOVE_PED_FROM_GROUP(iParam0->f_17[iVar0]);
				}
			}
			if (!BitTest(iParam0->f_13, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(iParam0->f_17[iVar0], false, -1, 0);
			}
			iParam0->f_17[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, true);
		}
	}
	iParam0->f_21 = 0;
}

int func_15()//Position - 0xE5E
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_16(int iParam0, var uParam1)//Position - 0xE6E
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(uParam1->f_13), 17);
			break;
		
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_13), 18);
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_13), 19);
			break;
	}
}

void func_17(int iParam0, var uParam1)//Position - 0xEB6
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(uParam1->f_13), 14);
			break;
		
		case 1:
			MISC::CLEAR_BIT(&(uParam1->f_13), 15);
			break;
		
		case 2:
			MISC::CLEAR_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_18(var uParam0)//Position - 0xEFE
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_5));
	}
}

int func_19(int iParam0, float fParam1, int iParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xF19
{
	func_21(bParam5, bParam6);
	func_20(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_30) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, bParam4);
	}
	Global_30 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_20(int iParam0)//Position - 0xF70
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::GET_HAS_ROCKET_BOOST(iParam0))
		{
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(iParam0))
			{
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(iParam0, false);
			}
		}
	}
}

void func_21(bool bParam0, bool bParam1)//Position - 0xF9C
{
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 60 /*INPUT_VEH_MOVE_UD*/, true);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
	if (!bParam1)
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 86 /*INPUT_VEH_HORN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 138 /*INPUT_VEH_PUSHBIKE_FRONT_BRAKE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 136 /*INPUT_VEH_PUSHBIKE_PEDAL*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 107 /*INPUT_VEH_FLY_ROLL_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 110 /*INPUT_VEH_FLY_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 89 /*INPUT_VEH_FLY_YAW_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 87 /*INPUT_VEH_FLY_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 88 /*INPUT_VEH_FLY_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 113 /*INPUT_VEH_FLY_UNDERCARRIAGE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 115 /*INPUT_VEH_FLY_SELECT_NEXT_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 116 /*INPUT_VEH_FLY_SELECT_PREV_WEAPON*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 117 /*INPUT_VEH_FLY_SELECT_TARGET_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 118 /*INPUT_VEH_FLY_SELECT_TARGET_RIGHT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 119 /*INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 352 /*INPUT_VEH_FLY_BOOST*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 131 /*INPUT_VEH_SUB_ASCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 132 /*INPUT_VEH_SUB_DESCEND*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 123 /*INPUT_VEH_SUB_TURN_LR*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 126 /*INPUT_VEH_SUB_PITCH_UD*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 129 /*INPUT_VEH_SUB_THROTTLE_UP*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 130 /*INPUT_VEH_SUB_THROTTLE_DOWN*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 133 /*INPUT_VEH_SUB_TURN_HARD_LEFT*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 134 /*INPUT_VEH_SUB_TURN_HARD_RIGHT*/, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
}

bool func_22(int* iParam0, struct<3> Param1, struct<3> Param4, bool bParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11, bool bParam12, int iParam13, bool bParam14, int iParam15)//Position - 0x10ED
{
	return func_23(iParam0, Param1, Param4, func_65(), func_65(), bParam7, 5, 0, 0, 0, iParam8, sParam9, func_64(), func_64(), func_64(), func_64(), sParam10, 0, bParam12, sParam11, 0, iParam13, bParam14, iParam15, 0, 0, 0, 1, 1065353216);
}

int func_23(int* iParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, struct<3> Param10, bool bParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, char* sParam19, char* sParam20, char* sParam21, char* sParam22, char* sParam23, char* sParam24, bool bParam25, bool bParam26, char* sParam27, bool bParam28, int iParam29, bool bParam30, int iParam31, int iParam32, int iParam33, int iParam34, bool bParam35, float fParam36)//Position - 0x113C
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Var3 = { Param1 + Vector(1f, 0f, 0f) };
	iParam0->f_17[0] = iParam15;
	iParam0->f_17[1] = iParam16;
	iParam0->f_17[2] = iParam17;
	iParam0->f_16 = iParam15;
	func_63(iParam0);
	func_62(iParam0);
	func_61();
	if (func_45(iParam0, iParam0->f_17[0], iParam0->f_17[1], iParam0->f_17[2], sParam20, sParam21, sParam22, sParam23, iParam0->f_8, bParam25, iParam18, 0, 0, iParam32, iParam33, iParam34, iParam14, bParam26))
	{
		func_44(sParam20);
		func_44(sParam21);
		func_44(sParam22);
		func_44(sParam23);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam18, false))
				{
					MISC::SET_BIT(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					if (BitTest(iParam0->f_13, 23))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 23);
					}
					MISC::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else if (iParam14 == 4 || iParam14 == 5)
			{
				if (func_42(iParam0, iParam29))
				{
					MISC::SET_BIT(&(iParam0->f_13), 3);
					if (!BitTest(iParam0->f_13, 9))
					{
						MISC::CLEAR_BIT(&(iParam0->f_13), 4);
					}
					MISC::SET_BIT(&(iParam0->f_13), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_44(sParam24);
				func_44(sParam27);
				func_44("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
				if (bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						func_44(sParam19);
					}
					if (HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(iParam0);
					}
					if ((!func_38(iParam0, 1) && !func_37(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_35(iParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_33(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						func_44("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_38(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_33(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*iParam0))
						{
							HUD::REMOVE_BLIP(iParam0);
						}
						iParam0->f_5 = func_32(Var3, 0);
						if (!iParam31 == -1)
						{
							HUD::SET_BLIP_SPRITE(iParam0->f_5, iParam31);
						}
						if (bParam35)
						{
							func_31(iParam0->f_5, iParam0);
						}
					}
					else if (!func_30(Var3, HUD::GET_BLIP_COORDS(iParam0->f_5), 0.1f, 0))
					{
						HUD::SET_BLIP_COORDS(iParam0->f_5, Var3);
						if (bParam35)
						{
							func_31(iParam0->f_5, iParam0);
						}
					}
					if (!func_38(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 2))
						{
							func_35(iParam0, sParam19, 0);
							MISC::SET_BIT(&(iParam0->f_13), 2);
						}
					}
					if (iParam14 == 4 || iParam14 == 5)
					{
						if (BitTest(iParam0->f_13, 13))
						{
							bParam13 = false;
						}
					}
					bVar1 = false;
					bVar6 = false;
					iVar7 = 0;
					if ((iParam14 == 1 || iParam14 == 3) || iParam14 == 5)
					{
						bVar6 = true;
					}
					if (iParam14 == 2 || iParam14 == 3)
					{
						iVar7 = 1;
					}
					else if (iParam14 == 4 || iParam14 == 5)
					{
						iVar7 = 2;
					}
					if (bParam28)
					{
						ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, bParam13, bVar6, iVar7);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Param7, Param10, fParam36, false, bVar6, iVar7))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, Param4, bParam13, bVar6, iVar7))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
							{
								if (iParam14 == 4 || iParam14 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iVar0, false))
									{
										bVar1 = false;
									}
								}
								else if (iParam18 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_17[iVar2], iParam18, false))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_17[iVar2], func_15()) || !func_28(iParam0->f_17[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_25(iParam0))
							{
								func_44(sParam19);
								func_44(sParam24);
								func_44(sParam20);
								func_44(sParam21);
								func_44(sParam22);
								func_44(sParam23);
								func_44("LOSE_WANTED" /* GXT: Lose the Cops. */);
								func_44("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
								func_44(sParam27);
								func_14(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam18))
			{
				if ((bParam26 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && (!BitTest(iParam0->f_13, 9) && !BitTest(iParam0->f_13, 22)))
				{
					func_44(sParam24);
					func_44(sParam27);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5) || HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						HUD::REMOVE_BLIP(iParam0);
						func_44(sParam19);
					}
					if ((!func_38(iParam0, 1) && !func_37(iParam0)) && !BitTest(iParam0->f_13, 0))
					{
						if (bParam30)
						{
							func_35(iParam0, "LOSE_WANTED" /* GXT: Lose the Cops. */, 0);
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_33(iParam0->f_17[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_13), 0);
						MISC::CLEAR_BIT(&(iParam0->f_13), 1);
					}
				}
				else
				{
					if (BitTest(iParam0->f_13, 0))
					{
						func_44("LOSE_WANTED" /* GXT: Lose the Cops. */);
						MISC::CLEAR_BIT(&(iParam0->f_13), 0);
						MISC::SET_BIT(&(iParam0->f_13), 1);
					}
					if (BitTest(iParam0->f_13, 1))
					{
						if (!func_38(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
							{
								func_33(iParam0->f_17[0], "LOSE_WANTED_LEVEL", 3);
							}
							MISC::CLEAR_BIT(&(iParam0->f_13), 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam18, false))
					{
						if (!HUD::DOES_BLIP_EXIST(*iParam0))
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_5));
								func_44(sParam19);
							}
							*iParam0 = func_24(iParam18, 0, 0);
							HUD::SET_BLIP_DISPLAY(*iParam0, 2);
							if (!BitTest(iParam0->f_13, 4))
							{
								func_31(*iParam0, iParam0);
							}
						}
						if (!func_38(iParam0, 2))
						{
							if (!BitTest(iParam0->f_13, 3))
							{
								func_35(iParam0, sParam24, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (BitTest(iParam0->f_13, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam27))
								{
									if (!BitTest(iParam0->f_13, 4))
									{
										func_35(iParam0, sParam27, 0);
										MISC::SET_BIT(&(iParam0->f_13), 4);
									}
								}
								else if (!BitTest(iParam0->f_13, 4))
								{
									func_35(iParam0, sParam24, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
								if (!BitTest(iParam0->f_13, 23))
								{
									if (!PED::IS_PED_INJURED(iParam0->f_17[0]))
									{
										func_33(iParam0->f_17[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(iParam0->f_13), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_5));
					func_44(sParam19);
				}
				if (iParam14 == 4 || iParam14 == 5)
				{
					if (iParam29 > 0)
					{
						if (!func_38(iParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (!BitTest(iParam0->f_13, 13))
								{
									iVar8 = 0;
									iVar9 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(iParam0->f_17[iVar2]))
										{
											iVar8++;
										}
										iVar2++;
									}
									iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar8);
									if (!PED::IS_PED_INJURED(iParam0->f_17[iVar9]))
									{
										func_33(iParam0->f_17[iVar9], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_35(iParam0, "MORE_SEATS" /* GXT: A vehicle with more seats is needed. */, 0);
									MISC::SET_BIT(&(iParam0->f_13), 13);
								}
							}
							else if (!BitTest(iParam0->f_13, 3))
							{
								func_35(iParam0, sParam24, 0);
								MISC::SET_BIT(&(iParam0->f_13), 3);
								MISC::CLEAR_BIT(&(iParam0->f_13), 4);
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								if (BitTest(iParam0->f_13, 9))
								{
									func_35(iParam0, sParam27, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
						}
					}
					else if (!func_38(iParam0, 2))
					{
						if (!BitTest(iParam0->f_13, 3))
						{
							func_35(iParam0, sParam24, 0);
							MISC::SET_BIT(&(iParam0->f_13), 3);
							MISC::CLEAR_BIT(&(iParam0->f_13), 4);
						}
						else if (BitTest(iParam0->f_13, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam27))
							{
								if (!BitTest(iParam0->f_13, 4))
								{
									func_35(iParam0, sParam27, 0);
									MISC::SET_BIT(&(iParam0->f_13), 4);
								}
							}
							else if (!BitTest(iParam0->f_13, 4))
							{
								func_35(iParam0, sParam24, 0);
								MISC::SET_BIT(&(iParam0->f_13), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (BitTest(iParam0->f_13, 0))
		{
			MISC::CLEAR_BIT(&(iParam0->f_13), 0);
		}
		func_44(sParam19);
		func_44(sParam24);
		func_44(sParam27);
		func_44(sParam24);
		func_44("LOSE_WANTED" /* GXT: Lose the Cops. */);
		if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*iParam0))
		{
			HUD::REMOVE_BLIP(iParam0);
		}
	}
	MISC::CLEAR_BIT(&(iParam0->f_13), 11);
	MISC::CLEAR_BIT(&(iParam0->f_13), 12);
	return 0;
}

int func_24(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A41
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_25(int* iParam0)//Position - 0x1A54
{
	if (BitTest(iParam0->f_13, 12))
	{
		if (func_27(PLAYER::PLAYER_PED_ID()))
		{
			if (func_26(1, 0, 1) || BitTest(iParam0->f_13, 7))
			{
				return 1;
			}
		}
	}
	else if (func_26(1, 0, 1) || BitTest(iParam0->f_13, 7))
	{
		return 1;
	}
	return 0;
}

int func_26(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1AA9
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_27(int iParam0)//Position - 0x1B8E
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_28(int iParam0, int iParam1)//Position - 0x1BC5
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && iParam1)
		{
			if (func_29(PLAYER::PLAYER_PED_ID(), iParam0))
			{
				PED::SET_GROUP_SEPARATION_RANGE(func_15(), 50f);
				return 1;
			}
		}
		else if (PED::IS_PED_GROUP_MEMBER(iParam0, func_15()))
		{
			PED::SET_GROUP_SEPARATION_RANGE(func_15(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_29(int iParam0, int iParam1)//Position - 0x1C30
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_30(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)//Position - 0x1C78
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (!bParam7)
	{
		if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
		{
			if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
			{
				if (MISC::ABSF((Param0.f_2 - Param3.f_2)) <= fParam6)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((Param0.f_0 - Param3.f_0)) <= fParam6)
	{
		if (MISC::ABSF((Param0.f_1 - Param3.f_1)) <= fParam6)
		{
			return 1;
		}
	}
	return 0;
}

void func_31(int iParam0, int* iParam1)//Position - 0x1CF3
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (HUD::DOES_BLIP_EXIST(iParam1->f_6))
		{
			HUD::SET_BLIP_ROUTE(iParam1->f_6, false);
		}
		HUD::SET_GPS_MULTI_ROUTE_RENDER(false);
		HUD::CLEAR_GPS_MULTI_ROUTE();
		iParam1->f_6 = iParam0;
		HUD::SET_BLIP_ROUTE(iParam0, true);
	}
}

int func_32(struct<3> Param0, bool bParam3)//Position - 0x1D2E
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(iVar0, func_12(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam3);
	return iVar0;
}

void func_33(int iParam0, char* sParam1, int iParam2)//Position - 0x1D5A
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_34(iParam2), 1);
}

int func_34(int iParam0)//Position - 0x1D71
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_35(int* iParam0, char* sParam1, bool bParam2)//Position - 0x1F63
{
	if (!bParam2)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_36(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_10 = MISC::GET_GAME_TIMER();
}

void func_36(char* sParam0, int iParam1, int iParam2)//Position - 0x1F9A
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

int func_37(int* iParam0)//Position - 0x1FB3
{
	if (!PED::IS_PED_INJURED(iParam0->f_16))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_16))
		{
			return 1;
		}
	}
	return 0;
}

int func_38(int* iParam0, int iParam1)//Position - 0x1FD7
{
	if (iParam1 != 1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
		if (func_41(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_40() && !func_39())
		{
			return 1;
		}
	}
	return 0;
}

int func_39()//Position - 0x202F
{
	if (Global_23177 == 1)
	{
		return 1;
	}
	return 0;
}

int func_40()//Position - 0x2046
{
	if (Global_22166 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_41(var uParam0)//Position - 0x2068
{
	int iVar0;
	int iVar1;
	
	iVar1 = MISC::GET_GAME_TIMER();
	iVar0 = (iVar1 - uParam0->f_10);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_42(var uParam0, int iParam1)//Position - 0x208B
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_43(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_43(int iParam0, var uParam1, int iParam2)//Position - 0x20BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_17[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1))
					{
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!VEHICLE::IS_SEAT_WARP_ONLY(iParam0, 1))
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_44(char* sParam0)//Position - 0x2150
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		HUD::CLEAR_THIS_PRINT(sParam0);
	}
}

int func_45(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x2168
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	var uVar15[3];
	var uVar19[3];
	bool bVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	struct<3> Var28;
	int iVar31;
	int iVar32;
	
	iVar4 = 0;
	uParam0->f_17[0] = uParam1;
	uParam0->f_17[1] = uParam2;
	uParam0->f_17[2] = uParam3;
	uParam0->f_16 = uParam1;
	uVar15[0] = uParam4;
	uVar15[1] = uParam5;
	uVar15[2] = uParam6;
	uVar19[0] = uParam13;
	uVar19[1] = uParam14;
	uVar19[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
		{
			iVar3++;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			if (!BitTest(uParam0->f_13, 29) && !BitTest(uParam0->f_13, 28))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], true, -1, 0);
				}
				if (iVar0 == 2)
				{
					MISC::SET_BIT(&(uParam0->f_13), 28);
				}
			}
		}
		else if (!BitTest(uParam0->f_13, 29) && BitTest(uParam0->f_13, 28))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_17[iVar0], false, -1, 0);
			}
			if (iVar0 == 2)
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (BitTest(uParam0->f_13, 26))
	{
		bVar23 = false;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_21))
		{
			iVar25 = 64;
			iVar25 |= 65536;
			iVar25 |= 2048;
			iVar25 |= 1;
			iVar25 |= 2;
			iVar25 |= 4;
			iVar25 |= 32;
			iVar25 |= 16;
			iVar25 |= 8;
			iVar24 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50f, 0, iVar25);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar24, false))
			{
				uParam0->f_21 = iVar24;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_21, false))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uParam0->f_21, true)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || !bParam17)
					{
						if (func_43(uParam0->f_21, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
									if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7 && !func_60(uParam0->f_17[iVar0], uParam0->f_21))
									{
										if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], true);
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], uParam0->f_21, 60000, iVar0, 1f, 1, 0, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar23 = true;
						}
					}
					else
					{
						bVar23 = true;
					}
				}
				else
				{
					bVar23 = true;
				}
			}
			else
			{
				bVar23 = true;
			}
		}
		else
		{
			bVar23 = true;
		}
		if (bVar23)
		{
			MISC::CLEAR_BIT(&(uParam0->f_13), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]) && !uParam0->f_15)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
					}
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
					{
						if (func_58(uParam0, uParam0->f_17[iVar0], fParam8, 1))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_15());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!BitTest(uParam0->f_13, 26))
	{
		if ((!func_57(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, false))
			{
				if (!BitTest(uParam0->f_13, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_38(uParam0, 2))
					{
						iVar26 = 0;
						iVar27 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
							{
								iVar26++;
							}
							iVar0++;
						}
						iVar27 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar26);
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar27]))
						{
							func_33(uParam0->f_17[iVar27], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_35(uParam0, "MORE_SEATS" /* GXT: A vehicle with more seats is needed. */, 0);
						MISC::SET_BIT(&(uParam0->f_13), 13);
					}
				}
				bVar12 = true;
			}
		}
		else
		{
			bVar12 = false;
			MISC::CLEAR_BIT(&(uParam0->f_13), 13);
			func_44("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(uParam0->f_17[0]) || !PED::IS_PED_INJURED(uParam0->f_17[1])) || !PED::IS_PED_INJURED(uParam0->f_17[2]))
			{
				if (!BitTest(uParam0->f_13, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) && !func_38(uParam0, 2))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (func_56(iVar13, uParam0))
						{
							func_35(uParam0, "CMN_VEHSUIT" /* GXT: ~s~Vehicle is not suitable. */, 0);
							MISC::SET_BIT(&(uParam0->f_13), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					MISC::CLEAR_BIT(&(uParam0->f_13), 31);
					func_44("CMN_VEHSUIT" /* GXT: ~s~Vehicle is not suitable. */);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/))
				{
					MISC::SET_BIT(&(uParam0->f_13), 21);
				}
			}
			else if (BitTest(uParam0->f_13, 21))
			{
				MISC::CLEAR_BIT(&(uParam0->f_13), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], true);
					}
					else
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_17[iVar0], false);
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						iVar13 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar13, false))
						{
							if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
							{
								if (!func_57(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (!func_55(uParam0->f_17[iVar0]))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
									}
								}
							}
						}
						if (iVar13 != iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar13, false))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iVar13))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(iVar13) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar13))
								{
									Var28 = { ENTITY::GET_ENTITY_COORDS(iVar13, true) };
									if (Var28.f_2 < -1f)
									{
										TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
									}
								}
							}
						}
					}
					bVar11 = true;
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
						{
							iVar13 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_17[iVar0], false);
							if (!ENTITY::IS_ENTITY_DEAD(iVar13, false))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
								{
									if (iVar13 != iParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar13))
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iVar31 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar31, false))
									{
										if (iVar13 != iVar31)
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar13) > 5f)
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 4160);
											}
											else
											{
												TASK::TASK_LEAVE_VEHICLE(uParam0->f_17[iVar0], iVar13, 64);
											}
											bVar11 = false;
										}
									}
								}
							}
						}
					}
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
					{
						iVar32 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						if (ENTITY::DOES_ENTITY_EXIST(iVar32))
						{
							if (func_43(iVar32, uParam0, 0))
							{
								if (func_54(iVar0, uParam0) || !BitTest(uParam0->f_13, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], iVar0);
									func_16(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										MISC::SET_BIT(&(uParam0->f_13), 27);
									}
								}
							}
							else if (!func_54(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar32) == joaat("sentinel2"))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 4);
								}
								else
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_17[iVar0], 2);
								}
								func_53(iVar0, uParam0);
							}
						}
					}
					if ((!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()) && !func_52(uParam0->f_17[iVar0], iParam10)) && !func_51(uParam0->f_17[iVar0], iParam10))
					{
						if (func_58(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
							{
								if (((!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0]))
								{
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
									if (iVar14 == 7)
									{
										TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
									}
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_15());
									bVar11 = false;
								}
							}
						}
						if (bVar11)
						{
							if (!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_11 = MISC::GET_GAME_TIMER();
								uParam0->f_1[iVar0] = func_24(uParam0->f_17[iVar0], 0, 0);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_31(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (((func_28(uParam0->f_17[iVar0], 1) || func_52(uParam0->f_17[iVar0], iParam10)) || iParam12) || (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false)))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
								func_44(uVar15[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_31(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam10, false))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_17[iVar0], iParam10))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], iParam10, 20f, 20f, 5f, false, true, 0) && !BitTest(uParam0->f_13, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_17[iVar0], iParam10, false))
									{
										if (!func_28(uParam0->f_17[iVar0], 1))
										{
											if (func_27(uParam0->f_17[iVar0]))
											{
												iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_LEAVE_VEHICLE"));
												if (iVar14 == 7)
												{
													TASK::TASK_LEAVE_ANY_VEHICLE(uParam0->f_17[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
									{
										if ((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
										}
									}
									iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
									if (iVar14 == 7 && !func_60(uParam0->f_17[iVar0], iParam10))
									{
										if (((((!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(uParam0->f_17[iVar0]) && !PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID())) && !func_50(uParam0->f_17[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0])) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], true);
											if (BitTest(uParam0->f_13, 10))
											{
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_17[iVar0], 1f);
											}
											TASK::TASK_ENTER_VEHICLE(uParam0->f_17[iVar0], iParam10, 60000, iVar0, 2f, 1, 0, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], false);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10, false))
									{
										uParam0->f_1[iVar0] = func_24(uParam0->f_17[iVar0], 0, 0);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
							{
								if (func_58(uParam0, uParam0->f_17[iVar0], fParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(uParam0->f_17[iVar0]) && !TASK::IS_PED_GETTING_UP(uParam0->f_17[iVar0]))
									{
										iVar14 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_17[iVar0], joaat("SCRIPT_TASK_ENTER_VEHICLE"));
										if (iVar14 == 7)
										{
											TASK::CLEAR_PED_TASKS(uParam0->f_17[iVar0]);
										}
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_17[iVar0], false);
										PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_15());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()))
							{
								if (!BitTest(uParam0->f_13, 21))
								{
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_17[iVar0], func_15());
								}
							}
							else if (BitTest(uParam0->f_13, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
								MISC::SET_BIT(&(uParam0->f_13), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_17[iVar0], func_15()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(uParam0->f_17[iVar0]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_44(uVar15[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_38(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
						{
							if (func_55(uParam0->f_17[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), uParam0->f_8, uParam0->f_8, uParam0->f_8, false, true, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_17[iVar0], PLAYER::PLAYER_PED_ID(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, false, true, 0) && !func_55(uParam0->f_17[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = MISC::GET_GAME_TIMER();
			if ((iVar5 - uParam0->f_11) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_12 < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!BitTest(uParam0->f_13, 5))
							{
								func_35(uParam0, sParam7, 0);
								MISC::SET_BIT(&(uParam0->f_13), 5);
								uParam0->f_12 = iVar1;
							}
							else
							{
								uParam0->f_12 = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_49(iVar0, uParam0))
									{
										if (!MISC::IS_STRING_NULL(uVar19[iVar0]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(uVar19[iVar0], ""))
											{
												func_47(uParam0, uVar15[iVar0], uVar19[iVar0], 0);
												func_46(iVar0, uParam0);
												uParam0->f_12 = iVar1;
											}
										}
										if (!func_49(iVar0, uParam0))
										{
											func_35(uParam0, uVar15[iVar0], 0);
											func_46(iVar0, uParam0);
											uParam0->f_12 = iVar1;
										}
									}
									else
									{
										uParam0->f_12 = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_12 = 0;
				}
			}
		}
		MISC::CLEAR_BIT(&(uParam0->f_13), 10);
		if (iVar6 && !bVar12)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_44(uVar15[iVar0]);
				}
				iVar0++;
			}
			func_44("MORE_SEATS" /* GXT: A vehicle with more seats is needed. */);
			return 1;
		}
	}
	return 0;
}

void func_46(int iParam0, var uParam1)//Position - 0x31AD
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_13), 14);
			break;
		
		case 1:
			MISC::SET_BIT(&(uParam1->f_13), 15);
			break;
		
		case 2:
			MISC::SET_BIT(&(uParam1->f_13), 16);
			break;
	}
}

void func_47(var uParam0, char* sParam1, char* sParam2, bool bParam3)//Position - 0x31F5
{
	if (!bParam3)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_48(sParam1, sParam2, 7500, 1);
			}
		}
	}
	uParam0->f_10 = MISC::GET_GAME_TIMER();
}

void func_48(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x322E
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

int func_49(int iParam0, var uParam1)//Position - 0x324D
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 14);
		
		case 1:
			return BitTest(uParam1->f_13, 15);
		
		case 2:
			return BitTest(uParam1->f_13, 16);
		
		default:
	}
	return 0;
}

int func_50(int iParam0, float fParam1)//Position - 0x328D
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_51(int iParam0, int iParam1)//Position - 0x32C4
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(iParam0, func_15()))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, false, true, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_52(int iParam0, int iParam1)//Position - 0x332B
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_53(int iParam0, var uParam1)//Position - 0x3360
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_13), 17);
			break;
		
		case 1:
			MISC::SET_BIT(&(uParam1->f_13), 18);
			break;
		
		case 2:
			MISC::SET_BIT(&(uParam1->f_13), 19);
			break;
	}
}

int func_54(int iParam0, var uParam1)//Position - 0x33A8
{
	switch (iParam0)
	{
		case 0:
			return BitTest(uParam1->f_13, 17);
		
		case 1:
			return BitTest(uParam1->f_13, 18);
		
		case 2:
			return BitTest(uParam1->f_13, 19);
		
		default:
	}
	return 0;
}

int func_55(int iParam0)//Position - 0x33E8
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					if (iVar0 == iVar1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 20f, 20f, 20f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iVar1, 20f, 20f, 20f, false, true, 0))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_56(int iParam0, var uParam1)//Position - 0x3475
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("coach"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam1->f_17[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0, false);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if ((iVar3 == uParam1->f_17[0] || iVar3 == uParam1->f_17[1]) || iVar3 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1, false);
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if ((iVar4 == uParam1->f_17[0] || iVar4 == uParam1->f_17[1]) || iVar4 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2, false);
			if (!PED::IS_PED_INJURED(iVar5))
			{
				if ((iVar5 == uParam1->f_17[0] || iVar5 == uParam1->f_17[1]) || iVar5 == uParam1->f_17[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_57(var uParam0)//Position - 0x35D5
{
	int iVar0;
	
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (func_43(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_58(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x3604
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, false);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0))
					{
						if (func_57(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, false, true, 0))
				{
					return 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, fParam2, fParam2, 3f, false, true, 0))
		{
			if (!bParam3)
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_43(iVar0, uParam0, 0))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
						{
							if (func_59(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
				{
					return 1;
				}
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_59(int iParam0)//Position - 0x36E2
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_60(int iParam0, int iParam1)//Position - 0x371A
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_61()//Position - 0x374A
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iVar1, PLAYER::PLAYER_PED_ID(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_62(var uParam0)//Position - 0x37B7
{
	int iVar0;
	
	if (!BitTest(uParam0->f_13, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 32, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 305, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_17[iVar0], 268, true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_17[iVar0], false);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_13), 25);
	}
}

void func_63(var uParam0)//Position - 0x3857
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_17[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_17[iVar0]))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_17[iVar0]))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_17[iVar0], false);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_17[iVar0], false);
				}
			}
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
			}
		}
	}
}

var func_64()//Position - 0x38ED
{
	var uVar0;
	
	return uVar0;
}

Vector3 func_65()//Position - 0x38F7
{
	struct<3> Var0;
	
	return Var0;
}

void func_66()//Position - 0x3903
{
	int iVar0;
	
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_94, false))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_100))
		{
			HUD::REMOVE_BLIP(&iLocal_100);
		}
		if (iLocal_34 <= 2)
		{
			iLocal_78 = (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * iLocal_80) + iLocal_81));
			iLocal_78 = (iLocal_78 + MISC::GET_GAME_TIMER());
			iLocal_82 = (iLocal_78 - CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
		}
		else if (iLocal_34 > 6)
		{
			iLocal_78 = (CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * ((60 * iLocal_80) + iLocal_81));
			iLocal_78 = (iLocal_78 + MISC::GET_GAME_TIMER());
			iLocal_82 = (iLocal_78 - CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
		}
		else if (iLocal_34 >= 3 && iLocal_34 <= 4)
		{
			iLocal_95 = VEHICLE::CREATE_VEHICLE(iLocal_87, Local_68, fLocal_72, true, true, false);
			iLocal_91[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_95, 6, iLocal_85, -1, true, true);
			iLocal_91[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_95, 6, iLocal_85, 0, true, true);
			PED::ADD_RELATIONSHIP_GROUP("rghCop", &iLocal_116);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(4, iLocal_116, joaat("PLAYER"));
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_91[0], 39, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_91[1], 39, true);
			iVar0 = 0;
			while (iVar0 < iLocal_91)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_91[iVar0], joaat("WEAPON_PISTOL"), -1, false, true);
				PED::SET_PED_SEEING_RANGE(iLocal_91[iVar0], 100f);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_91[iVar0], iLocal_116);
				iVar0++;
			}
		}
		iLocal_36 = 2;
	}
}

void func_67()//Position - 0x3A35
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, false))
	{
		if (func_102() || PED::IS_PED_INJURED(iLocal_88[0]))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_88)
			{
				if (!PED::IS_PED_INJURED(iLocal_88[iVar0]))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_97[iVar0]))
					{
						uLocal_97[iVar0] = func_10(iLocal_88[iVar0], 1, 145);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_88[iVar0], 1, false);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_118);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_118);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_88[iVar0], iLocal_118);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_118);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_97[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_97[iVar0]));
				}
				iVar0++;
			}
		}
		else if (!iLocal_77)
		{
			if (!PED::IS_PED_INJURED(iLocal_88[0]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_88[0], 50f, 50f, 50f, false, true, 0))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_88[0], iLocal_94, PLAYER::PLAYER_PED_ID(), 8, 25f, 786469, -1f, -1f, true);
					iLocal_77 = 1;
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_94, false))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_100))
			{
				HUD::REMOVE_BLIP(&iLocal_100);
			}
			func_101(&uLocal_104, 0, 0);
			iLocal_36 = 2;
		}
		else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_94, -1, false) || PED::IS_PED_INJURED(iLocal_88[0]))
		{
			func_101(&uLocal_104, 0, 0);
		}
		else
		{
			func_68();
		}
	}
}

void func_68()//Position - 0x3BA3
{
	if (!PED::IS_PED_INJURED(iLocal_88[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_94, false))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_88[0], iLocal_94, false))
		{
			func_69(&uLocal_104, iLocal_94, 0, 0, 1, 1, 1);
		}
	}
}

void func_69(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x3BE1
{
	func_70(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_70(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x3BFE
{
	func_71(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_71(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x3C1C
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_101(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_72(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_72(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0x3C54
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			iVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (func_100(iVar0))
	{
		func_99();
	}
	if (func_98(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_93(uParam0, bParam7, bParam9, 0))
			{
				func_89(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_77(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_100(iVar0))
							{
								func_76(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
								{
									func_75(1);
								}
							}
						}
					}
				}
			}
			else if (func_77(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_100(iVar0))
						{
							func_76(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */, iVar0))
							{
								func_75(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_100(sParam5))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_101(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_101(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_101(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_101(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_101(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_101(uParam0, iVar0, 1);
				}
			}
			if (!func_93(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_74(uParam0))
				{
					func_73(uParam0);
				}
			}
		}
	}
	else
	{
		func_101(uParam0, iVar0, 0);
	}
}

void func_73(var uParam0)//Position - 0x3FC1
{
	if (func_98(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_74(var uParam0)//Position - 0x402C
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_75(bool bParam0)//Position - 0x4057
{
	switch (Global_43922)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_114370.f_10052.f_100++;
			}
			return Global_114370.f_10052.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_114370.f_10052.f_101++;
			}
			return Global_114370.f_10052.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_114370.f_10052.f_102++;
			}
			return Global_114370.f_10052.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_76(char* sParam0, int iParam1)//Position - 0x4101
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_77(char* sParam0)//Position - 0x4118
{
	if (!func_78(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_100(sParam0)) || func_100("CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_43922)
	{
		case 0:
		case 3:
			if (func_75(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_75(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_75(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_78(bool bParam0, bool bParam1, bool bParam2)//Position - 0x41B1
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_88(0))
	{
		return 0;
	}
	if (func_87())
	{
		return 0;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	if (Global_76369)
	{
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_61219)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_86() || func_85(Global_4718592.f_183007)) || func_84())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_83(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_82(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1955039)
	{
		return 0;
	}
	if (func_79(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_79(int iParam0)//Position - 0x440A
{
	if (iParam0 != func_81())
	{
		if (func_80(iParam0, 1, 1))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7 != -1;
		}
		else if ((Global_1575079 && iParam0 == PLAYER::PLAYER_ID()) && func_80(iParam0, 1, 0))
		{
			return Global_2657921[iParam0 /*463*/].f_321.f_7 != -1;
		}
	}
	return 0;
}

int func_80(int iParam0, bool bParam1, bool bParam2)//Position - 0x4470
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2672741.f_3)
				{
					return Global_2672741.f_2;
				}
				else if (Global_2657921[iVar0 /*463*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_81()//Position - 0x44D0
{
	return -1;
}

int func_82(int iParam0, int iParam1)//Position - 0x44D9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_83(int iParam0, bool bParam1)//Position - 0x453B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

var func_84()//Position - 0x45C0
{
	return Global_2684312.f_19;
}

bool func_85(int iParam0)//Position - 0x45CE
{
	return iParam0 == 51;
}

var func_86()//Position - 0x45DB
{
	return Global_2684312.f_18;
}

bool func_87()//Position - 0x45E9
{
	return MISC::GET_GAME_TIMER() <= Global_23711.f_6481 + 100;
}

int func_88(int iParam0)//Position - 0x45FE
{
	if (iParam0 == 1)
	{
		if (Global_20813.f_1 > 3)
		{
			if (BitTest(Global_8683, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20813.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_89(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x4655
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1582004 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_101(uParam0, 0, 0);
	}
	if (func_92(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_90())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == joaat("VEHICLE_HIGH_ZOOM_HINT_HELPER"))
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_90()//Position - 0x4765
{
	return func_91(PLAYER::PLAYER_ID());
}

int func_91(int iParam0)//Position - 0x4775
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("MP_F_Freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_92(struct<3> Param0, struct<3> Param3, bool bParam6)//Position - 0x4794
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_93(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x47DB
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_97(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_74(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_97(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_96(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!func_97(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_96(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_96(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_97(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (func_95(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_94(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_95(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_74(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_78(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_99();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_94(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4B47
{
	if (!func_78(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_95(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4B99
{
	if (!func_78(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4BE2
{
	if (!func_78(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_117)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_97(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4C41
{
	if (!func_78(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 80 /*INPUT_VEH_CIN_CAM*/) && MISC::GET_GAME_TIMER() > Global_117)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_98(int iParam0)//Position - 0x4C97
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_99()//Position - 0x4CF2
{
	MISC::SET_BIT(&Global_8684, 4);
}

bool func_100(char* sParam0)//Position - 0x4D02
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_101(var uParam0, int iParam1, bool bParam2)//Position - 0x4D15
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2738587.f_4697, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target. */;
		}
		else
		{
			sVar0 = "FM_IHELP_HNT" /* GXT: ~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus. */;
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_100(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_100(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_102()//Position - 0x4DEF
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_94))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_94, false))
		{
			if ((((((ENTITY::GET_ENTITY_HEALTH(iLocal_94) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_94) < 200f) || FIRE::IS_ENTITY_ON_FIRE(iLocal_94)) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_94, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_94, 1, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_94, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_94, 5, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_94, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_94, 4, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_94, 1, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_94, 5, false)))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_103()//Position - 0x4EA7
{
	int iVar0;
	int iVar1;
	
	iLocal_94 = func_105(0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false))
	{
		iLocal_94 = VEHICLE::CREATE_VEHICLE(iLocal_86, Local_62, fLocal_71, true, true, false);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_94, iVar0, true);
			iVar0++;
		}
		if (iLocal_83 != -1)
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_94, iLocal_83, false);
		}
	}
	VEHICLE::SET_VEHICLE_IS_WANTED(iLocal_94, true);
	iLocal_100 = func_104(iLocal_94, 0, 0);
	if (iLocal_34 != 5 && iLocal_34 != 6)
	{
		if (iLocal_34 > 6)
		{
			ENTITY::SET_ENTITY_PROOFS(iLocal_94, false, false, false, false, true, false, false, false);
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BAR_DELIVER_BOOZE_RATTLE_MASTER", iLocal_94, 0, false, 0);
		}
		func_36(sLocal_101, 7500, 1);
	}
	else
	{
		iLocal_88[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_94, 26, iLocal_84, -1, true, true);
		iLocal_88[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_94, 26, iLocal_84, 0, true, true);
		PED::ADD_RELATIONSHIP_GROUP("rghCriminal", &iLocal_117);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_117, joaat("PLAYER"));
		iVar1 = 0;
		while (iVar1 < iLocal_88)
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_88[iVar1], true);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_88[iVar1], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, false, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_88[iVar1], iLocal_117);
			iVar1++;
		}
		TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_88[0], iLocal_94, 25f, 786599);
		func_36("PMDL_REC", 7500, 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
	{
		iLocal_96 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	}
	iLocal_36 = 1;
}

int func_104(int iParam0, bool bParam1, bool bParam2)//Position - 0x4FFA
{
	return func_11(iParam0, !bParam1, bParam2);
}

int func_105(int iParam0)//Position - 0x500D
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_113079.f_222[iParam0], false))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_113079.f_222[iParam0], true, true);
		return Global_113079.f_222[iParam0];
	}
	return 0;
}

int func_106()//Position - 0x5045
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_94))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_94, false))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_94, PLAYER::PLAYER_PED_ID(), 300f, 300f, 300f, false, true, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (PED::IS_PED_INJURED(iLocal_88[0]))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_97[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_97[0]));
		}
	}
	return 0;
}

void func_107()//Position - 0x50AD
{
	STREAMING::REQUEST_MODEL(iLocal_86);
	HUD::REQUEST_ADDITIONAL_TEXT("PMDL", 0);
	if (iLocal_34 >= 3 && iLocal_34 <= 4)
	{
		STREAMING::REQUEST_MODEL(iLocal_85);
		STREAMING::REQUEST_MODEL(iLocal_87);
	}
	else if (iLocal_34 == 5 || iLocal_34 == 6)
	{
		STREAMING::REQUEST_MODEL(iLocal_84);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pony2"), true);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_86) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		if (iLocal_34 >= 3 && iLocal_34 <= 4)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_85) && STREAMING::HAS_MODEL_LOADED(iLocal_87))
			{
				bLocal_73 = true;
			}
		}
		else if (iLocal_34 == 5 || iLocal_34 == 6)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_84))
			{
				bLocal_73 = true;
			}
		}
		else if (iLocal_34 > 6)
		{
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Deliveries", false, -1))
			{
				bLocal_73 = true;
			}
		}
		else
		{
			bLocal_73 = true;
		}
	}
}

void func_108()//Position - 0x5187
{
	float fVar0;
	
	Local_62 = { func_110(func_112(), iLocal_34) };
	fLocal_71 = func_109(func_112(), iLocal_34);
	if (iLocal_34 > 6)
	{
		sLocal_101 = "PMDL_TRUCK";
		sLocal_102 = "PMDL_BTIM";
		sLocal_103 = "PMDL_BCKT";
		iLocal_86 = joaat("benson");
		iLocal_83 = 2;
	}
	if (func_112() == 10)
	{
		Local_65 = { -1161.2133f, -1567.0677f, 3.4234f };
		iLocal_86 = joaat("pony2");
		if (iLocal_34 == 0)
		{
			iLocal_80 = 2;
			iLocal_81 = 15;
			sLocal_102 = "PMDL_TIM";
		}
		else if (iLocal_34 == 1)
		{
			iLocal_80 = 1;
			iLocal_81 = 30;
			sLocal_102 = "PMDL_TIM";
		}
		else if (iLocal_34 == 2)
		{
			iLocal_80 = 1;
			iLocal_81 = 30;
			sLocal_102 = "PMDL_TIM";
		}
		else if (iLocal_34 == 3)
		{
			Local_68 = { -3121.2615f, 1152.92f, 19.4047f };
			fLocal_72 = 176.4887f;
			iLocal_87 = joaat("police4");
			iLocal_85 = joaat("S_M_Y_Cop_01");
		}
		else if (iLocal_34 == 4)
		{
			Local_68 = { 1543.1453f, 2184.3706f, 77.8114f };
			fLocal_72 = 45.3499f;
			iLocal_87 = joaat("police4");
			iLocal_85 = joaat("S_M_Y_Cop_01");
		}
		else if (iLocal_34 >= 5)
		{
			iLocal_84 = joaat("G_M_Y_SalvaGoon_02");
		}
	}
	else if (func_112() == 14)
	{
		Local_65 = { -2169.8284f, 4277.365f, 47.9568f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_62, Local_65, true);
		iLocal_81 = SYSTEM::ROUND((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_112() == 13)
	{
		Local_65 = { -323.356f, 6264.4307f, 30.4463f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_62, Local_65, true);
		iLocal_81 = SYSTEM::ROUND((((fVar0 / 16.5f) + 40f) / 2f));
	}
	else if (func_112() == 12)
	{
		Local_65 = { 198.5282f, 342.2399f, 104.9566f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_62, Local_65, true);
		iLocal_81 = SYSTEM::ROUND((((fVar0 / 16.5f) + 15f) / 2f));
	}
	else if (func_112() == 11)
	{
		Local_65 = { -560.0195f, 301.1481f, 82.1436f };
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_62, Local_65, true);
		iLocal_81 = SYSTEM::ROUND((((fVar0 / 16.5f) + 15f) / 2f));
	}
	iLocal_79 = 0;
	iLocal_74 = 1;
}

float func_109(int iParam0, int iParam1)//Position - 0x53B5
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0.5801f;
					break;
				
				case 1:
					return 177.9306f;
					break;
				
				case 2:
					return 49.6978f;
					break;
				
				case 3:
					return 336.9449f;
					break;
				
				case 4:
					return 80.1639f;
					break;
				
				case 5:
					return 287.983f;
					break;
				
				case 6:
					return 46.7895f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 273.1085f;
					break;
				
				case 8:
					return 256.7899f;
					break;
				
				case 9:
					return 180.9647f;
					break;
				
				case 10:
					return 126.4385f;
					break;
				
				case 11:
					return 123.4767f;
					break;
				
				case 12:
					return 226.219f;
					break;
				
				case 13:
					return 82.6097f;
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_110(int iParam0, int iParam1)//Position - 0x54E5
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return -128.18756f, 1934.4951f, 194.90749f;
					break;
				
				case 1:
					return -179.8744f, 586.4468f, 196.6278f;
					break;
				
				case 2:
					return 1390.0889f, -605.923f, 73.3378f;
					break;
				
				case 3:
					return -3170.0483f, 1098.809f, 19.7817f;
					break;
				
				case 4:
					return 1581.2198f, 2194.629f, 78.1062f;
					break;
				
				case 5:
					return 1475.8333f, -113.5801f, 141.794f;
					break;
				
				case 6:
					return 1603.0708f, -1793.9147f, 89.0179f;
					break;
			}
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam1)
			{
				case 7:
					return 642.2169f, 2774.892f, 40.985f;
					break;
				
				case 8:
					return -1916.1224f, 2060.3132f, 139.7363f;
					break;
				
				case 9:
					return 824.8992f, -1064.1921f, 26.9851f;
					break;
				
				case 10:
					return -669.6013f, -1198.6638f, 9.6125f;
					break;
				
				case 11:
					return -1465.5795f, -390.7494f, 37.5168f;
					break;
				
				case 12:
					return 797.7521f, -1793.0078f, 28.3164f;
					break;
				
				case 13:
					return 806.319f, -2017.4514f, 28.2215f;
					break;
			}
			break;
	}
	return func_111(iParam0);
}

Vector3 func_111(int iParam0)//Position - 0x56A6
{
	switch (iParam0)
	{
		case 2:
			return 2147.3167f, 4795.2075f, 40.08961f;
			break;
		
		case 9:
			return 1524.3289f, -2108.269f, 75.7248f;
			break;
		
		case 10:
			return -1172.195f, -1577.427f, 3.38152f;
			break;
		
		case 1:
			return 898.3718f, -177.07635f, 72.68348f;
			break;
		
		case 4:
			return 1191.3021f, 2672.064f, 36.73154f;
			break;
		
		case 3:
			return -1584.333f, 5193.4873f, 2.95912f;
			break;
		
		case 0:
			return 408.34286f, -1623.8357f, 28.29278f;
			break;
		
		case 8:
			return -1339.4886f, -21.19435f, 50.34566f;
			break;
		
		case 5:
			return 336.20697f, 172.42506f, 102.20552f;
			break;
		
		case 6:
			return 394.54953f, -703.37946f, 28.27281f;
			break;
		
		case 7:
			return -1413.1844f, -206.05553f, 46.29474f;
			break;
		
		case 11:
			return -560.38086f, 274.54758f, 82.02014f;
			break;
		
		case 12:
			return 221.08446f, 340.78488f, 104.58835f;
			break;
		
		case 13:
			return -296.71542f, 6259.7324f, 30.49339f;
			break;
		
		case 14:
			return -2201.4016f, 4291f, 47.32429f;
			break;
	}
	return 10f, 10f, 10f;
}

int func_112()//Position - 0x5859
{
	return Global_113079.f_20;
}

int func_113()//Position - 0x5867
{
	return func_114(Global_113079.f_20, Global_113079.f_29);
}

int func_114(int iParam0, int iParam1)//Position - 0x587F
{
	switch (iParam0)
	{
		case 10:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 4;
					break;
				
				case 5:
					return 5;
					break;
				
				case 6:
					return 6;
					break;
			}
			break;
		
		case 11:
		case 12:
			switch (iParam1)
			{
				case 0:
					return 9;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 11;
					break;
				
				case 3:
					return 12;
					break;
				
				case 4:
					return 13;
					break;
			}
			break;
		
		case 13:
		case 14:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 7;
					break;
			}
			break;
	}
	return 0;
}

void func_115()//Position - 0x5987
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("benson"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("pony2"), false);
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	if (iLocal_75)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_96, false))
		{
			func_116(iLocal_96, 0, 145);
		}
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		func_101(&uLocal_104, 0, 0);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_116(int iParam0, int iParam1, int iParam2)//Position - 0x59D5
{
	var uVar0;
	char* sVar1;
	
	if (iParam1 == 0)
	{
		sVar1 = ENTITY::GET_ENTITY_SCRIPT(iParam0, &uVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (MISC::GET_HASH_KEY(sVar1) == MISC::GET_HASH_KEY("vehicle_gen_controller"))
			{
				return 0;
			}
		}
	}
	func_117(iParam0, iParam2);
	return 1;
}

void func_117(int iParam0, int iParam1)//Position - 0x5A15
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_123(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_One"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("Player_Two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_114370.f_2366.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_114370.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114370.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_114370.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_114370.f_32752.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_114370.f_32752.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_114370.f_32752.f_5600[iVar1 /*78*/].f_66)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_114370.f_32752.f_5600[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_114370.f_32752.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_114370.f_32752.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_114370.f_32752.f_5590 = iParam1;
	Global_78943 = iParam0;
	Global_114370.f_32752.f_5588 = 1;
	func_118(iParam0, &(Global_114370.f_32752.f_5510));
}

void func_118(int iParam0, var uParam1)//Position - 0x5C17
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_122(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_121(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, false))
		{
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 12);
		}
		func_120(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_119(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_119(int iParam0)//Position - 0x5EC2
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_120(int iParam0, var uParam1, var uParam2)//Position - 0x5F72
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_121(int iParam0)//Position - 0x6165
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_122(var uParam0)//Position - 0x6185
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

int func_123(int iParam0)//Position - 0x6235
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || func_142(iParam0, 0, 0)) || func_142(iParam0, 1, 0)) || func_142(iParam0, 2, 0)) || func_141(iParam0) != 145) || func_140(iParam0)) || func_139(iParam0)) || func_138(iParam0)) || func_137(iParam0)) || !func_124(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_139(iParam0))
		{
		}
		if (func_139(iParam0))
		{
		}
		if (func_142(iParam0, 0, 0))
		{
		}
		if (func_142(iParam0, 1, 0))
		{
		}
		if (func_142(iParam0, 2, 0))
		{
		}
		if (func_141(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_124(int iParam0)//Position - 0x6312
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_125(iParam0, 0, -1))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("towtruck3"):
		case joaat("towtruck4"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_125(int iParam0, bool bParam1, int iParam2)//Position - 0x64D0
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_136())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_135() && !func_134()) && !func_133()) && !func_132()) && !func_136())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((func_131() || MISC::IS_PC_VERSION()) || func_130())
		{
		}
		else if (!func_133())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_128(iParam0, iParam2))
		{
			return 0;
		}
	}
	if (!func_126(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_126(int iParam0)//Position - 0x6652
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_127())
	{
		return 1;
	}
	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_127()//Position - 0x671E
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_128(int iParam0, int iParam1)//Position - 0x6735
{
	int iVar0;
	int iVar1;
	
	if ((!Global_2707028 && iParam1 >= 0) && iParam1 <= 515)
	{
		if (BitTest(Global_1586504[iParam1 /*142*/].f_103, 2))
		{
			return 1;
		}
	}
	if (Global_2707027)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_7131 /* Tunable: TURN_ON_VALENTINES_EVENT */ && !Global_262145.f_13597 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE */) && iVar1 < Global_262145.f_13598 /* Tunable: TURN_ON_VALENTINE_2016_VEHICLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14940 /* Tunable: ENABLE_LOWRIDER2_FACTION */ && iVar1 < Global_262145.f_14952 /* Tunable: ENABLE_LOWRIDER2_FACTION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14936 /* Tunable: ENABLE_LOWRIDER2_VIRGO3 */ && iVar1 < Global_262145.f_14948 /* Tunable: ENABLE_LOWRIDER2_VIRGO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14937 /* Tunable: ENABLE_LOWRIDER2_SABREGT */ && iVar1 < Global_262145.f_14949 /* Tunable: ENABLE_LOWRIDER2_SABREGT_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14938 /* Tunable: ENABLE_LOWRIDER2_TORNADO5 */ && iVar1 < Global_262145.f_14950 /* Tunable: ENABLE_LOWRIDER2_TORNADO5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14939 /* Tunable: ENABLE_LOWRIDER2_MINIVAN */ && iVar1 < Global_262145.f_14951 /* Tunable: ENABLE_LOWRIDER2_MINIVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14941 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN */ && iVar1 < Global_262145.f_14953 /* Tunable: ENABLE_LOWRIDER2_SLAMVAN_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14942 /* Tunable: ENABLEEXEC1_GROTTI_PROTO */ && iVar1 < Global_262145.f_14945 /* Tunable: ENABLEEXEC1_GROTTI_PROTO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14943 /* Tunable: ENABLEEXEC1_DEWBAUCHEE */ && iVar1 < Global_262145.f_14946 /* Tunable: ENABLEEXEC1_DEWBAUCHEE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14944 /* Tunable: ENABLEEXEC1_PFISTER */ && iVar1 < Global_262145.f_14947 /* Tunable: ENABLEEXEC1_PFISTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_17521 /* Tunable: ENABLESTUNT_BF400 */ && iVar1 < Global_262145.f_17486 /* Tunable: ENABLESTUNT_BF400_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_17516 /* Tunable: ENABLESTUNT_BRIOSO_RA */ && iVar1 < Global_262145.f_17481 /* Tunable: ENABLESTUNT_BRIOSO_RA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_17520 /* Tunable: ENABLESTUNT_CLIFFHANGER */ && iVar1 < Global_262145.f_17485 /* Tunable: ENABLESTUNT_CLIFFHANGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_17519 /* Tunable: ENABLESTUNT_CONTENDER */ && iVar1 < Global_262145.f_17484 /* Tunable: ENABLESTUNT_CONTENDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_17513 /* Tunable: ENABLESTUNT_LE7B */ && iVar1 < Global_262145.f_17478 /* Tunable: ENABLESTUNT_LE7B_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_17514 /* Tunable: ENABLESTUNT_OMNIS */ && iVar1 < Global_262145.f_17479 /* Tunable: ENABLESTUNT_OMNIS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_17517 /* Tunable: ENABLESTUNT_TROPHY_TRUCK */ && iVar1 < Global_262145.f_17482 /* Tunable: ENABLESTUNT_TROPHY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_17518 /* Tunable: ENABLESTUNT_TROPHY_CAR */ && iVar1 < Global_262145.f_17483 /* Tunable: ENABLESTUNT_TROPHY_CAR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_17515 /* Tunable: ENABLESTUNT_TROPOS_RALLYE */ && iVar1 < Global_262145.f_17480 /* Tunable: ENABLESTUNT_TROPOS_RALLYE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_17523 /* Tunable: ENABLESTUNT_GARGOYLE */ && iVar1 < Global_262145.f_17488 /* Tunable: ENABLESTUNT_GARGOYLE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_17524 /* Tunable: ENABLESTUNT_RALLY_TRUCK */ && iVar1 < Global_262145.f_17489 /* Tunable: ENABLESTUNT_RALLY_TRUCK_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_17512 /* Tunable: ENABLESTUNT_DRIFT_TAMPA */ && iVar1 < Global_262145.f_17477 /* Tunable: ENABLESTUNT_DRIFT_TAMPA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_17511 /* Tunable: ENABLESTUNT_TYRUS */ && iVar1 < Global_262145.f_17476 /* Tunable: ENABLESTUNT_TYRUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_17510 /* Tunable: ENABLESTUNT_ET1 */ && iVar1 < Global_262145.f_17475 /* Tunable: ENABLESTUNT_ET1_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_17522 /* Tunable: ENABLESTUNT_LYNX */ && iVar1 < Global_262145.f_17487 /* Tunable: ENABLESTUNT_LYNX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_17525 /* Tunable: ENABLESTUNT_STALLION */ && iVar1 < Global_262145.f_17490 /* Tunable: ENABLESTUNT_STALLION_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_17526 /* Tunable: ENABLESTUNT_GAUNTLET */ && iVar1 < Global_262145.f_17491 /* Tunable: ENABLESTUNT_GAUNTLET_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_17527 /* Tunable: ENABLESTUNT_DOMINATOR */ && iVar1 < Global_262145.f_17492 /* Tunable: ENABLESTUNT_DOMINATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_17528 /* Tunable: ENABLESTUNT_BUFFALO */ && iVar1 < Global_262145.f_17493 /* Tunable: ENABLESTUNT_BUFFALO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_17682 /* Tunable: ENABLE_BIKER_DEFILER */ && iVar1 < Global_262145.f_17704 /* Tunable: ENABLE_BIKER_DEFILER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_17683 /* Tunable: ENABLE_BIKER_NIGHTBLADE */ && iVar1 < Global_262145.f_17705 /* Tunable: ENABLE_BIKER_NIGHTBLADE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_17684 /* Tunable: ENABLE_BIKER_ZOMBIEA */ && iVar1 < Global_262145.f_17706 /* Tunable: ENABLE_BIKER_ZOMBIEA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_17685 /* Tunable: ENABLE_BIKER_ESSKEY */ && iVar1 < Global_262145.f_17707 /* Tunable: ENABLE_BIKER_ESSKEY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_17686 /* Tunable: ENABLE_BIKER_AVARUS */ && iVar1 < Global_262145.f_17708 /* Tunable: ENABLE_BIKER_AVARUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_17687 /* Tunable: ENABLE_BIKER_ZOMBIEB */ && iVar1 < Global_262145.f_17709 /* Tunable: ENABLE_BIKER_ZOMBIEB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_17689 /* Tunable: ENABLE_BIKER_HAKUCHOU2 */ && iVar1 < Global_262145.f_17710 /* Tunable: ENABLE_BIKER_HAKUCHOU2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_17690 /* Tunable: ENABLE_BIKER_VORTEX */ && iVar1 < Global_262145.f_17711 /* Tunable: ENABLE_BIKER_VORTEX_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_17691 /* Tunable: ENABLE_BIKER_SHOTARO */ && iVar1 < Global_262145.f_17712 /* Tunable: ENABLE_BIKER_SHOTARO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_17692 /* Tunable: ENABLE_BIKER_CHIMERA */ && iVar1 < Global_262145.f_17713 /* Tunable: ENABLE_BIKER_CHIMERA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_17693 /* Tunable: ENABLE_BIKER_RAPTOR */ && iVar1 < Global_262145.f_17714 /* Tunable: ENABLE_BIKER_RAPTOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_17694 /* Tunable: ENABLE_BIKER_WESTERNDAEMON */ && iVar1 < Global_262145.f_17715 /* Tunable: ENABLE_BIKER_WESTERNDAEMON_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_17695 /* Tunable: ENABLE_BIKER_BLAZER4 */ && iVar1 < Global_262145.f_17716 /* Tunable: ENABLE_BIKER_BLAZER4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_17701 /* Tunable: ENABLE_BIKER_TORNADO6 */ && iVar1 < Global_262145.f_17723 /* Tunable: ENABLE_BIKER_TORNADO6_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_17698 /* Tunable: ENABLE_BIKER_YOUGA2 */ && iVar1 < Global_262145.f_17719 /* Tunable: ENABLE_BIKER_YOUGA2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_17699 /* Tunable: ENABLE_BIKER_WOLFSBANE */ && iVar1 < Global_262145.f_17720 /* Tunable: ENABLE_BIKER_WOLFSBANE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_17700 /* Tunable: ENABLE_BIKER_FAGGIO3 */ && iVar1 < Global_262145.f_17721 /* Tunable: ENABLE_BIKER_FAGGIO3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_17688 /* Tunable: ENABLE_BIKER_FAGGIO */ && iVar1 < Global_262145.f_17722 /* Tunable: ENABLE_BIKER_FAGGIO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_17702 /* Tunable: ENABLE_BIKER_BAGGER */ && iVar1 < Global_262145.f_17724 /* Tunable: ENABLE_BIKER_BAGGER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_17696 /* Tunable: ENABLE_BIKER_SANCTUS */ && iVar1 < Global_262145.f_17717 /* Tunable: ENABLE_BIKER_SANCTUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_17697 /* Tunable: ENABLE_BIKER_MANCHEZ */ && iVar1 < Global_262145.f_17718 /* Tunable: ENABLE_BIKER_MANCHEZ_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_17703 /* Tunable: ENABLE_BIKER_RATBIKE */ && iVar1 < Global_262145.f_17725 /* Tunable: ENABLE_BIKER_RATBIKE_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_19341 /* Tunable: ENABLE_IE_VOLTIC2 */ && iVar1 < Global_262145.f_19438 /* Tunable: ENABLE_IE_VOLTIC2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_19342 /* Tunable: ENABLE_IE_RUINER2 */ && iVar1 < Global_262145.f_19439 /* Tunable: ENABLE_IE_RUINER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_19343 /* Tunable: ENABLE_IE_DUNE4 */ && iVar1 < Global_262145.f_19440 /* Tunable: ENABLE_IE_DUNE4_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_19344 /* Tunable: ENABLE_IE_DUNE5 */ && iVar1 < Global_262145.f_19441 /* Tunable: ENABLE_IE_DUNE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_19345 /* Tunable: ENABLE_IE_PHANTOM2 */ && iVar1 < Global_262145.f_19442 /* Tunable: ENABLE_IE_PHANTOM2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_19346 /* Tunable: ENABLE_IE_TECHNICAL2 */ && iVar1 < Global_262145.f_19443 /* Tunable: ENABLE_IE_TECHNICAL2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_19347 /* Tunable: ENABLE_IE_BOXVILLE5 */ && iVar1 < Global_262145.f_19444 /* Tunable: ENABLE_IE_BOXVILLE5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_19348 /* Tunable: ENABLE_IE_WASTELANDER */ && iVar1 < Global_262145.f_19445 /* Tunable: ENABLE_IE_WASTELANDER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_19349 /* Tunable: ENABLE_IE_BLAZER5 */ && iVar1 < Global_262145.f_19446 /* Tunable: ENABLE_IE_BLAZER5_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_19350 /* Tunable: ENABLE_IE_COMET2 */ && iVar1 < Global_262145.f_19447 /* Tunable: ENABLE_IE_COMET2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_19351 /* Tunable: ENABLE_IE_COMET3 */ && iVar1 < Global_262145.f_19448 /* Tunable: ENABLE_IE_COMET3_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_19352 /* Tunable: ENABLE_IE_DIABLOUS */ && iVar1 < Global_262145.f_19449 /* Tunable: ENABLE_IE_DIABLOUS_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_19353 /* Tunable: ENABLE_IE_DIABLOUS2 */ && iVar1 < Global_262145.f_19450 /* Tunable: ENABLE_IE_DIABLOUS2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_19354 /* Tunable: ENABLE_IE_ELEGY */ && iVar1 < Global_262145.f_19451 /* Tunable: ENABLE_IE_ELEGY_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_19355 /* Tunable: ENABLE_IE_ELEGY2 */ && iVar1 < Global_262145.f_19452 /* Tunable: ENABLE_IE_ELEGY2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_19356 /* Tunable: ENABLE_IE_FCR */ && iVar1 < Global_262145.f_19453 /* Tunable: ENABLE_IE_FCR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_19357 /* Tunable: ENABLE_IE_FCR2 */ && iVar1 < Global_262145.f_19454 /* Tunable: ENABLE_IE_FCR2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_19358 /* Tunable: ENABLE_IE_ITALIGTB */ && iVar1 < Global_262145.f_19455 /* Tunable: ENABLE_IE_ITALIGTB_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_19359 /* Tunable: ENABLE_IE_ITALIGTB2 */ && iVar1 < Global_262145.f_19456 /* Tunable: ENABLE_IE_ITALIGTB2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_19360 /* Tunable: ENABLE_IE_NERO */ && iVar1 < Global_262145.f_19457 /* Tunable: ENABLE_IE_NERO_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_19361 /* Tunable: ENABLE_IE_NERO2 */ && iVar1 < Global_262145.f_19458 /* Tunable: ENABLE_IE_NERO2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_19362 /* Tunable: ENABLE_IE_PENETRATOR */ && iVar1 < Global_262145.f_19459 /* Tunable: ENABLE_IE_PENETRATOR_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_19363 /* Tunable: ENABLE_IE_SPECTER */ && iVar1 < Global_262145.f_19460 /* Tunable: ENABLE_IE_SPECTER_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_19364 /* Tunable: ENABLE_IE_SPECTER2 */ && iVar1 < Global_262145.f_19461 /* Tunable: ENABLE_IE_SPECTER2_POSIX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_19365 /* Tunable: ENABLE_IE_TEMPESTA */ && iVar1 < Global_262145.f_19462 /* Tunable: ENABLE_IE_TEMPESTA_POSIX */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_20422 /* Tunable: ENABLEGP1 */ && iVar1 < Global_262145.f_20418 /* Tunable: LAUNCHPOSIXGP1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_20423 /* Tunable: ENABLEINFERNUS2 */ && iVar1 < Global_262145.f_20419 /* Tunable: LAUNCHPOSIXINFERNUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_20424 /* Tunable: ENABLERUSTON */ && iVar1 < Global_262145.f_20420 /* Tunable: LAUNCHPOSIXRUSTON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_20425 /* Tunable: ENABLETURISMO2 */ && iVar1 < Global_262145.f_20421 /* Tunable: LAUNCHPOSIXTURISMO2 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_21304 /* Tunable: ENABLE_XA21 */ && iVar1 < Global_262145.f_21312 /* Tunable: LAUNCHPOSIX_XA21 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_21305 /* Tunable: ENABLE_CHEETAH2 */ && iVar1 < Global_262145.f_21313 /* Tunable: LAUNCHPOSIX_CHEETAH2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_21306 /* Tunable: ENABLE_TORERO */ && iVar1 < Global_262145.f_21314 /* Tunable: LAUNCHPOSIX_TORERO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_21307 /* Tunable: ENABLE_VAGNER */ && iVar1 < Global_262145.f_21315 /* Tunable: LAUNCHPOSIX_VAGNER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_21308 /* Tunable: ENABLE_ARDENT */ && iVar1 < Global_262145.f_21316 /* Tunable: LAUNCHPOSIX_ARDENT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_21309 /* Tunable: ENABLE_NIGHTSHARK */ && iVar1 < Global_262145.f_21317 /* Tunable: LAUNCHPOSIX_NIGHTSHARK */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_22103 /* Tunable: ENABLE_ULTRALIGHT */ && iVar1 < Global_262145.f_22123 /* Tunable: LAUNCHPOSIX_ULTRALIGHT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_22115 /* Tunable: ENABLE_MOGUL */ && iVar1 < Global_262145.f_22135 /* Tunable: LAUNCHPOSIX_MOGUL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_22106 /* Tunable: ENABLE_ROGUE */ && iVar1 < Global_262145.f_22126 /* Tunable: LAUNCHPOSIX_ROGUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_22116 /* Tunable: ENABLE_STARLING */ && iVar1 < Global_262145.f_22136 /* Tunable: LAUNCHPOSIX_STARLING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_22104 /* Tunable: ENABLE_SEABREEZE */ && iVar1 < Global_262145.f_22124 /* Tunable: LAUNCHPOSIX_SEABREEZE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_22120 /* Tunable: ENABLE_TULA */ && iVar1 < Global_262145.f_22140 /* Tunable: LAUNCHPOSIX_TULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_22118 /* Tunable: ENABLE_PYRO */ && iVar1 < Global_262145.f_22138 /* Tunable: LAUNCHPOSIX_PYRO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_22119 /* Tunable: ENABLE_MOLOTOK */ && iVar1 < Global_262145.f_22139 /* Tunable: LAUNCHPOSIX_MOLOTOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_22114 /* Tunable: ENABLE_NOKOTA */ && iVar1 < Global_262145.f_22134 /* Tunable: LAUNCHPOSIX_NOKOTA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_22121 /* Tunable: ENABLE_BOMBUSHKA */ && iVar1 < Global_262145.f_22141 /* Tunable: LAUNCHPOSIX_BOMBUSHKA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_22117 /* Tunable: ENABLE_HUNTER */ && iVar1 < Global_262145.f_22137 /* Tunable: LAUNCHPOSIX_HUNTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_22113 /* Tunable: ENABLE_HAVOK */ && iVar1 < Global_262145.f_22133 /* Tunable: LAUNCHPOSIX_HAVOK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_22105 /* Tunable: ENABLE_HOWARD */ && iVar1 < Global_262145.f_22125 /* Tunable: LAUNCHPOSIX_HOWARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_22107 /* Tunable: ENABLE_ALPHAZ1 */ && iVar1 < Global_262145.f_22127 /* Tunable: LAUNCHPOSIX_ALPHAZ1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_22108 /* Tunable: ENABLE_CYCLONE */ && iVar1 < Global_262145.f_22128 /* Tunable: LAUNCHPOSIX_CYCLONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_22109 /* Tunable: ENABLE_VISIONE */ && iVar1 < Global_262145.f_22129 /* Tunable: LAUNCHPOSIX_VISIONE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_22110 /* Tunable: ENABLE_VIGILANTE */ && iVar1 < Global_262145.f_22130 /* Tunable: LAUNCHPOSIX_VIGILANTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_22111 /* Tunable: ENABLE_RETINUE */ && iVar1 < Global_262145.f_22131 /* Tunable: LAUNCHPOSIX_RETINUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_22112 /* Tunable: ENABLE_RAPIDGT3 */ && iVar1 < Global_262145.f_22132 /* Tunable: LAUNCHPOSIX_RAPIDGT3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_23071 /* Tunable: ENABLE_DELUXO */ && iVar1 < Global_262145.f_23099 /* Tunable: LAUNCHPOSIX_DELUXO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stromberg"))
	{
		if (!Global_262145.f_23072 /* Tunable: ENABLE_STROMBERG */ && iVar1 < Global_262145.f_23100 /* Tunable: LAUNCHPOSIX_STROMBERG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_23073 /* Tunable: ENABLE_RIOT2 */ && iVar1 < Global_262145.f_23101 /* Tunable: LAUNCHPOSIX_RIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_23074 /* Tunable: ENABLE_CHERNOBOG */ && iVar1 < Global_262145.f_23102 /* Tunable: LAUNCHPOSIX_CHERNOBOG */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_23075 /* Tunable: ENABLE_KHANJALI */ && iVar1 < Global_262145.f_23103 /* Tunable: LAUNCHPOSIX_KHANJALI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_23076 /* Tunable: ENABLE_AKULA */ && iVar1 < Global_262145.f_23104 /* Tunable: LAUNCHPOSIX_AKULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_23077 /* Tunable: ENABLE_THRUSTER */ && iVar1 < Global_262145.f_23105 /* Tunable: LAUNCHPOSIX_THRUSTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_23078 /* Tunable: ENABLE_BARRAGE */ && iVar1 < Global_262145.f_23106 /* Tunable: LAUNCHPOSIX_BARRAGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_23079 /* Tunable: ENABLE_VOLATOL */ && iVar1 < Global_262145.f_23107 /* Tunable: LAUNCHPOSIX_VOLATOL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_23080 /* Tunable: ENABLE_COMET4 */ && iVar1 < Global_262145.f_23108 /* Tunable: LAUNCHPOSIX_COMET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_23081 /* Tunable: ENABLE_NEON */ && iVar1 < Global_262145.f_23109 /* Tunable: LAUNCHPOSIX_NEON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_23082 /* Tunable: ENABLE_STREITER */ && iVar1 < Global_262145.f_23110 /* Tunable: LAUNCHPOSIX_STREITER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_23083 /* Tunable: ENABLE_SENTINEL3 */ && iVar1 < Global_262145.f_23111 /* Tunable: LAUNCHPOSIX_SENTINEL3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_23084 /* Tunable: ENABLE_YOSEMITE */ && iVar1 < Global_262145.f_23112 /* Tunable: LAUNCHPOSIX_YOSEMITE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_23085 /* Tunable: ENABLE_SC1 */ && iVar1 < Global_262145.f_23113 /* Tunable: LAUNCHPOSIX_SC1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_23086 /* Tunable: ENABLE_AUTARCH */ && iVar1 < Global_262145.f_23114 /* Tunable: LAUNCHPOSIX_AUTARCH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_23087 /* Tunable: ENABLE_GT500 */ && iVar1 < Global_262145.f_23115 /* Tunable: LAUNCHPOSIX_GT500 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_23088 /* Tunable: ENABLE_HUSTLER */ && iVar1 < Global_262145.f_23116 /* Tunable: LAUNCHPOSIX_HUSTLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_23089 /* Tunable: ENABLE_REVOLTER */ && iVar1 < Global_262145.f_23117 /* Tunable: LAUNCHPOSIX_REVOLTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_23090 /* Tunable: ENABLE_PARIAH */ && iVar1 < Global_262145.f_23118 /* Tunable: LAUNCHPOSIX_PARIAH */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_23091 /* Tunable: ENABLE_RAIDEN */ && iVar1 < Global_262145.f_23119 /* Tunable: LAUNCHPOSIX_RAIDEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_23092 /* Tunable: ENABLE_SAVESTRA */ && iVar1 < Global_262145.f_23120 /* Tunable: LAUNCHPOSIX_SAVESTRA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_23093 /* Tunable: ENABLE_RIATA */ && iVar1 < Global_262145.f_23121 /* Tunable: LAUNCHPOSIX_RIATA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_23094 /* Tunable: ENABLE_HERMES */ && iVar1 < Global_262145.f_23122 /* Tunable: LAUNCHPOSIX_HERMES */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_23095 /* Tunable: ENABLE_COMET5 */ && iVar1 < Global_262145.f_23123 /* Tunable: LAUNCHPOSIX_COMET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_23096 /* Tunable: ENABLE_Z190 */ && iVar1 < Global_262145.f_23124 /* Tunable: LAUNCHPOSIX_Z190 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_23097 /* Tunable: ENABLE_VISERIS */ && iVar1 < Global_262145.f_23125 /* Tunable: LAUNCHPOSIX_VISERIS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_23098 /* Tunable: ENABLE_KAMACHO */ && iVar1 < Global_262145.f_23126 /* Tunable: LAUNCHPOSIX_KAMACHO */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_24293 /* Tunable: ENABLE_GB200 */ && iVar1 < Global_262145.f_24309 /* Tunable: LAUNCHPOSIX_GB200 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_24294 /* Tunable: ENABLE_FAGALOA */ && iVar1 < Global_262145.f_24310 /* Tunable: LAUNCHPOSIX_FAGALOA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_24298 /* Tunable: ENABLE_ELLIE */ && iVar1 < Global_262145.f_24314 /* Tunable: LAUNCHPOSIX_ELLIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_24301 /* Tunable: ENABLE_ISSI3 */ && iVar1 < Global_262145.f_24317 /* Tunable: LAUNCHPOSIX_ISSI3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_24306 /* Tunable: ENABLE_MICHELLI */ && iVar1 < Global_262145.f_24322 /* Tunable: LAUNCHPOSIX_MICHELLI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_24300 /* Tunable: ENABLE_FLASHGT */ && iVar1 < Global_262145.f_24316 /* Tunable: LAUNCHPOSIX_FLASHGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_24292 /* Tunable: ENABLE_HOTRING */ && iVar1 < Global_262145.f_24308 /* Tunable: LAUNCHPOSIX_HOTRING */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_24299 /* Tunable: ENABLE_TEZERACT */ && iVar1 < Global_262145.f_24315 /* Tunable: LAUNCHPOSIX_TEZERACT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_24305 /* Tunable: ENABLE_TYRANT */ && iVar1 < Global_262145.f_24321 /* Tunable: LAUNCHPOSIX_TYRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_24304 /* Tunable: ENABLE_DOMINATOR3 */ && iVar1 < Global_262145.f_24320 /* Tunable: LAUNCHPOSIX_DOMINATOR3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_24295 /* Tunable: ENABLE_TAIPAN */ && iVar1 < Global_262145.f_24311 /* Tunable: LAUNCHPOSIX_TAIPAN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_24297 /* Tunable: ENABLE_ENTITY2 */ && iVar1 < Global_262145.f_24313 /* Tunable: LAUNCHPOSIX_ENTITY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_24307 /* Tunable: ENABLE_JESTER3 */ && iVar1 < Global_262145.f_24323 /* Tunable: LAUNCHPOSIX_JESTER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_24303 /* Tunable: ENABLE_CHEBUREK */ && iVar1 < Global_262145.f_24319 /* Tunable: LAUNCHPOSIX_CHEBUREK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_24296 /* Tunable: ENABLE_CARACARA */ && iVar1 < Global_262145.f_24312 /* Tunable: LAUNCHPOSIX_CARACARA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_24302 /* Tunable: ENABLE_SEASPARROW */ && iVar1 < Global_262145.f_24318 /* Tunable: LAUNCHPOSIX_SEASPARROW */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("terbyte"))
	{
		if (!Global_262145.f_24383 /* Tunable: ENABLE_TERBYTE */ && iVar1 < Global_262145.f_24370 /* Tunable: LAUNCHPOSIX_TERBYTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_24384 /* Tunable: ENABLE_PBUS2 */ && iVar1 < Global_262145.f_24371 /* Tunable: LAUNCHPOSIX_PBUS2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_24389 /* Tunable: ENABLE_MULE4 */ && iVar1 < Global_262145.f_24376 /* Tunable: LAUNCHPOSIX_MULE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_24388 /* Tunable: ENABLE_POUNDER2 */ && iVar1 < Global_262145.f_24375 /* Tunable: LAUNCHPOSIX_POUNDER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_24386 /* Tunable: ENABLE_SWINGER */ && iVar1 < Global_262145.f_24373 /* Tunable: LAUNCHPOSIX_SWINGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_24392 /* Tunable: ENABLE_MENACER */ && iVar1 < Global_262145.f_24379 /* Tunable: LAUNCHPOSIX_MENACER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_24394 /* Tunable: ENABLE_SCRAMJET */ && iVar1 < Global_262145.f_24381 /* Tunable: LAUNCHPOSIX_SCRAMJET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_24395 /* Tunable: ENABLE_STRIKEFORCE */ && iVar1 < Global_262145.f_24382 /* Tunable: LAUNCHPOSIX_STRIKEFORCE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_24393 /* Tunable: ENABLE_OPPRESSOR2 */ && iVar1 < Global_262145.f_24380 /* Tunable: LAUNCHPOSIX_OPPRESSOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_24385 /* Tunable: ENABLE_PATRIOT2 */ && iVar1 < Global_262145.f_24372 /* Tunable: LAUNCHPOSIX_PATRIOT2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_24387 /* Tunable: ENABLE_STAFFORD */ && iVar1 < Global_262145.f_24374 /* Tunable: LAUNCHPOSIX_STAFFORD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_24391 /* Tunable: ENABLE_FREECRAWLER */ && iVar1 < Global_262145.f_24378 /* Tunable: LAUNCHPOSIX_FREECRAWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_24390 /* Tunable: ENABLE_BLIMP3 */ && iVar1 < Global_262145.f_24377 /* Tunable: LAUNCHPOSIX_BLIMP3 */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == joaat("cerberus3"))
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == joaat("brutus3"))
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == joaat("scarab3"))
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == joaat("imperator3"))
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == joaat("zr3803"))
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_27026 /* Tunable: ENABLE_VEHICLE_DEVESTE */ && iVar1 < Global_262145.f_27028 /* Tunable: LAUNCHPOSIX_DEVESTE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_26039 /* Tunable: ENABLE_VEHICLE_TOROS */ && iVar1 < Global_262145.f_26032 /* Tunable: LAUNCHPOSIX_TOROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_26040 /* Tunable: ENABLE_VEHICLE_CLIQUE */ && iVar1 < Global_262145.f_26033 /* Tunable: LAUNCHPOSIX_CLIQUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_26041 /* Tunable: ENABLE_VEHICLE_ITALIGTO */ && iVar1 < Global_262145.f_26034 /* Tunable: LAUNCHPOSIX_ITALIGTO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_26042 /* Tunable: ENABLE_VEHICLE_DEVIANT */ && iVar1 < Global_262145.f_26035 /* Tunable: LAUNCHPOSIX_DEVIANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_27027 /* Tunable: ENABLE_VEHICLE_VAMOS */ && iVar1 < Global_262145.f_27029 /* Tunable: LAUNCHPOSIX_VAMOS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_26043 /* Tunable: ENABLE_VEHICLE_TULIP */ && iVar1 < Global_262145.f_26036 /* Tunable: LAUNCHPOSIX_TULIP */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_26044 /* Tunable: ENABLE_VEHICLE_SCHLAGEN */ && iVar1 < Global_262145.f_26037 /* Tunable: LAUNCHPOSIX_SCHLAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_26045 /* Tunable: ENABLE_VEHICLE_BANDITO */ && iVar1 < Global_262145.f_26038 /* Tunable: LAUNCHPOSIX_BANDITO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrax"))
	{
		if (!Global_262145.f_26050 /* Tunable: ENABLE_VEHICLE_THRAX */ && iVar1 < Global_262145.f_26071 /* Tunable: LAUNCHPOSIX_THRAX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("drafter"))
	{
		if (!Global_262145.f_26051 /* Tunable: ENABLE_VEHICLE_DRAFTER */ && iVar1 < Global_262145.f_26072 /* Tunable: LAUNCHPOSIX_DRAFTER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("locust"))
	{
		if (!Global_262145.f_26052 /* Tunable: ENABLE_VEHICLE_LOCUST */ && iVar1 < Global_262145.f_26073 /* Tunable: LAUNCHPOSIX_LOCUST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("novak"))
	{
		if (!Global_262145.f_26053 /* Tunable: ENABLE_VEHICLE_NOVAK */ && iVar1 < Global_262145.f_26074 /* Tunable: LAUNCHPOSIX_NOVAK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		if (!Global_262145.f_26054 /* Tunable: ENABLE_VEHICLE_ZORRUSSO */ && iVar1 < Global_262145.f_26075 /* Tunable: LAUNCHPOSIX_ZORRUSSO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		if (!Global_262145.f_26055 /* Tunable: ENABLE_VEHICLE_GAUNTLET3 */ && iVar1 < Global_262145.f_26076 /* Tunable: LAUNCHPOSIX_GAUNTLET3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi7"))
	{
		if (!Global_262145.f_26056 /* Tunable: ENABLE_VEHICLE_ISSI7 */ && iVar1 < Global_262145.f_26077 /* Tunable: LAUNCHPOSIX_ISSI7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion3"))
	{
		if (!Global_262145.f_26057 /* Tunable: ENABLE_VEHICLE_ZION3 */ && iVar1 < Global_262145.f_26078 /* Tunable: LAUNCHPOSIX_ZION3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nebula"))
	{
		if (!Global_262145.f_26058 /* Tunable: ENABLE_VEHICLE_NEBULA */ && iVar1 < Global_262145.f_26079 /* Tunable: LAUNCHPOSIX_NEBULA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hellion"))
	{
		if (!Global_262145.f_26059 /* Tunable: ENABLE_VEHICLE_HELLION */ && iVar1 < Global_262145.f_26080 /* Tunable: LAUNCHPOSIX_HELLION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dynasty"))
	{
		if (!Global_262145.f_26060 /* Tunable: ENABLE_VEHICLE_DYNASTY */ && iVar1 < Global_262145.f_26081 /* Tunable: LAUNCHPOSIX_DYNASTY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rrocket"))
	{
		if (!Global_262145.f_26061 /* Tunable: ENABLE_VEHICLE_RROCKET */ && iVar1 < Global_262145.f_26082 /* Tunable: LAUNCHPOSIX_RROCKET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote2"))
	{
		if (!Global_262145.f_26062 /* Tunable: ENABLE_VEHICLE_PEYOTE2 */ && iVar1 < Global_262145.f_26083 /* Tunable: LAUNCHPOSIX_PEYOTE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		if (!Global_262145.f_26063 /* Tunable: ENABLE_VEHICLE_GAUNTLET4 */ && iVar1 < Global_262145.f_26084 /* Tunable: LAUNCHPOSIX_GAUNTLET4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara2"))
	{
		if (!Global_262145.f_26064 /* Tunable: ENABLE_VEHICLE_CARACARA2 */ && iVar1 < Global_262145.f_26085 /* Tunable: LAUNCHPOSIX_CARACARA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jugular"))
	{
		if (!Global_262145.f_26065 /* Tunable: ENABLE_VEHICLE_JUGULAR */ && iVar1 < Global_262145.f_26086 /* Tunable: LAUNCHPOSIX_JUGULAR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("s80"))
	{
		if (!Global_262145.f_26066 /* Tunable: ENABLE_VEHICLE_S80 */ && iVar1 < Global_262145.f_26087 /* Tunable: LAUNCHPOSIX_S80 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("krieger"))
	{
		if (!Global_262145.f_26067 /* Tunable: ENABLE_VEHICLE_KRIEGER */ && iVar1 < Global_262145.f_26088 /* Tunable: LAUNCHPOSIX_KRIEGER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("emerus"))
	{
		if (!Global_262145.f_26068 /* Tunable: ENABLE_VEHICLE_EMERUS */ && iVar1 < Global_262145.f_26089 /* Tunable: LAUNCHPOSIX_EMERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neo"))
	{
		if (!Global_262145.f_26069 /* Tunable: ENABLE_VEHICLE_NEO */ && iVar1 < Global_262145.f_26090 /* Tunable: LAUNCHPOSIX_NEO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("paragon"))
	{
		if (!Global_262145.f_26070 /* Tunable: ENABLE_VEHICLE_PARAGON */ && iVar1 < Global_262145.f_26091 /* Tunable: LAUNCHPOSIX_PARAGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asbo"))
	{
		if (!Global_262145.f_28890 /* Tunable: ENABLE_VEHICLE_ASBO */ && iVar1 < Global_262145.f_28911 /* Tunable: LAUNCHPOSIX_ASBO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjo"))
	{
		if (!Global_262145.f_28891 /* Tunable: ENABLE_VEHICLE_KANJO */ && iVar1 < Global_262145.f_28912 /* Tunable: LAUNCHPOSIX_KANJO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon"))
	{
		if (!Global_262145.f_28892 /* Tunable: ENABLE_VEHICLE_EVERON */ && iVar1 < Global_262145.f_28913 /* Tunable: LAUNCHPOSIX_EVERON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue2"))
	{
		if (!Global_262145.f_28893 /* Tunable: ENABLE_VEHICLE_RETINUE2 */ && iVar1 < Global_262145.f_28914 /* Tunable: LAUNCHPOSIX_RETINUE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		if (!Global_262145.f_28894 /* Tunable: ENABLE_VEHICLE_YOSEMITE2 */ && iVar1 < Global_262145.f_28915 /* Tunable: LAUNCHPOSIX_YOSEMITE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sugoi"))
	{
		if (!Global_262145.f_28895 /* Tunable: ENABLE_VEHICLE_SUGOI */ && iVar1 < Global_262145.f_28916 /* Tunable: LAUNCHPOSIX_SUGOI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan2"))
	{
		if (!Global_262145.f_28896 /* Tunable: ENABLE_VEHICLE_SULTAN2 */ && iVar1 < Global_262145.f_28917 /* Tunable: LAUNCHPOSIX_SULTAN2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("outlaw"))
	{
		if (!Global_262145.f_28897 /* Tunable: ENABLE_VEHICLE_OUTLAW */ && iVar1 < Global_262145.f_28918 /* Tunable: LAUNCHPOSIX_OUTLAW */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagrant"))
	{
		if (!Global_262145.f_28898 /* Tunable: ENABLE_VEHICLE_VAGRANT */ && iVar1 < Global_262145.f_28919 /* Tunable: LAUNCHPOSIX_VAGRANT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("komoda"))
	{
		if (!Global_262145.f_28899 /* Tunable: ENABLE_VEHICLE_KOMODA */ && iVar1 < Global_262145.f_28920 /* Tunable: LAUNCHPOSIX_KOMODA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stryder"))
	{
		if (!Global_262145.f_28900 /* Tunable: ENABLE_VEHICLE_STRYDER */ && iVar1 < Global_262145.f_28921 /* Tunable: LAUNCHPOSIX_STRYDER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furia"))
	{
		if (!Global_262145.f_28901 /* Tunable: ENABLE_VEHICLE_FURIA */ && iVar1 < Global_262145.f_28922 /* Tunable: LAUNCHPOSIX_FURIA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zhaba"))
	{
		if (!Global_262145.f_28902 /* Tunable: ENABLE_VEHICLE_ZHABA */ && iVar1 < Global_262145.f_28923 /* Tunable: LAUNCHPOSIX_ZHABA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb7002"))
	{
		if (!Global_262145.f_28903 /* Tunable: ENABLE_VEHICLE_JB7002 */ && iVar1 < Global_262145.f_28924 /* Tunable: LAUNCHPOSIX_JB7002 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("firetruk"))
	{
		if (!Global_262145.f_28904 /* Tunable: ENABLE_VEHICLE_FIRETRUCK */ && iVar1 < Global_262145.f_28925 /* Tunable: LAUNCHPOSIX_FIRETRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("burrito2"))
	{
		if (!Global_262145.f_28905 /* Tunable: ENABLE_VEHICLE_BURRITO2 */ && iVar1 < Global_262145.f_28926 /* Tunable: LAUNCHPOSIX_BURRITO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville"))
	{
		if (!Global_262145.f_28906 /* Tunable: ENABLE_VEHICLE_BOXVILLE */ && iVar1 < Global_262145.f_28927 /* Tunable: LAUNCHPOSIX_BOXVILLE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stockade"))
	{
		if (!Global_262145.f_28907 /* Tunable: ENABLE_VEHICLE_STOCKADE */ && iVar1 < Global_262145.f_28928 /* Tunable: LAUNCHPOSIX_STOCKADE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minitank"))
	{
		if (!Global_262145.f_28908 /* Tunable: ENABLE_VEHICLE_MINITANK */ && iVar1 < Global_262145.f_28929 /* Tunable: LAUNCHPOSIX_MINITANK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lguard"))
	{
		if (!Global_262145.f_28909 /* Tunable: ENABLE_VEHICLE_LGUARD */ && iVar1 < Global_262145.f_28930 /* Tunable: LAUNCHPOSIX_LGUARD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer2"))
	{
		if (!Global_262145.f_28910 /* Tunable: ENABLE_VEHICLE_BLAZER2 */ && iVar1 < Global_262145.f_28931 /* Tunable: LAUNCHPOSIX_BLAZER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula"))
	{
		if ((!Global_262145.f_28933 /* Tunable: ENABLE_VEHICLE_FORMULA */ && iVar1 < Global_262145.f_28934 /* Tunable: LAUNCHPOSIX_FORMULA */) && !Global_262145.f_28888 /* Tunable: ENABLE_VEHICLE_FORMULA_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("formula2"))
	{
		if ((!Global_262145.f_28936 /* Tunable: ENABLE_VEHICLE_FORMULA2 */ && iVar1 < Global_262145.f_28937 /* Tunable: LAUNCHPOSIX_FORMULA2 */) && !Global_262145.f_28889 /* Tunable: ENABLE_VEHICLE_FORMULA2_PODIUM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("imorgon"))
	{
		if (!Global_262145.f_28941 /* Tunable: ENABLE_VEHICLE_IMORGEN */ && iVar1 < Global_262145.f_28944 /* Tunable: LAUNCHPOSIX_IMORGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebla"))
	{
		if (!Global_262145.f_28942 /* Tunable: ENABLE_VEHICLE_REBLA */ && iVar1 < Global_262145.f_28945 /* Tunable: LAUNCHPOSIX_REBLA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vstr"))
	{
		if (!Global_262145.f_28943 /* Tunable: ENABLE_VEHICLE_VSTR */ && iVar1 < Global_262145.f_28946 /* Tunable: LAUNCHPOSIX_VSTR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet5"))
	{
		if (!Global_262145.f_29959 /* Tunable: ENABLE_VEH_GAUNTLET5 */ && iVar1 < Global_262145.f_29624 /* Tunable: LAUNCHPOSIX_GAUNTLET5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("club"))
	{
		if (!Global_262145.f_29610 /* Tunable: ENABLE_VEH_CLUB */ && iVar1 < Global_262145.f_29631 /* Tunable: LAUNCHPOSIX_CLUB */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dukes3"))
	{
		if (!Global_262145.f_29611 /* Tunable: ENABLE_VEH_DUKES3 */ && iVar1 < Global_262145.f_29617 /* Tunable: LAUNCHPOSIX_DUKES3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		if (!Global_262145.f_29957 /* Tunable: ENABLE_VEH_YOSEMITE3 */ && iVar1 < Global_262145.f_29625 /* Tunable: LAUNCHPOSIX_YOSEMITE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("peyote3"))
	{
		if (!Global_262145.f_29958 /* Tunable: ENABLE_VEH_PEYOTE3 */ && iVar1 < Global_262145.f_29626 /* Tunable: LAUNCHPOSIX_PEYOTE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("glendale2"))
	{
		if (!Global_262145.f_29604 /* Tunable: ENABLE_VEH_GLENDALE2 */ && iVar1 < Global_262145.f_29623 /* Tunable: LAUNCHPOSIX_GLENDALE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		if (!Global_262145.f_29605 /* Tunable: ENABLE_VEH_PENUMBRA2 */ && iVar1 < Global_262145.f_29632 /* Tunable: LAUNCHPOSIX_PENUMBRA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		if (!Global_262145.f_29606 /* Tunable: ENABLE_VEH_LANDSTALKER2 */ && iVar1 < Global_262145.f_29622 /* Tunable: LAUNCHPOSIX_LANDSTALKER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole2"))
	{
		if (!Global_262145.f_29607 /* Tunable: ENABLE_VEH_SEMINOLE2 */ && iVar1 < Global_262145.f_29620 /* Tunable: LAUNCHPOSIX_SEMINOLE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tigon"))
	{
		if (!Global_262145.f_29953 /* Tunable: ENABLE_VEH_TIGON */ && iVar1 < Global_262145.f_29627 /* Tunable: LAUNCHPOSIX_TIGON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		if (!Global_262145.f_29954 /* Tunable: ENABLE_VEH_OPENWHEEL1 */ && iVar1 < Global_262145.f_29628 /* Tunable: LAUNCHPOSIX_OPENWHEEL1 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		if (!Global_262145.f_29955 /* Tunable: ENABLE_VEH_OPENWHEEL2 */ && iVar1 < Global_262145.f_29629 /* Tunable: LAUNCHPOSIX_OPENWHEEL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette4"))
	{
		if (!Global_262145.f_29956 /* Tunable: ENABLE_VEH_COQUETTE4 */ && iVar1 < Global_262145.f_29630 /* Tunable: LAUNCHPOSIX_COQUETTE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manana2"))
	{
		if (!Global_262145.f_29608 /* Tunable: ENABLE_VEH_MANANA2 */ && iVar1 < Global_262145.f_29619 /* Tunable: LAUNCHPOSIX_MANANA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga3"))
	{
		if (!Global_262145.f_29609 /* Tunable: ENABLE_VEH_YOUGA3 */ && iVar1 < Global_262145.f_29621 /* Tunable: LAUNCHPOSIX_YOUGA3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toreador"))
	{
		if (!Global_262145.f_30418 /* Tunable: ENABLE_VEHICLE_TOREADOR */ && iVar1 < Global_262145.f_30401 /* Tunable: LAUNCHPOSIX_TOREADOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		if (!Global_262145.f_30419 /* Tunable: ENABLE_VEHICLE_ANNIHILATOR2 */ && iVar1 < Global_262145.f_30402 /* Tunable: LAUNCHPOSIX_ANNIHILATOR2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alkonost"))
	{
		if (!Global_262145.f_30420 /* Tunable: ENABLE_VEHICLE_ALKONOST */ && iVar1 < Global_262145.f_30403 /* Tunable: LAUNCHPOSIX_ALKONOST */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		if (!Global_262145.f_30421 /* Tunable: ENABLE_VEHICLE_PATROLBOAT */ && iVar1 < Global_262145.f_30404 /* Tunable: LAUNCHPOSIX_PATROLBOAT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("longfin"))
	{
		if (!Global_262145.f_30422 /* Tunable: ENABLE_VEHICLE_LONGFIN */ && iVar1 < Global_262145.f_30405 /* Tunable: LAUNCHPOSIX_LONGFIN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("winky"))
	{
		if (!Global_262145.f_30423 /* Tunable: ENABLE_VEHICLE_WINKY */ && iVar1 < Global_262145.f_30406 /* Tunable: LAUNCHPOSIX_WINKY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto"))
	{
		if (!Global_262145.f_30424 /* Tunable: ENABLE_VEHICLE_VETO */ && iVar1 < Global_262145.f_30407 /* Tunable: LAUNCHPOSIX_VETO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("veto2"))
	{
		if (!Global_262145.f_30425 /* Tunable: ENABLE_VEHICLE_VETO2 */ && iVar1 < Global_262145.f_30408 /* Tunable: LAUNCHPOSIX_VETO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italirsx"))
	{
		if (!Global_262145.f_30426 /* Tunable: ENABLE_VEHICLE_ITALIRSX */ && iVar1 < Global_262145.f_30409 /* Tunable: LAUNCHPOSIX_ITALIRSX */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil"))
	{
		if (Global_262145.f_30435 /* Tunable: -552682736 */)
		{
		}
		else if (!Global_262145.f_30427 /* Tunable: ENABLE_VEHICLE_WEEVIL */ && iVar1 < Global_262145.f_30410 /* Tunable: LAUNCHPOSIX_WEEVIL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez2"))
	{
		if (!Global_262145.f_30428 /* Tunable: ENABLE_VEHICLE_MANCHEZ2 */ && iVar1 < Global_262145.f_30411 /* Tunable: LAUNCHPOSIX_MANCHEZ2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		if (!Global_262145.f_30429 /* Tunable: ENABLE_VEHICLE_SLAMTRUCK */ && iVar1 < Global_262145.f_30412 /* Tunable: LAUNCHPOSIX_SLAMTRUCK */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vetir"))
	{
		if (!Global_262145.f_30430 /* Tunable: ENABLE_VEHICLE_VETIR */ && iVar1 < Global_262145.f_30413 /* Tunable: LAUNCHPOSIX_VETIR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("squaddie"))
	{
		if (!Global_262145.f_30431 /* Tunable: ENABLE_VEHICLE_SQUADDIE */ && iVar1 < Global_262145.f_30414 /* Tunable: LAUNCHPOSIX_SQUADDIE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso2"))
	{
		if (Global_262145.f_30436 /* Tunable: 976860524 */)
		{
		}
		else if (!Global_262145.f_30432 /* Tunable: ENABLE_VEHICLE_BRIOSO2 */ && iVar1 < Global_262145.f_30415 /* Tunable: LAUNCHPOSIX_BRIOSO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		if (!Global_262145.f_30433 /* Tunable: ENABLE_VEHICLE_DINGY5 */ && iVar1 < Global_262145.f_30416 /* Tunable: LAUNCHPOSIX_DINGY5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verus"))
	{
		if (!Global_262145.f_30434 /* Tunable: ENABLE_VEHICLE_VERUS */ && iVar1 < Global_262145.f_30417 /* Tunable: LAUNCHPOSIX_VERUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		if (!Global_262145.f_31290 /* Tunable: ENABLE_VEHICLE_TAILGATER2 */ && iVar1 < Global_262145.f_31273 /* Tunable: LAUNCHPOSIX_TAILGATER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("euros"))
	{
		if (!Global_262145.f_31291 /* Tunable: ENABLE_VEHICLE_EUROS */ && iVar1 < Global_262145.f_31274 /* Tunable: LAUNCHPOSIX_EUROS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sultan3"))
	{
		if (!Global_262145.f_31292 /* Tunable: ENABLE_VEHICLE_SULTAN3 */ && iVar1 < Global_262145.f_31275 /* Tunable: LAUNCHPOSIX_SULTAN3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rt3000"))
	{
		if (!Global_262145.f_31293 /* Tunable: ENABLE_VEHICLE_RT3000 */ && iVar1 < Global_262145.f_31276 /* Tunable: LAUNCHPOSIX_RT3000 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vectre"))
	{
		if (!Global_262145.f_31294 /* Tunable: ENABLE_VEHICLE_VECTRE */ && iVar1 < Global_262145.f_31277 /* Tunable: LAUNCHPOSIX_VECTRE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zr350"))
	{
		if (!Global_262145.f_31295 /* Tunable: ENABLE_VEHICLE_ZR350 */ && iVar1 < Global_262145.f_31278 /* Tunable: LAUNCHPOSIX_ZR350 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener2"))
	{
		if (!Global_262145.f_31296 /* Tunable: ENABLE_VEHICLE_WARRENER2 */ && iVar1 < Global_262145.f_31279 /* Tunable: LAUNCHPOSIX_WARRENER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("calico"))
	{
		if (!Global_262145.f_31297 /* Tunable: ENABLE_VEHICLE_CALICO */ && iVar1 < Global_262145.f_31280 /* Tunable: LAUNCHPOSIX_CALICO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("remus"))
	{
		if (!Global_262145.f_31298 /* Tunable: ENABLE_VEHICLE_REMUS */ && iVar1 < Global_262145.f_31281 /* Tunable: LAUNCHPOSIX_REMUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cypher"))
	{
		if (!Global_262145.f_31299 /* Tunable: ENABLE_VEHICLE_CYPHER */ && iVar1 < Global_262145.f_31282 /* Tunable: LAUNCHPOSIX_CYPHER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator7"))
	{
		if (!Global_262145.f_31300 /* Tunable: ENABLE_VEHICLE_DOMINATOR7 */ && iVar1 < Global_262145.f_31283 /* Tunable: LAUNCHPOSIX_DOMINATOR7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester4"))
	{
		if (!Global_262145.f_31301 /* Tunable: ENABLE_VEHICLE_JESTER4 */ && iVar1 < Global_262145.f_31284 /* Tunable: LAUNCHPOSIX_JESTER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo2"))
	{
		if (!Global_262145.f_31302 /* Tunable: ENABLE_VEHICLE_FUTO2 */ && iVar1 < Global_262145.f_31285 /* Tunable: LAUNCHPOSIX_FUTO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator8"))
	{
		if (!Global_262145.f_31303 /* Tunable: ENABLE_VEHICLE_DOMINATOR8 */ && iVar1 < Global_262145.f_31286 /* Tunable: LAUNCHPOSIX_DOMINATOR8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("previon"))
	{
		if (!Global_262145.f_31304 /* Tunable: ENABLE_VEHICLE_PREVION */ && iVar1 < Global_262145.f_31287 /* Tunable: LAUNCHPOSIX_PREVION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("growler"))
	{
		if (!Global_262145.f_31305 /* Tunable: ENABLE_VEHICLE_GROWLER */ && iVar1 < Global_262145.f_31288 /* Tunable: LAUNCHPOSIX_GROWLER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet6"))
	{
		if (!Global_262145.f_31306 /* Tunable: ENABLE_VEHICLE_COMET6 */ && iVar1 < Global_262145.f_31289 /* Tunable: LAUNCHPOSIX_COMET6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("champion"))
	{
		if (!Global_262145.f_32214 /* Tunable: ENABLE_VEHICLE_CHAMPION */ && iVar1 < Global_262145.f_32199 /* Tunable: LAUNCHPOSIX_CHAMPION */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		if (!Global_262145.f_32215 /* Tunable: ENABLE_VEHICLE_BUFFALO4 */ && iVar1 < Global_262145.f_32200 /* Tunable: LAUNCHPOSIX_BUFFALO4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deity"))
	{
		if (!Global_262145.f_32216 /* Tunable: ENABLE_VEHICLE_DEITY */ && iVar1 < Global_262145.f_32201 /* Tunable: LAUNCHPOSIX_DEITY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jubilee"))
	{
		if (!Global_262145.f_32217 /* Tunable: ENABLE_VEHICLE_JUBILEE */ && iVar1 < Global_262145.f_32202 /* Tunable: LAUNCHPOSIX_JUBILEE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ignus"))
	{
		if (!Global_262145.f_32218 /* Tunable: ENABLE_VEHICLE_IGNUS */ && iVar1 < Global_262145.f_32203 /* Tunable: LAUNCHPOSIX_IGNUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		if (!Global_262145.f_32219 /* Tunable: ENABLE_VEHICLE_CINQUEMILA */ && iVar1 < Global_262145.f_32204 /* Tunable: LAUNCHPOSIX_CINQUEMILA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("astron"))
	{
		if (!Global_262145.f_32220 /* Tunable: ENABLE_VEHICLE_ASTRON */ && iVar1 < Global_262145.f_32205 /* Tunable: LAUNCHPOSIX_ASTRON */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet7"))
	{
		if (!Global_262145.f_32221 /* Tunable: ENABLE_VEHICLE_COMET7 */ && iVar1 < Global_262145.f_32206 /* Tunable: LAUNCHPOSIX_COMET7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zeno"))
	{
		if (!Global_262145.f_32222 /* Tunable: ENABLE_VEHICLE_ZENO */ && iVar1 < Global_262145.f_32207 /* Tunable: LAUNCHPOSIX_ZENO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("reever"))
	{
		if (!Global_262145.f_32223 /* Tunable: ENABLE_VEHICLE_REEVER */ && iVar1 < Global_262145.f_32208 /* Tunable: LAUNCHPOSIX_REEVER */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("iwagen"))
	{
		if (!Global_262145.f_32224 /* Tunable: ENABLE_VEHICLE_IWAGEN */ && iVar1 < Global_262145.f_32209 /* Tunable: LAUNCHPOSIX_IWAGEN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger2"))
	{
		if (!Global_262145.f_32225 /* Tunable: ENABLE_VEHICLE_GRANGER2 */ && iVar1 < Global_262145.f_32210 /* Tunable: LAUNCHPOSIX_GRANGER2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot3"))
	{
		if (!Global_262145.f_32226 /* Tunable: ENABLE_VEHICLE_PATRIOT3 */ && iVar1 < Global_262145.f_32211 /* Tunable: LAUNCHPOSIX_PATRIOT3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shinobi"))
	{
		if (!Global_262145.f_32227 /* Tunable: ENABLE_VEHICLE_SHINOBI */ && iVar1 < Global_262145.f_32212 /* Tunable: LAUNCHPOSIX_FAST_MOTORBIKE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller7"))
	{
		if (Global_262145.f_32292 /* Tunable: 991164709 */)
		{
		}
		else if (!Global_262145.f_32228 /* Tunable: ENABLE_VEHICLE_BALLER7 */ && iVar1 < Global_262145.f_32213 /* Tunable: LAUNCHPOSIX_BALLER7 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso3"))
	{
		if (!Global_262145.f_33472 /* Tunable: ENABLE_VEHICLE_BRIOSO3 */ && iVar1 < Global_262145.f_33453 /* Tunable: LAUNCHPOSIX_BRIOSO3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("corsita"))
	{
		if (!Global_262145.f_33466 /* Tunable: ENABLE_VEHICLE_CORSITA */ && iVar1 < Global_262145.f_33447 /* Tunable: LAUNCHPOSIX_CORSITA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("draugur"))
	{
		if (!Global_262145.f_33470 /* Tunable: ENABLE_VEHICLE_DRAUGUR */ && iVar1 < Global_262145.f_33451 /* Tunable: LAUNCHPOSIX_DRAUGUR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("greenwood"))
	{
		if (!Global_262145.f_33464 /* Tunable: ENABLE_VEHICLE_GREENWOOD */ && iVar1 < Global_262145.f_33445 /* Tunable: LAUNCHPOSIX_GREENWOOD */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kanjosj"))
	{
		if (!Global_262145.f_33475 /* Tunable: ENABLE_VEHICLE_KANJOSJ */ && iVar1 < Global_262145.f_33456 /* Tunable: LAUNCHPOSIX_KANJOSJ */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lm87"))
	{
		if (!Global_262145.f_33467 /* Tunable: ENABLE_VEHICLE_LM87 */ && iVar1 < Global_262145.f_33448 /* Tunable: LAUNCHPOSIX_LM87 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("postlude"))
	{
		if (!Global_262145.f_33476 /* Tunable: ENABLE_VEHICLE_POSTLUDE */ && iVar1 < Global_262145.f_33457 /* Tunable: LAUNCHPOSIX_POSTLUDE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rhinehart"))
	{
		if (!Global_262145.f_33478 /* Tunable: ENABLE_VEHICLE_RHINEHART */ && iVar1 < Global_262145.f_33459 /* Tunable: LAUNCHPOSIX_RHINEHART */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sm722"))
	{
		if (!Global_262145.f_33469 /* Tunable: ENABLE_VEHICLE_SM722 */ && iVar1 < Global_262145.f_33450 /* Tunable: LAUNCHPOSIX_SM722 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf"))
	{
		if (!Global_262145.f_33477 /* Tunable: ENABLE_VEHICLE_TENF */ && iVar1 < Global_262145.f_33458 /* Tunable: LAUNCHPOSIX_TENF */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tenf2"))
	{
		if (!Global_262145.f_33480 /* Tunable: ENABLE_VEHICLE_TENF2 */ && iVar1 < Global_262145.f_33461 /* Tunable: LAUNCHPOSIX_TENF2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero2"))
	{
		if (!Global_262145.f_33465 /* Tunable: ENABLE_VEHICLE_TORERO2 */ && iVar1 < Global_262145.f_33446 /* Tunable: LAUNCHPOSIX_TORERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero2"))
	{
		if (!Global_262145.f_33473 /* Tunable: ENABLE_VEHICLE_VIGERO2 */ && iVar1 < Global_262145.f_33454 /* Tunable: LAUNCHPOSIX_VIGERO2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("weevil2"))
	{
		if (!Global_262145.f_33479 /* Tunable: ENABLE_VEHICLE_WEEVIL2 */ && iVar1 < Global_262145.f_33460 /* Tunable: LAUNCHPOSIX_WEEVIL2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner4"))
	{
		if (!Global_262145.f_33471 /* Tunable: ENABLE_VEHICLE_RUINER4 */ && iVar1 < Global_262145.f_33452 /* Tunable: LAUNCHPOSIX_RUINER4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel4"))
	{
		if (!Global_262145.f_33481 /* Tunable: ENABLE_VEHICLE_SENTINEL4 */ && iVar1 < Global_262145.f_33462 /* Tunable: LAUNCHPOSIX_MODEL_SENTINEL4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada"))
	{
		if (!Global_262145.f_33468 /* Tunable: ENABLE_VEHICLE_CONADA */ && iVar1 < Global_262145.f_33449 /* Tunable: LAUNCHPOSIX_CONADA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnisegt"))
	{
		if (!Global_262145.f_33463 /* Tunable: ENABLE_VEHICLE_OMNISEGT */ && iVar1 < Global_262145.f_33444 /* Tunable: LAUNCHPOSIX_OMNISEGT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez3"))
	{
		if (!Global_262145.f_34451 /* Tunable: ENABLE_VEHICLE_BRICKADE2 */ && iVar1 < Global_262145.f_34435 /* Tunable: LAUNCHPOSIX_BRICKADE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brickade2"))
	{
		if (!Global_262145.f_34451 /* Tunable: ENABLE_VEHICLE_BRICKADE2 */ && iVar1 < Global_262145.f_34435 /* Tunable: LAUNCHPOSIX_BRICKADE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("eudora"))
	{
		if (!Global_262145.f_34460 /* Tunable: ENABLE_VEHICLE_EUDORA */ && iVar1 < Global_262145.f_34443 /* Tunable: LAUNCHPOSIX_EUDORA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("powersurge"))
	{
		if (!Global_262145.f_34454 /* Tunable: ENABLE_VEHICLE_POWERSURGE */ && iVar1 < Global_262145.f_34438 /* Tunable: LAUNCHPOSIX_POWERSURGE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("journey2"))
	{
		if (!Global_262145.f_34448 /* Tunable: ENABLE_VEHICLE_JOURNEY2 */ && iVar1 < Global_262145.f_34432 /* Tunable: LAUNCHPOSIX_JOURNEY2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surfer3"))
	{
		if (!Global_262145.f_34449 /* Tunable: ENABLE_VEHICLE_SURFER3 */ && iVar1 < Global_262145.f_34433 /* Tunable: LAUNCHPOSIX_SURFER3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity3"))
	{
		if (!Global_262145.f_34446 /* Tunable: ENABLE_VEHICLE_ENTITY3 */ && iVar1 < Global_262145.f_34430 /* Tunable: LAUNCHPOSIX_ENTITY3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("panthere"))
	{
		if (!Global_262145.f_34457 /* Tunable: ENABLE_VEHICLE_PANTHERE */ && iVar1 < Global_262145.f_34441 /* Tunable: LAUNCHPOSIX_PANTHERE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boor"))
	{
		if (!Global_262145.f_34461 /* Tunable: ENABLE_VEHICLE_BOOR */ && iVar1 < Global_262145.f_34445 /* Tunable: LAUNCHPOSIX_BOOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("everon2"))
	{
		if (!Global_262145.f_34458 /* Tunable: ENABLE_VEHICLE_EVERON2 */ && iVar1 < Global_262145.f_34442 /* Tunable: LAUNCHPOSIX_EVERON2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip2"))
	{
		if (!Global_262145.f_34447 /* Tunable: ENABLE_VEHICLE_TULIP2 */ && iVar1 < Global_262145.f_34431 /* Tunable: LAUNCHPOSIX_TULIP2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("r300"))
	{
		if (!Global_262145.f_34450 /* Tunable: ENABLE_VEHICLE_R300 */ && iVar1 < Global_262145.f_34434 /* Tunable: LAUNCHPOSIX_R300 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virtue"))
	{
		if (!Global_262145.f_34459 /* Tunable: ENABLE_VEHICLE_VIRTUE */ && iVar1 < Global_262145.f_34444 /* Tunable: LAUNCHPOSIX_VIRTUE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi8"))
	{
		if (!Global_262145.f_34455 /* Tunable: ENABLE_VEHICLE_ISSI8 */ && iVar1 < Global_262145.f_34439 /* Tunable: LAUNCHPOSIX_ISSI8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("broadway"))
	{
		if (!Global_262145.f_34456 /* Tunable: ENABLE_VEHICLE_BROADWAY */ && iVar1 < Global_262145.f_34440 /* Tunable: LAUNCHPOSIX_BROADWAY */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tahoma"))
	{
		if (!Global_262145.f_34453 /* Tunable: ENABLE_VEHICLE_TAHOMA */ && iVar1 < Global_262145.f_34437 /* Tunable: LAUNCHPOSIX_TAHOMA */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taxi"))
	{
		if (!Global_262145.f_34452 /* Tunable: ENABLE_VEHICLE_TAXI */ && iVar1 < Global_262145.f_34436 /* Tunable: LAUNCHPOSIX_TAXI */)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("exemplar"))
	{
		if (!Global_262145.f_35402 /* Tunable: ENABLE_VEHICLE_EXEMPLAR */ && !Global_262145.f_35403 /* Tunable: ENABLE_VEHICLE_EXEMPLAR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cogcabrio"))
	{
		if (!Global_262145.f_35404 /* Tunable: ENABLE_VEHICLE_COGCABRIO */ && !Global_262145.f_35405 /* Tunable: ENABLE_VEHICLE_COGCABRIO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thrust"))
	{
		if (!Global_262145.f_35406 /* Tunable: ENABLE_VEHICLE_THRUST */ && !Global_262145.f_35407 /* Tunable: ENABLE_VEHICLE_THRUST_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vindicator"))
	{
		if (!Global_262145.f_35408 /* Tunable: ENABLE_VEHICLE_VINDICATOR */ && !Global_262145.f_35409 /* Tunable: ENABLE_VEHICLE_VINDICATOR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette3"))
	{
		if (!Global_262145.f_35410 /* Tunable: ENABLE_VEHICLE_COQUETTE3 */ && !Global_262145.f_35411 /* Tunable: ENABLE_VEHICLE_COQUETTE3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brawler"))
	{
		if (!Global_262145.f_35412 /* Tunable: ENABLE_VEHICLE_BRAWLER */ && !Global_262145.f_35413 /* Tunable: ENABLE_VEHICLE_BRAWLER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		if (!Global_262145.f_35414 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI */ && !Global_262145.f_35415 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cognoscenti2"))
	{
		if (!Global_262145.f_35416 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI2 */ && !Global_262145.f_35417 /* Tunable: ENABLE_VEHICLE_COGNOSCENTI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cog55"))
	{
		if (!Global_262145.f_35418 /* Tunable: ENABLE_VEHICLE_COG55 */ && !Global_262145.f_35419 /* Tunable: ENABLE_VEHICLE_COG55_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cog552"))
	{
		if (!Global_262145.f_35420 /* Tunable: ENABLE_VEHICLE_COG552 */ && !Global_262145.f_35421 /* Tunable: ENABLE_VEHICLE_COG552_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("superd"))
	{
		if (!Global_262145.f_35422 /* Tunable: ENABLE_VEHICLE_SUPERD */ && !Global_262145.f_35423 /* Tunable: ENABLE_VEHICLE_SUPERD_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter4"))
	{
		if (!Global_262145.f_35424 /* Tunable: ENABLE_VEHICLE_SCHAFTER4 */ && !Global_262145.f_35425 /* Tunable: ENABLE_VEHICLE_SCHAFTER4_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter6"))
	{
		if (!Global_262145.f_35426 /* Tunable: ENABLE_VEHICLE_SCHAFTER6 */ && !Global_262145.f_35427 /* Tunable: ENABLE_VEHICLE_SCHAFTER6_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alpha"))
	{
		if (!Global_262145.f_35428 /* Tunable: ENABLE_VEHICLE_ALPHA */ && !Global_262145.f_35429 /* Tunable: ENABLE_VEHICLE_ALPHA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("feltzer2"))
	{
		if (!Global_262145.f_35430 /* Tunable: ENABLE_VEHICLE_FELTZER2 */ && !Global_262145.f_35431 /* Tunable: ENABLE_VEHICLE_FELTZER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("massacro"))
	{
		if (!Global_262145.f_35432 /* Tunable: ENABLE_VEHICLE_MASSACRO */ && !Global_262145.f_35433 /* Tunable: ENABLE_VEHICLE_MASSACRO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt"))
	{
		if (!Global_262145.f_35434 /* Tunable: ENABLE_VEHICLE_RAPIDGT */ && !Global_262145.f_35435 /* Tunable: ENABLE_VEHICLE_RAPIDGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt2"))
	{
		if (!Global_262145.f_35436 /* Tunable: ENABLE_VEHICLE_RAPIDGT2 */ && !Global_262145.f_35437 /* Tunable: ENABLE_VEHICLE_RAPIDGT2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_35438 /* Tunable: ENABLE_VEHICLE_SEVEN70 */ && !Global_262145.f_35439 /* Tunable: ENABLE_VEHICLE_SEVEN70_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester"))
	{
		if (!Global_262145.f_35440 /* Tunable: ENABLE_VEHICLE_JESTER */ && !Global_262145.f_35441 /* Tunable: ENABLE_VEHICLE_JESTER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		if (!Global_262145.f_35442 /* Tunable: ENABLE_VEHICLE_BESTIAGTS */ && !Global_262145.f_35443 /* Tunable: ENABLE_VEHICLE_BESTIAGTS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("carbonizzare"))
	{
		if (!Global_262145.f_35444 /* Tunable: ENABLE_VEHICLE_CARBONIZZARE */ && !Global_262145.f_35445 /* Tunable: ENABLE_VEHICLE_CARBONIZZARE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette"))
	{
		if (!Global_262145.f_35446 /* Tunable: ENABLE_VEHICLE_COQUETTE */ && !Global_262145.f_35447 /* Tunable: ENABLE_VEHICLE_COQUETTE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("furoregt"))
	{
		if (!Global_262145.f_35448 /* Tunable: ENABLE_VEHICLE_FUROREGT */ && !Global_262145.f_35449 /* Tunable: ENABLE_VEHICLE_FUROREGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ninef"))
	{
		if (!Global_262145.f_35450 /* Tunable: ENABLE_VEHICLE_NINEF */ && !Global_262145.f_35451 /* Tunable: ENABLE_VEHICLE_NINEF_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ninef2"))
	{
		if (!Global_262145.f_35452 /* Tunable: ENABLE_VEHICLE_NINEF2 */ && !Global_262145.f_35453 /* Tunable: ENABLE_VEHICLE_NINEF2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		if (!Global_262145.f_35454 /* Tunable: ENABLE_VEHICLE_VERLIERER2 */ && !Global_262145.f_35455 /* Tunable: ENABLE_VEHICLE_VERLIERER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype"))
	{
		if (!Global_262145.f_35456 /* Tunable: ENABLE_VEHICLE_BTYPE */ && !Global_262145.f_35457 /* Tunable: ENABLE_VEHICLE_BTYPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		if (!Global_262145.f_35458 /* Tunable: ENABLE_VEHICLE_FELTZER3 */ && !Global_262145.f_35459 /* Tunable: ENABLE_VEHICLE_FELTZER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stingergt"))
	{
		if (!Global_262145.f_35460 /* Tunable: ENABLE_VEHICLE_STINGERGT */ && !Global_262145.f_35461 /* Tunable: ENABLE_VEHICLE_STINGERGT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stinger"))
	{
		if (!Global_262145.f_35462 /* Tunable: ENABLE_VEHICLE_STINGER */ && !Global_262145.f_35463 /* Tunable: ENABLE_VEHICLE_STINGER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coquette2"))
	{
		if (!Global_262145.f_35464 /* Tunable: ENABLE_VEHICLE_COQUETTE2 */ && !Global_262145.f_35465 /* Tunable: ENABLE_VEHICLE_COQUETTE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jb700"))
	{
		if (!Global_262145.f_35466 /* Tunable: ENABLE_VEHICLE_JB700 */ && !Global_262145.f_35467 /* Tunable: ENABLE_VEHICLE_JB700_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mamba"))
	{
		if (!Global_262145.f_35468 /* Tunable: ENABLE_VEHICLE_MAMBA */ && !Global_262145.f_35469 /* Tunable: ENABLE_VEHICLE_MAMBA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monroe"))
	{
		if (!Global_262145.f_35470 /* Tunable: ENABLE_VEHICLE_MONROE */ && !Global_262145.f_35471 /* Tunable: ENABLE_VEHICLE_MONROE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype3"))
	{
		if (!Global_262145.f_35472 /* Tunable: ENABLE_VEHICLE_BTYPE3 */ && !Global_262145.f_35473 /* Tunable: ENABLE_VEHICLE_BTYPE3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ztype"))
	{
		if (!Global_262145.f_35474 /* Tunable: ENABLE_VEHICLE_ZTYPE */ && !Global_262145.f_35475 /* Tunable: ENABLE_VEHICLE_ZTYPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("voltic"))
	{
		if (!Global_262145.f_35476 /* Tunable: ENABLE_VEHICLE_VOLTIC */ && !Global_262145.f_35477 /* Tunable: ENABLE_VEHICLE_VOLTIC_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_35478 /* Tunable: ENABLE_VEHICLE_SHEAVA */ && !Global_262145.f_35479 /* Tunable: ENABLE_VEHICLE_SHEAVA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah"))
	{
		if (!Global_262145.f_35480 /* Tunable: ENABLE_VEHICLE_CHEETAH */ && !Global_262145.f_35481 /* Tunable: ENABLE_VEHICLE_CHEETAH_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entityxf"))
	{
		if (!Global_262145.f_35482 /* Tunable: ENABLE_VEHICLE_ENTITYXF */ && !Global_262145.f_35483 /* Tunable: ENABLE_VEHICLE_ENTITYXF_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus"))
	{
		if (!Global_262145.f_35484 /* Tunable: ENABLE_VEHICLE_INFERNUS */ && !Global_262145.f_35485 /* Tunable: ENABLE_VEHICLE_INFERNUS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vacca"))
	{
		if (!Global_262145.f_35486 /* Tunable: ENABLE_VEHICLE_VACCA */ && !Global_262145.f_35487 /* Tunable: ENABLE_VEHICLE_VACCA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bullet"))
	{
		if (!Global_262145.f_35488 /* Tunable: ENABLE_VEHICLE_BULLET */ && !Global_262145.f_35489 /* Tunable: ENABLE_VEHICLE_BULLET_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fmj"))
	{
		if (!Global_262145.f_35490 /* Tunable: ENABLE_VEHICLE_FMJ */ && !Global_262145.f_35491 /* Tunable: ENABLE_VEHICLE_FMJ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller2"))
	{
		if (!Global_262145.f_35492 /* Tunable: ENABLE_VEHICLE_BALLER2 */ && !Global_262145.f_35493 /* Tunable: ENABLE_VEHICLE_BALLER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller3"))
	{
		if (!Global_262145.f_35494 /* Tunable: ENABLE_VEHICLE_BALLER3 */ && !Global_262145.f_35495 /* Tunable: ENABLE_VEHICLE_BALLER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller5"))
	{
		if (!Global_262145.f_35496 /* Tunable: ENABLE_VEHICLE_BALLER5 */ && !Global_262145.f_35497 /* Tunable: ENABLE_VEHICLE_BALLER5_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller4"))
	{
		if (!Global_262145.f_35498 /* Tunable: ENABLE_VEHICLE_BALLER4 */ && !Global_262145.f_35499 /* Tunable: ENABLE_VEHICLE_BALLER4_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller6"))
	{
		if (!Global_262145.f_35500 /* Tunable: ENABLE_VEHICLE_BALLER6 */ && !Global_262145.f_35501 /* Tunable: ENABLE_VEHICLE_BALLER6_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("xls"))
	{
		if (!Global_262145.f_35502 /* Tunable: ENABLE_VEHICLE_XLS */ && !Global_262145.f_35503 /* Tunable: ENABLE_VEHICLE_XLS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("xls2"))
	{
		if (!Global_262145.f_35504 /* Tunable: ENABLE_VEHICLE_XLS2 */ && !Global_262145.f_35505 /* Tunable: ENABLE_VEHICLE_XLS2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("prairie"))
	{
		if (!Global_262145.f_35506 /* Tunable: ENABLE_VEHICLE_PRAIRIE */ && !Global_262145.f_35507 /* Tunable: ENABLE_VEHICLE_PRAIRIE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi2"))
	{
		if (!Global_262145.f_35508 /* Tunable: ENABLE_VEHICLE_ISSI2 */ && !Global_262145.f_35509 /* Tunable: ENABLE_VEHICLE_ISSI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dilettante"))
	{
		if (!Global_262145.f_35510 /* Tunable: ENABLE_VEHICLE_DILETTANTE */ && !Global_262145.f_35511 /* Tunable: ENABLE_VEHICLE_DILETTANTE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("felon"))
	{
		if (!Global_262145.f_35512 /* Tunable: ENABLE_VEHICLE_FELON */ && !Global_262145.f_35513 /* Tunable: ENABLE_VEHICLE_FELON_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("felon2"))
	{
		if (!Global_262145.f_35514 /* Tunable: ENABLE_VEHICLE_FELON2 */ && !Global_262145.f_35515 /* Tunable: ENABLE_VEHICLE_FELON2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("f620"))
	{
		if (!Global_262145.f_35516 /* Tunable: ENABLE_VEHICLE_F620 */ && !Global_262145.f_35517 /* Tunable: ENABLE_VEHICLE_F620_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jackal"))
	{
		if (!Global_262145.f_35518 /* Tunable: ENABLE_VEHICLE_JACKAL */ && !Global_262145.f_35519 /* Tunable: ENABLE_VEHICLE_JACKAL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oracle2"))
	{
		if (!Global_262145.f_35520 /* Tunable: ENABLE_VEHICLE_ORACLE2 */ && !Global_262145.f_35521 /* Tunable: ENABLE_VEHICLE_ORACLE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oracle"))
	{
		if (!Global_262145.f_35522 /* Tunable: ENABLE_VEHICLE_ORACLE */ && !Global_262145.f_35523 /* Tunable: ENABLE_VEHICLE_ORACLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel2"))
	{
		if (!Global_262145.f_35524 /* Tunable: ENABLE_VEHICLE_SENTINEL2 */ && !Global_262145.f_35525 /* Tunable: ENABLE_VEHICLE_SENTINEL2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion"))
	{
		if (!Global_262145.f_35526 /* Tunable: ENABLE_VEHICLE_ZION */ && !Global_262145.f_35527 /* Tunable: ENABLE_VEHICLE_ZION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zion2"))
	{
		if (!Global_262145.f_35528 /* Tunable: ENABLE_VEHICLE_ZION2 */ && !Global_262145.f_35529 /* Tunable: ENABLE_VEHICLE_ZION2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akuma"))
	{
		if (!Global_262145.f_35530 /* Tunable: ENABLE_VEHICLE_AKUMA */ && !Global_262145.f_35531 /* Tunable: ENABLE_VEHICLE_AKUMA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("double"))
	{
		if (!Global_262145.f_35532 /* Tunable: ENABLE_VEHICLE_DOUBLE */ && !Global_262145.f_35533 /* Tunable: ENABLE_VEHICLE_DOUBLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("enduro"))
	{
		if (!Global_262145.f_35534 /* Tunable: ENABLE_VEHICLE_ENDURO */ && !Global_262145.f_35535 /* Tunable: ENABLE_VEHICLE_ENDURO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hexer"))
	{
		if (!Global_262145.f_35536 /* Tunable: ENABLE_VEHICLE_HEXER */ && !Global_262145.f_35537 /* Tunable: ENABLE_VEHICLE_HEXER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("innovation"))
	{
		if (!Global_262145.f_35538 /* Tunable: ENABLE_VEHICLE_INNOVATION */ && !Global_262145.f_35539 /* Tunable: ENABLE_VEHICLE_INNOVATION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanchez"))
	{
		if (!Global_262145.f_35540 /* Tunable: ENABLE_VEHICLE_SANCHEZ */ && !Global_262145.f_35541 /* Tunable: ENABLE_VEHICLE_SANCHEZ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanchez2"))
	{
		if (!Global_262145.f_35542 /* Tunable: ENABLE_VEHICLE_SANCHEZ2 */ && !Global_262145.f_35543 /* Tunable: ENABLE_VEHICLE_SANCHEZ2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bati2"))
	{
		if (!Global_262145.f_35544 /* Tunable: ENABLE_VEHICLE_BATI2 */ && !Global_262145.f_35545 /* Tunable: ENABLE_VEHICLE_BATI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio2"))
	{
		if (!Global_262145.f_35546 /* Tunable: ENABLE_VEHICLE_FAGGIO2 */ && !Global_262145.f_35547 /* Tunable: ENABLE_VEHICLE_FAGGIO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruffian"))
	{
		if (!Global_262145.f_35548 /* Tunable: ENABLE_VEHICLE_RUFFIAN */ && !Global_262145.f_35549 /* Tunable: ENABLE_VEHICLE_RUFFIAN_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nemesis"))
	{
		if (!Global_262145.f_35550 /* Tunable: ENABLE_VEHICLE_NEMESIS */ && !Global_262145.f_35551 /* Tunable: ENABLE_VEHICLE_NEMESIS_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		if (!Global_262145.f_35552 /* Tunable: ENABLE_VEHICLE_HAKUCHOU */ && !Global_262145.f_35553 /* Tunable: ENABLE_VEHICLE_HAKUCHOU_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pcj"))
	{
		if (!Global_262145.f_35554 /* Tunable: ENABLE_VEHICLE_PCJ */ && !Global_262145.f_35555 /* Tunable: ENABLE_VEHICLE_PCJ_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vader"))
	{
		if (!Global_262145.f_35556 /* Tunable: ENABLE_VEHICLE_VADER */ && !Global_262145.f_35557 /* Tunable: ENABLE_VEHICLE_VADER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sovereign"))
	{
		if (!Global_262145.f_35558 /* Tunable: ENABLE_VEHICLE_SOVEREIGN */ && !Global_262145.f_35559 /* Tunable: ENABLE_VEHICLE_SOVEREIGN_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet"))
	{
		if (!Global_262145.f_35560 /* Tunable: ENABLE_VEHICLE_GAUNTLET */ && !Global_262145.f_35561 /* Tunable: ENABLE_VEHICLE_GAUNTLET_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratloader"))
	{
		if (!Global_262145.f_35562 /* Tunable: ENABLE_VEHICLE_RATLOADER */ && !Global_262145.f_35563 /* Tunable: ENABLE_VEHICLE_RATLOADER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("picador"))
	{
		if (!Global_262145.f_35564 /* Tunable: ENABLE_VEHICLE_PICADOR */ && !Global_262145.f_35565 /* Tunable: ENABLE_VEHICLE_PICADOR_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero"))
	{
		if (!Global_262145.f_35566 /* Tunable: ENABLE_VEHICLE_VIGERO */ && !Global_262145.f_35567 /* Tunable: ENABLE_VEHICLE_VIGERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner"))
	{
		if (!Global_262145.f_35568 /* Tunable: ENABLE_VEHICLE_RUINER */ && !Global_262145.f_35569 /* Tunable: ENABLE_VEHICLE_RUINER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa"))
	{
		if (!Global_262145.f_35570 /* Tunable: ENABLE_VEHICLE_TAMPA */ && !Global_262145.f_35571 /* Tunable: ENABLE_VEHICLE_TAMPA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blade"))
	{
		if (!Global_262145.f_35572 /* Tunable: ENABLE_VEHICLE_BLADE */ && !Global_262145.f_35573 /* Tunable: ENABLE_VEHICLE_BLADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bifta"))
	{
		if (!Global_262145.f_35574 /* Tunable: ENABLE_VEHICLE_BIFTA */ && !Global_262145.f_35575 /* Tunable: ENABLE_VEHICLE_BIFTA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune"))
	{
		if (!Global_262145.f_35576 /* Tunable: ENABLE_VEHICLE_DUNE */ && !Global_262145.f_35577 /* Tunable: ENABLE_VEHICLE_DUNE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bfinjection"))
	{
		if (!Global_262145.f_35578 /* Tunable: ENABLE_VEHICLE_BFINJECTION */ && !Global_262145.f_35579 /* Tunable: ENABLE_VEHICLE_BFINJECTION_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bodhi2"))
	{
		if (!Global_262145.f_35580 /* Tunable: ENABLE_VEHICLE_BODHI2 */ && !Global_262145.f_35581 /* Tunable: ENABLE_VEHICLE_BODHI2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kalahari"))
	{
		if (!Global_262145.f_35582 /* Tunable: ENABLE_VEHICLE_KALAHARI */ && !Global_262145.f_35583 /* Tunable: ENABLE_VEHICLE_KALAHARI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rancherxl"))
	{
		if (!Global_262145.f_35584 /* Tunable: ENABLE_VEHICLE_RANCHERXL */ && !Global_262145.f_35585 /* Tunable: ENABLE_VEHICLE_RANCHERXL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebel2"))
	{
		if (!Global_262145.f_35586 /* Tunable: ENABLE_VEHICLE_REBEL2 */ && !Global_262145.f_35587 /* Tunable: ENABLE_VEHICLE_REBEL2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rebel"))
	{
		if (!Global_262145.f_35588 /* Tunable: ENABLE_VEHICLE_REBEL */ && !Global_262145.f_35589 /* Tunable: ENABLE_VEHICLE_REBEL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer"))
	{
		if (!Global_262145.f_35590 /* Tunable: ENABLE_VEHICLE_BLAZER */ && !Global_262145.f_35591 /* Tunable: ENABLE_VEHICLE_BLAZER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer3"))
	{
		if (!Global_262145.f_35592 /* Tunable: ENABLE_VEHICLE_BLAZER3 */ && !Global_262145.f_35593 /* Tunable: ENABLE_VEHICLE_BLAZER3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sandking2"))
	{
		if (!Global_262145.f_35594 /* Tunable: ENABLE_VEHICLE_SANDKING2 */ && !Global_262145.f_35595 /* Tunable: ENABLE_VEHICLE_SANDKING2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("washington"))
	{
		if (!Global_262145.f_35596 /* Tunable: ENABLE_VEHICLE_WASHINGTON */ && !Global_262145.f_35597 /* Tunable: ENABLE_VEHICLE_WASHINGTON_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schafter2"))
	{
		if (!Global_262145.f_35598 /* Tunable: ENABLE_VEHICLE_SCHAFTER2 */ && !Global_262145.f_35599 /* Tunable: ENABLE_VEHICLE_SCHAFTER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("romero"))
	{
		if (!Global_262145.f_35600 /* Tunable: ENABLE_VEHICLE_ROMERO */ && !Global_262145.f_35601 /* Tunable: ENABLE_VEHICLE_ROMERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fugitive"))
	{
		if (!Global_262145.f_35602 /* Tunable: ENABLE_VEHICLE_FUGITIVE */ && !Global_262145.f_35603 /* Tunable: ENABLE_VEHICLE_FUGITIVE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surge"))
	{
		if (!Global_262145.f_35604 /* Tunable: ENABLE_VEHICLE_SURGE */ && !Global_262145.f_35605 /* Tunable: ENABLE_VEHICLE_SURGE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asea"))
	{
		if (!Global_262145.f_35606 /* Tunable: ENABLE_VEHICLE_ASEA */ && !Global_262145.f_35607 /* Tunable: ENABLE_VEHICLE_ASEA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("premier"))
	{
		if (!Global_262145.f_35608 /* Tunable: ENABLE_VEHICLE_PREMIER */ && !Global_262145.f_35609 /* Tunable: ENABLE_VEHICLE_PREMIER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("regina"))
	{
		if (!Global_262145.f_35610 /* Tunable: ENABLE_VEHICLE_REGINA */ && !Global_262145.f_35611 /* Tunable: ENABLE_VEHICLE_REGINA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asterope"))
	{
		if (!Global_262145.f_35612 /* Tunable: ENABLE_VEHICLE_ASTEROPE */ && !Global_262145.f_35613 /* Tunable: ENABLE_VEHICLE_ASTEROPE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("intruder"))
	{
		if (!Global_262145.f_35614 /* Tunable: ENABLE_VEHICLE_INTRUDER */ && !Global_262145.f_35615 /* Tunable: ENABLE_VEHICLE_INTRUDER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tailgater"))
	{
		if (!Global_262145.f_35616 /* Tunable: ENABLE_VEHICLE_TAILGATER */ && !Global_262145.f_35617 /* Tunable: ENABLE_VEHICLE_TAILGATER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stanier"))
	{
		if (!Global_262145.f_35618 /* Tunable: ENABLE_VEHICLE_STANIER */ && !Global_262145.f_35619 /* Tunable: ENABLE_VEHICLE_STANIER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ingot"))
	{
		if (!Global_262145.f_35620 /* Tunable: ENABLE_VEHICLE_INGOT */ && !Global_262145.f_35621 /* Tunable: ENABLE_VEHICLE_INGOT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("warrener"))
	{
		if (!Global_262145.f_35622 /* Tunable: ENABLE_VEHICLE_WARRENER */ && !Global_262145.f_35623 /* Tunable: ENABLE_VEHICLE_WARRENER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stratum"))
	{
		if (!Global_262145.f_35624 /* Tunable: ENABLE_VEHICLE_STRATUM */ && !Global_262145.f_35625 /* Tunable: ENABLE_VEHICLE_STRATUM_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schwarzer"))
	{
		if (!Global_262145.f_35626 /* Tunable: ENABLE_VEHICLE_SCHWARZER */ && !Global_262145.f_35627 /* Tunable: ENABLE_VEHICLE_SCHWARZER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("surano"))
	{
		if (!Global_262145.f_35628 /* Tunable: ENABLE_VEHICLE_SURANO */ && !Global_262145.f_35629 /* Tunable: ENABLE_VEHICLE_SURANO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo"))
	{
		if (!Global_262145.f_35630 /* Tunable: ENABLE_VEHICLE_BUFFALO */ && !Global_262145.f_35631 /* Tunable: ENABLE_VEHICLE_BUFFALO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo2"))
	{
		if (!Global_262145.f_35632 /* Tunable: ENABLE_VEHICLE_BUFFALO2 */ && !Global_262145.f_35633 /* Tunable: ENABLE_VEHICLE_BUFFALO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("massacro2"))
	{
		if (!Global_262145.f_35634 /* Tunable: ENABLE_VEHICLE_MASSACRO2 */ && !Global_262145.f_35635 /* Tunable: ENABLE_VEHICLE_MASSACRO2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester2"))
	{
		if (!Global_262145.f_35636 /* Tunable: ENABLE_VEHICLE_JESTER2 */ && !Global_262145.f_35637 /* Tunable: ENABLE_VEHICLE_JESTER2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("futo"))
	{
		if (!Global_262145.f_35638 /* Tunable: ENABLE_VEHICLE_FUTO */ && !Global_262145.f_35639 /* Tunable: ENABLE_VEHICLE_FUTO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penumbra"))
	{
		if (!Global_262145.f_35640 /* Tunable: ENABLE_VEHICLE_PENUMBRA */ && !Global_262145.f_35641 /* Tunable: ENABLE_VEHICLE_PENUMBRA_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fusilade"))
	{
		if (!Global_262145.f_35642 /* Tunable: ENABLE_VEHICLE_FUSILADE */ && !Global_262145.f_35643 /* Tunable: ENABLE_VEHICLE_FUSILADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("btype2"))
	{
		if (!Global_262145.f_35644 /* Tunable: ENABLE_VEHICLE_BTYPE2 */ && !Global_262145.f_35645 /* Tunable: ENABLE_VEHICLE_BTYPE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pigalle"))
	{
		if (!Global_262145.f_35646 /* Tunable: ENABLE_VEHICLE_PIGALLE */ && !Global_262145.f_35647 /* Tunable: ENABLE_VEHICLE_PIGALLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade"))
	{
		if (!Global_262145.f_35648 /* Tunable: ENABLE_VEHICLE_CAVALCADE */ && !Global_262145.f_35649 /* Tunable: ENABLE_VEHICLE_CAVALCADE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade2"))
	{
		if (!Global_262145.f_35650 /* Tunable: ENABLE_VEHICLE_CAVALCADE2 */ && !Global_262145.f_35651 /* Tunable: ENABLE_VEHICLE_CAVALCADE2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bjxl"))
	{
		if (!Global_262145.f_35652 /* Tunable: ENABLE_VEHICLE_BJXL */ && !Global_262145.f_35653 /* Tunable: ENABLE_VEHICLE_BJXL_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("serrano"))
	{
		if (!Global_262145.f_35654 /* Tunable: ENABLE_VEHICLE_SERRANO */ && !Global_262145.f_35655 /* Tunable: ENABLE_VEHICLE_SERRANO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gresley"))
	{
		if (!Global_262145.f_35656 /* Tunable: ENABLE_VEHICLE_GRESLEY */ && !Global_262145.f_35657 /* Tunable: ENABLE_VEHICLE_GRESLEY_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seminole"))
	{
		if (!Global_262145.f_35658 /* Tunable: ENABLE_VEHICLE_SEMINOLE */ && !Global_262145.f_35659 /* Tunable: ENABLE_VEHICLE_SEMINOLE_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("granger"))
	{
		if (!Global_262145.f_35660 /* Tunable: ENABLE_VEHICLE_GRANGER */ && !Global_262145.f_35661 /* Tunable: ENABLE_VEHICLE_GRANGER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("landstalker"))
	{
		if (!Global_262145.f_35662 /* Tunable: ENABLE_VEHICLE_LANDSTALKER */ && !Global_262145.f_35663 /* Tunable: ENABLE_VEHICLE_LANDSTALKER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("habanero"))
	{
		if (!Global_262145.f_35664 /* Tunable: ENABLE_VEHICLE_HABANERO */ && !Global_262145.f_35665 /* Tunable: ENABLE_VEHICLE_HABANERO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fq2"))
	{
		if (!Global_262145.f_35666 /* Tunable: ENABLE_VEHICLE_FQ2 */ && !Global_262145.f_35667 /* Tunable: ENABLE_VEHICLE_FQ2_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller"))
	{
		if (!Global_262145.f_35668 /* Tunable: ENABLE_VEHICLE_BALLER */ && !Global_262145.f_35669 /* Tunable: ENABLE_VEHICLE_BALLER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot"))
	{
		if (!Global_262145.f_35670 /* Tunable: ENABLE_VEHICLE_PATRIOT */ && !Global_262145.f_35671 /* Tunable: ENABLE_VEHICLE_PATRIOT_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rocoto"))
	{
		if (!Global_262145.f_35672 /* Tunable: ENABLE_VEHICLE_ROCOTO */ && !Global_262145.f_35673 /* Tunable: ENABLE_VEHICLE_ROCOTO_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("radi"))
	{
		if (!Global_262145.f_35674 /* Tunable: ENABLE_VEHICLE_RADI */ && !Global_262145.f_35675 /* Tunable: ENABLE_VEHICLE_RADI_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mesa3"))
	{
		if (!Global_262145.f_35676 /* Tunable: ENABLE_VEHICLE_MESA3 */ && !Global_262145.f_35677 /* Tunable: ENABLE_VEHICLE_MESA3_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monster"))
	{
		if (!Global_262145.f_35678 /* Tunable: ENABLE_VEHICLE_MONSTER */ && !Global_262145.f_35679 /* Tunable: ENABLE_VEHICLE_MONSTER_SHOWROOMS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet6"))
	{
		if (!Global_262145.f_35708 /* Tunable: ENABLE_VEHICLE_GAUNTLET6 */ && iVar1 < Global_262145.f_35695 /* Tunable: LAUNCHPOSIX_GAUNTLET6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("conada2"))
	{
		if (!Global_262145.f_35707 /* Tunable: ENABLE_VEHICLE_CONADA2 */ && iVar1 < Global_262145.f_35694 /* Tunable: LAUNCHPOSIX_CONADA2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brigham"))
	{
		if (!Global_262145.f_35709 /* Tunable: ENABLE_VEHICLE_BRIGHAM */ && iVar1 < Global_262145.f_35696 /* Tunable: LAUNCHPOSIX_BRIGHAM */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique2"))
	{
		if (!Global_262145.f_35700 /* Tunable: ENABLE_VEHICLE_CLIQUE2 */ && iVar1 < Global_262145.f_35687 /* Tunable: LAUNCHPOSIX_CLIQUE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("l35"))
	{
		if (!Global_262145.f_35697 /* Tunable: ENABLE_VEHICLE_L35 */ && iVar1 < Global_262145.f_35684 /* Tunable: LAUNCHPOSIX_L35 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == func_129(1))
	{
		iVar0 = 1;
	}
	else if (iParam0 == joaat("ratel"))
	{
		if (!Global_262145.f_35698 /* Tunable: ENABLE_VEHICLE_RATEL */ && iVar1 < Global_262145.f_35685 /* Tunable: LAUNCHPOSIX_RATEL */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stingertt"))
	{
		if (!Global_262145.f_35701 /* Tunable: ENABLE_VEHICLE_STINGERTT */ && iVar1 < Global_262145.f_35688 /* Tunable: LAUNCHPOSIX_STINGERTT */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo5"))
	{
		if (!Global_262145.f_35704 /* Tunable: ENABLE_VEHICLE_BUFFALO5 */ && iVar1 < Global_262145.f_35691 /* Tunable: LAUNCHPOSIX_BUFFALO5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streamer216"))
	{
		if (!Global_262145.f_35702 /* Tunable: ENABLE_VEHICLE_STREAMER216 */ && iVar1 < Global_262145.f_35689 /* Tunable: LAUNCHPOSIX_STREAMER216 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("monstrociti"))
	{
		if (!Global_262145.f_35699 /* Tunable: ENABLE_VEHICLE_MONSTROCITI */ && iVar1 < Global_262145.f_35686 /* Tunable: LAUNCHPOSIX_MONSTROCITI */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("coureur"))
	{
		if (!Global_262145.f_35706 /* Tunable: ENABLE_VEHICLE_COUREUR */ && iVar1 < Global_262145.f_35693 /* Tunable: LAUNCHPOSIX_COUREUR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiju"))
	{
		if (!Global_262145.f_35703 /* Tunable: ENABLE_VEHICLE_RAIJU */ && iVar1 < Global_262145.f_35690 /* Tunable: LAUNCHPOSIX_RAIJU */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("inductor"))
	{
		if (!Global_262145.f_35705 /* Tunable: ENABLE_VEHICLE_INDUCTOR */ && iVar1 < Global_262145.f_35692 /* Tunable: LAUNCHPOSIX_INDUCTOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("inductor2"))
	{
		if (!Global_262145.f_35705 /* Tunable: ENABLE_VEHICLE_INDUCTOR */ && iVar1 < Global_262145.f_35692 /* Tunable: LAUNCHPOSIX_INDUCTOR */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo3"))
	{
		if (!Global_262145.f_36286 /* Tunable: ENABLE_VEHICLE_TURISMO3 */ && iVar1 < Global_262145.f_36266 /* Tunable: LAUNCHPOSIX_TURISMO3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("aleutian"))
	{
		if (!Global_262145.f_36291 /* Tunable: ENABLE_VEHICLE_ALEUTIAN */ && iVar1 < Global_262145.f_36271 /* Tunable: LAUNCHPOSIX_ALEUTIAN */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fr36"))
	{
		if (!Global_262145.f_36285 /* Tunable: ENABLE_VEHICLE_FR36 */ && iVar1 < Global_262145.f_36265 /* Tunable: LAUNCHPOSIX_FR36 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator9"))
	{
		if (!Global_262145.f_36292 /* Tunable: ENABLE_VEHICLE_DOMINATOR9 */ && iVar1 < Global_262145.f_36272 /* Tunable: LAUNCHPOSIX_DOMINATOR9 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("polgauntlet"))
	{
		if (!Global_262145.f_36297 /* Tunable: ENABLE_VEHICLE_POLGAUNTLET */ && iVar1 < Global_262145.f_36277 /* Tunable: LAUNCHPOSIX_POLGAUNTLET */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("police5"))
	{
		if (!Global_262145.f_36288 /* Tunable: ENABLE_VEHICLE_POLICE5 */ && iVar1 < Global_262145.f_36268 /* Tunable: LAUNCHPOSIX_POLICE5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("impaler5"))
	{
		if (!Global_262145.f_36296 /* Tunable: ENABLE_VEHICLE_IMPALER5 */ && iVar1 < Global_262145.f_36276 /* Tunable: LAUNCHPOSIX_IMPALER5 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cavalcade3"))
	{
		if (!Global_262145.f_36295 /* Tunable: ENABLE_VEHICLE_CAVALCADE3 */ && iVar1 < Global_262145.f_36275 /* Tunable: LAUNCHPOSIX_CAVALCADE3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("police4"))
	{
		if (!Global_262145.f_36289 /* Tunable: ENABLE_VEHICLE_POLICE4 */ && iVar1 < Global_262145.f_36269 /* Tunable: LAUNCHPOSIX_POLICE4 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigero3"))
	{
		if (!Global_262145.f_36287 /* Tunable: ENABLE_VEHICLE_VIGERO3 */ && iVar1 < Global_262145.f_36267 /* Tunable: LAUNCHPOSIX_VIGERO3 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("asterope2"))
	{
		if (!Global_262145.f_36293 /* Tunable: ENABLE_VEHICLE_ASTEROPE2 */ && iVar1 < Global_262145.f_36273 /* Tunable: LAUNCHPOSIX_ASTEROPE2 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("baller8"))
	{
		if (!Global_262145.f_36301 /* Tunable: ENABLE_VEHICLE_BALLER8 */ && iVar1 < Global_262145.f_36281 /* Tunable: LAUNCHPOSIX_BALLER8 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dorado"))
	{
		if (!Global_262145.f_36300 /* Tunable: ENABLE_VEHICLE_DORADO */ && iVar1 < Global_262145.f_36280 /* Tunable: LAUNCHPOSIX_DORADO */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("impaler6"))
	{
		if (!Global_262145.f_36299 /* Tunable: ENABLE_VEHICLE_IMPALER6 */ && iVar1 < Global_262145.f_36279 /* Tunable: LAUNCHPOSIX_IMPALER6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("terminus"))
	{
		if (!Global_262145.f_36302 /* Tunable: ENABLE_VEHICLE_TERMINUS */ && iVar1 < Global_262145.f_36282 /* Tunable: LAUNCHPOSIX_TERMINUS */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vivanite"))
	{
		if (!Global_262145.f_36298 /* Tunable: ENABLE_VEHICLE_VIVANITE */ && iVar1 < Global_262145.f_36278 /* Tunable: LAUNCHPOSIX_VIVANITE */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville6"))
	{
		if (!Global_262145.f_36303 /* Tunable: ENABLE_VEHICLE_BOXVILLE6 */ && iVar1 < Global_262145.f_36283 /* Tunable: LAUNCHPOSIX_BOXVILLE6 */)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("benson2"))
	{
		if (!Global_262145.f_36304 /* Tunable: ENABLE_VEHICLE_BENSON2 */ && iVar1 < Global_262145.f_36284 /* Tunable: LAUNCHPOSIX_BENSON2 */)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_129(bool bParam0)//Position - 0xBC6D
{
	if (bParam0)
	{
		return joaat("avenger3");
	}
	return joaat("avenger");
}

bool func_130()//Position - 0xBC87
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_131()//Position - 0xBC9D
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

int func_132()//Position - 0xBCB3
{
	return 0;
}

int func_133()//Position - 0xBCBC
{
	return 1;
}

int func_134()//Position - 0xBCC5
{
	return 1;
}

int func_135()//Position - 0xBCCE
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_136()//Position - 0xBCE7
{
	int iVar0;
	
	if (Global_153246 == 2)
	{
		return 1;
	}
	else if (Global_153246 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_137(int iParam0)//Position - 0xBD9F
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_125(iVar0, 0, -1))
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0)//Position - 0xBDE6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98733[iVar0]))
		{
			if (Global_98733[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_139(int iParam0)//Position - 0xBE21
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98703[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98703[iVar0], false))
			{
				if (Global_98703[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_98703[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_140(int iParam0)//Position - 0xBE9D
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[24]))
	{
		if (iParam0 == Global_78038.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_78038.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_78038.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0xBF85
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98703[iVar0]))
		{
			if (Global_98703[iVar0] == iParam0)
			{
				return Global_98713[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_142(int iParam0, int iParam1, bool bParam2)//Position - 0xBFE8
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_143(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || BitTest(Global_114370.f_7232[iVar9], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_143(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xC05A
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

void func_144(int iParam0)//Position - 0xC132
{
	Global_113079.f_22 = iParam0;
}

