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
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	float fLocal_65 = 0f;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = -1;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	struct<2> Local_110 = { 0, 0 } ;
	struct<5> Local_111[32];
	struct<500> Local_112 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<246> Local_113 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_35 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_65 = ((0.05f + 0.275f) - 0.01f);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_894();
	}
	else
	{
		func_891();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (func_881())
		{
			func_891();
		}
		func_10();
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0xBC
{
	func_2();
}

void func_2()//Position - 0xC8
{
	if (func_9())
	{
		func_3();
	}
}

void func_3()//Position - 0xDB
{
	int iVar0;
	int iVar1;
	
	if (Local_110.f_0 == func_8())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (func_7(iVar1))
			{
				if (func_6(iVar1, 1, 1))
				{
					if (func_5(iVar1))
					{
						Local_110.f_0 = iVar1;
					}
				}
			}
			iVar0++;
		}
	}
	else if (func_4())
	{
		Local_110.f_0 = func_8();
	}
}

int func_4()//Position - 0x138
{
	if (Local_110.f_0 == func_8())
	{
		return 1;
	}
	if (!func_5(Local_110.f_0))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_110.f_0))
	{
		return 1;
	}
	if (!func_6(Local_110.f_0, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x17A
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_2, 10);
}

int func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x1A3
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
				if (iVar0 == Global_2703735.f_3)
				{
					return Global_2703735.f_2;
				}
				else if (Global_2689235[iVar0 /*453*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_7(int iParam0)//Position - 0x203
{
	if (iParam0 != func_8())
	{
		return NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0);
	}
	return 0;
}

int func_8()//Position - 0x21E
{
	return -1;
}

bool func_9()//Position - 0x227
{
	return (MISC::GET_FRAME_COUNT() % 3) == 0;
}

void func_10()//Position - 0x237
{
	func_879();
	func_92();
	func_90();
	func_85();
	func_83();
	func_81();
	func_76();
	func_74(0);
	func_73();
	func_68();
	func_65();
	func_64();
	func_11();
}

void func_11()//Position - 0x274
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<4> Var5;
	
	if (func_62())
	{
		return;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_26(0, 0))
	{
		return;
	}
	if (!BitTest(Local_112.f_1, 5))
	{
		if (func_23())
		{
			iVar1 = func_21(8352, -1, 0);
			iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
			iVar3 = (iVar1 - iVar2);
			if (iVar3 > 0)
			{
				NETWORK::CONVERT_POSIX_TIME(iVar3, &Var0);
				iVar4 = (Var0.f_3 * 3600000);
				iVar4 = (iVar4 + (Var0.f_4 * 60000));
				iVar4 = (iVar4 + Var0.f_5 * 1000);
				Var5 = { func_20(iVar4, 0, 0) };
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CAS_WHEEL_TR");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Var5);
				HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(true, true);
			}
		}
		else
		{
			func_12("CAS_WHEEL_RE", 0);
		}
		MISC::SET_BIT(&(Local_112.f_1), 5);
	}
}

int func_12(char* sParam0, bool bParam1)//Position - 0x352
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_13(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_13(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x38A
{
	int iVar0;
	
	if ((!func_19() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_16(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_14(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1940311.f_5[iVar0 /*53*/] = iParam0;
		Global_1940311.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1940311.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1940311.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1940311.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1940311.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1940311.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1940311.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_14(int iParam0)//Position - 0x492
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1940311 - 1))
	{
		if (iParam0 > Global_1940311.f_5[iVar0 /*53*/].f_1)
		{
			func_15(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1940311++;
	if (Global_1940311 > 5)
	{
		Global_1940311 = 5;
		return Global_1940311;
	}
	return (Global_1940311 - 1);
}

void func_15(int iParam0)//Position - 0x4F4
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1940311.f_5[iVar0 /*53*/] = { Global_1940311.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_16(int iParam0, int iParam1)//Position - 0x52D
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_17(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1853348[iParam0 /*834*/].f_205 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_17(int iParam0, bool bParam1)//Position - 0x578
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_18();
	}
	if (Global_1575038[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574912[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_18()//Position - 0x5B9
{
	return Global_1574918;
}

bool func_19()//Position - 0x5C5
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<4> func_20(int iParam0, bool bParam1, int iParam2)//Position - 0x5D6
{
	struct<4> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	if (iParam0 > 0 || (iParam2 && iParam0 == 0))
	{
		iVar5 = iParam0;
		iVar1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar5 / 3600000)));
		iVar5 = (iVar5 - (iVar1 * 3600000));
		iVar2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar5 / 60000)));
		iVar5 = (iVar5 - (iVar2 * 60000));
		iVar3 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((iVar5 / 1000)));
		iVar5 = (iVar5 - iVar3 * 1000);
		iVar4 = iVar5;
		if (iVar1 > 0)
		{
			StringIntConCat(&Var0, iVar1, 16);
			StringConCat(&Var0, ":", 16);
			if (iVar2 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar2, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar2, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar3 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar3, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar3, 16);
			}
		}
		else
		{
			if (iVar2 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar2, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar2, 16);
			}
			StringConCat(&Var0, ":", 16);
			if (iVar3 < 10)
			{
				StringConCat(&Var0, "0", 16);
				StringIntConCat(&Var0, iVar3, 16);
			}
			else
			{
				StringIntConCat(&Var0, iVar3, 16);
			}
			if (bParam1)
			{
				StringConCat(&Var0, ":", 16);
				if (iVar4 > 100)
				{
					StringIntConCat(&Var0, iVar4, 16);
				}
				else if (iVar4 > 10)
				{
					StringConCat(&Var0, "0", 16);
					StringIntConCat(&Var0, iVar4, 16);
				}
				else
				{
					StringConCat(&Var0, "00", 16);
					StringIntConCat(&Var0, iVar4, 16);
				}
			}
		}
	}
	else
	{
		StringCopy(&Var0, "---", 16);
	}
	return Var0;
}

int func_21(int iParam0, int iParam1, int iParam2)//Position - 0x73F
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 13122)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2826809[iParam0 /*3*/][func_22(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_22(int iParam0)//Position - 0x77C
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_18();
		if (iVar1 > -1)
		{
			Global_2826521 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2826521 = 1;
		}
	}
	return iVar0;
}

int func_23()//Position - 0x7B0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_21(8352, -1, 0);
	iVar1 = func_25(joaat("mpply_lucky_wheel_usage"));
	iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar3 = func_21(10411, -1, 0);
	if (iVar2 > iVar0 && iVar2 > iVar1)
	{
		func_24(10411, 0, -1, 1, 0);
		return 0;
	}
	else if (Global_262145.f_27185)
	{
		if (iVar3 < Global_262145.f_27184)
		{
			return 0;
		}
	}
	return 1;
}

void func_24(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x824
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2826809[iParam0 /*3*/][func_22(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

int func_25(int iParam0)//Position - 0x854
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_26(bool bParam0, bool bParam1)//Position - 0x872
{
	int iVar0;
	var uVar1;
	bool bVar2;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (bParam1)
	{
		if (!func_59(8.7587f))
		{
			return 1;
		}
	}
	if (func_57(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (Global_2667225.f_2681)
	{
		return 1;
	}
	if (func_56())
	{
		return 1;
	}
	if (bParam1)
	{
		if (!func_54())
		{
			return 1;
		}
	}
	if (func_53())
	{
		return 1;
	}
	if (func_52(0))
	{
		return 1;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 1;
	}
	if (func_51())
	{
		return 1;
	}
	if (func_50())
	{
		return 1;
	}
	if (func_49(1))
	{
		return 1;
	}
	bVar2 = func_48(0);
	if (Global_262145.f_26933)
	{
		if (bVar2)
		{
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_51())
			{
				func_47("CASINO_LUCK_WD", -1);
			}
		}
		iVar0 = 1;
	}
	if (!func_46(PLAYER::PLAYER_ID()))
	{
		if ((bVar2 && !BitTest(Global_1946250.f_6, 4)) && !func_45(4, &uVar1))
		{
			if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_51())
			{
				MISC::SET_BIT(&(Global_1946250.f_6), 4);
				func_43("CAS_MG_MEMB2", func_44(0), -1);
			}
		}
		iVar0 = 1;
	}
	if (bParam0)
	{
		if (func_23())
		{
			if (bVar2 && !func_42(20))
			{
				if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_51())
				{
					if (Global_262145.f_27185)
					{
						switch (Global_262145.f_27184)
						{
							case 2:
								func_47("LUCKY_WHEEL_US1", -1);
								break;
							
							case 3:
								func_47("LUCKY_WHEEL_US2", -1);
								break;
							
							case 4:
								func_47("LUCKY_WHEEL_US3", -1);
								break;
							
							default:
								func_47("LUCKY_WHEEL_US", -1);
								break;
						}
					}
					else
					{
						func_47("LUCKY_WHEEL_US", -1);
					}
					func_41(20);
				}
			}
			iVar0 = 1;
		}
	}
	if (bParam1)
	{
		if (bVar2)
		{
			if (!func_40())
			{
				if (func_39("LW_PLAY"))
				{
					HUD::CLEAR_HELP(true);
				}
				if ((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN()) && !func_51())
				{
					func_47("POD_TOO_MANY", -1);
				}
				iVar0 = 1;
			}
			else if (func_39("POD_TOO_MANY"))
			{
				HUD::CLEAR_HELP(true);
			}
		}
		else if (func_39("POD_TOO_MANY"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (BitTest(Local_112.f_1, 1))
	{
		iVar0 = 1;
	}
	if (BitTest(Global_1946250.f_4, 2))
	{
		iVar0 = 1;
	}
	if (func_29())
	{
		iVar0 = 1;
	}
	if (func_45(4, &uVar1))
	{
		if (bVar2)
		{
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
			{
				func_47("CAS_LW_REGL", -1);
				func_41(28);
			}
		}
		iVar0 = 1;
	}
	if (Global_1966139 != 0)
	{
		iVar0 = 1;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		iVar0 = 1;
	}
	if (func_27())
	{
		return 1;
	}
	if (func_53())
	{
		return 1;
	}
	return iVar0;
}

int func_27()//Position - 0xB4C
{
	if (((func_28() != -1 && func_28() != 28) && func_28() != 17) && func_28() != 12)
	{
		return 1;
	}
	return 0;
}

int func_28()//Position - 0xB86
{
	return Global_1057409;
}

int func_29()//Position - 0xB92
{
	int iVar0;
	
	if (func_37(PLAYER::PLAYER_ID(), 1))
	{
		iVar0 = func_36();
		if (func_6(iVar0, 1, 1) && BitTest(Global_1853348[iVar0 /*834*/].f_267.f_384.f_3, 6))
		{
			return 1;
		}
		if ((func_35(PLAYER::PLAYER_ID(), 0) && func_33(PLAYER::PLAYER_ID())) || func_30(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

int func_30(int iParam0)//Position - 0xBFF
{
	if (func_32(iParam0) != func_8())
	{
		return func_32(iParam0) == func_31(iParam0);
	}
	return 0;
}

int func_31(int iParam0)//Position - 0xC25
{
	if (iParam0 != func_8())
	{
		return Global_1892703[iParam0 /*599*/].f_10;
	}
	return func_8();
}

int func_32(int iParam0)//Position - 0xC48
{
	return Global_1892703[iParam0 /*599*/].f_10.f_35;
}

int func_33(int iParam0)//Position - 0xC5D
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_34(iParam0, 9);
	}
	return 0;
}

var func_34(int iParam0, int iParam1)//Position - 0xC7B
{
	return BitTest(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_35(int iParam0, int iParam1)//Position - 0xC93
{
	if (Global_1892703[iParam0 /*599*/].f_10.f_33 != -1 || (iParam1 && Global_1892703[iParam0 /*599*/].f_10.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

var func_36()//Position - 0xCCE
{
	return Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_10;
}

bool func_37(int iParam0, bool bParam1)//Position - 0xCE3
{
	if (!bParam1)
	{
		if (func_38(iParam0))
		{
			return 0;
		}
	}
	return Global_1892703[iParam0 /*599*/].f_10 != func_8();
}

int func_38(int iParam0)//Position - 0xD0E
{
	if (iParam0 != func_8())
	{
		if (Global_1892703[iParam0 /*599*/].f_10 != func_8())
		{
			return Global_1892703[iParam0 /*599*/].f_10 == iParam0;
		}
	}
	return 0;
}

bool func_39(char* sParam0)//Position - 0xD43
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_40()//Position - 0xD56
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (func_6(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar2, 1109.469f, 228.9432f, -50.64041f, 1111.215f, 228.8777f, -48.39041f, 1.82f, false, true, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_41(bool bParam0)//Position - 0xDE0
{
	if (!BitTest(Local_112.f_0, bParam0))
	{
		MISC::SET_BIT(&Local_112, bParam0);
	}
}

bool func_42(int iParam0)//Position - 0xDFB
{
	return BitTest(Local_112.f_0, iParam0);
}

void func_43(char* sParam0, int iParam1, int iParam2)//Position - 0xE09
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam2);
}

int func_44(bool bParam0)//Position - 0xE26
{
	if (bParam0)
	{
		return 500;
	}
	return 500;
}

int func_45(int iParam0, var uParam1)//Position - 0xE3C
{
	int iVar0;
	
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("GTAO_CASINO_SLOTS");
			break;
		
		case 1:
			iVar0 = joaat("GTAO_CASINO_BLACKJACK");
			break;
		
		case 2:
			iVar0 = 1023703758;
			break;
		
		case 5:
			iVar0 = joaat("GTAO_CASINO_INSIDETRACK");
			break;
		
		case 3:
			iVar0 = joaat("GTAO_CASINO_ROULETTE");
			break;
		
		case 4:
			iVar0 = joaat("GTAO_CASINO_LUCKYWHEEL");
			break;
	}
	if (!MONEY::_NETWORK_CASINO_CAN_USE_GAMBLING_TYPE(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_46(int iParam0)//Position - 0xEBE
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_384.f_1, 18);
}

void func_47(char* sParam0, int iParam1)//Position - 0xEE7
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_48(bool bParam0)//Position - 0xEFE
{
	if (bParam0)
	{
		if ((MISC::GET_FRAME_COUNT() % 3) == 0)
		{
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.995f, 228.9034f, -50.6408f, 1109.727f, 228.9352f, -48.3908f, 1.5f, false, true, 0);
		}
	}
	else
	{
		return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1110.995f, 228.9034f, -50.6408f, 1109.727f, 228.9352f, -48.3908f, 1.5f, false, true, 0);
	}
	return 0;
}

bool func_49(bool bParam0)//Position - 0xF7B
{
	if (bParam0)
	{
		return (Global_23011.f_4 && Global_23011.f_104 == 4);
	}
	return Global_23011.f_4;
}

int func_50()//Position - 0xFA4
{
	if (Global_2703735.f_833.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

bool func_51()//Position - 0xFBE
{
	return Global_75485;
}

int func_52(int iParam0)//Position - 0xFCA
{
	if (iParam0 == 1)
	{
		if (Global_20266.f_1 > 3)
		{
			if (BitTest(Global_8136, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_53()//Position - 0x1021
{
	return Global_2815059.f_6757;
}

bool func_54()//Position - 0x1030
{
	return SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_55()) < 5f;
}

Vector3 func_55()//Position - 0x104B
{
	return 1111.052f, 229.8492f, -50.6409f;
}

int func_56()//Position - 0x1062
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_34, 4);
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x107D
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_58(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_58(int iParam0)//Position - 0x109E
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_44024[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44024[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_59(float fParam0)//Position - 0x10E7
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { func_61(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0, 0f, 1f, 0f) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
	fVar1 = func_60(ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), Var0);
	if (fVar1 >= 0f)
	{
		return 1;
	}
	return 0;
}

float func_60(struct<3> Param0, struct<3> Param1)//Position - 0x1131
{
	return (((Param0.f_0 * Param1.f_0) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_61(struct<3> Param0)//Position - 0x1152
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_62()//Position - 0x1191
{
	if (func_63())
	{
		return Global_1946250.f_520 == 0;
	}
	return 0;
}

bool func_63()//Position - 0x11AD
{
	return Global_1946250.f_519;
}

void func_64()//Position - 0x11BC
{
	if ((MISC::GET_FRAME_COUNT() % 30) == 0)
	{
		if (STREAMING::IS_MODEL_VALID(Global_262145.f_26763))
		{
			if (func_21(8519, -1, 0) != Global_262145.f_26763)
			{
				MISC::SET_BIT(&Global_1853211, 17);
				func_24(8519, Global_262145.f_26763, -1, 1, 0);
			}
		}
	}
}

void func_65()//Position - 0x120B
{
	int iVar0;
	
	if (Local_112.f_45 == 0)
	{
		if (BitTest(Local_112.f_1, 4))
		{
			iVar0 = func_67(26806, -1);
			if (iVar0 < 4)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_47("CAS_LW_VOUCH", -1);
					iVar0++;
					func_66(26806, iVar0, -1);
					MISC::CLEAR_BIT(&(Local_112.f_1), 4);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_112.f_1), 4);
			}
		}
	}
}

void func_66(int iParam0, int iParam1, int iParam2)//Position - 0x1277
{
	if (iParam2 == -1)
	{
		iParam2 = func_18();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	STATS::_SET_PACKED_STAT_INT(iParam0, iParam1, iParam2);
}

int func_67(int iParam0, int iParam1)//Position - 0x129F
{
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	return STATS::_GET_PACKED_STAT_INT(iParam0, iParam1);
}

void func_68()//Position - 0x12BB
{
	if (BitTest(Local_112.f_1, 2))
	{
		if (!func_72(&(Local_112.f_43)))
		{
			func_71(&(Local_112.f_43), 0, 0);
		}
		else if (func_70(&(Local_112.f_43), 40000, 0) || (!HUD::IS_HELP_MESSAGE_ON_SCREEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()))
		{
			MISC::CLEAR_BIT(&(Local_112.f_1), 2);
			func_69(&(Local_112.f_43));
		}
	}
}

void func_69(var uParam0)//Position - 0x1321
{
	uParam0->f_1 = 0;
}

int func_70(var uParam0, int iParam1, bool bParam2)//Position - 0x132E
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_71(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0, bool bParam1, bool bParam2)//Position - 0x138C
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_72(var uParam0)//Position - 0x13D1
{
	return uParam0->f_1;
}

void func_73()//Position - 0x13DD
{
	if (Global_1648034.f_1156 >= 30000)
	{
		if (Local_110.f_0 != PLAYER::PLAYER_ID())
		{
			func_74(1);
		}
	}
}

void func_74(int iParam0)//Position - 0x1400
{
	struct<3> Var0;
	int iVar1;
	
	if (Local_110.f_0 != func_8() || iParam0 == 1)
	{
		if (Local_110.f_0 != PLAYER::PLAYER_ID() || iParam0 == 1)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1109.16f, 228.4484f, -50.63083f, 1112.186f, 228.9841f, -48.13083f, 2.75f, false, true, 0))
			{
				if (!BitTest(Local_112.f_1, 1))
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					func_75(iVar1, &Var0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), Var0, 1f, -1, 0.25f, false, 40000f);
					MISC::SET_BIT(&(Local_112.f_1), 1);
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
			{
				if (BitTest(Local_112.f_1, 1))
				{
					MISC::CLEAR_BIT(&(Local_112.f_1), 1);
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
		{
			if (BitTest(Local_112.f_1, 1))
			{
				MISC::CLEAR_BIT(&(Local_112.f_1), 1);
			}
		}
	}
	else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
	{
		if (BitTest(Local_112.f_1, 1))
		{
			MISC::CLEAR_BIT(&(Local_112.f_1), 1);
		}
	}
}

void func_75(int iParam0, var uParam1)//Position - 0x1556
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1114.812f, 226.8861f, -50.8408f };
			break;
		
		case 1:
			*uParam1 = { 1115.391f, 222.8374f, -50.4301f };
			break;
		
		case 2:
			*uParam1 = { 1111.762f, 223.4791f, -50.8408f };
			break;
		
		case 3:
			*uParam1 = { 1110.287f, 222.9306f, -50.8408f };
			break;
		
		case 4:
			*uParam1 = { 1108.957f, 223.4897f, -50.8408f };
			break;
		
		case 5:
			*uParam1 = { 1106.042f, 226.8098f, -50.8408f };
			break;
	}
}

void func_76()//Position - 0x160D
{
	if (func_42(24))
	{
		Local_112.f_23 = func_79();
		STREAMING::REQUEST_ANIM_DICT(Local_112.f_23);
		if (STREAMING::HAS_ANIM_DICT_LOADED(Local_112.f_23))
		{
			Local_112.f_10 = Local_110.f_1;
			func_78(14);
			func_77(24);
		}
	}
}

void func_77(bool bParam0)//Position - 0x1654
{
	if (BitTest(Local_112.f_0, bParam0))
	{
		MISC::CLEAR_BIT(&Local_112, bParam0);
	}
}

void func_78(int iParam0)//Position - 0x166E
{
	Local_112.f_45 = iParam0;
}

char* func_79()//Position - 0x167D
{
	char* sVar0;
	
	if (func_80(PLAYER::PLAYER_PED_ID()))
	{
		sVar0 = "ANIM_CASINO_A@AMB@CASINO@GAMES@LUCKY7WHEEL@FEMALE";
	}
	else
	{
		sVar0 = "ANIM_CASINO_A@AMB@CASINO@GAMES@LUCKY7WHEEL@MALE";
	}
	return sVar0;
}

int func_80(int iParam0)//Position - 0x169F
{
	if (((((((((ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_weed_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_forgery_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_cocaine_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_counterfeit_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("s_f_y_sweatshop_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_f_y_bevhills_04")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_f_y_genhot_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("a_f_y_scdressy_01")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("ig_tracydisanto"))
	{
		return 1;
	}
	return 0;
}

void func_81()//Position - 0x175D
{
	if (func_42(0))
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		HUD::SET_FRONTEND_ACTIVE(false);
		func_82();
	}
}

void func_82()//Position - 0x177A
{
	Global_23011.f_6 = 1;
}

void func_83()//Position - 0x1788
{
	if (func_84())
	{
		CAM::_0x79C0E43EB9B944E2(5891389);
	}
}

int func_84()//Position - 0x17A0
{
	if (Local_112.f_45 >= 5 && Local_112.f_45 <= 12)
	{
		return 1;
	}
	if (Local_112.f_45 == 13)
	{
		return 1;
	}
	if (Local_112.f_45 == 4)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_85()//Position - 0x1805
{
	if (Local_112.f_17 < 6 && Local_112.f_17 != -1)
	{
		if (!func_72(&(Local_112.f_35)))
		{
			func_89();
			func_88();
			func_71(&(Local_112.f_35), 0, 0);
		}
		else if (func_70(&(Local_112.f_35), 250, 0) && !func_72(&(Local_112.f_37)))
		{
			func_87();
			if (Local_112.f_17 != 5)
			{
				func_86();
			}
			func_71(&(Local_112.f_37), 0, 0);
			Local_112.f_17++;
		}
		else if (func_72(&(Local_112.f_37)))
		{
			if (func_70(&(Local_112.f_37), 250, 0))
			{
				func_69(&(Local_112.f_37));
				func_69(&(Local_112.f_35));
			}
		}
	}
	else if (Local_112.f_17 == 6)
	{
		Local_112.f_17 = -1;
	}
}

void func_86()//Position - 0x18CE
{
	ENTITY::CREATE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 5f, joaat("vw_prop_vw_jackpot_on"), false);
}

void func_87()//Position - 0x18F0
{
	ENTITY::CREATE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 2f, joaat("vw_prop_vw_luckylight_on"), false);
}

void func_88()//Position - 0x1912
{
	ENTITY::REMOVE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 5f, joaat("vw_prop_vw_jackpot_on"), false);
}

void func_89()//Position - 0x1934
{
	ENTITY::REMOVE_MODEL_HIDE(1111.052f, 229.849f, -50.641f, 2f, joaat("vw_prop_vw_luckylight_on"), false);
}

void func_90()//Position - 0x1956
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 174:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
				if (iVar2 == 2057463666)
				{
					if (Global_1663509.f_802)
					{
						return;
					}
					func_91(iVar0);
				}
				break;
		}
		iVar0++;
	}
}

void func_91(int iParam0)//Position - 0x19B5
{
	struct<4> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_110.f_1 = Var0.f_2;
		}
		if (PLAYER::PLAYER_ID() != Var0.f_1 && Var0.f_3)
		{
			func_41(24);
		}
	}
}

void func_92()//Position - 0x19F7
{
	switch (Local_112.f_45)
	{
		case 0:
			func_878();
			if (Local_112.f_17 == -1)
			{
				if (!func_42(23))
				{
					func_87();
					func_41(23);
				}
			}
			if (!func_877())
			{
				if (!func_42(0) && !func_26(1, 1))
				{
					func_876();
					if (func_873())
					{
						func_872(PLAYER::PLAYER_ID(), 1);
						func_871();
						func_858();
						func_41(0);
						func_78(1);
					}
				}
				else
				{
					func_856();
				}
			}
			if (!BitTest(Local_112.f_1, 0) && ENTITY::DOES_ENTITY_EXIST(Local_112.f_72))
			{
				if (Local_110.f_1 != Local_112.f_14 && Local_110.f_0 == func_8())
				{
					ENTITY::SET_ENTITY_ROTATION(Local_112.f_72, 0f, -func_855(Local_110.f_1), 0f, 2, true);
					Local_112.f_14 = Local_110.f_1;
					MISC::SET_BIT(&(Local_112.f_1), 0);
				}
				else if (Local_110.f_0 == PLAYER::PLAYER_ID())
				{
					MISC::SET_BIT(&(Local_112.f_1), 0);
				}
			}
			break;
		
		case 1:
			if (Local_110.f_0 == PLAYER::PLAYER_ID())
			{
				func_854(PLAYER::PLAYER_ID(), 1);
				func_853(0);
				if (!BitTest(Local_112.f_1, 3))
				{
					func_71(&(Local_112.f_41), 0, 0);
					func_78(2);
				}
				else
				{
					func_78(3);
				}
			}
			else if (func_70(&(Local_112.f_29), 1500, 0))
			{
				func_78(17);
			}
			break;
		
		case 2:
			func_843();
			break;
		
		case 3:
			func_835();
			if (func_42(8))
			{
				func_78(4);
			}
			break;
		
		case 4:
			func_835();
			if (func_42(9))
			{
				func_78(5);
			}
			break;
		
		case 5:
			func_834();
			break;
		
		case 7:
			func_833();
			break;
		
		case 6:
			func_828();
			break;
		
		case 8:
			func_827();
			func_823();
			if (func_42(5))
			{
				Local_112.f_10 = Local_110.f_1;
				if (!func_822(PLAYER::PLAYER_ID()))
				{
					Local_112.f_484 = NETWORK::GET_CLOUD_TIME_AS_INT();
					func_821(Local_112.f_10, 1);
					func_41(21);
					func_820(1);
				}
				func_71(&(Local_112.f_33), 0, 0);
				func_78(13);
				if (func_39("LUCK_WHEEL_SPIN") || func_39("LUCK_W_SPIN_PC"))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			break;
		
		case 13:
			if (func_72(&(Local_112.f_33)))
			{
				if (func_70(&(Local_112.f_33), 190, 0))
				{
					func_809(func_818(func_819(PLAYER::PLAYER_ID())), 0, 0, 1, 0);
					func_69(&(Local_112.f_33));
					func_808(173);
					Local_112.f_478 = 1f;
					func_78(9);
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						Local_110.f_1 = func_807(Local_110.f_0);
					}
				}
			}
			break;
		
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_72) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_112.f_72))
			{
				func_805();
			}
			func_804(Local_112.f_478);
			func_803(Local_112.f_478);
			if (func_800(func_818(func_819(PLAYER::PLAYER_ID())), 0, 0))
			{
				func_809(func_799(func_819(PLAYER::PLAYER_ID())), 0, 1, 1, 0);
			}
			if (func_798(0))
			{
				func_41(14);
			}
			if ((func_42(14) && ENTITY::DOES_ENTITY_EXIST(Local_112.f_72)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_112.f_72))
			{
				func_780(0);
			}
			break;
		
		case 10:
			if (Local_112.f_481 != -1)
			{
				AUDIO::RELEASE_SOUND_ID(Local_112.f_481);
				Local_112.f_481 = -1;
			}
			func_77(14);
			if (func_800(func_779(), 0, 1))
			{
				if (func_778())
				{
					func_776();
				}
				func_77(17);
				func_69(&(Local_112.f_74.f_385));
				func_78(11);
			}
			break;
		
		case 11:
			if (func_179())
			{
				func_41(21);
				func_168();
				func_158();
				Local_112.f_484 = NETWORK::GET_CLOUD_TIME_AS_INT();
				func_78(16);
			}
			break;
		
		case 12:
			if (func_42(10))
			{
				if (func_800(14, 0, 1))
				{
					if (func_778())
					{
						func_776();
					}
					func_77(10);
					func_78(17);
				}
			}
			else
			{
				func_78(17);
			}
			break;
		
		case 14:
			func_152();
			break;
		
		case 15:
			func_151();
			break;
		
		case 16:
			func_136();
			break;
		
		case 17:
			func_93();
			break;
	}
}

void func_93()//Position - 0x1E2A
{
	struct<387> Var0;
	
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	if (func_39("LUCK_WHEEL_SPIN") || func_39("LUCK_W_SPIN_PC"))
	{
		HUD::CLEAR_HELP(true);
	}
	if (PLAYER::PLAYER_ID() == Local_110.f_0)
	{
		func_128();
		func_114(PLAYER::PLAYER_ID(), 1, 0);
		HUD::_THEFEED_DISPLAY_LOADING_SCREEN_TIPS();
		if (Local_112.f_74.f_376 != 0)
		{
			if (Local_112.f_74.f_376 == 1)
			{
				func_107(func_112());
			}
			Local_112.f_74.f_376 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_73) && Local_112.f_73 != Global_1966140)
		{
			VEHICLE::DELETE_VEHICLE(&(Local_112.f_73));
		}
		else
		{
			Local_112.f_73 = -1;
		}
		if (func_106())
		{
			func_105();
		}
		HUD::DISPLAY_RADAR(true);
	}
	func_104(1);
	func_101(1, -1);
	func_854(PLAYER::PLAYER_ID(), 0);
	if (func_42(0))
	{
		func_114(PLAYER::PLAYER_ID(), 1, 0);
	}
	StringCopy(&(Local_112.f_461), "", 64);
	Local_112.f_477 = 0;
	Local_112.f_478 = 0f;
	Local_112.f_47 = -1;
	Var0.f_1 = 363;
	Local_112.f_74 = { Var0 };
	func_78(0);
	func_97();
	func_96();
	func_820(0);
	func_69(&(Local_112.f_33));
	func_69(&(Local_112.f_29));
	func_69(&(Local_112.f_41));
	func_95(-1);
	func_94(0);
}

void func_94(bool bParam0)//Position - 0x1F70
{
	if (BitTest(Local_112.f_485, bParam0))
	{
		MISC::CLEAR_BIT(&(Local_112.f_485), bParam0);
	}
}

void func_95(int iParam0)//Position - 0x1F90
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		Local_111[PLAYER::PLAYER_ID() /*5*/].f_4 = iParam0;
	}
}

void func_96()//Position - 0x1FAF
{
	func_872(PLAYER::PLAYER_ID(), 0);
}

void func_97()//Position - 0x1FC0
{
	Local_112.f_0 = 0;
	func_100(5000);
	Local_112.f_2 = 0;
	Local_112.f_3 = 0;
	Local_112.f_4 = 0;
	Local_112.f_5 = 0;
	Local_112.f_6 = 0;
	Local_112.f_8 = 0;
	Local_112.f_9 = 0;
	func_99(-1);
	Local_112.f_11 = -1;
	Local_112.f_12 = 0;
	Local_112.f_13 = 0;
	Local_112.f_15 = 0;
	Local_112.f_18 = 0f;
	Local_112.f_19 = 0f;
	Local_112.f_16 = 0;
	Local_112.f_20 = 0f;
	Local_112.f_21 = 0f;
	func_95(-1);
	Local_112.f_46 = 1;
	func_98(-1);
	func_69(&(Local_112.f_27));
	func_69(&(Local_112.f_29));
	func_69(&(Local_112.f_31));
	func_69(&(Local_112.f_39));
}

void func_98(int iParam0)//Position - 0x206C
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if (Local_111[PLAYER::PLAYER_ID() /*5*/] != iParam0)
		{
			Local_111[PLAYER::PLAYER_ID() /*5*/] = iParam0;
		}
	}
}

void func_99(int iParam0)//Position - 0x2096
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if (Local_111[PLAYER::PLAYER_ID() /*5*/].f_2 != iParam0)
		{
			Local_111[PLAYER::PLAYER_ID() /*5*/].f_2 = iParam0;
		}
	}
}

void func_100(int iParam0)//Position - 0x20C4
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if (Local_111[PLAYER::PLAYER_ID() /*5*/].f_3 != iParam0)
		{
			Local_111[PLAYER::PLAYER_ID() /*5*/].f_3 = iParam0;
		}
	}
}

void func_101(bool bParam0, int iParam1)//Position - 0x20F2
{
	int iVar0;
	
	if (!func_103(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_23150.f_8808)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_23150.f_8808 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_23150.f_6019[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23150.f_6019[iVar0] = 0;
	}
	if (Global_23150.f_6005[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23150.f_6005[iVar0] = 0;
	}
	if (Global_23150.f_6012[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23150.f_6012[iVar0] = 0;
	}
	if (bParam0)
	{
		func_102(&(Global_23150.f_6051[iVar0 /*10*/]));
		Global_23150.f_6112[iVar0] = 0;
	}
	else
	{
		Global_23150.f_6112[iVar0] = 0;
	}
}

void func_102(int* iParam0)//Position - 0x21B0
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_103(var uParam0, bool bParam1, int iParam2)//Position - 0x21DC
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_23150.f_6112[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_23150.f_6112[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_23150.f_6112[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

void func_104(bool bParam0)//Position - 0x2279
{
	if (!AUDIO::HAS_SOUND_FINISHED(Local_112.f_480))
	{
		AUDIO::STOP_SOUND(Local_112.f_480);
		AUDIO::RELEASE_SOUND_ID(Local_112.f_480);
		Local_112.f_480 = -1;
	}
	if (!bParam0)
	{
		if (!AUDIO::HAS_SOUND_FINISHED(Local_112.f_482))
		{
			AUDIO::STOP_SOUND(Local_112.f_482);
			AUDIO::RELEASE_SOUND_ID(Local_112.f_482);
			Local_112.f_482 = -1;
		}
		if (!AUDIO::HAS_SOUND_FINISHED(Local_112.f_483))
		{
			AUDIO::STOP_SOUND(Local_112.f_483);
			AUDIO::RELEASE_SOUND_ID(Local_112.f_483);
			Local_112.f_483 = -1;
		}
	}
}

void func_105()//Position - 0x2302
{
	if (Global_2703735.f_833.f_10)
	{
		Global_2703735.f_833.f_10 = 0;
	}
}

bool func_106()//Position - 0x2320
{
	return Global_2703735.f_833.f_10;
}

void func_107(int iParam0)//Position - 0x2331
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_111())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_110(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4534105[iParam0 /*85*/].f_66);
		}
		func_108(&(Global_4534105[iParam0 /*85*/]));
	}
}

void func_108(var uParam0)//Position - 0x2385
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_109(&(uParam0->f_14));
	func_109(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_109(var uParam0)//Position - 0x2491
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_110(int iParam0)//Position - 0x24D9
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

int func_111()//Position - 0x2504
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

int func_112()//Position - 0x251B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_113(iVar0) != 2147483647)
		{
			if (func_110(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_113(int iParam0)//Position - 0x2556
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66;
	}
	return -1;
}

void func_114(int iParam0, bool bParam1, int iParam2)//Position - 0x257D
{
	if (func_127(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		func_115(iParam0, bParam1, iParam2, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, !bParam1);
	}
}

void func_115(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x25AA
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_126())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_124())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_16(PLAYER::PLAYER_ID(), 0) && !func_123()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2689235[iParam0 /*453*/].f_252 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_120(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_119(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iVar27))
				{
					PED::FINALIZE_HEAD_BLEND(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_118();
					func_117();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2689235[iParam0 /*453*/].f_253 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2667225.f_2681)
				{
					Global_2667225.f_2681 = 0;
				}
			}
			else
			{
				if (!func_119(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_116(Global_4718592.f_168757))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1575033)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_116(int iParam0)//Position - 0x2A38
{
	return iParam0 == 17;
}

void func_117()//Position - 0x2A45
{
	struct<3> Var0;
	
	Global_2703735.f_910 = 0;
	Global_2703735.f_911 = 0;
	Global_2703735.f_912 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2703735.f_917 = -1;
	Global_2703735.f_918 = 0;
	Global_2667225.f_2692 = { Var0 };
}

void func_118()//Position - 0x2A92
{
	Global_2667225.f_702 = 0;
	Global_2667225.f_2735 = 0;
	Global_2667225.f_515 = 0;
	Global_2667225.f_606 = 0;
	Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
	Global_2667225.f_2690 = 0;
}

int func_119(int iParam0)//Position - 0x2AD0
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("SCRIPT_TASK_ENTER_VEHICLE"));
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_120(bool bParam0, int iParam1, int iParam2)//Position - 0x2B01
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_122();
			}
			else if (!BitTest(Global_2621446.f_67, 1))
			{
				if (BitTest(Global_2621446.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(iVar1, Global_2621446.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
		if (func_16(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_121(joaat("mpply_is_char_spectating"), bParam0);
	}
}

void func_121(int iParam0, bool bParam1)//Position - 0x2BD1
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_122()//Position - 0x2BED
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!BitTest(Global_2621446.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2621446.f_58[iVar0] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}
}

bool func_123()//Position - 0x2C45
{
	return BitTest(Global_2621446, 3);
}

int func_124()//Position - 0x2C53
{
	if (func_125() == 0)
	{
		return 1;
	}
	return 0;
}

int func_125()//Position - 0x2C68
{
	return Global_1574632.f_18;
}

int func_126()//Position - 0x2C76
{
	if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_833, 2) && !Global_2715699.f_2846.f_216 == -1)
	{
		return 1;
	}
	return 0;
}

int func_127(int iParam0)//Position - 0x2CA7
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_128()//Position - 0x2CC8
{
	func_129(0);
}

void func_129(bool bParam0)//Position - 0x2CD5
{
	if (bParam0)
	{
		func_135();
		if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
		{
			MISC::SET_BIT(&Global_8137, 16);
		}
		Global_20266.f_1 = 1;
		if (func_52(0))
		{
			func_130(0);
		}
	}
	else if (Global_20266.f_1 == 1)
	{
		if (!Global_20266.f_1 == 0)
		{
			Global_20266.f_1 = 3;
		}
	}
}

void func_130(int iParam0)//Position - 0x2D38
{
	if (func_134())
	{
		return;
	}
	if (Global_20464)
	{
		if (func_133())
		{
			func_132(1, 1);
		}
		else
		{
			func_132(0, 0);
		}
	}
	if (Global_20266.f_1 == 10 || Global_20266.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8137, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_21605 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8136, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8136, 30);
	}
	if (!func_131())
	{
		Global_20266.f_1 = 3;
	}
}

int func_131()//Position - 0x2DC2
{
	if (Global_20266.f_1 == 1 || Global_20266.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_132(bool bParam0, bool bParam1)//Position - 0x2DE9
{
	if (bParam0)
	{
		if (func_52(0))
		{
			Global_20464 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20203);
			}
			Global_20194 = { Global_20212[Global_20211 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
	else if (Global_20464 == 1)
	{
		Global_20464 = 0;
		Global_20194 = { Global_20219[Global_20211 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20203);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20194);
		}
	}
}

bool func_133()//Position - 0x2E5D
{
	return BitTest(Global_1958711, 5);
}

bool func_134()//Position - 0x2E6B
{
	return BitTest(Global_1958711, 19);
}

void func_135()//Position - 0x2E7A
{
	if (Global_20266.f_1 == 9 || Global_20266.f_1 == 10)
	{
		Global_21658 = 0;
		Global_21654 = 1;
	}
}

void func_136()//Position - 0x2EA3
{
	if (func_111())
	{
		if (func_139(&(Local_112.f_499), 147735386, (Local_112.f_484 + 86400)))
		{
			if (Local_112.f_499 == 2)
			{
				func_137(0);
				func_78(17);
			}
			Local_112.f_499 = 0;
		}
	}
	else
	{
		func_137(0);
		func_78(17);
	}
}

void func_137(bool bParam0)//Position - 0x2EFF
{
	int iVar0;
	
	func_138(joaat("mpply_lucky_wheel_usage"), (Local_112.f_484 + 86400));
	if (!bParam0)
	{
		func_24(8352, (Local_112.f_484 + 86400), -1, 1, 0);
	}
	iVar0 = func_21(10411, -1, 0);
	func_24(10411, iVar0 + 1, -1, 1, 0);
	Global_2725353 = 1;
}

void func_138(int iParam0, int iParam1)//Position - 0x2F54
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

bool func_139(var uParam0, int iParam1, int iParam2)//Position - 0x2F70
{
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (func_112() != -1)
		{
			return 0;
		}
		if (func_147(78225582, 1888666031, iParam1, 1668906031, iParam2, 0, iParam2, 1, 0, 3))
		{
			if (func_142())
			{
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else
		{
			*uParam0 = 3;
		}
	}
	else if (*uParam0 == 1)
	{
		if (func_141(func_112()))
		{
			if (func_140(func_112()) == 2)
			{
				*uParam0 = 2;
			}
			else
			{
				*uParam0 = 3;
			}
			func_107(func_112());
		}
	}
	return *uParam0 != 1;
}

int func_140(int iParam0)//Position - 0x3014
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x303D
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4534105[iParam0 /*85*/].f_66.f_2 != 1;
	}
	return 0;
}

int func_142()//Position - 0x3068
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_111())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_112();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			if (func_146(Global_4534105[iVar2 /*85*/].f_66.f_6, Global_4534105[iVar2 /*85*/].f_66.f_4, Global_4534105[iVar2 /*85*/].f_66.f_1) == 1)
			{
				Global_4535607 = 1;
			}
			return 0;
		}
		if (Global_2726699)
		{
			if (Global_4534105[iVar2 /*85*/].f_66.f_6 == 1067618600 || Global_4534105[iVar2 /*85*/].f_66.f_6 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_113(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar3))
		{
			Global_4534105[iVar2 /*85*/].f_66.f_13 = 1;
			Global_4534105[iVar2 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar2 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4534105[iVar2 /*85*/].f_66.f_8 = 1;
				Global_4534105[iVar2 /*85*/].f_66.f_12 = 1;
			}
			Global_4534105[iVar2 /*85*/].f_66.f_18 = 0;
			if (bVar0 || iVar1)
			{
				func_143(Global_4534105[iVar2 /*85*/], iVar2);
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	return 0;
}

void func_143(struct<67> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x31C8
{
	struct<3> Var0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.f_0 = 1417969358;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam19;
	iVar1 = func_145(Var0.f_1);
	if ((Global_262145.f_24104 && !Global_262145.f_24105) && !Global_262145.f_24106)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_144();
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 36, iVar1);
	}
}

void func_144()//Position - 0x325A
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_145(int iParam0)//Position - 0x326A
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

int func_146(int iParam0, int iParam1, int iParam2)//Position - 0x3282
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
			case -1100963799:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
			case -1027218631:
			case -1398318418:
			case 1652884147:
			case -57868256:
			case -1216489292:
			case -46622315:
			case -352356931:
			case -990286235:
			case 563463121:
			case 1734805203:
			case 941287179:
			case -1186079845:
			case -1985150258:
			case -1127021384:
			case -109201286:
			case 312105838:
			case -661030418:
			case 1301046174:
			case -1586170317:
			case 393059668:
			case 23796958:
			case -1077156170:
			case 1780666425:
			case -2043695058:
			case -1922554349:
			case 1287308202:
			case 691372038:
			case 1480707108:
			case 1512499951:
			case 562283735:
			case -154732333:
			case -1362660491:
			case 645708827:
			case 767907967:
			case -1970151306:
			case 718859568:
			case -1955564771:
			case 892388724:
			case -1426920838:
			case 1349151477:
			case 1620609399:
			case 1961641934:
			case 210955503:
			case -59668082:
			case 1736933716:
			case -1468524125:
			case 111573502:
			case 1525644423:
			case 968073639:
			case 1577781788:
			case -934465332:
			case -1194253122:
			case -212607085:
			case -815546555:
			case 1048226110:
			case 569170531:
			case -856006867:
			case 848090538:
			case -47546905:
			case -293060240:
			case 463142405:
			case 1550217370:
			case -664597565:
			case 599804707:
			case 1052472386:
			case -2130199671:
			case -1227654538:
			case 1864522104:
			case 215608230:
			case -876012764:
			case -722894325:
			case 1407278493:
			case -1579394494:
			case -27443911:
			case 1179783540:
			case 923419301:
			case -308826175:
			case 603298940:
			case -12619854:
			case -311112675:
			case 870439158:
			case -974288740:
			case -4138654:
			case -1180954122:
			case -1918051016:
			case 844330594:
			case 1934825517:
			case 1852024236:
			case 2099238988:
			case 1952643559:
			case -1172900789:
			case -2015399333:
			case -1574795641:
			case -961034881:
			case 1135468152:
			case 1265272476:
			case -634726636:
			case 696556762:
			case 443347049:
			case 403506509:
			case -883876414:
			case -1064150715:
			case -1387253055:
			case -716963152:
			case 1138089938:
			case -561012053:
			case 1240683675:
			case 1241904665:
			case -494565059:
			case 827308208:
			case -1857685192:
			case 1698417709:
			case -2017925037:
			case 1057653594:
			case 1810506918:
			case 451427308:
			case 824622151:
			case 1253978276:
			case -1576080766:
			case 1508411869:
			case 1428501742:
			case -1918967151:
			case 1261538664:
			case 1180397655:
			case 1414674366:
			case 261460130:
			case -2027658376:
			case 1668610896:
			case -2032529561:
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
		switch (iParam1)
		{
			case -319306689:
			case -466527264:
			case 1925965142:
			case 592152676:
			case 2035612943:
			case 1568659720:
			case -1224479447:
			case 1220095570:
			case 2050320631:
			case 592672421:
			case -842062976:
			case 14658715:
			case -604793592:
			case -823426392:
			case -1401862980:
			case -173354274:
			case 409533976:
			case -1472522337:
			case 542574408:
			case -1261799063:
			case 784631574:
			case -2027479156:
			case -837690641:
			case -1029672338:
			case -1503749970:
			case -1843409092:
			case 1669058563:
			case 2102747615:
			case 2030771998:
			case 1708747007:
			case 645293860:
			case -818859193:
			case 300796227:
			case -1999832346:
			case 1058055395:
			case -321151125:
			case 2078731875:
			case 1280785534:
			case -1878824774:
			case 247992227:
			case -229237358:
			case -1123183389:
			case 1814197076:
			case 713955548:
			case -2026544524:
			case -719580138:
			case -163417439:
			case -550417574:
			case 208223429:
			case -1433071892:
			case 761999406:
			case -1101941763:
			case 1748245957:
			case 1036772696:
			case -1384648535:
			case -800037808:
			case -695852120:
			case 77355315:
			case 2097889166:
			case 1707592130:
			case 1628412596:
				return 1;
				break;
			
			case 1775876058:
			case -518651910:
				return 2;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_147(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x386A
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_111())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_112();
	if (iVar1 == -1)
	{
		if (!func_149(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_148(iParam1))
		{
			Var2.f_0 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2.f_0 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4534105[iVar1 /*85*/].f_66.f_1 = Var2.f_2;
		Global_4534105[iVar1 /*85*/].f_66.f_15 = Var2.f_0;
		Global_4534105[iVar1 /*85*/].f_66.f_16 = Var2.f_1;
		if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_148(int iParam0)//Position - 0x398C
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, var uParam5)//Position - 0x3A1B
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_111())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		if (Global_4534105[iVar1 /*85*/].f_66.f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4534105[iVar1 /*85*/].f_66.f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (unk_0xE547E9114277098F())
		{
			NETSHOPPING::NET_GAMESERVER_BASKET_END();
		}
	}
	if (bVar0 || NETSHOPPING::NET_GAMESERVER_BASKET_START(&iVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_150(iVar3, iParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0, bVar0);
		return 1;
	}
	return 0;
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10)//Position - 0x3B18
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4534105[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_111())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4534105[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4534105[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4534105[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4534105[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4534105[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4534105[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4534105[iVar0 /*85*/].f_66 = iParam0;
			Global_4534105[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4534105[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4534105[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4534105[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4534105[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4534105[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4534105[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4535592 = 0;
			if (bParam6)
			{
				Global_4534105[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && bParam10)
			{
				func_143(Global_4534105[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_151()//Position - 0x3C55
{
	if (func_798(1))
	{
		func_41(14);
	}
	if ((func_42(14) && ENTITY::DOES_ENTITY_EXIST(Local_112.f_72)) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_112.f_72))
	{
		func_780(1);
	}
}

void func_152()//Position - 0x3C95
{
	if (func_822(Local_110.f_0))
	{
		func_98(func_807(Local_110.f_0));
		func_100(func_157(Local_110.f_0));
		Local_112.f_15 = func_156();
		Local_112.f_8 = func_155();
		func_153();
		func_78(15);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_110.f_1 = func_807(Local_110.f_0);
		}
	}
}

void func_153()//Position - 0x3CE7
{
	char* sVar0;
	
	sVar0 = func_154(func_819(Local_110.f_0));
	ENTITY::SET_ENTITY_ROTATION(Local_112.f_72, 0f, 0f, 0f, 2, true);
	ENTITY::PLAY_ENTITY_ANIM(Local_112.f_72, sVar0, Local_112.f_23, 1000f, false, true, false, 0f, 2);
	ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_112.f_72);
}

char* func_154(int iParam0)//Position - 0x3D2D
{
	char* sVar0;
	
	sVar0 = "null";
	switch (iParam0)
	{
		case 0:
			if (func_80(PLAYER::PLAYER_PED_ID()))
			{
				switch (Local_112.f_10)
				{
					case 0:
						return "spinningwheel_low_effort_01_wheel";
						break;
					
					case 1:
						return "spinningwheel_low_effort_02_wheel";
						break;
					
					case 2:
						return "spinningwheel_low_effort_03_wheel";
						break;
					
					case 3:
						return "spinningwheel_low_effort_04_wheel";
						break;
					
					case 4:
						return "spinningwheel_low_effort_05_wheel";
						break;
					
					case 5:
						return "spinningwheel_low_effort_06_wheel";
						break;
					
					case 6:
						return "spinningwheel_low_effort_07_wheel";
						break;
					
					case 7:
						return "spinningwheel_low_effort_08_wheel";
						break;
					
					case 8:
						return "spinningwheel_low_effort_09_wheel";
						break;
					
					case 9:
						return "spinningwheel_low_effort_10_wheel";
						break;
					
					case 10:
						return "spinningwheel_low_effort_11_wheel";
						break;
					
					case 11:
						return "spinningwheel_low_effort_12_wheel";
						break;
					
					case 12:
						return "spinningwheel_low_effort_13_wheel";
						break;
					
					case 13:
						return "spinningwheel_low_effort_14_wheel";
						break;
					
					case 14:
						return "spinningwheel_low_effort_15_wheel";
						break;
					
					case 15:
						return "spinningwheel_low_effort_16_wheel";
						break;
					
					case 16:
						return "spinningwheel_low_effort_17_wheel";
						break;
					
					case 17:
						return "spinningwheel_low_effort_18_wheel";
						break;
					
					case 18:
						return "spinningwheel_low_effort_19_wheel";
						break;
					
					case 19:
						return "spinningwheel_low_effort_20_wheel";
						break;
				}
			}
			else
			{
				switch (Local_112.f_10)
				{
					case 0:
						return "spinningwheel_low_effort_01";
						break;
					
					case 1:
						return "spinningwheel_low_effort_02";
						break;
					
					case 2:
						return "spinningwheel_low_effort_03";
						break;
					
					case 3:
						return "spinningwheel_low_effort_04";
						break;
					
					case 4:
						return "spinningwheel_low_effort_05";
						break;
					
					case 5:
						return "spinningwheel_low_effort_06";
						break;
					
					case 6:
						return "spinningwheel_low_effort_07";
						break;
					
					case 7:
						return "spinningwheel_low_effort_08";
						break;
					
					case 8:
						return "spinningwheel_low_effort_09";
						break;
					
					case 9:
						return "spinningwheel_low_effort_10";
						break;
					
					case 10:
						return "spinningwheel_low_effort_11";
						break;
					
					case 11:
						return "spinningwheel_low_effort_12";
						break;
					
					case 12:
						return "spinningwheel_low_effort_13";
						break;
					
					case 13:
						return "spinningwheel_low_effort_14";
						break;
					
					case 14:
						return "spinningwheel_low_effort_15";
						break;
					
					case 15:
						return "spinningwheel_low_effort_16";
						break;
					
					case 16:
						return "spinningwheel_low_effort_17";
						break;
					
					case 17:
						return "spinningwheel_low_effort_18";
						break;
					
					case 18:
						return "spinningwheel_low_effort_19";
						break;
					
					case 19:
						return "spinningwheel_low_effort_20";
						break;
					}
			}
			break;
		
		case 1:
			if (func_80(PLAYER::PLAYER_PED_ID()))
			{
				switch (Local_112.f_10)
				{
					case 0:
						return "spinningwheel_med_effort_20_wheel";
						break;
					
					case 1:
						return "spinningwheel_med_effort_01_wheel";
						break;
					
					case 2:
						return "spinningwheel_med_effort_02_wheel";
						break;
					
					case 3:
						return "spinningwheel_med_effort_03_wheel";
						break;
					
					case 4:
						return "spinningwheel_med_effort_04_wheel";
						break;
					
					case 5:
						return "spinningwheel_med_effort_05_wheel";
						break;
					
					case 6:
						return "spinningwheel_med_effort_06_wheel";
						break;
					
					case 7:
						return "spinningwheel_med_effort_07_wheel";
						break;
					
					case 8:
						return "spinningwheel_med_effort_08_wheel";
						break;
					
					case 9:
						return "spinningwheel_med_effort_09_wheel";
						break;
					
					case 10:
						return "spinningwheel_med_effort_10_wheel";
						break;
					
					case 11:
						return "spinningwheel_med_effort_11_wheel";
						break;
					
					case 12:
						return "spinningwheel_med_effort_12_wheel";
						break;
					
					case 13:
						return "spinningwheel_med_effort_13_wheel";
						break;
					
					case 14:
						return "spinningwheel_med_effort_14_wheel";
						break;
					
					case 15:
						return "spinningwheel_med_effort_15_wheel";
						break;
					
					case 16:
						return "spinningwheel_med_effort_16_wheel";
						break;
					
					case 17:
						return "spinningwheel_med_effort_17_wheel";
						break;
					
					case 18:
						return "spinningwheel_med_effort_18_wheel";
						break;
					
					case 19:
						return "spinningwheel_med_effort_19_wheel";
						break;
				}
			}
			else
			{
				switch (Local_112.f_10)
				{
					case 0:
						return "spinningwheel_med_effort_01";
						break;
					
					case 1:
						return "spinningwheel_med_effort_02";
						break;
					
					case 2:
						return "spinningwheel_med_effort_03";
						break;
					
					case 3:
						return "spinningwheel_med_effort_04";
						break;
					
					case 4:
						return "spinningwheel_med_effort_05";
						break;
					
					case 5:
						return "spinningwheel_med_effort_06";
						break;
					
					case 6:
						return "spinningwheel_med_effort_07";
						break;
					
					case 7:
						return "spinningwheel_med_effort_08";
						break;
					
					case 8:
						return "spinningwheel_med_effort_09";
						break;
					
					case 9:
						return "spinningwheel_med_effort_10";
						break;
					
					case 10:
						return "spinningwheel_med_effort_11";
						break;
					
					case 11:
						return "spinningwheel_med_effort_12";
						break;
					
					case 12:
						return "spinningwheel_med_effort_13";
						break;
					
					case 13:
						return "spinningwheel_med_effort_14";
						break;
					
					case 14:
						return "spinningwheel_med_effort_15";
						break;
					
					case 15:
						return "spinningwheel_med_effort_16";
						break;
					
					case 16:
						return "spinningwheel_med_effort_17";
						break;
					
					case 17:
						return "spinningwheel_med_effort_18";
						break;
					
					case 18:
						return "spinningwheel_med_effort_19";
						break;
					
					case 19:
						return "spinningwheel_med_effort_20";
						break;
					}
			}
			break;
		
		case 2:
			if (func_80(PLAYER::PLAYER_PED_ID()))
			{
				switch (Local_112.f_10)
				{
					case 0:
						return "spinningwheel_high_effort_01_wheel";
						break;
					
					case 1:
						return "spinningwheel_high_effort_02_wheel";
						break;
					
					case 2:
						return "spinningwheel_high_effort_03_wheel";
						break;
					
					case 3:
						return "spinningwheel_high_effort_04_wheel";
						break;
					
					case 4:
						return "spinningwheel_high_effort_05_wheel";
						break;
					
					case 5:
						return "spinningwheel_high_effort_06_wheel";
						break;
					
					case 6:
						return "spinningwheel_high_effort_07_wheel";
						break;
					
					case 7:
						return "spinningwheel_high_effort_08_wheel";
						break;
					
					case 8:
						return "spinningwheel_high_effort_09_wheel";
						break;
					
					case 9:
						return "spinningwheel_high_effort_10_wheel";
						break;
					
					case 10:
						return "spinningwheel_high_effort_11_wheel";
						break;
					
					case 11:
						return "spinningwheel_high_effort_12_wheel";
						break;
					
					case 12:
						return "spinningwheel_high_effort_13_wheel";
						break;
					
					case 13:
						return "spinningwheel_high_effort_14_wheel";
						break;
					
					case 14:
						return "spinningwheel_high_effort_15_wheel";
						break;
					
					case 15:
						return "spinningwheel_high_effort_16_wheel";
						break;
					
					case 16:
						return "spinningwheel_high_effort_17_wheel";
						break;
					
					case 17:
						return "spinningwheel_high_effort_18_wheel";
						break;
					
					case 18:
						return "spinningwheel_high_effort_19_wheel";
						break;
					
					case 19:
						return "spinningwheel_high_effort_20_wheel";
						break;
				}
			}
			else
			{
				switch (Local_112.f_10)
				{
					case 0:
						return "spinningwheel_high_effort_01";
						break;
					
					case 1:
						return "spinningwheel_high_effort_02";
						break;
					
					case 2:
						return "spinningwheel_high_effort_03";
						break;
					
					case 3:
						return "spinningwheel_high_effort_04";
						break;
					
					case 4:
						return "spinningwheel_high_effort_05";
						break;
					
					case 5:
						return "spinningwheel_high_effort_06";
						break;
					
					case 6:
						return "spinningwheel_high_effort_07";
						break;
					
					case 7:
						return "spinningwheel_high_effort_08";
						break;
					
					case 8:
						return "spinningwheel_high_effort_09";
						break;
					
					case 9:
						return "spinningwheel_high_effort_10";
						break;
					
					case 10:
						return "spinningwheel_high_effort_11";
						break;
					
					case 11:
						return "spinningwheel_high_effort_12";
						break;
					
					case 12:
						return "spinningwheel_high_effort_13";
						break;
					
					case 13:
						return "spinningwheel_high_effort_14";
						break;
					
					case 14:
						return "spinningwheel_high_effort_15";
						break;
					
					case 15:
						return "spinningwheel_high_effort_16";
						break;
					
					case 16:
						return "spinningwheel_high_effort_17";
						break;
					
					case 17:
						return "spinningwheel_high_effort_18";
						break;
					
					case 18:
						return "spinningwheel_high_effort_19";
						break;
					
					case 19:
						return "spinningwheel_high_effort_20";
						break;
					}
			}
			break;
	}
	return sVar0;
}

int func_155()//Position - 0x4547
{
	int iVar0;
	
	iVar0 = 0;
	if (func_157(PLAYER::PLAYER_ID()) > 3000)
	{
		iVar0 = 4;
	}
	else if (func_157(PLAYER::PLAYER_ID()) > 1500)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_156()//Position - 0x4579
{
	int iVar0;
	
	iVar0 = 535;
	if (func_157(PLAYER::PLAYER_ID()) > 3000)
	{
		iVar0 = 110;
	}
	else if (func_157(PLAYER::PLAYER_ID()) > 1500)
	{
		iVar0 = 353;
	}
	return iVar0;
}

int func_157(int iParam0)//Position - 0x45B0
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_111[iParam0 /*5*/].f_3;
}

void func_158()//Position - 0x45CD
{
	int iVar0;
	char* sVar1;
	
	if (!Global_262145.f_26818)
	{
		return;
	}
	if (func_167())
	{
		return;
	}
	Local_112.f_48 = MISC::GET_HASH_KEY("LUCKYWHEEL");
	Local_112.f_48.f_1 = MISC::GET_HASH_KEY("STANDARD");
	Local_112.f_48.f_4 = MISC::GET_HASH_KEY("WIN");
	Local_112.f_48.f_11 = func_166(PLAYER::PLAYER_ID());
	Local_112.f_48.f_18 = NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT();
	if (NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT() != func_165())
	{
		Local_112.f_48.f_19 = NETWORK::_0xDB663CC9FF3407A9(NETWORK::NETWORK_GET_PLAYER_INDEX(NETWORK::NETWORK_GET_HOST_OF_THIS_SCRIPT()));
	}
	iVar0 = func_164();
	sVar1 = func_163(iVar0);
	Local_112.f_48.f_21 = MISC::GET_HASH_KEY(sVar1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_161()))
	{
		Local_112.f_48.f_22 = 0;
	}
	else
	{
		Local_112.f_48.f_22 = MISC::GET_HASH_KEY(func_161());
	}
	switch (func_807(PLAYER::PLAYER_ID()))
	{
		case 3:
			Local_112.f_48.f_6 = 10000;
			break;
		
		case 7:
			Local_112.f_48.f_6 = 15000;
			break;
		
		case 10:
			Local_112.f_48.f_6 = 20000;
			break;
		
		case 15:
			Local_112.f_48.f_6 = 25000;
			break;
		
		case 11:
			switch (Local_112.f_47)
			{
				case 2:
					Local_112.f_48.f_6 = Local_112.f_477;
					break;
			}
			break;
	}
	Local_112.f_48.f_7 = func_160();
	Local_112.f_48.f_23 = func_159();
	Local_112.f_48.f_15 = 1;
	if (func_166(PLAYER::PLAYER_ID()))
	{
		Local_112.f_48.f_20 = MISC::GET_HASH_KEY("VIP membership");
	}
	else
	{
		Local_112.f_48.f_20 = MISC::GET_HASH_KEY("paid membership");
	}
	Local_112.f_48.f_10 = 1;
	STATS::_PLAYSTATS_CASINO_LUCKYSEVEN(&(Local_112.f_48));
}

int func_159()//Position - 0x476D
{
	int iVar0;
	
	iVar0 = func_807(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 1:
			return 2500;
		
		case 2:
			return 20000;
		
		case 3:
			return 10000;
		
		case 5:
			return 5000;
		
		case 7:
			return 15000;
		
		case 9:
			return 7500;
		
		case 6:
			return 30000;
		
		case 10:
			return 20000;
		
		case 13:
			return 10000;
		
		case 14:
			return 40000;
		
		case 17:
			return 15000;
		
		case 19:
			return 50000;
		
		case 15:
			return 25000;
			break;
		
		case 11:
			switch (Local_112.f_47)
			{
				case 2:
				case 4:
				case 3:
					return Local_112.f_477;
					break;
			}
			break;
	}
	return 0;
}

int func_160()//Position - 0x4859
{
	return func_21(8251, -1, 0);
}

char* func_161()//Position - 0x486A
{
	int iVar0;
	
	iVar0 = func_807(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 0:
		case 8:
		case 12:
		case 16:
		case 18:
			return func_162(&(Local_112.f_461));
			break;
		
		case 11:
			switch (Local_112.f_47)
			{
				case 0:
				case 6:
				case 1:
				case 5:
					return func_162(&(Local_112.f_461));
					break;
			}
			break;
	}
	return "";
}

char* func_162(char* sParam0)//Position - 0x48EF
{
	return sParam0;
}

char* func_163(int iParam0)//Position - 0x48F9
{
	if (iParam0 == 5)
	{
		switch (Local_112.f_47)
		{
			case 0:
				return "MYSTREYCLOTHING";
			
			case 1:
				return "MYSTREYVEHICLE";
			
			case 2:
				return "MYSTREYCHIPS";
			
			case 3:
				return "MYSTREYCASH";
			
			case 4:
				return "MYSTREYRP";
			
			case 5:
				return "MYSTREYINVENTORY";
			
			case 6:
				return "MYSTREYBUSINESS";
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return "CLOTHING";
			
			case 1:
				return "RP";
			
			case 2:
				return "CASH";
			
			case 3:
				return "HOUSECHIPS";
			
			case 4:
				return "DISCOUNTVOUCHER";
			
			case 6:
				return "PODIUMVEHICLE";
			}
		
		default:
	}
	return "";
}

int func_164()//Position - 0x49C7
{
	int iVar0;
	
	iVar0 = func_807(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 0:
			return 0;
		
		case 5:
			return 1;
		
		case 7:
			return 3;
		
		case 11:
			return 5;
		
		case 8:
			return 0;
		
		case 9:
			return 1;
		
		case 6:
			return 2;
		
		case 10:
			return 3;
		
		case 12:
			return 0;
		
		case 13:
			return 1;
		
		case 18:
			return 6;
		
		case 14:
			return 2;
		
		case 16:
			return 0;
		
		case 17:
			return 1;
		
		case 19:
			return 2;
		
		case 15:
			return 3;
		
		case 4:
			return 4;
		
		default:
	}
	return -1;
}

int func_165()//Position - 0x4AA9
{
	return -1;
}

int func_166(int iParam0)//Position - 0x4AB2
{
	if (iParam0 != func_8())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_384 != 0;
	}
	return 0;
}

int func_167()//Position - 0x4AD8
{
	if (MISC::ARE_STRINGS_EQUAL(&(Local_112.f_461), "INVALID"))
	{
		if (func_807(PLAYER::PLAYER_ID()) == 11 && Local_112.f_47 == 1)
		{
			return 1;
		}
		if (func_807(PLAYER::PLAYER_ID()) == 18)
		{
			return 1;
		}
	}
	return 0;
}

void func_168()//Position - 0x4B21
{
	if (func_178() || (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_112.f_461)) && MISC::ARE_STRINGS_EQUAL("GIVE_RP_FOR_VEH", &(Local_112.f_461))))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_112.f_461)) && MISC::ARE_STRINGS_EQUAL("GIVE_RP_FOR_VEH", &(Local_112.f_461)))
		{
			func_43("CAS_LW_RP", 20000, -1);
			MISC::SET_BIT(&(Local_112.f_1), 2);
		}
		else
		{
			func_43(func_177(), func_176(), -1);
			MISC::SET_BIT(&(Local_112.f_1), 2);
		}
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_112.f_461)))
	{
		if (!MISC::ARE_STRINGS_EQUAL("INVALID", &(Local_112.f_461)))
		{
			func_47(func_177(), -1);
			MISC::SET_BIT(&(Local_112.f_1), 2);
		}
	}
	else
	{
		func_47(func_177(), -1);
		MISC::SET_BIT(&(Local_112.f_1), 2);
	}
	if (Local_112.f_14 == 4)
	{
		if (!BitTest(Local_112.f_1, 4))
		{
			MISC::SET_BIT(&(Local_112.f_1), 4);
		}
	}
	if (func_175())
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_112.f_461)) && !MISC::ARE_STRINGS_EQUAL("INVALID", &(Local_112.f_461))) && !MISC::ARE_STRINGS_EQUAL("GIVE_RP_FOR_VEH", &(Local_112.f_461)))
		{
			HUD::_THEFEED_DISPLAY_LOADING_SCREEN_TIPS();
			if (func_174())
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("TWOSTRINGS");
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_112.f_461));
			}
			if (func_174())
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_171(Local_112.f_74.f_384, 1));
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Local_112.f_461));
			}
			if (Local_112.f_14 == 11 && func_178())
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Local_112.f_477);
			}
			HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU(func_170(), func_169(), &(Local_112.f_461), 1);
		}
	}
}

int func_169()//Position - 0x4CC3
{
	switch (Local_112.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return 7;
			break;
		
		case 4:
			return 18;
			break;
		
		case 11:
			return 19;
			break;
		
		case 18:
			return 5;
			break;
	}
	return -1;
}

char* func_170()//Position - 0x4D1E
{
	switch (Local_112.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return "CAS_LW_RCLO";
			break;
		
		case 4:
			return "CAS_LW_RDISC";
			break;
		
		case 11:
			return "CAS_LW_RMYST";
			break;
		
		case 18:
			return "CAS_LW_RVEHI";
			break;
	}
	return "";
}

char* func_171(int iParam0, bool bParam1)//Position - 0x4D85
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0))
	{
		return func_173(iParam0, bParam1);
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0))
	{
		return func_172(iParam0, bParam1);
	}
	switch (iParam0)
	{
		case joaat("khamelion"):
			return "HIJAK";
			break;
		
		case joaat("issi2"):
		case joaat("issi7"):
			return "WEENY";
			break;
		
		case joaat("elegy2"):
		case joaat("hellion"):
			return "ANNIS";
			break;
		
		case joaat("romero"):
			return "CHARIOT";
			break;
		
		case joaat("baller"):
		case joaat("baller2"):
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("baller5"):
		case joaat("baller6"):
			if (bParam1)
			{
				return "GALLIVAN";
			}
			else
			{
				return "GALIVANTER";
			}
			break;
		
		case joaat("surfer"):
		case joaat("surfer2"):
		case joaat("dune"):
		case joaat("bfinjection"):
			return "BF";
			break;
		
		case joaat("feltzer2"):
		case joaat("dubsta"):
		case joaat("surano"):
		case joaat("schwarzer"):
		case joaat("schafter2"):
		case joaat("serrano"):
		case joaat("dubsta2"):
		case joaat("feltzer3"):
			if (bParam1)
			{
				return "BENEFAC";
			}
			else
			{
				return "BENEFACTOR";
			}
			break;
		
		case joaat("sentinel"):
		case joaat("sentinel2"):
		case joaat("zion"):
		case joaat("zion2"):
		case joaat("zion3"):
		case joaat("oracle"):
		case joaat("oracle2"):
			if (bParam1)
			{
				return "UBERMACH";
			}
			else
			{
				return "UBERMACHT";
			}
			break;
		
		case joaat("ztype"):
		case joaat("adder"):
		case joaat("thrax"):
			return "TRUFFADE";
			break;
		
		case joaat("jb700"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("exemplar"):
		case joaat("massacro"):
		case joaat("massacro2"):
			if (bParam1)
			{
				return "DEWBAUCH";
			}
			else
			{
				return "DEWBAUCHEE";
			}
			break;
		
		case joaat("tailgater"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rocoto"):
		case joaat("drafter"):
			return "OBEY";
			break;
		
		case joaat("picador"):
		case joaat("surge"):
		case joaat("fugitive"):
		case joaat("marshall"):
			return "CHEVAL";
			break;
		
		case joaat("mower"):
			if (bParam1)
			{
				return "JACKSHP";
			}
			else
			{
				return "JACKSHEEPE";
			}
			break;
		
		case joaat("tornado"):
		case joaat("tornado2"):
		case joaat("tornado3"):
		case joaat("burrito"):
		case joaat("burrito2"):
		case joaat("premier"):
		case joaat("voodoo2"):
		case joaat("sabregt"):
		case joaat("rancherxl"):
		case joaat("vigero"):
		case joaat("asea"):
		case joaat("asea2"):
		case joaat("granger"):
		case joaat("pranger"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
		case joaat("gburrito"):
		case joaat("gburrito2"):
		case joaat("stalion"):
			return "DECLASSE";
			break;
		
		case joaat("buccaneer"):
		case joaat("cavalcade"):
		case joaat("cavalcade2"):
		case joaat("emperor"):
		case joaat("emperor2"):
		case joaat("manana"):
		case joaat("primo"):
		case joaat("washington"):
		case joaat("virgo"):
			return "ALBANY";
			break;
		
		case joaat("banshee"):
		case joaat("bison"):
		case joaat("gresley"):
		case joaat("youga"):
		case joaat("gauntlet"):
		case joaat("buffalo"):
		case joaat("buffalo2"):
		case joaat("ratloader"):
		case joaat("dloader"):
		case joaat("ratloader2"):
		case joaat("rumpo"):
		case joaat("banshee2"):
		case joaat("gauntlet3"):
			return "BRAVADO";
			break;
		
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("cheetah"):
		case joaat("carbonizzare"):
			if (bParam1)
			{
				return "GROTTI";
			}
			else
			{
				return "Grotti_2";
			}
			break;
		
		case joaat("coquette"):
		case joaat("coquette3"):
			if (bParam1)
			{
				return "INVERTO";
			}
			else
			{
				return "Invetero";
			}
			break;
		
		case joaat("radi"):
		case joaat("sadler"):
		case joaat("dominator"):
		case joaat("sandking"):
		case joaat("sandking2"):
		case joaat("police"):
		case joaat("police3"):
		case joaat("policet"):
		case joaat("benson"):
		case joaat("bullet"):
		case joaat("minivan"):
		case joaat("speedo"):
		case joaat("speedo2"):
		case joaat("peyote"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("bobcatxl"):
		case joaat("stanier"):
		case joaat("hotknife"):
		case joaat("slamvan"):
		case joaat("guardian"):
		case joaat("chino"):
		case joaat("caracara2"):
			return "VAPID";
			break;
		
		case joaat("tiptruck"):
		case joaat("taco"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("camper"):
		case joaat("riot"):
		case joaat("tourbus"):
		case joaat("ambulance"):
		case joaat("stockade"):
		case joaat("boxville"):
		case joaat("pony"):
			return "BRUTE";
			break;
		
		case joaat("prairie"):
			return "BOLLOKAN";
			break;
		
		case joaat("jackal"):
		case joaat("f620"):
		case joaat("locust"):
			return "OCELOT";
			break;
		
		case joaat("mesa"):
		case joaat("mesa3"):
		case joaat("bodhi2"):
		case joaat("seminole"):
		case joaat("crusader"):
			return "CANIS";
			break;
		
		case joaat("entityxf"):
			return "OVERFLOD";
			break;
		
		case joaat("monroe"):
		case joaat("infernus"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("vacca"):
		case joaat("ruffian"):
		case joaat("faggio2"):
		case joaat("osiris"):
		case joaat("zorrusso"):
			return "PEGASSI";
			break;
		
		case joaat("phoenix"):
		case joaat("ruiner"):
		case joaat("dukes"):
		case joaat("dukes2"):
			return "IMPONTE";
			break;
		
		case joaat("bjxl"):
		case joaat("rebel"):
		case joaat("rebel2"):
		case joaat("asterope"):
		case joaat("intruder"):
		case joaat("futo"):
		case joaat("sultan"):
		case joaat("dilettante"):
		case joaat("dilettante2"):
		case joaat("kuruma"):
		case joaat("kuruma2"):
		case joaat("sultanrs"):
			return "KARIN";
			break;
		
		case joaat("penumbra"):
		case joaat("sanchez"):
		case joaat("sanchez2"):
		case joaat("mule"):
			return "MAIBATSU";
			break;
		
		case joaat("blista"):
		case joaat("blista2"):
		case joaat("blista3"):
		case joaat("double"):
		case joaat("jester"):
		case joaat("jester2"):
		case joaat("enduro"):
		case joaat("vindicator"):
		case joaat("akuma"):
			return "DINKA";
			break;
		
		case joaat("fq2"):
			return "FATHOM";
			break;
		
		case joaat("voltic"):
		case joaat("brawler"):
			return "COIL";
			break;
	}
	switch (iParam0)
	{
		case joaat("felon"):
		case joaat("felon2"):
		case joaat("casco"):
		case joaat("novak"):
			if (bParam1)
			{
				return "LAMPADA";
			}
			else
			{
				return "LAMPADATI";
			}
			break;
		
		case joaat("comet2"):
			return "PFISTER";
			break;
		
		case joaat("fusilade"):
			return "SCHYSTER";
			break;
		
		case joaat("stretch"):
		case joaat("regina"):
		case joaat("landstalker"):
			if (bParam1)
			{
				return "DUNDREAR";
			}
			else
			{
				return "DUNDREARY";
			}
			break;
		
		case joaat("handler"):
		case joaat("bulldozer"):
		case joaat("docktug"):
		case joaat("cutter"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("biff"):
		case joaat("forklift"):
		case joaat("ripley"):
		case joaat("airtug"):
		case joaat("dump"):
		case joaat("insurgent2"):
		case joaat("insurgent"):
			return "HVY";
			break;
		
		case joaat("packer"):
		case joaat("flatbed"):
		case joaat("tiptruck2"):
		case joaat("pounder"):
		case joaat("firetruk"):
			return "MTL";
			break;
		
		case joaat("tractor"):
		case joaat("tractor2"):
			return "STANLEY";
			break;
		
		case joaat("hauler"):
		case joaat("phantom"):
		case joaat("trash"):
			return "JOBUILT";
			break;
		
		case joaat("patriot"):
			return "MAMMOTH";
			break;
		
		case joaat("journey"):
		case joaat("stratum"):
			if (bParam1)
			{
				return "ZIRCONIU";
			}
			else
			{
				return "ZIRCONIUM";
			}
			break;
		
		case joaat("vader"):
		case joaat("pcj"):
			return "SHITZU";
			break;
		
		case joaat("bagger"):
		case joaat("daemon"):
		case joaat("sovereign"):
			if (bParam1)
			{
				return "WESTERN";
			}
			else
			{
				return "WESTERNMOTORCYCLE";
			}
			break;
		
		case joaat("blazer"):
		case joaat("caddy"):
		case joaat("carbonrs"):
		case joaat("blazer3"):
		case joaat("blazer2"):
			return "NAGASAKI";
			break;
		
		case joaat("nemesis"):
		case joaat("lectro"):
			if (bParam1)
			{
				return "PRINCIPL";
			}
			else
			{
				return "PRINCIPE";
			}
			break;
		
		case joaat("hexer"):
			return "LCC";
			break;
		
		case joaat("bmx"):
		case joaat("cruiser"):
		case joaat("scorcher"):
			if (!bParam1)
			{
				return "Ped";
			}
			break;
		
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
			if (!bParam1)
			{
				return "TriCycles";
			}
			break;
		
		case joaat("cogcabrio"):
		case joaat("superd"):
		case joaat("windsor"):
			return "ENUS";
			break;
		
		case joaat("habanero"):
			if (bParam1)
			{
				return "EMPEROR";
			}
			else
			{
				return "EMPORER";
			}
			break;
		
		case joaat("ingot"):
		case joaat("nebula"):
			return "VULCAR";
			break;
		
		case joaat("t20"):
			return "PROGEN";
			break;
	}
	if (iParam0 == joaat("bifta"))
	{
		return "BF";
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return "CANIS";
	}
	else if (iParam0 == joaat("paradise"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("btype"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("zentorno"))
	{
		return "PEGASSI";
	}
	else if (iParam0 == joaat("jester"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("massacro"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	else if (iParam0 == joaat("turismor"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	else if (iParam0 == joaat("huntley"))
	{
		return "ENUS";
	}
	else if (iParam0 == joaat("alpha"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("thrust"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("sovereign"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("thrust"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("blade") || iParam0 == joaat("monster"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("warrener"))
	{
		return "VULCAR";
	}
	if ((iParam0 == joaat("glendale") || iParam0 == joaat("panto")) || iParam0 == joaat("dubsta3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("rhapsody"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("pigalle"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("coquette2"))
	{
		if (bParam1)
		{
			return "INVERTO";
		}
		else
		{
			return "Invetero";
		}
	}
	if (iParam0 == joaat("innovation"))
	{
		return "LCC";
	}
	if (iParam0 == joaat("hakuchou"))
	{
		return "SHITZU";
	}
	if (iParam0 == joaat("furoregt"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("ratloader2"))
	{
		return "BRAVADO";
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return "VAPID";
	}
	else if (iParam0 == joaat("jester2"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("massacro2"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("windsor"))
	{
		return "ENUS";
	}
	else if (iParam0 == joaat("chino") || iParam0 == joaat("chino2"))
	{
		return "VAPID";
	}
	else if (iParam0 == joaat("vindicator"))
	{
		return "DINKA";
	}
	else if (iParam0 == joaat("virgo"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("swift2") || iParam0 == joaat("luxor2"))
	{
		return "BUCKING";
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	else if (iParam0 == joaat("t20"))
	{
		return "PROGEN";
	}
	else if (iParam0 == joaat("osiris"))
	{
		return "PEGASSI";
	}
	else if (iParam0 == joaat("coquette3"))
	{
		if (bParam1)
		{
			return "INVERTO";
		}
		else
		{
			return "Invetero";
		}
	}
	else if (iParam0 == joaat("toro"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	else if (iParam0 == joaat("brawler"))
	{
		return "COIL";
	}
	if (iParam0 == joaat("primo2") || iParam0 == joaat("buccaneer2"))
	{
		return "ALBANY";
	}
	else if (iParam0 == joaat("faction") || iParam0 == joaat("faction2"))
	{
		return "WILLARD";
	}
	else if ((iParam0 == joaat("moonbeam2") || iParam0 == joaat("voodoo")) || iParam0 == joaat("moonbeam"))
	{
		return "DECLASSE";
	}
	else if (iParam0 == joaat("chino2") || iParam0 == joaat("dukes2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("faction3"))
	{
		return "WILLARD";
	}
	if ((iParam0 == joaat("sabregt2") || iParam0 == joaat("tornado5")) || iParam0 == joaat("virgo"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("virgo2") || iParam0 == joaat("virgo3"))
	{
		if (bParam1)
		{
			return "DUNDREAR";
		}
		else
		{
			return "DUNDREARY";
		}
	}
	if (iParam0 == joaat("slamvan3") || iParam0 == joaat("minivan2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("lurcher") || iParam0 == joaat("btype2"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("mamba") || iParam0 == joaat("tampa"))
	{
		return "DECLASSE";
	}
	if (((iParam0 == joaat("cognoscenti") || iParam0 == joaat("cog55")) || iParam0 == joaat("cog552")) || iParam0 == joaat("cognoscenti2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("verlierer2"))
	{
		return "BRAVADO";
	}
	if (((iParam0 == joaat("schafter4") || iParam0 == joaat("schafter3")) || iParam0 == joaat("schafter5")) || iParam0 == joaat("schafter6"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (((iParam0 == joaat("baller3") || iParam0 == joaat("baller4")) || iParam0 == joaat("baller5")) || iParam0 == joaat("baller6"))
	{
		if (bParam1)
		{
			return "GALLIVAN";
		}
		else
		{
			return "GALIVANTER";
		}
	}
	if (iParam0 == joaat("nightshade"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("btype3"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("pfister811"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("seven70"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("rumpo3"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("bestiagts"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("xls") || iParam0 == joaat("xls2"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("fmj"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("windsor2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("reaper"))
	{
		return "PEGASSI";
	}
	if (((iParam0 == joaat("contender") || iParam0 == joaat("trophytruck")) || iParam0 == joaat("trophytruck2")) || iParam0 == joaat("dominator2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("bf400"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("cliffhanger") || iParam0 == joaat("gargoyle"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("buffalo3") || iParam0 == joaat("gauntlet2"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("omnis"))
	{
		return "OBEY";
	}
	if (iParam0 == joaat("le7b"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("tropos"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("tampa2") || iParam0 == joaat("stalion2"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("brioso"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("tyrus"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("lynx"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("sheava"))
	{
		if (bParam1)
		{
			return "EMPEROR";
		}
		else
		{
			return "EMPORER";
		}
	}
	if (iParam0 == joaat("rallytruck"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("tornado6"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("avarus") || iParam0 == joaat("sanctus"))
	{
		return "LCC";
	}
	if ((iParam0 == joaat("chimera") || iParam0 == joaat("shotaro")) || iParam0 == joaat("blazer4"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("defiler") || iParam0 == joaat("hakuchou2"))
	{
		return "SHITZU";
	}
	if (((((iParam0 == joaat("nightblade") || iParam0 == joaat("zombiea")) || iParam0 == joaat("zombieb")) || iParam0 == joaat("daemon2")) || iParam0 == joaat("ratbike")) || iParam0 == joaat("wolfsbane"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("youga2"))
	{
		return "BRAVADO";
	}
	if (((iParam0 == joaat("esskey") || iParam0 == joaat("vortex")) || iParam0 == joaat("faggio3")) || iParam0 == joaat("faggio"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("raptor"))
	{
		return "BF";
	}
	if (iParam0 == joaat("manchez"))
	{
		return "MAIBATSU";
	}
	if (iParam0 == joaat("blazer5"))
	{
		return "NAGASAKI";
	}
	if (iParam0 == joaat("comet3"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("diablous") || iParam0 == joaat("diablous2"))
	{
		if (bParam1)
		{
			return "PRINCIPL";
		}
		else
		{
			return "PRINCIPE";
		}
	}
	if ((iParam0 == joaat("fcr") || iParam0 == joaat("fcr2")) || iParam0 == joaat("tempesta"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("nero") || iParam0 == joaat("nero2"))
	{
		return "TRUFFADE";
	}
	if (iParam0 == joaat("penetrator"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("ruiner2"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("technical2"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("phantom2"))
	{
		return "JOBUILT";
	}
	if (iParam0 == joaat("voltic2"))
	{
		return "COIL";
	}
	if (iParam0 == joaat("wastelander"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("italigtb") || iParam0 == joaat("italigtb2"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("dune5") || iParam0 == joaat("dune4"))
	{
		return "BF";
	}
	if (iParam0 == joaat("elegy") || iParam0 == joaat("elegy2"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("specter") || iParam0 == joaat("specter2"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("infernus2"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("ruston"))
	{
		return "HIJAK";
	}
	if (iParam0 == joaat("turismo2"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("dukes2"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("ardent") || iParam0 == joaat("xa21"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("cheetah2"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if ((iParam0 == joaat("insurgent3") || iParam0 == joaat("nightshark")) || iParam0 == joaat("apc"))
	{
		return "HVY";
	}
	if (iParam0 == joaat("technical3"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("halftrack") || iParam0 == joaat("bison3"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("torero") || iParam0 == joaat("oppressor"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("dune3"))
	{
		return "BF";
	}
	if (iParam0 == joaat("tampa3"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("vagner") || iParam0 == joaat("rapidgt3"))
	{
		if (bParam1)
		{
			return "DEWBAUCH";
		}
		else
		{
			return "DEWBAUCHEE";
		}
	}
	if (iParam0 == joaat("cyclone"))
	{
		return "COIL";
	}
	if ((iParam0 == joaat("retinue") || iParam0 == joaat("hustler")) || iParam0 == joaat("riata"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("visione") || iParam0 == joaat("vigilante"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("z190"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("avenger") || iParam0 == joaat("thruster"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("deluxo"))
	{
		return "IMPONTE";
	}
	if (iParam0 == joaat("stromberg") || iParam0 == joaat("pariah"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("hermes"))
	{
		return "ALBANY";
	}
	if ((iParam0 == joaat("sentinel3") || iParam0 == joaat("sc1")) || iParam0 == joaat("revolter"))
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == joaat("savestra"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("yosemite"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("raiden"))
	{
		return "COIL";
	}
	if ((iParam0 == joaat("neon") || iParam0 == joaat("comet4")) || iParam0 == joaat("comet5"))
	{
		return "PFISTER";
	}
	if (iParam0 == joaat("streiter"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("kamacho"))
	{
		return "CANIS";
	}
	if (iParam0 == joaat("gt500"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if (iParam0 == joaat("viseris"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("barrage"))
	{
		return "HVY";
	}
	if ((iParam0 == joaat("autarch") || iParam0 == joaat("tyrant")) || iParam0 == joaat("entity2"))
	{
		return "OVERFLOD";
	}
	if (iParam0 == joaat("issi3"))
	{
		return "WEENY";
	}
	if ((((iParam0 == joaat("gb200") || iParam0 == joaat("ellie")) || iParam0 == joaat("flashgt")) || iParam0 == joaat("caracara")) || iParam0 == joaat("dominator3"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("fagaloa"))
	{
		return "VULCAR";
	}
	if (iParam0 == joaat("michelli"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("hotring"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("tezeract"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("jester3"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("taipan"))
	{
		return "CHEVAL";
	}
	if (iParam0 == joaat("cheburek"))
	{
		return "RUNE";
	}
	if (iParam0 == joaat("swinger"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("freecrawler"))
	{
		return "CANIS";
	}
	if (iParam0 == joaat("mule4"))
	{
		return "MAIBATSU";
	}
	if (iParam0 == joaat("pounder2"))
	{
		return "MTL";
	}
	if (iParam0 == joaat("speedo4"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("patriot2"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("oppressor2"))
	{
		return "PEGASSI";
	}
	if (iParam0 == joaat("stafford"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("menacer"))
	{
		return "HVY";
	}
	if (iParam0 == joaat("scramjet"))
	{
		return "DECLASSE";
	}
	if ((iParam0 == joaat("monster3") || iParam0 == joaat("monster4")) || iParam0 == joaat("monster5"))
	{
		return "BRAVADO";
	}
	if ((iParam0 == joaat("scarab") || iParam0 == joaat("scarab2")) || iParam0 == joaat("scarab3"))
	{
		return "HVY";
	}
	if ((iParam0 == joaat("issi4") || iParam0 == joaat("issi5")) || iParam0 == joaat("issi6"))
	{
		return "WEENY";
	}
	if (iParam0 == joaat("toros"))
	{
		return "PEGASSI";
	}
	if ((((((((((iParam0 == joaat("clique") || iParam0 == joaat("imperator")) || iParam0 == joaat("imperator2")) || iParam0 == joaat("imperator3")) || iParam0 == joaat("dominator4")) || iParam0 == joaat("dominator5")) || iParam0 == joaat("dominator6")) || iParam0 == joaat("slamvan4")) || iParam0 == joaat("slamvan5")) || iParam0 == joaat("slamvan6")) || iParam0 == joaat("slamvan2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("deveste"))
	{
		if (bParam1)
		{
			return "PRINCIPL";
		}
		else
		{
			return "PRINCIPE";
		}
	}
	if ((((((((iParam0 == joaat("impaler") || iParam0 == joaat("impaler2")) || iParam0 == joaat("impaler3")) || iParam0 == joaat("impaler4")) || iParam0 == joaat("vamos")) || iParam0 == joaat("tulip")) || iParam0 == joaat("brutus")) || iParam0 == joaat("brutus2")) || iParam0 == joaat("brutus3"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("deviant"))
	{
		return "SCHYSTER";
	}
	if (iParam0 == joaat("schlagen"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("italigto"))
	{
		if (bParam1)
		{
			return "GROTTI";
		}
		else
		{
			return "Grotti_2";
		}
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		return "MTL";
	}
	if ((iParam0 == joaat("deathbike") || iParam0 == joaat("deathbike2")) || iParam0 == joaat("deathbike3"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if ((iParam0 == joaat("bruiser") || iParam0 == joaat("bruiser2")) || iParam0 == joaat("bruiser3"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if ((iParam0 == joaat("zr380") || iParam0 == joaat("zr3802")) || iParam0 == joaat("zr3803"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("caracara2") || iParam0 == joaat("peyote2"))
	{
		return "VAPID";
	}
	if (iParam0 == joaat("drafter"))
	{
		return "OBEY";
	}
	if (iParam0 == joaat("dynasty") || iParam0 == joaat("issi7"))
	{
		return "WEENY";
	}
	if (iParam0 == joaat("gauntlet3") || iParam0 == joaat("gauntlet4"))
	{
		return "BRAVADO";
	}
	if (iParam0 == joaat("hellion") || iParam0 == joaat("s80"))
	{
		return "ANNIS";
	}
	if (iParam0 == joaat("krieger"))
	{
		if (bParam1)
		{
			return "BENEFAC";
		}
		else
		{
			return "BENEFACTOR";
		}
	}
	if (iParam0 == joaat("locust") || iParam0 == joaat("jugular"))
	{
		return "OCELOT";
	}
	if (iParam0 == joaat("nebula"))
	{
		return "VULCAR";
	}
	if (iParam0 == joaat("novak"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("paragon") || iParam0 == joaat("paragon2"))
	{
		return "ENUS";
	}
	if (iParam0 == joaat("thrax"))
	{
		return "TRUFFADE";
	}
	if (iParam0 == joaat("zion3"))
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == joaat("emerus"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("neo"))
	{
		return "VYSSER";
	}
	if (iParam0 == joaat("rrocket"))
	{
		if (bParam1)
		{
			return "WESTERN";
		}
		else
		{
			return "WESTERNMOTORCYCLE";
		}
	}
	if (iParam0 == joaat("burrito") || iParam0 == joaat("burrito2"))
	{
		return "DECLASSE";
	}
	if (iParam0 == joaat("formula"))
	{
		return "PROGEN";
	}
	if (iParam0 == joaat("everon"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("imorgon"))
	{
		return "OVERFLOD";
	}
	if (iParam0 == joaat("kanjo"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("komoda"))
	{
		if (bParam1)
		{
			return "LAMPADA";
		}
		else
		{
			return "LAMPADATI";
		}
	}
	if (iParam0 == joaat("rebla"))
	{
		if (bParam1)
		{
			return "UBERMACH";
		}
		else
		{
			return "UBERMACHT";
		}
	}
	if (iParam0 == joaat("sugoi"))
	{
		return "DINKA";
	}
	if (iParam0 == joaat("sultan2"))
	{
		return "KARIN";
	}
	if (iParam0 == joaat("vstr"))
	{
		return "ALBANY";
	}
	if (iParam0 == joaat("zhaba"))
	{
		return "RUNE";
	}
	if (!bParam1)
	{
		if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "GALLIVAN"))
		{
			return "GALIVANTER";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "BENEFAC"))
		{
			return "BENEFACTOR";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "UBERMACH"))
		{
			return "UBERMACHT";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "DEWBAUCH"))
		{
			return "DEWBAUCHEE";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "JACKSHP"))
		{
			return "JACKSHEEPE";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "GROTTI"))
		{
			return "Grotti_2";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "INVERTO"))
		{
			return "Invetero";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "LAMPADA"))
		{
			return "LAMPADATI";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "DUNDREAR"))
		{
			return "DUNDREARY";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "ZIRCONIU"))
		{
			return "ZIRCONIUM";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "WESTERN"))
		{
			return "WESTERNMOTORCYCLE";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "PRINCIPL"))
		{
			return "PRINCIPE";
		}
		else if (MISC::ARE_STRINGS_EQUAL(VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0), "EMPEROR"))
		{
			return "EMPORER";
		}
		else
		{
			return VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0);
		}
	}
	else
	{
		return VEHICLE::_GET_MAKE_NAME_FROM_VEHICLE_MODEL(iParam0);
	}
	return "";
}

char* func_172(int iParam0, bool bParam1)//Position - 0x6DD0
{
	switch (iParam0)
	{
		case joaat("frogger"):
		case joaat("frogger2"):
			return "MAIBATSU";
		
		case joaat("maverick"):
		case joaat("polmav"):
		case joaat("luxor"):
		case joaat("shamal"):
			if (bParam1)
			{
				return "BUCKING";
			}
			else
			{
				return "BUCKINGHAM";
			}
			break;
		
		case joaat("cargobob"):
		case joaat("annihilator"):
		case joaat("cuban800"):
		case joaat("duster"):
		case joaat("stunt"):
			return "WESTERN";
			break;
		
		case joaat("buzzard"):
		case joaat("buzzard2"):
			return "NAGASAKI";
			break;
		
		case joaat("mammatus"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("lazer"):
			return "JOBUILT";
			break;
	}
	if (iParam0 == joaat("vestra"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	if (((((iParam0 == joaat("miljet") || iParam0 == joaat("swift")) || iParam0 == joaat("swift2")) || iParam0 == joaat("luxor2")) || iParam0 == joaat("supervolito")) || iParam0 == joaat("supervolito2"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	if (iParam0 == joaat("besra"))
	{
		return "WESTERN";
	}
	if (iParam0 == joaat("hydra") || iParam0 == joaat("thruster"))
	{
		return "MAMMOTH";
	}
	if (iParam0 == joaat("volatus") || iParam0 == joaat("nimbus"))
	{
		if (bParam1)
		{
			return "BUCKING";
		}
		else
		{
			return "BUCKINGHAM";
		}
	}
	return "";
}

char* func_173(int iParam0, bool bParam1)//Position - 0x6F6D
{
	switch (iParam0)
	{
		case joaat("squalo"):
		case joaat("tropic"):
			if (bParam1)
			{
				return "BUCKING";
			}
			else
			{
				return "BUCKINGHAM";
			}
			break;
		
		case joaat("jetmax"):
		case joaat("suntrap"):
			return "OCELOT";
			break;
		
		case joaat("dinghy"):
			if (!bParam1)
			{
				return "OCELOT";
			}
			break;
		
		case joaat("seashark2"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case joaat("seashark3"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case joaat("seashark"):
			if (bParam1)
			{
				return "SPEEDOPH";
			}
			else
			{
				return "SPEEDOPHILE";
			}
			break;
		
		case joaat("toro"):
			if (bParam1)
			{
				return "LAMPADA";
			}
			else
			{
				return "LAMPADATI";
			}
			break;
	}
	if (iParam0 == joaat("speeder") || iParam0 == joaat("speeder2"))
	{
		if (bParam1)
		{
			return "PEGASSI";
		}
		else
		{
			return "PEGASSI";
		}
	}
	return "";
}

int func_174()//Position - 0x707B
{
	switch (Local_112.f_14)
	{
		case 11:
			switch (Local_112.f_47)
			{
				case 1:
					return 1;
				
				default:
			}
			break;
		
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_175()//Position - 0x70B8
{
	switch (Local_112.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
		case 4:
		case 11:
		case 18:
			return 1;
			break;
	}
	return 0;
}

int func_176()//Position - 0x70FC
{
	switch (Local_112.f_14)
	{
		case 1:
			return 2500;
			break;
		
		case 5:
			return 5000;
			break;
		
		case 9:
			return 7500;
			break;
		
		case 13:
			return 10000;
			break;
		
		case 17:
			return 15000;
			break;
		
		case 2:
			return 20000;
			break;
		
		case 6:
			return 30000;
			break;
		
		case 14:
			return 40000;
			break;
		
		case 19:
			return 50000;
			break;
		
		case 3:
			return 10000;
			break;
		
		case 7:
			return 15000;
			break;
		
		case 10:
			return 20000;
			break;
		
		case 15:
			return 25000;
			break;
		
		case 11:
			switch (Local_112.f_47)
			{
				case 2:
				case 3:
				case 4:
					return Local_112.f_477;
					break;
			}
			break;
	}
	return 0;
}

char* func_177()//Position - 0x7205
{
	switch (Local_112.f_14)
	{
		case 0:
		case 8:
		case 12:
		case 16:
			return "CAS_LW_CLO";
			break;
		
		case 1:
		case 5:
		case 9:
		case 13:
		case 17:
			return "CAS_LW_RP";
			break;
		
		case 2:
		case 6:
		case 14:
		case 19:
			return "CAS_LW_CASH";
			break;
		
		case 4:
			return "CAS_LW_DISC";
			break;
		
		case 3:
		case 7:
		case 10:
		case 15:
			return "CAS_LW_CHIP";
			break;
		
		case 11:
			return "CAS_LW_MYST";
			break;
		
		case 18:
			return "CAS_LW_VEHI";
			break;
	}
	return "";
}

int func_178()//Position - 0x72D8
{
	switch (Local_112.f_14)
	{
		case 1:
		case 5:
		case 9:
		case 13:
		case 17:
		case 2:
		case 6:
		case 14:
		case 19:
		case 3:
		case 7:
		case 10:
		case 15:
			return 1;
			break;
		
		case 11:
			switch (Local_112.f_47)
			{
				case 2:
				case 3:
				case 4:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_179()//Position - 0x736C
{
	switch (func_775(Local_112.f_14))
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return func_768(&(Local_112.f_461), &Local_112, func_775(Local_112.f_14), 0);
			break;
		
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return func_760(&(Local_112.f_477), &(Local_112.f_461), func_775(Local_112.f_14), 0);
			break;
		
		case 9:
		case 10:
		case 11:
		case 12:
			return func_747(&(Local_112.f_477), &(Local_112.f_461), func_775(Local_112.f_14), 0);
			break;
		
		case 13:
		case 14:
		case 15:
		case 16:
			return func_717(&(Local_112.f_477), &(Local_112.f_461), &(Local_112.f_499), func_775(Local_112.f_14), 0);
			break;
		
		case 17:
			if (!BitTest(Local_112.f_0, 19))
			{
				Local_112.f_47 = func_715();
				MISC::SET_BIT(&Local_112, 19);
			}
			else
			{
				return func_545(&(Local_112.f_477), &(Local_112.f_461), &(Local_112.f_73), &(Local_112.f_74), Local_112.f_47, &Local_112, Local_113, &(Local_112.f_499));
			}
			break;
		
		case 18:
			return func_189(&(Local_112.f_461), &(Local_112.f_73), &(Local_112.f_74), func_775(Local_112.f_14), 0);
			break;
		
		case 19:
			return func_180(&(Local_112.f_461), func_775(Local_112.f_14));
			break;
	}
	return 0;
}

int func_180(char* sParam0, int iParam1)//Position - 0x750E
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		iVar0 = func_187();
		func_182(func_186(iVar0));
		StringCopy(sParam0, func_181(iVar0), 64);
		return 1;
	}
	else if (iParam1 == -1)
	{
	}
	return 0;
}

char* func_181(int iParam0)//Position - 0x7544
{
	switch (iParam0)
	{
		case 0:
			return "ELT_NAME";
		
		case 1:
			return "BOATS_NAMEb";
		
		case 2:
			return "LGM_NAME";
		
		case 3:
			return "SSS_NAME";
		
		case 4:
			return "CANDC_NAMEb";
		
		case 5:
			return "PAM_NAME";
		
		default:
	}
	return "LRMVOUCHER_INVALID";
}

void func_182(bool bParam0)//Position - 0x75A5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	char cVar7[64];
	
	if (bParam0 == 8)
	{
		func_185(129, 1, -1);
		return;
	}
	if (bParam0 == 9)
	{
		func_185(135, 1, -1);
		return;
	}
	if (bParam0 == 10)
	{
		func_185(136, 1, -1);
		return;
	}
	if (bParam0 == 11)
	{
		func_185(137, 1, -1);
		return;
	}
	if (bParam0 == 12)
	{
		iVar0 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_24(8272, iVar0 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 13)
	{
		iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_24(8273, iVar1 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 14)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_24(8274, iVar2 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 15)
	{
		iVar3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_24(8275, iVar3 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 16)
	{
		iVar4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_24(8276, iVar4 + 2880, -1, 1, 0);
		return;
	}
	if (bParam0 == 17)
	{
		iVar5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_24(8277, iVar5 + 2880, -1, 1, 0);
		return;
	}
	bVar6 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!BitTest(Global_113386.f_20564.f_471, bParam0))
		{
			bVar6 = true;
			MISC::SET_BIT(&(Global_113386.f_20564.f_471), bParam0);
		}
	}
	else if (!BitTest(Global_113386.f_20564.f_471, bParam0) || !BitTest(Global_2359296[func_184() /*5567*/].f_681.f_10, bParam0))
	{
		bVar6 = true;
		MISC::SET_BIT(&(Global_113386.f_20564.f_471), bParam0);
		MISC::SET_BIT(&(Global_2359296[func_184() /*5567*/].f_681.f_10), bParam0);
	}
	if (bVar6)
	{
		StringCopy(&cVar7, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_STR");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_183(bParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar7, &cVar7, true, 0, "", 0);
	}
}

char* func_183(bool bParam0)//Position - 0x7763
{
	switch (bParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
			break;
		
		default:
			break;
	}
	return "";
}

int func_184()//Position - 0x7865
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_185(int iParam0, bool bParam1, int iParam2)//Position - 0x7872
{
	if (iParam2 == -1)
	{
		iParam2 = func_18();
	}
	STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}

int func_186(int iParam0)//Position - 0x7890
{
	switch (iParam0)
	{
		case 0:
			return 12;
		
		case 1:
			return 13;
		
		case 2:
			return 14;
		
		case 3:
			return 15;
		
		case 4:
			return 16;
		
		case 5:
			return 17;
		
		default:
	}
	return 14;
}

int func_187()//Position - 0x78E3
{
	int iVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_188(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar3 <= func_188(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_188(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_188(int iParam0)//Position - 0x7962
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26852;
		
		case 1:
			return Global_262145.f_26852;
		
		case 2:
			return Global_262145.f_26852;
		
		case 3:
			return Global_262145.f_26852;
		
		case 4:
			return Global_262145.f_26852;
		
		case 5:
			return Global_262145.f_26852;
		
		default:
	}
	return 0;
}

int func_189(char* sParam0, int* iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x79D2
{
	int iVar0;
	
	if (iParam3 != -1 && bParam4)
	{
	}
	if (iParam3 != -1 && !bParam4)
	{
		if (!func_544() && ENTITY::DOES_ENTITY_EXIST(Global_1966140))
		{
			*iParam1 = Global_1966140;
			if (func_270(*iParam1, uParam2, &(uParam2->f_376), &(uParam2->f_377), &(uParam2->f_378), &(uParam2->f_379), 1, 0, 1, 1, 0) || func_70(&(uParam2->f_385), 60000, 0))
			{
				if (uParam2->f_379 != 3 && !func_70(&(uParam2->f_385), 60000, 0))
				{
					StringCopy(sParam0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(ENTITY::GET_ENTITY_MODEL(*iParam1)), 64);
					Global_1966142 = NETWORK::GET_CLOUD_TIME_AS_INT();
					uParam2->f_384 = ENTITY::GET_ENTITY_MODEL(*iParam1);
					if (func_111())
					{
						Global_1966141 = 1;
					}
					else
					{
						func_138(joaat("mpply_lw_podium_veh_model"), ENTITY::GET_ENTITY_MODEL(*iParam1));
						func_269();
					}
					func_244(158, "LUCKY_POD_TXT", 1, 0, 0, 0, 0, 1, 0, 0);
				}
				else
				{
					if (func_70(&(uParam2->f_385), 60000, 0))
					{
					}
					StringCopy(sParam0, "INVALID", 64);
				}
				if (Global_262145.f_28867)
				{
					if (uParam2->f_384 == joaat("clique"))
					{
						iVar0 = func_25(joaat("mpply_xmasliveries16"));
						MISC::SET_BIT(&iVar0, 6);
						func_138(joaat("mpply_xmasliveries16"), iVar0);
					}
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_800), 0);
				func_242();
				func_69(&(uParam2->f_385));
				return 1;
			}
		}
		else
		{
			if (!ENTITY::DOES_ENTITY_EXIST(Global_1966140))
			{
			}
			StringCopy(sParam0, "GIVE_RP_FOR_VEH", 64);
			func_190(0, PLAYER::PLAYER_PED_ID(), "200000", -1827353931, 1223799452, 20000, 1, -1, 0, 0, 0);
			return 1;
		}
	}
	else if (iParam3 == -1)
	{
		if (func_270(*iParam1, uParam2, &(uParam2->f_376), &(uParam2->f_377), &(uParam2->f_378), &(uParam2->f_379), 1, 0, 1, 0, 0) || func_70(&(uParam2->f_385), 60000, 0))
		{
			if (uParam2->f_379 != 3 && !func_70(&(uParam2->f_385), 60000, 0))
			{
				StringCopy(sParam0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(ENTITY::GET_ENTITY_MODEL(*iParam1)), 64);
			}
			else
			{
				if (func_70(&(uParam2->f_385), 60000, 0))
				{
				}
				StringCopy(sParam0, "INVALID", 64);
			}
			if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(*iParam1)))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_800), 0);
			}
			else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam1)))
			{
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_800), 1);
			}
			func_69(&(uParam2->f_385));
			return 1;
		}
	}
	return 0;
}

int func_190(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)//Position - 0x7C50
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_200(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_39, 19))
	{
		return iVar0;
	}
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_196(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_191(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_191(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x7CE3
{
	struct<3> Var0;
	
	Var0 = { func_194(iParam0, 1) };
	if (iParam0 == func_193(PLAYER::PLAYER_PED_ID()))
	{
		func_192(1);
	}
	func_196(Var0, iParam1, 0, sParam2, iParam3);
}

void func_192(int iParam0)//Position - 0x7D17
{
	Global_2703735.f_1568 = iParam0;
}

int func_193(int iParam0)//Position - 0x7D28
{
	return iParam0;
}

Vector3 func_194(int iParam0, bool bParam1)//Position - 0x7D32
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		Var1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_195(PLAYER::PLAYER_PED_ID()) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
		{
			fVar2 = Var1.f_2;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var3, &Var4);
	if (bParam1)
	{
		fVar5 = (Var4.f_2 + 0.18f);
	}
	else
	{
		fVar5 = (Var3.f_2 + 0.18f);
	}
	Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var0, fVar2, 0f, 0f, fVar5) };
	return Var0;
}

int func_195(int iParam0)//Position - 0x7DF6
{
	return iParam0;
}

void func_196(struct<3> Param0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0x7E00
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2703735.f_967[iVar0 /*30*/].f_6 == 0 || Global_2703735.f_967[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2703735.f_967[iVar1 /*30*/] = { Param0 };
			Global_2703735.f_967[iVar1 /*30*/].f_6 = 1;
			Global_2703735.f_967[iVar1 /*30*/].f_4 = func_199(Global_2703735.f_967[iVar1 /*30*/], &Global_1574479, &Global_1574480);
			Global_2703735.f_967[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2703735.f_967[iVar1 /*30*/].f_3 = iParam1;
			Global_2703735.f_967[iVar1 /*30*/].f_8 = iParam2;
			Global_2703735.f_967[iVar1 /*30*/].f_9 = func_198();
			Global_2703735.f_967[iVar1 /*30*/].f_10 = func_197();
			StringCopy(&(Global_2703735.f_967[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2703735.f_967[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_197()//Position - 0x7F17
{
	if (Global_2703735.f_1568)
	{
		Global_2703735.f_1568 = 0;
		return 1;
	}
	Global_2703735.f_1568 = 0;
	return 0;
}

var func_198()//Position - 0x7F41
{
	var uVar0;
	
	uVar0 = Global_2703735.f_1570;
	Global_2703735.f_1570 = 1;
	return uVar0;
}

float func_199(struct<3> Param0, var uParam1, var uParam2)//Position - 0x7F5C
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), Param0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_200(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x7FF5
{
	var uVar0;
	
	uVar0 = func_201(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_201(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x8019
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_233();
	if (func_232(sParam2))
	{
	}
	if (func_231())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_229(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_228(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_225(0, &iVar1);
					break;
				
				case 3:
					func_225(1, &iVar1);
					break;
				
				case 1:
					func_221(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1957716)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_219(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_210((func_218(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_36.f_2 != -1)
				{
					func_219(1166, iVar1, -1);
				}
				func_204(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_202((func_203(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_202((func_203(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_202(int iParam0)//Position - 0x8184
{
	if (func_231())
	{
		Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_5 = iParam0;
		func_138(joaat("mpply_globalxp"), iParam0);
	}
}

int func_203(int iParam0)//Position - 0x81AF
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_25(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_5;
			}
		}
		else
		{
			return func_25(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

void func_204(int iParam0)//Position - 0x8200
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_209(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_207(func_208(&Var0));
			if (iVar1 == 0)
			{
				func_206(&Global_1659614, iParam0);
				func_205(joaat("mpply_crew_local_xp_0"), Global_1659614);
			}
			else if (iVar1 == 1)
			{
				func_206(&Global_1659615, iParam0);
				func_205(joaat("mpply_crew_local_xp_1"), Global_1659615);
			}
			else if (iVar1 == 2)
			{
				func_206(&Global_1659616, iParam0);
				func_205(joaat("mpply_crew_local_xp_2"), Global_1659616);
			}
			else if (iVar1 == 3)
			{
				func_206(&Global_1659617, iParam0);
				func_205(joaat("mpply_crew_local_xp_3"), Global_1659617);
			}
			else if (iVar1 == 4)
			{
				func_206(&Global_1659618, iParam0);
				func_205(joaat("mpply_crew_local_xp_4"), Global_1659618);
			}
		}
	}
}

void func_205(int iParam0, int iParam1)//Position - 0x82D4
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_1659609 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1659611 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1659612 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1659613 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1659614 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1659615 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1659616 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1659617 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1659618 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1659619 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1659620 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1659621 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1659622 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1659623 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1659624 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1659625 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_206(var uParam0, int iParam1)//Position - 0x83F9
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_207(int iParam0)//Position - 0x840A
{
	if (iParam0 == Global_1659609)
	{
		return 0;
	}
	else if (iParam0 == Global_1659610)
	{
		return 1;
	}
	else if (iParam0 == Global_1659611)
	{
		return 2;
	}
	else if (iParam0 == Global_1659612)
	{
		return 3;
	}
	else if (iParam0 == Global_1659613)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_208(var* uParam0)//Position - 0x8467
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2725345;
		}
	}
	return Global_2725345;
}

struct<13> func_209(int iParam0)//Position - 0x848A
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_210(int iParam0, int iParam1, int iParam2)//Position - 0x84A1
{
	if (func_231())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10069 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1659759[func_22(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1659759[func_22(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10068 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_217(PLAYER::PLAYER_ID()))
		{
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_1 = iParam0;
			Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_6 = func_215(iParam0, 1);
		}
		func_214(640, iParam0, -1, 1);
		func_24(641, func_215(iParam0, 1), -1, 1, 0);
		Global_1659759[func_22(-1)] = iParam0;
		func_211(-1109644434, 7, 0);
	}
}

void func_211(int iParam0, int iParam1, int iParam2)//Position - 0x85C7
{
	int iVar0;
	
	if (func_213(iParam1, iParam2))
	{
		iVar0 = func_212();
		Global_2725297[iVar0] = iParam1;
		Global_2725308[iVar0] = iParam0;
	}
}

int func_212()//Position - 0x85F4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2725297[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_213(int iParam0, var uParam1)//Position - 0x8629
{
	if (Global_1575046)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575058) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_214(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x86AF
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_22(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 788:
			Global_1659687[func_22(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1659693[func_22(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1659699[func_22(iParam2)] = iParam1;
			break;
		
		case 791:
			Global_1659705[func_22(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1659711[func_22(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1659657[func_22(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1659663[func_22(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1659669[func_22(iParam2)] = iParam1;
			break;
		
		case 781:
			Global_1659675[func_22(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1659681[func_22(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1659627[func_22(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1659633[func_22(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1659639[func_22(iParam2)] = iParam1;
			break;
		
		case 771:
			Global_1659645[func_22(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1659651[func_22(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1659717[func_22(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1659723[func_22(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1659729[func_22(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1659735[func_22(iParam2)] = iParam1;
			break;
		
		case 8735:
			Global_1659741[func_22(iParam2)] = iParam1;
			break;
		
		case 1304:
			Global_1659747[func_22(iParam2)] = iParam1;
			break;
		
		case 7236:
			Global_1659753[func_22(iParam2)] = iParam1;
			break;
		
		case 640:
			Global_1659759[func_22(iParam2)] = iParam1;
			break;
		
		case 1279:
			Global_1659765[func_22(iParam2)] = iParam1;
			break;
		
		case 1878:
			Global_2869777[0 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 2269:
			Global_2869777[1 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 2932:
			Global_2869777[2 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3061:
			Global_2869777[3 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 11391:
			Global_2869950[func_22(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1659771[func_22(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1659777[func_22(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1659783[func_22(iParam2)] = iParam1;
			break;
		
		case 8734:
			Global_1659789[func_22(iParam2)] = iParam1;
			break;
		
		case 9538:
			Global_1659795[func_22(iParam2)] = iParam1;
			break;
		
		case 1237:
			Global_1659801[func_22(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2869862[0 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2869862[1 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2869862[2 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2869862[3 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3060:
			Global_2869862[4 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2869953[0 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2869953[1 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2869953[2 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2869953[3 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2869953[4 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2869969[0 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2869969[1 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2869969[2 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3647:
			Global_2869969[3 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3648:
			Global_2869969[4 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3224:
			Global_2869862[5 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2869777[4 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2869985[func_22(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2869994[func_22(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2869988[func_22(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2869997[func_22(iParam2)] = iParam1;
			break;
		
		case 3670:
			Global_2869991[func_22(iParam2)] = iParam1;
			break;
		
		case 3671:
			Global_2870000[func_22(iParam2)] = iParam1;
			break;
		
		case 3692:
			Global_2870003[func_22(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_2869862[6 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2869777[5 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3237:
			Global_2869862[7 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2869777[6 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2869862[8 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2869777[7 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2869862[9 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2869777[8 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_2869862[10 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2869777[9 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4031:
			Global_2869862[11 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 4032:
			Global_2869777[10 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6112:
			Global_2869862[12 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6113:
			Global_2869777[11 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6170:
			Global_2869862[13 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6171:
			Global_2869777[12 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6548:
			Global_2869862[14 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6549:
			Global_2869777[13 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2869862[15 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2869777[14 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_2869862[16 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2869777[15 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6567:
			Global_2869862[17 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 6568:
			Global_2869777[16 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2869777[17 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2869777[18 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 7290:
			Global_2869777[19 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 8013:
			Global_2869777[20 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2870006[func_22(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2870009[func_22(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2870012[func_22(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2870015[func_22(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2870018[func_22(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2870021[func_22(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2870024[func_22(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2870027[func_22(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2870030[func_22(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2870033[func_22(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2870036[func_22(iParam2)] = iParam1;
			break;
		
		case 8296:
			Global_2870039[func_22(iParam2)] = iParam1;
			break;
		
		case 8297:
			Global_2870042[func_22(iParam2)] = iParam1;
			break;
		
		case 8905:
			Global_2870045[func_22(iParam2)] = iParam1;
			break;
		
		case 8537:
			Global_2869777[21 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 8982:
			Global_2869862[23 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 8980:
			Global_2869777[22 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 8985:
			Global_2869862[24 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 8983:
			Global_2869777[23 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 9624:
			Global_2869777[24 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 9913:
			Global_2869777[25 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 10443:
			Global_2869862[27 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 10441:
			Global_2869777[26 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 10446:
			Global_2869862[28 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		case 10444:
			Global_2869777[27 /*3*/][func_22(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_215(int iParam0, bool bParam1)//Position - 0x91CA
{
	if (bParam1)
	{
	}
	return func_216(iParam0, 0);
}

int func_216(int iParam0, int iParam1)//Position - 0x91DE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_295824[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_295824[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_217(int iParam0)//Position - 0x929D
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return BitTest(Global_2703735.f_1, iParam0);
	}
	return 1;
}

int func_218(int iParam0)//Position - 0x92BF
{
	if (Global_1574632.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1659759[func_22(-1)];
			}
			else if (func_217(iParam0))
			{
				return Global_1853348[iParam0 /*834*/].f_205.f_1;
			}
		}
	}
	else
	{
		return Global_1659759[func_22(-1)];
	}
	return 0;
}

void func_219(int iParam0, int iParam1, int iParam2)//Position - 0x931C
{
	int iVar0;
	
	iVar0 = func_21(iParam0, func_22(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_220(iParam0))
	{
		func_24(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_214(iParam0, iVar0, iParam2, 1);
	}
}

int func_220(int iParam0)//Position - 0x935E
{
	if (Global_1659608)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 11391:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return 1;
				break;
			}
	}
	return 0;
}

void func_221(int iParam0)//Position - 0x9628
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_224(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_223(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_222(*iParam0, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_222(*iParam0, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_222(int iParam0, int iParam1)//Position - 0x9713
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_223(int iParam0, int iParam1)//Position - 0x9734
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2787505 = { func_209(iParam0) };
		Global_2787518 = { func_209(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787505))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2787518))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787435, 35, &Global_2787505);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2787470, 35, &Global_2787518);
				if (Global_2787435 == Global_2787470)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_224(int iParam0, int iParam1, int iParam2)//Position - 0x97A1
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 0);
				
				case 1:
					return BitTest(Global_4718592.f_607, 1);
				
				case 2:
					return BitTest(Global_4718592.f_607, 2);
				
				case 3:
					return BitTest(Global_4718592.f_607, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 4);
				
				case 1:
					return BitTest(Global_4718592.f_607, 5);
				
				case 2:
					return BitTest(Global_4718592.f_607, 6);
				
				case 3:
					return BitTest(Global_4718592.f_607, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 8);
				
				case 1:
					return BitTest(Global_4718592.f_607, 9);
				
				case 2:
					return BitTest(Global_4718592.f_607, 10);
				
				case 3:
					return BitTest(Global_4718592.f_607, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_607, 12);
				
				case 1:
					return BitTest(Global_4718592.f_607, 13);
				
				case 2:
					return BitTest(Global_4718592.f_607, 14);
				
				case 3:
					return BitTest(Global_4718592.f_607, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_225(bool bParam0, int iParam1)//Position - 0x994C
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_223(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_226(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_223(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_222(*iParam1, 100) * (10f * Global_262145.f_4227)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_222(*iParam1, 100) * (20f * Global_262145.f_4220)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_226(int iParam0, int iParam1)//Position - 0x9A64
{
	return SYSTEM::VDIST(func_227(iParam0), func_227(iParam1));
	return 0f;
}

Vector3 func_227(int iParam0)//Position - 0x9A80
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_228(int iParam0)//Position - 0x9A93
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_222(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_229(int iParam0)//Position - 0x9ACA
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_218(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_218(PLAYER::PLAYER_ID());
		}
	}
	if (func_230(8000, 0, 0) > 0)
	{
		if (func_230(8000, 0, 0) < (iParam0 + func_218(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_230(8000, 0, 0) - func_218(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_230(int iParam0, bool bParam1, int iParam2)//Position - 0x9B2E
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_295824[iParam0];
}

int func_231()//Position - 0x9B56
{
	return 1;
}

int func_232(char* sParam0)//Position - 0x9B5F
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_233()//Position - 0x9B97
{
	int iVar0;
	
	if (func_241(PLAYER::PLAYER_ID()) || func_240(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10101 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10101;
		}
	}
	else if (func_237() || func_234(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23310 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23310;
		}
	}
	else if (Global_262145.f_7094 > 20000)
	{
		iVar0 = 20000;
	}
	else
	{
		iVar0 = Global_262145.f_7094;
	}
	return iVar0;
}

int func_234(int iParam0)//Position - 0x9C2F
{
	return func_235(func_236(iParam0));
}

int func_235(int iParam0)//Position - 0x9C41
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_236(int iParam0)//Position - 0x9C5B
{
	if (func_35(iParam0, 0))
	{
		return Global_1892703[iParam0 /*599*/].f_10.f_33;
	}
	return -1;
}

int func_237()//Position - 0x9C7E
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_239();
	}
	return func_238(Global_4718592.f_116524);
}

int func_238(int iParam0)//Position - 0x9CA2
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5041[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_239()//Position - 0x9CDC
{
	return Global_2714762.f_19;
}

bool func_240(int iParam0)//Position - 0x9CEA
{
	return Global_2689235[iParam0 /*453*/].f_119 == 2;
}

bool func_241(int iParam0)//Position - 0x9CFF
{
	return Global_2689235[iParam0 /*453*/].f_119 == 7;
}

void func_242()//Position - 0x9D14
{
	struct<3> Var0;
	int iVar1;
	
	Var0.f_0 = 453867094;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = 1;
	iVar1 = func_243(1, 1);
	if (iVar1 != -1)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 3, iVar1);
	}
}

var func_243(int iParam0, bool bParam1)//Position - 0x9D4B
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_6(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_16(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_244(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x9DB0
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_8136, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_246(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8843 = iParam6;
			Global_8746[3 /*6*/] = { func_245(iParam0) };
			Global_8823 = iParam0;
			MISC::SET_BIT(&Global_8136, 1);
			MISC::SET_BIT(&Global_8136, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_245(int iParam0)//Position - 0x9E3F
{
	return Global_1998[iParam0 /*29*/].f_3;
}

int func_246(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x9E52
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_262();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_20266 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_20266 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_20266 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_113386.f_14051[Global_20266 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_261() == 0)
	{
		func_259();
		return 0;
	}
	func_258(Global_22672);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/]), sParam1, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_24 = iParam2;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_25 = iParam7;
	Global_113386.f_14141[Global_22672 /*104*/].f_26 = uParam8;
	Global_113386.f_14141[Global_22672 /*104*/].f_29 = uParam9;
	Global_113386.f_14141[Global_22672 /*104*/].f_30 = uParam12;
	Global_113386.f_14141[Global_22672 /*104*/].f_31 = uParam11;
	Global_113386.f_14141[Global_22672 /*104*/].f_28 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_33), sParam4, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_50), sParam5, 64);
	Global_113386.f_14141[Global_22672 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_8136, 10))
	{
		Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
		Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
		Global_8842 = 4;
		func_257(0);
		func_257(2);
		func_257(1);
	}
	else
	{
		func_262();
		switch (iParam16)
		{
			case 3:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[Global_20266] = 1;
				break;
			
			case 0:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_20266)
			{
				case 0:
					func_257(0);
					Global_8842 = 0;
					break;
				
				case 1:
					func_257(1);
					Global_8842 = 1;
					break;
				
				case 2:
					func_257(2);
					Global_8842 = 2;
					break;
				
				case 3:
					func_257(3);
					Global_8842 = 3;
					break;
				
				default:
					Global_8842 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_8136, 10))
		{
			Global_113386.f_14051[0 /*20*/].f_17 = 1;
			Global_113386.f_14051[1 /*20*/].f_17 = 1;
			Global_113386.f_14051[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_113386.f_14051[Global_20266 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_113386.f_14051[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_113386.f_14051[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_113386.f_14051[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22674[Global_22672] = 0;
	if (bParam10)
	{
		func_262();
		if (Global_20209)
		{
			StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_20266)
			{
				case 0:
					StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_256())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20255, true);
			}
		}
	}
	if (!Global_20465)
	{
		if (Global_20266.f_1 == 6)
		{
			func_255(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_251(1);
			func_255(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1973156 != -1 && iParam0 == Global_1973156)
	{
		bVar1 = true;
	}
	func_247(iParam0, sParam1, bVar1, func_250(PLAYER::PLAYER_ID()));
	return 1;
}

void func_247(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0xA32D
{
	if (!func_248())
	{
		return;
	}
	MONEY::_NETWORK_SPENT_NIGHTCLUB_BATHROOM_ATTENDANT(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
	if (bParam2)
	{
		Global_1973156 = -1;
	}
}

int func_248()//Position - 0xA360
{
	if (!Global_262145.f_28866)
	{
		return 0;
	}
	if (!Global_78319)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_8())
	{
		return 0;
	}
	if (func_249(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_249(int iParam0)//Position - 0xA3C3
{
	return func_34(iParam0, 20);
}

int func_250(int iParam0)//Position - 0xA3D3
{
	return Global_1853348[iParam0 /*834*/].f_205.f_6;
}

void func_251(int iParam0)//Position - 0xA3E8
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22673 = 0;
	Global_8741 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8705[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_254(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar2 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_20468 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_253(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2725398)
							{
								if (iVar1 == 14)
								{
									func_252(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_8143[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_8143[iVar1 /*15*/].f_4)
					{
						if (Global_8705[iVar0] == 0)
						{
							Global_8669[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_113386.f_14141[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_113386.f_14141[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266] == 1)
											{
												Global_22673++;
											}
										}
									}
									iVar3++;
								}
								func_252(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_78319)
								{
									iVar4 = 0;
									iVar4 = Global_4539963;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4539964[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4539964[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4539964[iVar5 /*104*/].f_99[Global_20266] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_252(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_20266)
									{
										case 0:
											iVar6 = Global_44249;
											break;
										
										case 1:
											iVar6 = Global_44250;
											break;
										
										case 2:
											iVar6 = Global_44251;
											break;
										
										default:
											break;
									}
									func_252(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_252(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_253(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8142);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_8137, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_253(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_8137, 3))
								{
									iVar8 = 42;
									Global_20468 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_20468 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_253(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_253(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_8137, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_253(&(Global_8143[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_8143[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1888478.f_1;
								func_252(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_252(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8705[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_252(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xA982
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_253(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_253(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_253(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_253(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_253(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_253(char* sParam0)//Position - 0xAA35
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_254(int iParam0)//Position - 0xAA47
{
	return Global_43052 == iParam0;
}

void func_255(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0xAA55
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_256()//Position - 0xAAB8
{
	return Global_1575058;
}

void func_257(int iParam0)//Position - 0xAAC4
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_113386.f_14051[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_258(int iParam0)//Position - 0xAAE3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_113386.f_14141[iParam0 /*104*/].f_18 = iVar0;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_113386.f_14141[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_259()//Position - 0xAB75
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_260(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
		{
			Global_22672 = iVar2;
		}
		iVar2++;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_24 = 1;
}

int func_260(struct<6> Param0, struct<6> Param1)//Position - 0xAC40
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1.f_0 = Param1.f_0;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1.f_0 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_261()//Position - 0xAD2B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_78319)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0)
		{
			Global_22672 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22672 = 34;
	Global_113386.f_14141[Global_22672 /*104*/].f_18 = -1;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3 = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 0 || Global_113386.f_14141[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_260(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18))
			{
				Global_22672 = iVar2;
			}
		}
		if (Global_113386.f_14141[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22672 == 34)
	{
		return 0;
	}
	Global_113386.f_14141[Global_22672 /*104*/].f_99[0] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[1] = 0;
	Global_113386.f_14141[Global_22672 /*104*/].f_99[2] = 0;
	return 1;
}

void func_262()//Position - 0xAE93
{
	if (func_254(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[0 /*29*/])
			{
				Global_20266 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[1 /*29*/])
			{
				Global_20266 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113386.f_28050[2 /*29*/])
			{
				Global_20266 = 2;
			}
			else
			{
				Global_20266 = 0;
			}
		}
	}
	else
	{
		Global_20266 = func_263();
		if (Global_20266 == 145)
		{
			Global_20266 = 3;
		}
		if (Global_78319)
		{
			Global_20266 = 3;
		}
		if (Global_20266 > 3)
		{
			Global_20266 = 3;
		}
	}
}

var func_263()//Position - 0xAF35
{
	func_264();
	return Global_113386.f_2363.f_539.f_4321;
}

void func_264()//Position - 0xAF4E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_267(Global_113386.f_2363.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_266(PLAYER::PLAYER_PED_ID());
			if (func_265(iVar0) && (!func_254(14) || Global_112337))
			{
				if (Global_113386.f_2363.f_539.f_4321 != iVar0 && func_265(Global_113386.f_2363.f_539.f_4321))
				{
					Global_113386.f_2363.f_539.f_4322 = Global_113386.f_2363.f_539.f_4321;
				}
				Global_113386.f_2363.f_539.f_4323 = iVar0;
				Global_113386.f_2363.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_113386.f_2363.f_539.f_4321 != 145)
			{
				Global_113386.f_2363.f_539.f_4323 = Global_113386.f_2363.f_539.f_4321;
			}
			return;
		}
	}
	Global_113386.f_2363.f_539.f_4321 = 145;
}

bool func_265(int iParam0)//Position - 0xB04B
{
	return iParam0 < 3;
}

int func_266(int iParam0)//Position - 0xB057
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_267(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_267(int iParam0)//Position - 0xB094
{
	if (func_265(iParam0))
	{
		return func_268(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_268(int iParam0)//Position - 0xB0B9
{
	return Global_1998[iParam0 /*29*/];
}

void func_269()//Position - 0xB0C8
{
	func_24(8353, (Global_1966142 + 604800), -1, 1, 0);
	Global_2725353 = 1;
}

int func_270(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10)//Position - 0xB0E8
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = -1;
	bVar2 = false;
	iVar4 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (*uParam5)
	{
		case 0:
			if (func_543(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
			{
				func_535(iVar4, &iVar0);
				if (iVar0 != -1)
				{
					*iParam3 = func_534(1, 0, iVar4, iVar0, -1, 0);
					*uParam4 = func_526(1, 0, iVar4, iVar0, -1, 0);
					if (*iParam3 > -1 && *uParam4 > -1)
					{
						*uParam5 = 1;
					}
				}
				else
				{
					iVar1 = -1;
				}
				if (iVar1 == -1 || *uParam4 == -1)
				{
					if (!BitTest(uParam1->f_370, 7))
					{
						if (func_409(uParam1, iParam3, uParam4, iVar4, 0, -1, 1))
						{
							if (*iParam3 > -1 && *uParam4 > -1)
							{
								*uParam5 = 1;
							}
						}
					}
					else if (bParam8)
					{
						iVar3 = 36;
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "LW_LOSE_VEH", iVar3, 0, false, -1, 0, 0, true, 0);
						if (HUD::IS_WARNING_MESSAGE_ACTIVE() && !func_408())
						{
							if (PAD::IS_CONTROL_PRESSED(2, 201))
							{
								MISC::CLEAR_BIT(&(uParam1->f_370), 7);
								*uParam5 = 3;
								return 1;
							}
							else if (PAD::IS_CONTROL_PRESSED(2, 202) || func_407())
							{
								MISC::CLEAR_BIT(&(uParam1->f_370), 7);
							}
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam1->f_370), 7);
						*uParam5 = 3;
						return 1;
					}
				}
			}
			else if (!func_406(ENTITY::GET_ENTITY_MODEL(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (func_405())
				{
					iVar5 = 0;
					while (iVar5 < 363)
					{
						if (func_401(iVar5))
						{
							bVar2 = true;
							iVar5 = 364;
						}
						iVar5++;
					}
					iVar3 = 18;
					if (bVar2)
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V1", iVar3, 0, false, -1, 0, 0, true, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, false, -1, 0, 0, true, 0);
					}
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2, 202) || func_407())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else if (BitTest(Global_1585857[0 /*142*/].f_103, 2))
				{
					iVar3 = 18;
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("BRSCRWTEX", "CASINO_PRIZE_V2", iVar3, 0, false, -1, 0, 0, true, 0);
					if (HUD::IS_WARNING_MESSAGE_ACTIVE())
					{
						if (PAD::IS_CONTROL_PRESSED(2, 202) || func_407())
						{
							*uParam5 = 3;
							return 1;
						}
						else if (PAD::IS_CONTROL_PRESSED(2, 201))
						{
							*iParam3 = 0;
							*uParam4 = 0;
							*uParam5 = 1;
						}
					}
				}
				else
				{
					*iParam3 = 0;
					*uParam4 = 0;
					*uParam5 = 1;
				}
			}
			break;
		
		case 1:
			if (func_127(iParam0))
			{
				if (func_111())
				{
					if (func_350(iParam0, *iParam3, uParam2, 1, 1))
					{
						if (*uParam2 == 2)
						{
							if (*iParam3 >= 0)
							{
								func_346(*uParam4, *iParam3, -1);
							}
							if (!func_543(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
							{
								func_341(1, 0, 0, 0, 0, 0, 0);
								bParam6 = false;
								bParam7 = true;
							}
							if (bParam9)
							{
								if (iParam10 == 0)
								{
								}
								else if (iParam10 == 1)
								{
								}
							}
							func_302(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1, iParam10);
							func_271(iParam0, *iParam3);
							func_211(1849420593, 3, 0);
							return 1;
						}
						else if (*uParam2 == 3)
						{
						}
					}
					else
					{
						return 0;
					}
				}
				else
				{
					if (*iParam3 >= 0)
					{
						func_346(*uParam4, *iParam3, -1);
					}
					if (!func_543(ENTITY::GET_ENTITY_MODEL(iParam0), -1))
					{
						func_341(1, 0, 0, 0, 0, 0, 0);
						bParam6 = false;
						bParam7 = true;
					}
					if (bParam9)
					{
						if (iParam10 == 0)
						{
						}
						else if (iParam10 == 1)
						{
						}
					}
					func_302(iParam0, *iParam3, 1, bParam6, bParam7, 1, 1, bParam9, 1, -1, iParam10);
					func_271(iParam0, *iParam3);
					func_211(1849420593, 3, 0);
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_271(int iParam0, int iParam1)//Position - 0xB498
{
	func_301(iParam0);
	func_272(iParam1);
}

void func_272(int iParam0)//Position - 0xB4AC
{
	if (iParam0 >= 0 && iParam0 <= 363)
	{
		MISC::SET_BIT(&(Global_1585857[iParam0 /*142*/].f_103), 2);
		func_299(101, 1, -1, 1);
		func_279(iParam0, &(Global_1585857[iParam0 /*142*/]), 1, -1, 0, 0);
		if (!Global_1577982)
		{
			func_273(91, 3, 1);
			Global_1577982 = 1;
		}
		else
		{
			func_273(91, 3, 0);
		}
	}
}

void func_273(int iParam0, int iParam1, bool bParam2)//Position - 0xB511
{
	int iVar0;
	
	Global_8822 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 166)
	{
		func_262();
		if (iParam1 == 4)
		{
			func_278(iParam0, 0, 1);
			func_278(iParam0, 1, 1);
			func_278(iParam0, 2, 1);
			func_277(iParam0, 0, 1);
			func_277(iParam0, 1, 1);
			func_277(iParam0, 2, 1);
		}
		else
		{
			if (func_276(iParam0, iParam1) == 1 && func_275(iParam0, iParam1) == 1)
			{
				bParam2 = false;
			}
			iVar0 = iParam1;
			func_278(iParam0, iVar0, 1);
			func_277(iParam0, iVar0, 1);
			if (iParam0 == 172 && !Global_2815059.f_6768)
			{
				bParam2 = false;
			}
			if (iParam0 == 171 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
			if (iParam0 == 173 && !Global_2815059.f_6767)
			{
				bParam2 = false;
			}
		}
		if (bParam2)
		{
			if (!Global_78319)
			{
				if (iParam1 != 4)
				{
					if (Global_20266 != iParam1)
					{
						Global_8795[iParam1 /*4*/] = { func_245(iParam0) };
						Global_8812[iParam1] = 1;
						Global_8817[iParam1] = iParam0;
					}
					else if (iParam0 == Global_20266)
					{
					}
					else
					{
						Global_8746[1 /*6*/] = { func_245(iParam0) };
						Global_8746[1 /*6*/].f_5 = iParam1;
						func_274();
					}
				}
				else
				{
					Global_8746[1 /*6*/] = { func_245(iParam0) };
					Global_8746[1 /*6*/].f_5 = iParam1;
					func_274();
				}
			}
			else
			{
				Global_8746[1 /*6*/] = { func_245(iParam0) };
				Global_8746[1 /*6*/].f_5 = iParam1;
				func_274();
			}
		}
	}
}

void func_274()//Position - 0xB689
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1998[Global_8822 /*29*/].f_7)), 64);
	if (Global_8841 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_8746[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8746[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_8136, 0);
}

int func_275(int iParam0, int iParam1)//Position - 0xB704
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_24[iParam1];
}

int func_276(int iParam0, int iParam1)//Position - 0xB72E
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return 0;
	}
	return Global_1998[iParam0 /*29*/].f_12[iParam1];
}

void func_277(int iParam0, int iParam1, int iParam2)//Position - 0xB758
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_24[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_24[iParam1] = iParam2;
	}
}

void func_278(int iParam0, int iParam1, int iParam2)//Position - 0xB79D
{
	if (iParam1 < 0 || iParam1 > 4)
	{
		return;
	}
	Global_1998[iParam0 /*29*/].f_12[iParam1] = iParam2;
	if (iParam0 < 162)
	{
		Global_113386.f_28050[iParam0 /*29*/].f_12[iParam1] = iParam2;
	}
}

int func_279(int iParam0, var uParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0xB7E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		if (!bParam4)
		{
		}
		Global_2359296[func_184() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	if (!bParam4)
	{
	}
	iVar1 = func_298(1411, iParam0);
	func_66(iVar1, uParam1->f_138, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_298(1412, iParam0);
	func_66(iVar1, uParam1->f_139, iParam3);
	if (!bParam4)
	{
	}
	if (func_297(iParam0))
	{
	}
	else
	{
		iVar1 = func_298(1413, iParam0);
		func_66(iVar1, *uParam1, iParam3);
		if (!bParam4)
		{
		}
		iVar0 = 0;
		while (iVar0 < 49)
		{
			if (iVar0 < 25)
			{
				iVar1 = (func_298(1414, iParam0) + iVar0);
				func_66(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			else
			{
				iVar1 = (func_296(iParam0) + (iVar0 - 25));
				func_66(iVar1, uParam1->f_9[iVar0], iParam3);
			}
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			iVar1 = (func_298(1439, iParam0) + iVar0);
			func_66(iVar1, uParam1->f_59[iVar0], iParam3);
			iVar0++;
		}
	}
	iVar1 = func_298(1441, iParam0);
	func_66(iVar1, uParam1->f_62, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_298(1442, iParam0);
	func_66(iVar1, uParam1->f_63, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_298(1443, iParam0);
	func_66(iVar1, uParam1->f_64, iParam3);
	if (!bParam4)
	{
	}
	if (func_297(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_298(1444, iParam0);
		func_66(iVar1, uParam1->f_65, iParam3);
		if (!bParam4)
		{
		}
	}
	iVar1 = func_298(1445, iParam0);
	func_66(iVar1, uParam1->f_67, iParam3);
	if (func_297(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_298(1446, iParam0);
		func_66(iVar1, uParam1->f_68, iParam3);
	}
	iVar1 = func_298(1447, iParam0);
	func_66(iVar1, uParam1->f_69, iParam3);
	if (!bParam4)
	{
	}
	iVar1 = func_298(1448, iParam0);
	func_66(iVar1, uParam1->f_70, -1);
	iVar1 = func_298(1449, iParam0);
	func_66(iVar1, uParam1->f_71, iParam3);
	iVar1 = func_298(1450, iParam0);
	func_66(iVar1, uParam1->f_72, iParam3);
	iVar1 = func_298(1451, iParam0);
	func_66(iVar1, uParam1->f_73, iParam3);
	iVar1 = func_298(1452, iParam0);
	func_66(iVar1, uParam1->f_5, iParam3);
	iVar1 = func_298(1453, iParam0);
	func_66(iVar1, uParam1->f_6, iParam3);
	iVar1 = func_298(1454, iParam0);
	func_66(iVar1, uParam1->f_7, iParam3);
	iVar1 = func_298(1455, iParam0);
	func_66(iVar1, uParam1->f_8, iParam3);
	if (func_297(iParam0))
	{
		if (!bParam4)
		{
		}
	}
	else
	{
		iVar1 = func_298(3880, iParam0);
		func_66(iVar1, uParam1->f_74, iParam3);
		iVar1 = func_298(3881, iParam0);
		func_66(iVar1, uParam1->f_75, iParam3);
		iVar1 = func_298(3882, iParam0);
		func_66(iVar1, uParam1->f_76, iParam3);
		iVar1 = func_295(iParam0);
		func_66(iVar1, uParam1->f_97, iParam3);
		iVar1 = func_294(iParam0);
		func_66(iVar1, uParam1->f_99, iParam3);
		iVar1 = func_293(iParam0);
		func_66(iVar1, uParam1->f_98, iParam3);
		iVar1 = func_282(iParam0, 0);
		func_66(iVar1, uParam1->f_102, iParam3);
	}
	iVar2 = Global_2359296[func_184() /*5567*/].f_681.f_1275;
	if (bParam5)
	{
		iVar2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
	func_24(1629, iVar2, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_24(func_281(1, iParam0), uParam1->f_103, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_24(func_281(2, iParam0), uParam1->f_104, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_24(func_281(3, iParam0), uParam1->f_105, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_24(func_281(4, iParam0), uParam1->f_66, iParam3, 1, 0);
	func_24(func_281(5, iParam0), uParam1->f_77, iParam3, 1, 0);
	if (!bParam4)
	{
	}
	func_24(func_281(7, iParam0), uParam1->f_140, iParam3, 1, 0);
	if (!func_297(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam1->f_1)))
		{
			func_280(func_281(6, iParam0), &(uParam1->f_1), iParam3);
			if (!bParam4)
			{
			}
		}
		else if (!bParam4)
		{
		}
	}
	if (!bParam4)
	{
	}
	return 1;
}

void func_280(int iParam0, char* sParam1, int iParam2)//Position - 0xBC38
{
	int iVar0;
	
	iVar0 = Global_2826809[iParam0 /*3*/][func_22(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_LICENSE_PLATE(iVar0, sParam1);
	}
}

int func_281(int iParam0, int iParam1)//Position - 0xBC61
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 1630;
				
				case 1:
					return 1637;
				
				case 2:
					return 1644;
				
				case 3:
					return 1651;
				
				case 4:
					return 1658;
				
				case 5:
					return 1665;
				
				case 6:
					return 1672;
				
				case 7:
					return 1679;
				
				case 8:
					return 1686;
				
				case 9:
					return 1693;
				
				case 10:
					return 1700;
				
				case 11:
					return 1706;
				
				case 12:
					return 1712;
				
				case 13:
					return 1718;
				
				case 14:
					return 1797;
				
				case 15:
					return 1804;
				
				case 16:
					return 1811;
				
				case 17:
					return 1818;
				
				case 18:
					return 1825;
				
				case 19:
					return 1832;
				
				case 20:
					return 1839;
				
				case 21:
					return 1846;
				
				case 22:
					return 1853;
				
				case 23:
					return 1860;
				
				case 24:
					return 1866;
				
				case 25:
					return 1872;
				
				case 26:
					return 2167;
				
				case 27:
					return 2174;
				
				case 28:
					return 2181;
				
				case 29:
					return 2188;
				
				case 30:
					return 2195;
				
				case 31:
					return 2202;
				
				case 32:
					return 2209;
				
				case 33:
					return 2216;
				
				case 34:
					return 2223;
				
				case 35:
					return 2230;
				
				case 36:
					return 2237;
				
				case 37:
					return 2243;
				
				case 38:
					return 2249;
				
				case 39:
					return 2831;
				
				case 40:
					return 2838;
				
				case 41:
					return 2845;
				
				case 42:
					return 2852;
				
				case 43:
					return 2859;
				
				case 44:
					return 2866;
				
				case 45:
					return 2873;
				
				case 46:
					return 2880;
				
				case 47:
					return 2887;
				
				case 48:
					return 2894;
				
				case 49:
					return 2901;
				
				case 50:
					return 2907;
				
				case 51:
					return 2913;
				
				case 52:
					return 2955;
				
				case 53:
					return 2962;
				
				case 54:
					return 2969;
				
				case 55:
					return 2976;
				
				case 56:
					return 2983;
				
				case 57:
					return 2990;
				
				case 58:
					return 2997;
				
				case 59:
					return 3004;
				
				case 60:
					return 3011;
				
				case 61:
					return 3018;
				
				case 62:
					return 3025;
				
				case 63:
					return 3031;
				
				case 64:
					return 3037;
				
				case 65:
					return 3238;
				
				case 66:
					return 3246;
				
				case 67:
					return 3254;
				
				case 68:
					return 3262;
				
				case 69:
					return 3270;
				
				case 70:
					return 3278;
				
				case 71:
					return 3286;
				
				case 72:
					return 3294;
				
				case 73:
					return 3302;
				
				case 74:
					return 3310;
				
				case 75:
					return 3318;
				
				case 76:
					return 3326;
				
				case 77:
					return 3334;
				
				case 78:
					return 3342;
				
				case 79:
					return 3350;
				
				case 80:
					return 3358;
				
				case 81:
					return 3366;
				
				case 82:
					return 3374;
				
				case 83:
					return 3382;
				
				case 84:
					return 3390;
				
				case 85:
					return 3398;
				
				case 86:
					return 3405;
				
				case 87:
					return 3412;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4034;
				
				case 89:
					return 4042;
				
				case 90:
					return 4050;
				
				case 91:
					return 4058;
				
				case 92:
					return 4066;
				
				case 93:
					return 4074;
				
				case 94:
					return 4082;
				
				case 95:
					return 4090;
				
				case 96:
					return 4098;
				
				case 97:
					return 4106;
				
				case 98:
					return 4114;
				
				case 99:
					return 4122;
				
				case 100:
					return 4130;
				
				case 101:
					return 4138;
				
				case 102:
					return 4146;
				
				case 103:
					return 4154;
				
				case 104:
					return 4162;
				
				case 105:
					return 4170;
				
				case 106:
					return 4178;
				
				case 107:
					return 4186;
				
				case 108:
					return 4194;
				
				case 109:
					return 4202;
				
				case 110:
					return 4210;
				
				case 111:
					return 4218;
				
				case 112:
					return 4226;
				
				case 113:
					return 4234;
				
				case 114:
					return 4242;
				
				case 115:
					return 4250;
				
				case 116:
					return 4258;
				
				case 117:
					return 4266;
				
				case 118:
					return 4274;
				
				case 119:
					return 4282;
				
				case 120:
					return 4290;
				
				case 121:
					return 4298;
				
				case 122:
					return 4306;
				
				case 123:
					return 4314;
				
				case 124:
					return 4322;
				
				case 125:
					return 4330;
				
				case 126:
					return 4338;
				
				case 127:
					return 4346;
				
				case 128:
					return 4354;
				
				case 129:
					return 4362;
				
				case 130:
					return 4370;
				
				case 131:
					return 4378;
				
				case 132:
					return 4386;
				
				case 133:
					return 4394;
				
				case 134:
					return 4402;
				
				case 135:
					return 4410;
				
				case 136:
					return 4418;
				
				case 137:
					return 4426;
				
				case 138:
					return 4434;
				
				case 139:
					return 4442;
				
				case 140:
					return 4450;
				
				case 141:
					return 4458;
				
				case 142:
					return 4466;
				
				case 143:
					return 4474;
				
				case 144:
					return 4482;
				
				case 145:
					return 4490;
				
				case 146:
					return 4498;
				
				case 147:
					return 4506;
				
				case 148:
					return 4514;
				
				case 149:
					return 4522;
				
				case 150:
					return 4530;
				
				case 151:
					return 4538;
				
				case 152:
					return 4546;
				
				case 153:
					return 4554;
				
				case 154:
					return 4562;
				
				case 155:
					return 4570;
				
				case 156:
					return 4578;
				
				case 157:
					return 4586;
				
				case 158:
					return 5479;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5928;
				
				case 160:
					return 5935;
				
				case 161:
					return 5942;
				
				case 162:
					return 5949;
				
				case 163:
					return 5956;
				
				case 164:
					return 5963;
				
				case 165:
					return 5970;
				
				case 166:
					return 5977;
				
				case 167:
					return 5984;
				
				case 168:
					return 5991;
				
				case 169:
					return 5998;
				
				case 170:
					return 6005;
				
				case 171:
					return 6012;
				
				case 172:
					return 6019;
				
				case 173:
					return 6026;
				
				case 174:
					return 6033;
				
				case 175:
					return 6040;
				
				case 176:
					return 6047;
				
				case 177:
					return 6054;
				
				case 178:
					return 6061;
				
				case 179:
					return 6068;
				
				case 180:
					return 6075;
				
				case 181:
					return 6082;
				
				case 182:
					return 6089;
				
				case 183:
					return 6096;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6173;
				
				case 185:
					return 6180;
				
				case 186:
					return 6187;
				
				case 187:
					return 6194;
				
				case 188:
					return 6201;
				
				case 189:
					return 6208;
				
				case 190:
					return 6215;
				
				case 191:
					return 6222;
				
				case 192:
					return 6229;
				
				case 193:
					return 6236;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6570;
				
				case 195:
					return 6577;
				
				case 196:
					return 6584;
				
				case 197:
					return 6591;
				
				case 198:
					return 6598;
				
				case 199:
					return 6605;
				
				case 200:
					return 6612;
				
				case 201:
					return 6619;
				
				case 202:
					return 6626;
				
				case 203:
					return 6633;
				
				case 204:
					return 6640;
				
				case 205:
					return 6647;
				
				case 206:
					return 6654;
				
				case 207:
					return 6661;
				
				case 208:
					return 6668;
				
				case 209:
					return 6675;
				
				case 210:
					return 6682;
				
				case 211:
					return 6689;
				
				case 212:
					return 6696;
				
				case 213:
					return 6703;
				
				case 214:
					return 6710;
				
				case 215:
					return 6717;
				
				case 216:
					return 6724;
				
				case 217:
					return 6731;
				
				case 218:
					return 6738;
				
				case 219:
					return 6745;
				
				case 220:
					return 6752;
				
				case 221:
					return 6759;
				
				case 222:
					return 6766;
				
				case 223:
					return 6773;
				
				case 224:
					return 6780;
				
				case 225:
					return 6787;
				
				case 226:
					return 6794;
				
				case 227:
					return 6801;
				
				case 228:
					return 6808;
				
				case 229:
					return 6815;
				
				case 230:
					return 6822;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7292;
				
				case 232:
					return 7299;
				
				case 233:
					return 7306;
				
				case 234:
					return 7313;
				
				case 235:
					return 7320;
				
				case 236:
					return 7327;
				
				case 237:
					return 7334;
				
				case 238:
					return 7341;
				
				case 239:
					return 7348;
				
				case 240:
					return 7355;
				
				case 241:
					return 7362;
				
				case 242:
					return 7369;
				
				case 243:
					return 7376;
				
				case 244:
					return 7383;
				
				case 245:
					return 7390;
				
				case 246:
					return 7397;
				
				case 247:
					return 7404;
				
				case 248:
					return 7411;
				
				case 249:
					return 7418;
				
				case 250:
					return 7425;
				
				case 251:
					return 7432;
				
				case 252:
					return 7439;
				
				case 253:
					return 7446;
				
				case 254:
					return 7453;
				
				case 255:
					return 7460;
				
				case 256:
					return 7467;
				
				case 257:
					return 7474;
				
				case 258:
					return 7481;
				
				case 259:
					return 7488;
				
				case 260:
					return 7495;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8015;
				
				case 262:
					return 8022;
				
				case 263:
					return 8029;
				
				case 264:
					return 8036;
				
				case 265:
					return 8043;
				
				case 266:
					return 8050;
				
				case 267:
					return 8057;
				
				case 268:
					return 8064;
				
				case 269:
					return 8071;
				
				case 270:
					return 8078;
				
				case 271:
					return 8539;
				
				case 272:
					return 8546;
				
				case 273:
					return 8553;
				
				case 274:
					return 8560;
				
				case 275:
					return 8567;
				
				case 276:
					return 8574;
				
				case 277:
					return 8581;
				
				case 278:
					return 8588;
				
				case 279:
					return 8595;
				
				case 280:
					return 8602;
				
				case 281:
					return 8986;
				
				case 282:
					return 8993;
				
				case 283:
					return 9000;
				
				case 284:
					return 9007;
				
				case 285:
					return 9014;
				
				case 286:
					return 9021;
				
				case 287:
					return 9028;
				
				case 288:
					return 9035;
				
				case 289:
					return 9042;
				
				case 290:
					return 9049;
				
				case 291:
					return 9056;
				
				case 292:
					return 9062;
				
				case 293:
					return 9068;
				
				case 294:
					return 9074;
				
				case 295:
					return 9081;
				
				case 296:
					return 9088;
				
				case 297:
					return 9095;
				
				case 298:
					return 9102;
				
				case 299:
					return 9109;
				
				case 300:
					return 9116;
				
				case 301:
					return 9123;
				
				case 302:
					return 9130;
				
				case 303:
					return 9137;
				
				case 304:
					return 9144;
				
				case 305:
					return 9150;
				
				case 306:
					return 9156;
				
				case 307:
					return 9637;
				
				case 308:
					return 9644;
				
				case 309:
					return 9651;
				
				case 310:
					return 9658;
				
				case 311:
					return 9665;
				
				case 312:
					return 9672;
				
				case 313:
					return 9679;
				
				case 314:
					return 9686;
				
				case 315:
					return 9693;
				
				case 316:
					return 9700;
				
				case 317:
					return 9921;
				
				case 318:
					return 9928;
				
				case 319:
					return 9935;
				
				case 320:
					return 9942;
				
				case 321:
					return 9949;
				
				case 322:
					return 9956;
				
				case 323:
					return 9963;
				
				case 324:
					return 9970;
				
				case 325:
					return 9977;
				
				case 326:
					return 9984;
				
				case 327:
					return 9991;
				
				case 328:
					return 9998;
				
				case 329:
					return 10005;
				
				case 330:
					return 10012;
				
				case 331:
					return 10019;
				
				case 332:
					return 10026;
				
				case 333:
					return 10033;
				
				case 334:
					return 10040;
				
				case 335:
					return 10047;
				
				case 336:
					return 10054;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10447;
				
				case 338:
					return 10454;
				
				case 339:
					return 10461;
				
				case 340:
					return 10468;
				
				case 341:
					return 10475;
				
				case 342:
					return 10482;
				
				case 343:
					return 10489;
				
				case 344:
					return 10496;
				
				case 345:
					return 10503;
				
				case 346:
					return 10510;
				
				case 347:
					return 10517;
				
				case 348:
					return 10523;
				
				case 349:
					return 10529;
				
				case 350:
					return 10535;
				
				case 351:
					return 10542;
				
				case 352:
					return 10549;
				
				case 353:
					return 10556;
				
				case 354:
					return 10563;
				
				case 355:
					return 10570;
				
				case 356:
					return 10577;
				
				case 357:
					return 10584;
				
				case 358:
					return 10591;
				
				case 359:
					return 10598;
				
				case 360:
					return 10605;
				
				case 361:
					return 10611;
				
				case 362:
					return 10617;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 1631;
				
				case 1:
					return 1638;
				
				case 2:
					return 1645;
				
				case 3:
					return 1652;
				
				case 4:
					return 1659;
				
				case 5:
					return 1666;
				
				case 6:
					return 1673;
				
				case 7:
					return 1680;
				
				case 8:
					return 1687;
				
				case 9:
					return 1694;
				
				case 10:
					return 1701;
				
				case 11:
					return 1707;
				
				case 12:
					return 1713;
				
				case 13:
					return 1719;
				
				case 14:
					return 1798;
				
				case 15:
					return 1805;
				
				case 16:
					return 1812;
				
				case 17:
					return 1819;
				
				case 18:
					return 1826;
				
				case 19:
					return 1833;
				
				case 20:
					return 1840;
				
				case 21:
					return 1847;
				
				case 22:
					return 1854;
				
				case 23:
					return 1861;
				
				case 24:
					return 1867;
				
				case 25:
					return 1873;
				
				case 26:
					return 2168;
				
				case 27:
					return 2175;
				
				case 28:
					return 2182;
				
				case 29:
					return 2189;
				
				case 30:
					return 2196;
				
				case 31:
					return 2203;
				
				case 32:
					return 2210;
				
				case 33:
					return 2217;
				
				case 34:
					return 2224;
				
				case 35:
					return 2231;
				
				case 36:
					return 2238;
				
				case 37:
					return 2244;
				
				case 38:
					return 2250;
				
				case 39:
					return 2832;
				
				case 40:
					return 2839;
				
				case 41:
					return 2846;
				
				case 42:
					return 2853;
				
				case 43:
					return 2860;
				
				case 44:
					return 2867;
				
				case 45:
					return 2874;
				
				case 46:
					return 2881;
				
				case 47:
					return 2888;
				
				case 48:
					return 2895;
				
				case 49:
					return 2902;
				
				case 50:
					return 2908;
				
				case 51:
					return 2914;
				
				case 52:
					return 2956;
				
				case 53:
					return 2963;
				
				case 54:
					return 2970;
				
				case 55:
					return 2977;
				
				case 56:
					return 2984;
				
				case 57:
					return 2991;
				
				case 58:
					return 2998;
				
				case 59:
					return 3005;
				
				case 60:
					return 3012;
				
				case 61:
					return 3019;
				
				case 62:
					return 3026;
				
				case 63:
					return 3032;
				
				case 64:
					return 3038;
				
				case 65:
					return 3239;
				
				case 66:
					return 3247;
				
				case 67:
					return 3255;
				
				case 68:
					return 3263;
				
				case 69:
					return 3271;
				
				case 70:
					return 3279;
				
				case 71:
					return 3287;
				
				case 72:
					return 3295;
				
				case 73:
					return 3303;
				
				case 74:
					return 3311;
				
				case 75:
					return 3319;
				
				case 76:
					return 3327;
				
				case 77:
					return 3335;
				
				case 78:
					return 3343;
				
				case 79:
					return 3351;
				
				case 80:
					return 3359;
				
				case 81:
					return 3367;
				
				case 82:
					return 3375;
				
				case 83:
					return 3383;
				
				case 84:
					return 3391;
				
				case 85:
					return 3399;
				
				case 86:
					return 3406;
				
				case 87:
					return 3413;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4035;
				
				case 89:
					return 4043;
				
				case 90:
					return 4051;
				
				case 91:
					return 4059;
				
				case 92:
					return 4067;
				
				case 93:
					return 4075;
				
				case 94:
					return 4083;
				
				case 95:
					return 4091;
				
				case 96:
					return 4099;
				
				case 97:
					return 4107;
				
				case 98:
					return 4115;
				
				case 99:
					return 4123;
				
				case 100:
					return 4131;
				
				case 101:
					return 4139;
				
				case 102:
					return 4147;
				
				case 103:
					return 4155;
				
				case 104:
					return 4163;
				
				case 105:
					return 4171;
				
				case 106:
					return 4179;
				
				case 107:
					return 4187;
				
				case 108:
					return 4195;
				
				case 109:
					return 4203;
				
				case 110:
					return 4211;
				
				case 111:
					return 4219;
				
				case 112:
					return 4227;
				
				case 113:
					return 4235;
				
				case 114:
					return 4243;
				
				case 115:
					return 4251;
				
				case 116:
					return 4259;
				
				case 117:
					return 4267;
				
				case 118:
					return 4275;
				
				case 119:
					return 4283;
				
				case 120:
					return 4291;
				
				case 121:
					return 4299;
				
				case 122:
					return 4307;
				
				case 123:
					return 4315;
				
				case 124:
					return 4323;
				
				case 125:
					return 4331;
				
				case 126:
					return 4339;
				
				case 127:
					return 4347;
				
				case 128:
					return 4355;
				
				case 129:
					return 4363;
				
				case 130:
					return 4371;
				
				case 131:
					return 4379;
				
				case 132:
					return 4387;
				
				case 133:
					return 4395;
				
				case 134:
					return 4403;
				
				case 135:
					return 4411;
				
				case 136:
					return 4419;
				
				case 137:
					return 4427;
				
				case 138:
					return 4435;
				
				case 139:
					return 4443;
				
				case 140:
					return 4451;
				
				case 141:
					return 4459;
				
				case 142:
					return 4467;
				
				case 143:
					return 4475;
				
				case 144:
					return 4483;
				
				case 145:
					return 4491;
				
				case 146:
					return 4499;
				
				case 147:
					return 4507;
				
				case 148:
					return 4515;
				
				case 149:
					return 4523;
				
				case 150:
					return 4531;
				
				case 151:
					return 4539;
				
				case 152:
					return 4547;
				
				case 153:
					return 4555;
				
				case 154:
					return 4563;
				
				case 155:
					return 4571;
				
				case 156:
					return 4579;
				
				case 157:
					return 4587;
				
				case 158:
					return 5480;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5929;
				
				case 160:
					return 5936;
				
				case 161:
					return 5943;
				
				case 162:
					return 5950;
				
				case 163:
					return 5957;
				
				case 164:
					return 5964;
				
				case 165:
					return 5971;
				
				case 166:
					return 5978;
				
				case 167:
					return 5985;
				
				case 168:
					return 5992;
				
				case 169:
					return 5999;
				
				case 170:
					return 6006;
				
				case 171:
					return 6013;
				
				case 172:
					return 6020;
				
				case 173:
					return 6027;
				
				case 174:
					return 6034;
				
				case 175:
					return 6041;
				
				case 176:
					return 6048;
				
				case 177:
					return 6055;
				
				case 178:
					return 6062;
				
				case 179:
					return 6069;
				
				case 180:
					return 6076;
				
				case 181:
					return 6083;
				
				case 182:
					return 6090;
				
				case 183:
					return 6097;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6174;
				
				case 185:
					return 6181;
				
				case 186:
					return 6188;
				
				case 187:
					return 6195;
				
				case 188:
					return 6202;
				
				case 189:
					return 6209;
				
				case 190:
					return 6216;
				
				case 191:
					return 6223;
				
				case 192:
					return 6230;
				
				case 193:
					return 6237;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6571;
				
				case 195:
					return 6578;
				
				case 196:
					return 6585;
				
				case 197:
					return 6592;
				
				case 198:
					return 6599;
				
				case 199:
					return 6606;
				
				case 200:
					return 6613;
				
				case 201:
					return 6620;
				
				case 202:
					return 6627;
				
				case 203:
					return 6634;
				
				case 204:
					return 6641;
				
				case 205:
					return 6648;
				
				case 206:
					return 6655;
				
				case 207:
					return 6662;
				
				case 208:
					return 6669;
				
				case 209:
					return 6676;
				
				case 210:
					return 6683;
				
				case 211:
					return 6690;
				
				case 212:
					return 6697;
				
				case 213:
					return 6704;
				
				case 214:
					return 6711;
				
				case 215:
					return 6718;
				
				case 216:
					return 6725;
				
				case 217:
					return 6732;
				
				case 218:
					return 6739;
				
				case 219:
					return 6746;
				
				case 220:
					return 6753;
				
				case 221:
					return 6760;
				
				case 222:
					return 6767;
				
				case 223:
					return 6774;
				
				case 224:
					return 6781;
				
				case 225:
					return 6788;
				
				case 226:
					return 6795;
				
				case 227:
					return 6802;
				
				case 228:
					return 6809;
				
				case 229:
					return 6816;
				
				case 230:
					return 6823;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7293;
				
				case 232:
					return 7300;
				
				case 233:
					return 7307;
				
				case 234:
					return 7314;
				
				case 235:
					return 7321;
				
				case 236:
					return 7328;
				
				case 237:
					return 7335;
				
				case 238:
					return 7342;
				
				case 239:
					return 7349;
				
				case 240:
					return 7356;
				
				case 241:
					return 7363;
				
				case 242:
					return 7370;
				
				case 243:
					return 7377;
				
				case 244:
					return 7384;
				
				case 245:
					return 7391;
				
				case 246:
					return 7398;
				
				case 247:
					return 7405;
				
				case 248:
					return 7412;
				
				case 249:
					return 7419;
				
				case 250:
					return 7426;
				
				case 251:
					return 7433;
				
				case 252:
					return 7440;
				
				case 253:
					return 7447;
				
				case 254:
					return 7454;
				
				case 255:
					return 7461;
				
				case 256:
					return 7468;
				
				case 257:
					return 7475;
				
				case 258:
					return 7482;
				
				case 259:
					return 7489;
				
				case 260:
					return 7496;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8016;
				
				case 262:
					return 8023;
				
				case 263:
					return 8030;
				
				case 264:
					return 8037;
				
				case 265:
					return 8044;
				
				case 266:
					return 8051;
				
				case 267:
					return 8058;
				
				case 268:
					return 8065;
				
				case 269:
					return 8072;
				
				case 270:
					return 8079;
				
				case 271:
					return 8540;
				
				case 272:
					return 8547;
				
				case 273:
					return 8554;
				
				case 274:
					return 8561;
				
				case 275:
					return 8568;
				
				case 276:
					return 8575;
				
				case 277:
					return 8582;
				
				case 278:
					return 8589;
				
				case 279:
					return 8596;
				
				case 280:
					return 8603;
				
				case 281:
					return 8987;
				
				case 282:
					return 8994;
				
				case 283:
					return 9001;
				
				case 284:
					return 9008;
				
				case 285:
					return 9015;
				
				case 286:
					return 9022;
				
				case 287:
					return 9029;
				
				case 288:
					return 9036;
				
				case 289:
					return 9043;
				
				case 290:
					return 9050;
				
				case 291:
					return 9057;
				
				case 292:
					return 9063;
				
				case 293:
					return 9069;
				
				case 294:
					return 9075;
				
				case 295:
					return 9082;
				
				case 296:
					return 9089;
				
				case 297:
					return 9096;
				
				case 298:
					return 9103;
				
				case 299:
					return 9110;
				
				case 300:
					return 9117;
				
				case 301:
					return 9124;
				
				case 302:
					return 9131;
				
				case 303:
					return 9138;
				
				case 304:
					return 9145;
				
				case 305:
					return 9151;
				
				case 306:
					return 9157;
				
				case 307:
					return 9638;
				
				case 308:
					return 9645;
				
				case 309:
					return 9652;
				
				case 310:
					return 9659;
				
				case 311:
					return 9666;
				
				case 312:
					return 9673;
				
				case 313:
					return 9680;
				
				case 314:
					return 9687;
				
				case 315:
					return 9694;
				
				case 316:
					return 9701;
				
				case 317:
					return 9922;
				
				case 318:
					return 9929;
				
				case 319:
					return 9936;
				
				case 320:
					return 9943;
				
				case 321:
					return 9950;
				
				case 322:
					return 9957;
				
				case 323:
					return 9964;
				
				case 324:
					return 9971;
				
				case 325:
					return 9978;
				
				case 326:
					return 9985;
				
				case 327:
					return 9992;
				
				case 328:
					return 9999;
				
				case 329:
					return 10006;
				
				case 330:
					return 10013;
				
				case 331:
					return 10020;
				
				case 332:
					return 10027;
				
				case 333:
					return 10034;
				
				case 334:
					return 10041;
				
				case 335:
					return 10048;
				
				case 336:
					return 10055;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10448;
				
				case 338:
					return 10455;
				
				case 339:
					return 10462;
				
				case 340:
					return 10469;
				
				case 341:
					return 10476;
				
				case 342:
					return 10483;
				
				case 343:
					return 10490;
				
				case 344:
					return 10497;
				
				case 345:
					return 10504;
				
				case 346:
					return 10511;
				
				case 347:
					return 10518;
				
				case 348:
					return 10524;
				
				case 349:
					return 10530;
				
				case 350:
					return 10536;
				
				case 351:
					return 10543;
				
				case 352:
					return 10550;
				
				case 353:
					return 10557;
				
				case 354:
					return 10564;
				
				case 355:
					return 10571;
				
				case 356:
					return 10578;
				
				case 357:
					return 10585;
				
				case 358:
					return 10592;
				
				case 359:
					return 10599;
				
				case 360:
					return 10606;
				
				case 361:
					return 10612;
				
				case 362:
					return 10618;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 1632;
				
				case 1:
					return 1639;
				
				case 2:
					return 1646;
				
				case 3:
					return 1653;
				
				case 4:
					return 1660;
				
				case 5:
					return 1667;
				
				case 6:
					return 1674;
				
				case 7:
					return 1681;
				
				case 8:
					return 1688;
				
				case 9:
					return 1695;
				
				case 10:
					return 1702;
				
				case 11:
					return 1708;
				
				case 12:
					return 1714;
				
				case 13:
					return 1720;
				
				case 14:
					return 1799;
				
				case 15:
					return 1806;
				
				case 16:
					return 1813;
				
				case 17:
					return 1820;
				
				case 18:
					return 1827;
				
				case 19:
					return 1834;
				
				case 20:
					return 1841;
				
				case 21:
					return 1848;
				
				case 22:
					return 1855;
				
				case 23:
					return 1862;
				
				case 24:
					return 1868;
				
				case 25:
					return 1874;
				
				case 26:
					return 2169;
				
				case 27:
					return 2176;
				
				case 28:
					return 2183;
				
				case 29:
					return 2190;
				
				case 30:
					return 2197;
				
				case 31:
					return 2204;
				
				case 32:
					return 2211;
				
				case 33:
					return 2218;
				
				case 34:
					return 2225;
				
				case 35:
					return 2232;
				
				case 36:
					return 2239;
				
				case 37:
					return 2245;
				
				case 38:
					return 2251;
				
				case 39:
					return 2833;
				
				case 40:
					return 2840;
				
				case 41:
					return 2847;
				
				case 42:
					return 2854;
				
				case 43:
					return 2861;
				
				case 44:
					return 2868;
				
				case 45:
					return 2875;
				
				case 46:
					return 2882;
				
				case 47:
					return 2889;
				
				case 48:
					return 2896;
				
				case 49:
					return 2903;
				
				case 50:
					return 2909;
				
				case 51:
					return 2915;
				
				case 52:
					return 2957;
				
				case 53:
					return 2964;
				
				case 54:
					return 2971;
				
				case 55:
					return 2978;
				
				case 56:
					return 2985;
				
				case 57:
					return 2992;
				
				case 58:
					return 2999;
				
				case 59:
					return 3006;
				
				case 60:
					return 3013;
				
				case 61:
					return 3020;
				
				case 62:
					return 3027;
				
				case 63:
					return 3033;
				
				case 64:
					return 3039;
				
				case 65:
					return 3240;
				
				case 66:
					return 3248;
				
				case 67:
					return 3256;
				
				case 68:
					return 3264;
				
				case 69:
					return 3272;
				
				case 70:
					return 3280;
				
				case 71:
					return 3288;
				
				case 72:
					return 3296;
				
				case 73:
					return 3304;
				
				case 74:
					return 3312;
				
				case 75:
					return 3320;
				
				case 76:
					return 3328;
				
				case 77:
					return 3336;
				
				case 78:
					return 3344;
				
				case 79:
					return 3352;
				
				case 80:
					return 3360;
				
				case 81:
					return 3368;
				
				case 82:
					return 3376;
				
				case 83:
					return 3384;
				
				case 84:
					return 3392;
				
				case 85:
					return 3400;
				
				case 86:
					return 3407;
				
				case 87:
					return 3414;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4036;
				
				case 89:
					return 4044;
				
				case 90:
					return 4052;
				
				case 91:
					return 4060;
				
				case 92:
					return 4068;
				
				case 93:
					return 4076;
				
				case 94:
					return 4084;
				
				case 95:
					return 4092;
				
				case 96:
					return 4100;
				
				case 97:
					return 4108;
				
				case 98:
					return 4116;
				
				case 99:
					return 4124;
				
				case 100:
					return 4132;
				
				case 101:
					return 4140;
				
				case 102:
					return 4148;
				
				case 103:
					return 4156;
				
				case 104:
					return 4164;
				
				case 105:
					return 4172;
				
				case 106:
					return 4180;
				
				case 107:
					return 4188;
				
				case 108:
					return 4196;
				
				case 109:
					return 4204;
				
				case 110:
					return 4212;
				
				case 111:
					return 4220;
				
				case 112:
					return 4228;
				
				case 113:
					return 4236;
				
				case 114:
					return 4244;
				
				case 115:
					return 4252;
				
				case 116:
					return 4260;
				
				case 117:
					return 4268;
				
				case 118:
					return 4276;
				
				case 119:
					return 4284;
				
				case 120:
					return 4292;
				
				case 121:
					return 4300;
				
				case 122:
					return 4308;
				
				case 123:
					return 4316;
				
				case 124:
					return 4324;
				
				case 125:
					return 4332;
				
				case 126:
					return 4340;
				
				case 127:
					return 4348;
				
				case 128:
					return 4356;
				
				case 129:
					return 4364;
				
				case 130:
					return 4372;
				
				case 131:
					return 4380;
				
				case 132:
					return 4388;
				
				case 133:
					return 4396;
				
				case 134:
					return 4404;
				
				case 135:
					return 4412;
				
				case 136:
					return 4420;
				
				case 137:
					return 4428;
				
				case 138:
					return 4436;
				
				case 139:
					return 4444;
				
				case 140:
					return 4452;
				
				case 141:
					return 4460;
				
				case 142:
					return 4468;
				
				case 143:
					return 4476;
				
				case 144:
					return 4484;
				
				case 145:
					return 4492;
				
				case 146:
					return 4500;
				
				case 147:
					return 4508;
				
				case 148:
					return 4516;
				
				case 149:
					return 4524;
				
				case 150:
					return 4532;
				
				case 151:
					return 4540;
				
				case 152:
					return 4548;
				
				case 153:
					return 4556;
				
				case 154:
					return 4564;
				
				case 155:
					return 4572;
				
				case 156:
					return 4580;
				
				case 157:
					return 4588;
				
				case 158:
					return 5481;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5930;
				
				case 160:
					return 5937;
				
				case 161:
					return 5944;
				
				case 162:
					return 5951;
				
				case 163:
					return 5958;
				
				case 164:
					return 5965;
				
				case 165:
					return 5972;
				
				case 166:
					return 5979;
				
				case 167:
					return 5986;
				
				case 168:
					return 5993;
				
				case 169:
					return 6000;
				
				case 170:
					return 6007;
				
				case 171:
					return 6014;
				
				case 172:
					return 6021;
				
				case 173:
					return 6028;
				
				case 174:
					return 6035;
				
				case 175:
					return 6042;
				
				case 176:
					return 6049;
				
				case 177:
					return 6056;
				
				case 178:
					return 6063;
				
				case 179:
					return 6070;
				
				case 180:
					return 6077;
				
				case 181:
					return 6084;
				
				case 182:
					return 6091;
				
				case 183:
					return 6098;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6175;
				
				case 185:
					return 6182;
				
				case 186:
					return 6189;
				
				case 187:
					return 6196;
				
				case 188:
					return 6203;
				
				case 189:
					return 6210;
				
				case 190:
					return 6217;
				
				case 191:
					return 6224;
				
				case 192:
					return 6231;
				
				case 193:
					return 6238;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6572;
				
				case 195:
					return 6579;
				
				case 196:
					return 6586;
				
				case 197:
					return 6593;
				
				case 198:
					return 6600;
				
				case 199:
					return 6607;
				
				case 200:
					return 6614;
				
				case 201:
					return 6621;
				
				case 202:
					return 6628;
				
				case 203:
					return 6635;
				
				case 204:
					return 6642;
				
				case 205:
					return 6649;
				
				case 206:
					return 6656;
				
				case 207:
					return 6663;
				
				case 208:
					return 6670;
				
				case 209:
					return 6677;
				
				case 210:
					return 6684;
				
				case 211:
					return 6691;
				
				case 212:
					return 6698;
				
				case 213:
					return 6705;
				
				case 214:
					return 6712;
				
				case 215:
					return 6719;
				
				case 216:
					return 6726;
				
				case 217:
					return 6733;
				
				case 218:
					return 6740;
				
				case 219:
					return 6747;
				
				case 220:
					return 6754;
				
				case 221:
					return 6761;
				
				case 222:
					return 6768;
				
				case 223:
					return 6775;
				
				case 224:
					return 6782;
				
				case 225:
					return 6789;
				
				case 226:
					return 6796;
				
				case 227:
					return 6803;
				
				case 228:
					return 6810;
				
				case 229:
					return 6817;
				
				case 230:
					return 6824;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7294;
				
				case 232:
					return 7301;
				
				case 233:
					return 7308;
				
				case 234:
					return 7315;
				
				case 235:
					return 7322;
				
				case 236:
					return 7329;
				
				case 237:
					return 7336;
				
				case 238:
					return 7343;
				
				case 239:
					return 7350;
				
				case 240:
					return 7357;
				
				case 241:
					return 7364;
				
				case 242:
					return 7371;
				
				case 243:
					return 7378;
				
				case 244:
					return 7385;
				
				case 245:
					return 7392;
				
				case 246:
					return 7399;
				
				case 247:
					return 7406;
				
				case 248:
					return 7413;
				
				case 249:
					return 7420;
				
				case 250:
					return 7427;
				
				case 251:
					return 7434;
				
				case 252:
					return 7441;
				
				case 253:
					return 7448;
				
				case 254:
					return 7455;
				
				case 255:
					return 7462;
				
				case 256:
					return 7469;
				
				case 257:
					return 7476;
				
				case 258:
					return 7483;
				
				case 259:
					return 7490;
				
				case 260:
					return 7497;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8017;
				
				case 262:
					return 8024;
				
				case 263:
					return 8031;
				
				case 264:
					return 8038;
				
				case 265:
					return 8045;
				
				case 266:
					return 8052;
				
				case 267:
					return 8059;
				
				case 268:
					return 8066;
				
				case 269:
					return 8073;
				
				case 270:
					return 8080;
				
				case 271:
					return 8541;
				
				case 272:
					return 8548;
				
				case 273:
					return 8555;
				
				case 274:
					return 8562;
				
				case 275:
					return 8569;
				
				case 276:
					return 8576;
				
				case 277:
					return 8583;
				
				case 278:
					return 8590;
				
				case 279:
					return 8597;
				
				case 280:
					return 8604;
				
				case 281:
					return 8988;
				
				case 282:
					return 8995;
				
				case 283:
					return 9002;
				
				case 284:
					return 9009;
				
				case 285:
					return 9016;
				
				case 286:
					return 9023;
				
				case 287:
					return 9030;
				
				case 288:
					return 9037;
				
				case 289:
					return 9044;
				
				case 290:
					return 9051;
				
				case 291:
					return 9058;
				
				case 292:
					return 9064;
				
				case 293:
					return 9070;
				
				case 294:
					return 9076;
				
				case 295:
					return 9083;
				
				case 296:
					return 9090;
				
				case 297:
					return 9097;
				
				case 298:
					return 9104;
				
				case 299:
					return 9111;
				
				case 300:
					return 9118;
				
				case 301:
					return 9125;
				
				case 302:
					return 9132;
				
				case 303:
					return 9139;
				
				case 304:
					return 9146;
				
				case 305:
					return 9152;
				
				case 306:
					return 9158;
				
				case 307:
					return 9639;
				
				case 308:
					return 9646;
				
				case 309:
					return 9653;
				
				case 310:
					return 9660;
				
				case 311:
					return 9667;
				
				case 312:
					return 9674;
				
				case 313:
					return 9681;
				
				case 314:
					return 9688;
				
				case 315:
					return 9695;
				
				case 316:
					return 9702;
				
				case 317:
					return 9923;
				
				case 318:
					return 9930;
				
				case 319:
					return 9937;
				
				case 320:
					return 9944;
				
				case 321:
					return 9951;
				
				case 322:
					return 9958;
				
				case 323:
					return 9965;
				
				case 324:
					return 9972;
				
				case 325:
					return 9979;
				
				case 326:
					return 9986;
				
				case 327:
					return 9993;
				
				case 328:
					return 10000;
				
				case 329:
					return 10007;
				
				case 330:
					return 10014;
				
				case 331:
					return 10021;
				
				case 332:
					return 10028;
				
				case 333:
					return 10035;
				
				case 334:
					return 10042;
				
				case 335:
					return 10049;
				
				case 336:
					return 10056;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10449;
				
				case 338:
					return 10456;
				
				case 339:
					return 10463;
				
				case 340:
					return 10470;
				
				case 341:
					return 10477;
				
				case 342:
					return 10484;
				
				case 343:
					return 10491;
				
				case 344:
					return 10498;
				
				case 345:
					return 10505;
				
				case 346:
					return 10512;
				
				case 347:
					return 10519;
				
				case 348:
					return 10525;
				
				case 349:
					return 10531;
				
				case 350:
					return 10537;
				
				case 351:
					return 10544;
				
				case 352:
					return 10551;
				
				case 353:
					return 10558;
				
				case 354:
					return 10565;
				
				case 355:
					return 10572;
				
				case 356:
					return 10579;
				
				case 357:
					return 10586;
				
				case 358:
					return 10593;
				
				case 359:
					return 10600;
				
				case 360:
					return 10607;
				
				case 361:
					return 10613;
				
				case 362:
					return 10619;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 1633;
				
				case 1:
					return 1640;
				
				case 2:
					return 1647;
				
				case 3:
					return 1654;
				
				case 4:
					return 1661;
				
				case 5:
					return 1668;
				
				case 6:
					return 1675;
				
				case 7:
					return 1682;
				
				case 8:
					return 1689;
				
				case 9:
					return 1696;
				
				case 10:
					return 1703;
				
				case 11:
					return 1709;
				
				case 12:
					return 1715;
				
				case 13:
					return 1721;
				
				case 14:
					return 1800;
				
				case 15:
					return 1807;
				
				case 16:
					return 1814;
				
				case 17:
					return 1821;
				
				case 18:
					return 1828;
				
				case 19:
					return 1835;
				
				case 20:
					return 1842;
				
				case 21:
					return 1849;
				
				case 22:
					return 1856;
				
				case 23:
					return 1863;
				
				case 24:
					return 1869;
				
				case 25:
					return 1875;
				
				case 26:
					return 2170;
				
				case 27:
					return 2177;
				
				case 28:
					return 2184;
				
				case 29:
					return 2191;
				
				case 30:
					return 2198;
				
				case 31:
					return 2205;
				
				case 32:
					return 2212;
				
				case 33:
					return 2219;
				
				case 34:
					return 2226;
				
				case 35:
					return 2233;
				
				case 36:
					return 2240;
				
				case 37:
					return 2246;
				
				case 38:
					return 2252;
				
				case 39:
					return 2834;
				
				case 40:
					return 2841;
				
				case 41:
					return 2848;
				
				case 42:
					return 2855;
				
				case 43:
					return 2862;
				
				case 44:
					return 2869;
				
				case 45:
					return 2876;
				
				case 46:
					return 2883;
				
				case 47:
					return 2890;
				
				case 48:
					return 2897;
				
				case 49:
					return 2904;
				
				case 50:
					return 2910;
				
				case 51:
					return 2916;
				
				case 52:
					return 2958;
				
				case 53:
					return 2965;
				
				case 54:
					return 2972;
				
				case 55:
					return 2979;
				
				case 56:
					return 2986;
				
				case 57:
					return 2993;
				
				case 58:
					return 3000;
				
				case 59:
					return 3007;
				
				case 60:
					return 3014;
				
				case 61:
					return 3021;
				
				case 62:
					return 3028;
				
				case 63:
					return 3034;
				
				case 64:
					return 3040;
				
				case 65:
					return 3241;
				
				case 66:
					return 3249;
				
				case 67:
					return 3257;
				
				case 68:
					return 3265;
				
				case 69:
					return 3273;
				
				case 70:
					return 3281;
				
				case 71:
					return 3289;
				
				case 72:
					return 3297;
				
				case 73:
					return 3305;
				
				case 74:
					return 3313;
				
				case 75:
					return 3321;
				
				case 76:
					return 3329;
				
				case 77:
					return 3337;
				
				case 78:
					return 3345;
				
				case 79:
					return 3353;
				
				case 80:
					return 3361;
				
				case 81:
					return 3369;
				
				case 82:
					return 3377;
				
				case 83:
					return 3385;
				
				case 84:
					return 3393;
				
				case 85:
					return 3401;
				
				case 86:
					return 3408;
				
				case 87:
					return 3415;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4037;
				
				case 89:
					return 4045;
				
				case 90:
					return 4053;
				
				case 91:
					return 4061;
				
				case 92:
					return 4069;
				
				case 93:
					return 4077;
				
				case 94:
					return 4085;
				
				case 95:
					return 4093;
				
				case 96:
					return 4101;
				
				case 97:
					return 4109;
				
				case 98:
					return 4117;
				
				case 99:
					return 4125;
				
				case 100:
					return 4133;
				
				case 101:
					return 4141;
				
				case 102:
					return 4149;
				
				case 103:
					return 4157;
				
				case 104:
					return 4165;
				
				case 105:
					return 4173;
				
				case 106:
					return 4181;
				
				case 107:
					return 4189;
				
				case 108:
					return 4197;
				
				case 109:
					return 4205;
				
				case 110:
					return 4213;
				
				case 111:
					return 4221;
				
				case 112:
					return 4229;
				
				case 113:
					return 4237;
				
				case 114:
					return 4245;
				
				case 115:
					return 4253;
				
				case 116:
					return 4261;
				
				case 117:
					return 4269;
				
				case 118:
					return 4277;
				
				case 119:
					return 4285;
				
				case 120:
					return 4293;
				
				case 121:
					return 4301;
				
				case 122:
					return 4309;
				
				case 123:
					return 4317;
				
				case 124:
					return 4325;
				
				case 125:
					return 4333;
				
				case 126:
					return 4341;
				
				case 127:
					return 4349;
				
				case 128:
					return 4357;
				
				case 129:
					return 4365;
				
				case 130:
					return 4373;
				
				case 131:
					return 4381;
				
				case 132:
					return 4389;
				
				case 133:
					return 4397;
				
				case 134:
					return 4405;
				
				case 135:
					return 4413;
				
				case 136:
					return 4421;
				
				case 137:
					return 4429;
				
				case 138:
					return 4437;
				
				case 139:
					return 4445;
				
				case 140:
					return 4453;
				
				case 141:
					return 4461;
				
				case 142:
					return 4469;
				
				case 143:
					return 4477;
				
				case 144:
					return 4485;
				
				case 145:
					return 4493;
				
				case 146:
					return 4501;
				
				case 147:
					return 4509;
				
				case 148:
					return 4517;
				
				case 149:
					return 4525;
				
				case 150:
					return 4533;
				
				case 151:
					return 4541;
				
				case 152:
					return 4549;
				
				case 153:
					return 4557;
				
				case 154:
					return 4565;
				
				case 155:
					return 4573;
				
				case 156:
					return 4581;
				
				case 157:
					return 4589;
				
				case 158:
					return 5482;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5931;
				
				case 160:
					return 5938;
				
				case 161:
					return 5945;
				
				case 162:
					return 5952;
				
				case 163:
					return 5959;
				
				case 164:
					return 5966;
				
				case 165:
					return 5973;
				
				case 166:
					return 5980;
				
				case 167:
					return 5987;
				
				case 168:
					return 5994;
				
				case 169:
					return 6001;
				
				case 170:
					return 6008;
				
				case 171:
					return 6015;
				
				case 172:
					return 6022;
				
				case 173:
					return 6029;
				
				case 174:
					return 6036;
				
				case 175:
					return 6043;
				
				case 176:
					return 6050;
				
				case 177:
					return 6057;
				
				case 178:
					return 6064;
				
				case 179:
					return 6071;
				
				case 180:
					return 6078;
				
				case 181:
					return 6085;
				
				case 182:
					return 6092;
				
				case 183:
					return 6099;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6176;
				
				case 185:
					return 6183;
				
				case 186:
					return 6190;
				
				case 187:
					return 6197;
				
				case 188:
					return 6204;
				
				case 189:
					return 6211;
				
				case 190:
					return 6218;
				
				case 191:
					return 6225;
				
				case 192:
					return 6232;
				
				case 193:
					return 6239;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6573;
				
				case 195:
					return 6580;
				
				case 196:
					return 6587;
				
				case 197:
					return 6594;
				
				case 198:
					return 6601;
				
				case 199:
					return 6608;
				
				case 200:
					return 6615;
				
				case 201:
					return 6622;
				
				case 202:
					return 6629;
				
				case 203:
					return 6636;
				
				case 204:
					return 6643;
				
				case 205:
					return 6650;
				
				case 206:
					return 6657;
				
				case 207:
					return 6664;
				
				case 208:
					return 6671;
				
				case 209:
					return 6678;
				
				case 210:
					return 6685;
				
				case 211:
					return 6692;
				
				case 212:
					return 6699;
				
				case 213:
					return 6706;
				
				case 214:
					return 6713;
				
				case 215:
					return 6720;
				
				case 216:
					return 6727;
				
				case 217:
					return 6734;
				
				case 218:
					return 6741;
				
				case 219:
					return 6748;
				
				case 220:
					return 6755;
				
				case 221:
					return 6762;
				
				case 222:
					return 6769;
				
				case 223:
					return 6776;
				
				case 224:
					return 6783;
				
				case 225:
					return 6790;
				
				case 226:
					return 6797;
				
				case 227:
					return 6804;
				
				case 228:
					return 6811;
				
				case 229:
					return 6818;
				
				case 230:
					return 6825;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7295;
				
				case 232:
					return 7302;
				
				case 233:
					return 7309;
				
				case 234:
					return 7316;
				
				case 235:
					return 7323;
				
				case 236:
					return 7330;
				
				case 237:
					return 7337;
				
				case 238:
					return 7344;
				
				case 239:
					return 7351;
				
				case 240:
					return 7358;
				
				case 241:
					return 7365;
				
				case 242:
					return 7372;
				
				case 243:
					return 7379;
				
				case 244:
					return 7386;
				
				case 245:
					return 7393;
				
				case 246:
					return 7400;
				
				case 247:
					return 7407;
				
				case 248:
					return 7414;
				
				case 249:
					return 7421;
				
				case 250:
					return 7428;
				
				case 251:
					return 7435;
				
				case 252:
					return 7442;
				
				case 253:
					return 7449;
				
				case 254:
					return 7456;
				
				case 255:
					return 7463;
				
				case 256:
					return 7470;
				
				case 257:
					return 7477;
				
				case 258:
					return 7484;
				
				case 259:
					return 7491;
				
				case 260:
					return 7498;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8018;
				
				case 262:
					return 8025;
				
				case 263:
					return 8032;
				
				case 264:
					return 8039;
				
				case 265:
					return 8046;
				
				case 266:
					return 8053;
				
				case 267:
					return 8060;
				
				case 268:
					return 8067;
				
				case 269:
					return 8074;
				
				case 270:
					return 8081;
				
				case 271:
					return 8542;
				
				case 272:
					return 8549;
				
				case 273:
					return 8556;
				
				case 274:
					return 8563;
				
				case 275:
					return 8570;
				
				case 276:
					return 8577;
				
				case 277:
					return 8584;
				
				case 278:
					return 8591;
				
				case 279:
					return 8598;
				
				case 280:
					return 8605;
				
				case 281:
					return 8989;
				
				case 282:
					return 8996;
				
				case 283:
					return 9003;
				
				case 284:
					return 9010;
				
				case 285:
					return 9017;
				
				case 286:
					return 9024;
				
				case 287:
					return 9031;
				
				case 288:
					return 9038;
				
				case 289:
					return 9045;
				
				case 290:
					return 9052;
				
				case 291:
					return 9059;
				
				case 292:
					return 9065;
				
				case 293:
					return 9071;
				
				case 294:
					return 9077;
				
				case 295:
					return 9084;
				
				case 296:
					return 9091;
				
				case 297:
					return 9098;
				
				case 298:
					return 9105;
				
				case 299:
					return 9112;
				
				case 300:
					return 9119;
				
				case 301:
					return 9126;
				
				case 302:
					return 9133;
				
				case 303:
					return 9140;
				
				case 304:
					return 9147;
				
				case 305:
					return 9153;
				
				case 306:
					return 9159;
				
				case 307:
					return 9640;
				
				case 308:
					return 9647;
				
				case 309:
					return 9654;
				
				case 310:
					return 9661;
				
				case 311:
					return 9668;
				
				case 312:
					return 9675;
				
				case 313:
					return 9682;
				
				case 314:
					return 9689;
				
				case 315:
					return 9696;
				
				case 316:
					return 9703;
				
				case 317:
					return 9924;
				
				case 318:
					return 9931;
				
				case 319:
					return 9938;
				
				case 320:
					return 9945;
				
				case 321:
					return 9952;
				
				case 322:
					return 9959;
				
				case 323:
					return 9966;
				
				case 324:
					return 9973;
				
				case 325:
					return 9980;
				
				case 326:
					return 9987;
				
				case 327:
					return 9994;
				
				case 328:
					return 10001;
				
				case 329:
					return 10008;
				
				case 330:
					return 10015;
				
				case 331:
					return 10022;
				
				case 332:
					return 10029;
				
				case 333:
					return 10036;
				
				case 334:
					return 10043;
				
				case 335:
					return 10050;
				
				case 336:
					return 10057;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10450;
				
				case 338:
					return 10457;
				
				case 339:
					return 10464;
				
				case 340:
					return 10471;
				
				case 341:
					return 10478;
				
				case 342:
					return 10485;
				
				case 343:
					return 10492;
				
				case 344:
					return 10499;
				
				case 345:
					return 10506;
				
				case 346:
					return 10513;
				
				case 347:
					return 10520;
				
				case 348:
					return 10526;
				
				case 349:
					return 10532;
				
				case 350:
					return 10538;
				
				case 351:
					return 10545;
				
				case 352:
					return 10552;
				
				case 353:
					return 10559;
				
				case 354:
					return 10566;
				
				case 355:
					return 10573;
				
				case 356:
					return 10580;
				
				case 357:
					return 10587;
				
				case 358:
					return 10594;
				
				case 359:
					return 10601;
				
				case 360:
					return 10608;
				
				case 361:
					return 10614;
				
				case 362:
					return 10620;
				
				default:
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 1634;
				
				case 1:
					return 1641;
				
				case 2:
					return 1648;
				
				case 3:
					return 1655;
				
				case 4:
					return 1662;
				
				case 5:
					return 1669;
				
				case 6:
					return 1676;
				
				case 7:
					return 1683;
				
				case 8:
					return 1690;
				
				case 9:
					return 1697;
				
				case 10:
					return 1704;
				
				case 11:
					return 1710;
				
				case 12:
					return 1716;
				
				case 13:
					return 1722;
				
				case 14:
					return 1801;
				
				case 15:
					return 1808;
				
				case 16:
					return 1815;
				
				case 17:
					return 1822;
				
				case 18:
					return 1829;
				
				case 19:
					return 1836;
				
				case 20:
					return 1843;
				
				case 21:
					return 1850;
				
				case 22:
					return 1857;
				
				case 23:
					return 1864;
				
				case 24:
					return 1870;
				
				case 25:
					return 1876;
				
				case 26:
					return 2171;
				
				case 27:
					return 2178;
				
				case 28:
					return 2185;
				
				case 29:
					return 2192;
				
				case 30:
					return 2199;
				
				case 31:
					return 2206;
				
				case 32:
					return 2213;
				
				case 33:
					return 2220;
				
				case 34:
					return 2227;
				
				case 35:
					return 2234;
				
				case 36:
					return 2241;
				
				case 37:
					return 2247;
				
				case 38:
					return 2253;
				
				case 39:
					return 2835;
				
				case 40:
					return 2842;
				
				case 41:
					return 2849;
				
				case 42:
					return 2856;
				
				case 43:
					return 2863;
				
				case 44:
					return 2870;
				
				case 45:
					return 2877;
				
				case 46:
					return 2884;
				
				case 47:
					return 2891;
				
				case 48:
					return 2898;
				
				case 49:
					return 2905;
				
				case 50:
					return 2911;
				
				case 51:
					return 2917;
				
				case 52:
					return 2959;
				
				case 53:
					return 2966;
				
				case 54:
					return 2973;
				
				case 55:
					return 2980;
				
				case 56:
					return 2987;
				
				case 57:
					return 2994;
				
				case 58:
					return 3001;
				
				case 59:
					return 3008;
				
				case 60:
					return 3015;
				
				case 61:
					return 3022;
				
				case 62:
					return 3029;
				
				case 63:
					return 3035;
				
				case 64:
					return 3041;
				
				case 65:
					return 3242;
				
				case 66:
					return 3250;
				
				case 67:
					return 3258;
				
				case 68:
					return 3266;
				
				case 69:
					return 3274;
				
				case 70:
					return 3282;
				
				case 71:
					return 3290;
				
				case 72:
					return 3298;
				
				case 73:
					return 3306;
				
				case 74:
					return 3314;
				
				case 75:
					return 3322;
				
				case 76:
					return 3330;
				
				case 77:
					return 3338;
				
				case 78:
					return 3346;
				
				case 79:
					return 3354;
				
				case 80:
					return 3362;
				
				case 81:
					return 3370;
				
				case 82:
					return 3378;
				
				case 83:
					return 3386;
				
				case 84:
					return 3394;
				
				case 85:
					return 3402;
				
				case 86:
					return 3409;
				
				case 87:
					return 3416;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4038;
				
				case 89:
					return 4046;
				
				case 90:
					return 4054;
				
				case 91:
					return 4062;
				
				case 92:
					return 4070;
				
				case 93:
					return 4078;
				
				case 94:
					return 4086;
				
				case 95:
					return 4094;
				
				case 96:
					return 4102;
				
				case 97:
					return 4110;
				
				case 98:
					return 4118;
				
				case 99:
					return 4126;
				
				case 100:
					return 4134;
				
				case 101:
					return 4142;
				
				case 102:
					return 4150;
				
				case 103:
					return 4158;
				
				case 104:
					return 4166;
				
				case 105:
					return 4174;
				
				case 106:
					return 4182;
				
				case 107:
					return 4190;
				
				case 108:
					return 4198;
				
				case 109:
					return 4206;
				
				case 110:
					return 4214;
				
				case 111:
					return 4222;
				
				case 112:
					return 4230;
				
				case 113:
					return 4238;
				
				case 114:
					return 4246;
				
				case 115:
					return 4254;
				
				case 116:
					return 4262;
				
				case 117:
					return 4270;
				
				case 118:
					return 4278;
				
				case 119:
					return 4286;
				
				case 120:
					return 4294;
				
				case 121:
					return 4302;
				
				case 122:
					return 4310;
				
				case 123:
					return 4318;
				
				case 124:
					return 4326;
				
				case 125:
					return 4334;
				
				case 126:
					return 4342;
				
				case 127:
					return 4350;
				
				case 128:
					return 4358;
				
				case 129:
					return 4366;
				
				case 130:
					return 4374;
				
				case 131:
					return 4382;
				
				case 132:
					return 4390;
				
				case 133:
					return 4398;
				
				case 134:
					return 4406;
				
				case 135:
					return 4414;
				
				case 136:
					return 4422;
				
				case 137:
					return 4430;
				
				case 138:
					return 4438;
				
				case 139:
					return 4446;
				
				case 140:
					return 4454;
				
				case 141:
					return 4462;
				
				case 142:
					return 4470;
				
				case 143:
					return 4478;
				
				case 144:
					return 4486;
				
				case 145:
					return 4494;
				
				case 146:
					return 4502;
				
				case 147:
					return 4510;
				
				case 148:
					return 4518;
				
				case 149:
					return 4526;
				
				case 150:
					return 4534;
				
				case 151:
					return 4542;
				
				case 152:
					return 4550;
				
				case 153:
					return 4558;
				
				case 154:
					return 4566;
				
				case 155:
					return 4574;
				
				case 156:
					return 4582;
				
				case 157:
					return 4590;
				
				case 158:
					return 5483;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5932;
				
				case 160:
					return 5939;
				
				case 161:
					return 5946;
				
				case 162:
					return 5953;
				
				case 163:
					return 5960;
				
				case 164:
					return 5967;
				
				case 165:
					return 5974;
				
				case 166:
					return 5981;
				
				case 167:
					return 5988;
				
				case 168:
					return 5995;
				
				case 169:
					return 6002;
				
				case 170:
					return 6009;
				
				case 171:
					return 6016;
				
				case 172:
					return 6023;
				
				case 173:
					return 6030;
				
				case 174:
					return 6037;
				
				case 175:
					return 6044;
				
				case 176:
					return 6051;
				
				case 177:
					return 6058;
				
				case 178:
					return 6065;
				
				case 179:
					return 6072;
				
				case 180:
					return 6079;
				
				case 181:
					return 6086;
				
				case 182:
					return 6093;
				
				case 183:
					return 6100;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6177;
				
				case 185:
					return 6184;
				
				case 186:
					return 6191;
				
				case 187:
					return 6198;
				
				case 188:
					return 6205;
				
				case 189:
					return 6212;
				
				case 190:
					return 6219;
				
				case 191:
					return 6226;
				
				case 192:
					return 6233;
				
				case 193:
					return 6240;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6574;
				
				case 195:
					return 6581;
				
				case 196:
					return 6588;
				
				case 197:
					return 6595;
				
				case 198:
					return 6602;
				
				case 199:
					return 6609;
				
				case 200:
					return 6616;
				
				case 201:
					return 6623;
				
				case 202:
					return 6630;
				
				case 203:
					return 6637;
				
				case 204:
					return 6644;
				
				case 205:
					return 6651;
				
				case 206:
					return 6658;
				
				case 207:
					return 6665;
				
				case 208:
					return 6672;
				
				case 209:
					return 6679;
				
				case 210:
					return 6686;
				
				case 211:
					return 6693;
				
				case 212:
					return 6700;
				
				case 213:
					return 6707;
				
				case 214:
					return 6714;
				
				case 215:
					return 6721;
				
				case 216:
					return 6728;
				
				case 217:
					return 6735;
				
				case 218:
					return 6742;
				
				case 219:
					return 6749;
				
				case 220:
					return 6756;
				
				case 221:
					return 6763;
				
				case 222:
					return 6770;
				
				case 223:
					return 6777;
				
				case 224:
					return 6784;
				
				case 225:
					return 6791;
				
				case 226:
					return 6798;
				
				case 227:
					return 6805;
				
				case 228:
					return 6812;
				
				case 229:
					return 6819;
				
				case 230:
					return 6826;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7296;
				
				case 232:
					return 7303;
				
				case 233:
					return 7310;
				
				case 234:
					return 7317;
				
				case 235:
					return 7324;
				
				case 236:
					return 7331;
				
				case 237:
					return 7338;
				
				case 238:
					return 7345;
				
				case 239:
					return 7352;
				
				case 240:
					return 7359;
				
				case 241:
					return 7366;
				
				case 242:
					return 7373;
				
				case 243:
					return 7380;
				
				case 244:
					return 7387;
				
				case 245:
					return 7394;
				
				case 246:
					return 7401;
				
				case 247:
					return 7408;
				
				case 248:
					return 7415;
				
				case 249:
					return 7422;
				
				case 250:
					return 7429;
				
				case 251:
					return 7436;
				
				case 252:
					return 7443;
				
				case 253:
					return 7450;
				
				case 254:
					return 7457;
				
				case 255:
					return 7464;
				
				case 256:
					return 7471;
				
				case 257:
					return 7478;
				
				case 258:
					return 7485;
				
				case 259:
					return 7492;
				
				case 260:
					return 7499;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8019;
				
				case 262:
					return 8026;
				
				case 263:
					return 8033;
				
				case 264:
					return 8040;
				
				case 265:
					return 8047;
				
				case 266:
					return 8054;
				
				case 267:
					return 8061;
				
				case 268:
					return 8068;
				
				case 269:
					return 8075;
				
				case 270:
					return 8082;
				
				case 271:
					return 8543;
				
				case 272:
					return 8550;
				
				case 273:
					return 8557;
				
				case 274:
					return 8564;
				
				case 275:
					return 8571;
				
				case 276:
					return 8578;
				
				case 277:
					return 8585;
				
				case 278:
					return 8592;
				
				case 279:
					return 8599;
				
				case 280:
					return 8606;
				
				case 281:
					return 8990;
				
				case 282:
					return 8997;
				
				case 283:
					return 9004;
				
				case 284:
					return 9011;
				
				case 285:
					return 9018;
				
				case 286:
					return 9025;
				
				case 287:
					return 9032;
				
				case 288:
					return 9039;
				
				case 289:
					return 9046;
				
				case 290:
					return 9053;
				
				case 291:
					return 9060;
				
				case 292:
					return 9066;
				
				case 293:
					return 9072;
				
				case 294:
					return 9078;
				
				case 295:
					return 9085;
				
				case 296:
					return 9092;
				
				case 297:
					return 9099;
				
				case 298:
					return 9106;
				
				case 299:
					return 9113;
				
				case 300:
					return 9120;
				
				case 301:
					return 9127;
				
				case 302:
					return 9134;
				
				case 303:
					return 9141;
				
				case 304:
					return 9148;
				
				case 305:
					return 9154;
				
				case 306:
					return 9160;
				
				case 307:
					return 9641;
				
				case 308:
					return 9648;
				
				case 309:
					return 9655;
				
				case 310:
					return 9662;
				
				case 311:
					return 9669;
				
				case 312:
					return 9676;
				
				case 313:
					return 9683;
				
				case 314:
					return 9690;
				
				case 315:
					return 9697;
				
				case 316:
					return 9704;
				
				case 317:
					return 9925;
				
				case 318:
					return 9932;
				
				case 319:
					return 9939;
				
				case 320:
					return 9946;
				
				case 321:
					return 9953;
				
				case 322:
					return 9960;
				
				case 323:
					return 9967;
				
				case 324:
					return 9974;
				
				case 325:
					return 9981;
				
				case 326:
					return 9988;
				
				case 327:
					return 9995;
				
				case 328:
					return 10002;
				
				case 329:
					return 10009;
				
				case 330:
					return 10016;
				
				case 331:
					return 10023;
				
				case 332:
					return 10030;
				
				case 333:
					return 10037;
				
				case 334:
					return 10044;
				
				case 335:
					return 10051;
				
				case 336:
					return 10058;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10451;
				
				case 338:
					return 10458;
				
				case 339:
					return 10465;
				
				case 340:
					return 10472;
				
				case 341:
					return 10479;
				
				case 342:
					return 10486;
				
				case 343:
					return 10493;
				
				case 344:
					return 10500;
				
				case 345:
					return 10507;
				
				case 346:
					return 10514;
				
				case 347:
					return 10521;
				
				case 348:
					return 10527;
				
				case 349:
					return 10533;
				
				case 350:
					return 10539;
				
				case 351:
					return 10546;
				
				case 352:
					return 10553;
				
				case 353:
					return 10560;
				
				case 354:
					return 10567;
				
				case 355:
					return 10574;
				
				case 356:
					return 10581;
				
				case 357:
					return 10588;
				
				case 358:
					return 10595;
				
				case 359:
					return 10602;
				
				case 360:
					return 10609;
				
				case 361:
					return 10615;
				
				case 362:
					return 10621;
				
				default:
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1636;
				
				case 1:
					return 1643;
				
				case 2:
					return 1650;
				
				case 3:
					return 1657;
				
				case 4:
					return 1664;
				
				case 5:
					return 1671;
				
				case 6:
					return 1678;
				
				case 7:
					return 1685;
				
				case 8:
					return 1692;
				
				case 9:
					return 1699;
				
				case 13:
					return 1724;
				
				case 14:
					return 1803;
				
				case 15:
					return 1810;
				
				case 16:
					return 1817;
				
				case 17:
					return 1824;
				
				case 18:
					return 1831;
				
				case 19:
					return 1838;
				
				case 20:
					return 1845;
				
				case 21:
					return 1852;
				
				case 22:
					return 1859;
				
				case 26:
					return 2173;
				
				case 27:
					return 2180;
				
				case 28:
					return 2187;
				
				case 29:
					return 2194;
				
				case 30:
					return 2201;
				
				case 31:
					return 2208;
				
				case 32:
					return 2215;
				
				case 33:
					return 2222;
				
				case 34:
					return 2229;
				
				case 35:
					return 2236;
				
				case 39:
					return 2837;
				
				case 40:
					return 2844;
				
				case 41:
					return 2851;
				
				case 42:
					return 2858;
				
				case 43:
					return 2865;
				
				case 44:
					return 2872;
				
				case 45:
					return 2879;
				
				case 46:
					return 2886;
				
				case 47:
					return 2893;
				
				case 48:
					return 2900;
				
				case 52:
					return 2961;
				
				case 53:
					return 2968;
				
				case 54:
					return 2975;
				
				case 55:
					return 2982;
				
				case 56:
					return 2989;
				
				case 57:
					return 2996;
				
				case 58:
					return 3003;
				
				case 59:
					return 3010;
				
				case 60:
					return 3017;
				
				case 61:
					return 3024;
				
				case 65:
					return 3245;
				
				case 66:
					return 3253;
				
				case 67:
					return 3261;
				
				case 68:
					return 3269;
				
				case 69:
					return 3277;
				
				case 70:
					return 3285;
				
				case 71:
					return 3293;
				
				case 72:
					return 3301;
				
				case 73:
					return 3309;
				
				case 74:
					return 3317;
				
				case 75:
					return 3325;
				
				case 76:
					return 3333;
				
				case 77:
					return 3341;
				
				case 78:
					return 3349;
				
				case 79:
					return 3357;
				
				case 80:
					return 3365;
				
				case 81:
					return 3373;
				
				case 82:
					return 3381;
				
				case 83:
					return 3389;
				
				case 84:
					return 3397;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4041;
				
				case 89:
					return 4049;
				
				case 90:
					return 4057;
				
				case 91:
					return 4065;
				
				case 92:
					return 4073;
				
				case 93:
					return 4081;
				
				case 94:
					return 4089;
				
				case 95:
					return 4097;
				
				case 96:
					return 4105;
				
				case 97:
					return 4113;
				
				case 98:
					return 4121;
				
				case 99:
					return 4129;
				
				case 100:
					return 4137;
				
				case 101:
					return 4145;
				
				case 102:
					return 4153;
				
				case 103:
					return 4161;
				
				case 104:
					return 4169;
				
				case 105:
					return 4177;
				
				case 106:
					return 4185;
				
				case 107:
					return 4193;
				
				case 108:
					return 4201;
				
				case 109:
					return 4209;
				
				case 110:
					return 4217;
				
				case 111:
					return 4225;
				
				case 112:
					return 4233;
				
				case 113:
					return 4241;
				
				case 114:
					return 4249;
				
				case 115:
					return 4257;
				
				case 116:
					return 4265;
				
				case 117:
					return 4273;
				
				case 118:
					return 4281;
				
				case 119:
					return 4289;
				
				case 120:
					return 4297;
				
				case 121:
					return 4305;
				
				case 122:
					return 4313;
				
				case 123:
					return 4321;
				
				case 124:
					return 4329;
				
				case 125:
					return 4337;
				
				case 126:
					return 4345;
				
				case 127:
					return 4353;
				
				case 128:
					return 4361;
				
				case 129:
					return 4369;
				
				case 130:
					return 4377;
				
				case 131:
					return 4385;
				
				case 132:
					return 4393;
				
				case 133:
					return 4401;
				
				case 134:
					return 4409;
				
				case 135:
					return 4417;
				
				case 136:
					return 4425;
				
				case 137:
					return 4433;
				
				case 138:
					return 4441;
				
				case 139:
					return 4449;
				
				case 140:
					return 4457;
				
				case 141:
					return 4465;
				
				case 142:
					return 4473;
				
				case 143:
					return 4481;
				
				case 144:
					return 4489;
				
				case 145:
					return 4497;
				
				case 146:
					return 4505;
				
				case 147:
					return 4513;
				
				case 148:
					return 4521;
				
				case 149:
					return 4529;
				
				case 150:
					return 4537;
				
				case 151:
					return 4545;
				
				case 152:
					return 4553;
				
				case 153:
					return 4561;
				
				case 154:
					return 4569;
				
				case 155:
					return 4577;
				
				case 156:
					return 4585;
				
				case 157:
					return 4593;
				
				case 158:
					return 5486;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5934;
				
				case 160:
					return 5941;
				
				case 161:
					return 5948;
				
				case 162:
					return 5955;
				
				case 163:
					return 5962;
				
				case 164:
					return 5969;
				
				case 165:
					return 5976;
				
				case 166:
					return 5983;
				
				case 167:
					return 5990;
				
				case 168:
					return 5997;
				
				case 169:
					return 6004;
				
				case 170:
					return 6011;
				
				case 171:
					return 6018;
				
				case 172:
					return 6025;
				
				case 173:
					return 6032;
				
				case 174:
					return 6039;
				
				case 175:
					return 6046;
				
				case 176:
					return 6053;
				
				case 177:
					return 6060;
				
				case 178:
					return 6067;
				
				case 179:
					return 6074;
				
				case 180:
					return 6081;
				
				case 181:
					return 6088;
				
				case 182:
					return 6095;
				
				case 183:
					return 6102;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6179;
				
				case 185:
					return 6186;
				
				case 186:
					return 6193;
				
				case 187:
					return 6200;
				
				case 188:
					return 6207;
				
				case 189:
					return 6214;
				
				case 190:
					return 6221;
				
				case 191:
					return 6228;
				
				case 192:
					return 6235;
				
				case 193:
					return 6242;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6576;
				
				case 195:
					return 6583;
				
				case 196:
					return 6590;
				
				case 197:
					return 6597;
				
				case 198:
					return 6604;
				
				case 199:
					return 6611;
				
				case 200:
					return 6618;
				
				case 201:
					return 6625;
				
				case 202:
					return 6632;
				
				case 203:
					return 6639;
				
				case 204:
					return 6646;
				
				case 205:
					return 6653;
				
				case 206:
					return 6660;
				
				case 207:
					return 6667;
				
				case 208:
					return 6674;
				
				case 209:
					return 6681;
				
				case 210:
					return 6688;
				
				case 211:
					return 6695;
				
				case 212:
					return 6702;
				
				case 213:
					return 6709;
				
				case 214:
					return 6716;
				
				case 215:
					return 6723;
				
				case 216:
					return 6730;
				
				case 217:
					return 6737;
				
				case 218:
					return 6744;
				
				case 219:
					return 6751;
				
				case 220:
					return 6758;
				
				case 221:
					return 6765;
				
				case 222:
					return 6772;
				
				case 223:
					return 6779;
				
				case 224:
					return 6786;
				
				case 225:
					return 6793;
				
				case 226:
					return 6800;
				
				case 227:
					return 6807;
				
				case 228:
					return 6814;
				
				case 229:
					return 6821;
				
				case 230:
					return 6828;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7298;
				
				case 232:
					return 7305;
				
				case 233:
					return 7312;
				
				case 234:
					return 7319;
				
				case 235:
					return 7326;
				
				case 236:
					return 7333;
				
				case 237:
					return 7340;
				
				case 238:
					return 7347;
				
				case 239:
					return 7354;
				
				case 240:
					return 7361;
				
				case 241:
					return 7368;
				
				case 242:
					return 7375;
				
				case 243:
					return 7382;
				
				case 244:
					return 7389;
				
				case 245:
					return 7396;
				
				case 246:
					return 7403;
				
				case 247:
					return 7410;
				
				case 248:
					return 7417;
				
				case 249:
					return 7424;
				
				case 250:
					return 7431;
				
				case 251:
					return 7438;
				
				case 252:
					return 7445;
				
				case 253:
					return 7452;
				
				case 254:
					return 7459;
				
				case 255:
					return 7466;
				
				case 256:
					return 7473;
				
				case 257:
					return 7480;
				
				case 258:
					return 7487;
				
				case 259:
					return 7494;
				
				case 260:
					return 7501;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8021;
				
				case 262:
					return 8028;
				
				case 263:
					return 8035;
				
				case 264:
					return 8042;
				
				case 265:
					return 8049;
				
				case 266:
					return 8056;
				
				case 267:
					return 8063;
				
				case 268:
					return 8070;
				
				case 269:
					return 8077;
				
				case 270:
					return 8084;
				
				case 271:
					return 8545;
				
				case 272:
					return 8552;
				
				case 273:
					return 8559;
				
				case 274:
					return 8566;
				
				case 275:
					return 8573;
				
				case 276:
					return 8580;
				
				case 277:
					return 8587;
				
				case 278:
					return 8594;
				
				case 279:
					return 8601;
				
				case 280:
					return 8608;
				
				case 281:
					return 8992;
				
				case 282:
					return 8999;
				
				case 283:
					return 9006;
				
				case 284:
					return 9013;
				
				case 285:
					return 9020;
				
				case 286:
					return 9027;
				
				case 287:
					return 9034;
				
				case 288:
					return 9041;
				
				case 289:
					return 9048;
				
				case 290:
					return 9055;
				
				case 294:
					return 9080;
				
				case 295:
					return 9087;
				
				case 296:
					return 9094;
				
				case 297:
					return 9101;
				
				case 298:
					return 9108;
				
				case 299:
					return 9115;
				
				case 300:
					return 9122;
				
				case 301:
					return 9129;
				
				case 302:
					return 9136;
				
				case 303:
					return 9143;
				
				case 307:
					return 9643;
				
				case 308:
					return 9650;
				
				case 309:
					return 9657;
				
				case 310:
					return 9664;
				
				case 311:
					return 9671;
				
				case 312:
					return 9678;
				
				case 313:
					return 9685;
				
				case 314:
					return 9692;
				
				case 315:
					return 9699;
				
				case 316:
					return 9706;
				
				case 317:
					return 9927;
				
				case 318:
					return 9934;
				
				case 319:
					return 9941;
				
				case 320:
					return 9948;
				
				case 321:
					return 9955;
				
				case 322:
					return 9962;
				
				case 323:
					return 9969;
				
				case 324:
					return 9976;
				
				case 325:
					return 9983;
				
				case 326:
					return 9990;
				
				case 327:
					return 9997;
				
				case 328:
					return 10004;
				
				case 329:
					return 10011;
				
				case 330:
					return 10018;
				
				case 331:
					return 10025;
				
				case 332:
					return 10032;
				
				case 333:
					return 10039;
				
				case 334:
					return 10046;
				
				case 335:
					return 10053;
				
				case 336:
					return 10060;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10453;
				
				case 338:
					return 10460;
				
				case 339:
					return 10467;
				
				case 340:
					return 10474;
				
				case 341:
					return 10481;
				
				case 342:
					return 10488;
				
				case 343:
					return 10495;
				
				case 344:
					return 10502;
				
				case 345:
					return 10509;
				
				case 346:
					return 10516;
				
				case 350:
					return 10541;
				
				case 351:
					return 10548;
				
				case 352:
					return 10555;
				
				case 353:
					return 10562;
				
				case 354:
					return 10569;
				
				case 355:
					return 10576;
				
				case 356:
					return 10583;
				
				case 357:
					return 10590;
				
				case 358:
					return 10597;
				
				case 359:
					return 10604;
				
				default:
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 1635;
				
				case 1:
					return 1642;
				
				case 2:
					return 1649;
				
				case 3:
					return 1656;
				
				case 4:
					return 1663;
				
				case 5:
					return 1670;
				
				case 6:
					return 1677;
				
				case 7:
					return 1684;
				
				case 8:
					return 1691;
				
				case 9:
					return 1698;
				
				case 10:
					return 1705;
				
				case 11:
					return 1711;
				
				case 12:
					return 1717;
				
				case 13:
					return 1723;
				
				case 14:
					return 1802;
				
				case 15:
					return 1809;
				
				case 16:
					return 1816;
				
				case 17:
					return 1823;
				
				case 18:
					return 1830;
				
				case 19:
					return 1837;
				
				case 20:
					return 1844;
				
				case 21:
					return 1851;
				
				case 22:
					return 1858;
				
				case 23:
					return 1865;
				
				case 24:
					return 1871;
				
				case 25:
					return 1877;
				
				case 26:
					return 2172;
				
				case 27:
					return 2179;
				
				case 28:
					return 2186;
				
				case 29:
					return 2193;
				
				case 30:
					return 2200;
				
				case 31:
					return 2207;
				
				case 32:
					return 2214;
				
				case 33:
					return 2221;
				
				case 34:
					return 2228;
				
				case 35:
					return 2235;
				
				case 36:
					return 2242;
				
				case 37:
					return 2248;
				
				case 38:
					return 2254;
				
				case 39:
					return 2836;
				
				case 40:
					return 2843;
				
				case 41:
					return 2850;
				
				case 42:
					return 2857;
				
				case 43:
					return 2864;
				
				case 44:
					return 2871;
				
				case 45:
					return 2878;
				
				case 46:
					return 2885;
				
				case 47:
					return 2892;
				
				case 48:
					return 2899;
				
				case 49:
					return 2906;
				
				case 50:
					return 2912;
				
				case 51:
					return 2918;
				
				case 52:
					return 2960;
				
				case 53:
					return 2967;
				
				case 54:
					return 2974;
				
				case 55:
					return 2981;
				
				case 56:
					return 2988;
				
				case 57:
					return 2995;
				
				case 58:
					return 3002;
				
				case 59:
					return 3009;
				
				case 60:
					return 3016;
				
				case 61:
					return 3023;
				
				case 62:
					return 3030;
				
				case 63:
					return 3036;
				
				case 64:
					return 3042;
				
				case 65:
					return 3243;
				
				case 66:
					return 3251;
				
				case 67:
					return 3259;
				
				case 68:
					return 3267;
				
				case 69:
					return 3275;
				
				case 70:
					return 3283;
				
				case 71:
					return 3291;
				
				case 72:
					return 3299;
				
				case 73:
					return 3307;
				
				case 74:
					return 3315;
				
				case 75:
					return 3323;
				
				case 76:
					return 3331;
				
				case 77:
					return 3340;
				
				case 78:
					return 3348;
				
				case 79:
					return 3355;
				
				case 80:
					return 3363;
				
				case 81:
					return 3371;
				
				case 82:
					return 3379;
				
				case 83:
					return 3387;
				
				case 84:
					return 3395;
				
				case 85:
					return 3403;
				
				case 86:
					return 3410;
				
				case 87:
					return 3417;
				
				default:
			}
			switch (iParam1)
			{
				case 88:
					return 4039;
				
				case 89:
					return 4047;
				
				case 90:
					return 4055;
				
				case 91:
					return 4063;
				
				case 92:
					return 4071;
				
				case 93:
					return 4079;
				
				case 94:
					return 4087;
				
				case 95:
					return 4095;
				
				case 96:
					return 4103;
				
				case 97:
					return 4111;
				
				case 98:
					return 4119;
				
				case 99:
					return 4127;
				
				case 100:
					return 4136;
				
				case 101:
					return 4144;
				
				case 102:
					return 4151;
				
				case 103:
					return 4159;
				
				case 104:
					return 4167;
				
				case 105:
					return 4175;
				
				case 106:
					return 4183;
				
				case 107:
					return 4191;
				
				case 108:
					return 4199;
				
				case 109:
					return 4207;
				
				case 110:
					return 4215;
				
				case 111:
					return 4223;
				
				case 112:
					return 4231;
				
				case 113:
					return 4239;
				
				case 114:
					return 4247;
				
				case 115:
					return 4255;
				
				case 116:
					return 4263;
				
				case 117:
					return 4271;
				
				case 118:
					return 4279;
				
				case 119:
					return 4287;
				
				case 120:
					return 4296;
				
				case 121:
					return 4304;
				
				case 122:
					return 4311;
				
				case 123:
					return 4319;
				
				case 124:
					return 4327;
				
				case 125:
					return 4335;
				
				case 126:
					return 4343;
				
				case 127:
					return 4351;
				
				case 128:
					return 4359;
				
				case 129:
					return 4367;
				
				case 130:
					return 4375;
				
				case 131:
					return 4383;
				
				case 132:
					return 4391;
				
				case 133:
					return 4399;
				
				case 134:
					return 4407;
				
				case 135:
					return 4415;
				
				case 136:
					return 4423;
				
				case 137:
					return 4431;
				
				case 138:
					return 4439;
				
				case 139:
					return 4447;
				
				case 140:
					return 4456;
				
				case 141:
					return 4464;
				
				case 142:
					return 4471;
				
				case 143:
					return 4479;
				
				case 144:
					return 4487;
				
				case 145:
					return 4495;
				
				case 146:
					return 4503;
				
				case 147:
					return 4511;
				
				case 148:
					return 4519;
				
				case 149:
					return 4527;
				
				case 150:
					return 4535;
				
				case 151:
					return 4543;
				
				case 152:
					return 4551;
				
				case 153:
					return 4559;
				
				case 154:
					return 4567;
				
				case 155:
					return 4575;
				
				case 156:
					return 4583;
				
				case 157:
					return 4591;
				
				case 158:
					return 5484;
				
				default:
			}
			switch (iParam1)
			{
				case 159:
					return 5933;
				
				case 160:
					return 5940;
				
				case 161:
					return 5947;
				
				case 162:
					return 5954;
				
				case 163:
					return 5961;
				
				case 164:
					return 5968;
				
				case 165:
					return 5975;
				
				case 166:
					return 5982;
				
				case 167:
					return 5989;
				
				case 168:
					return 5996;
				
				case 169:
					return 6003;
				
				case 170:
					return 6010;
				
				case 171:
					return 6017;
				
				case 172:
					return 6024;
				
				case 173:
					return 6031;
				
				case 174:
					return 6038;
				
				case 175:
					return 6045;
				
				case 176:
					return 6052;
				
				case 177:
					return 6059;
				
				case 178:
					return 6066;
				
				case 179:
					return 6073;
				
				case 180:
					return 6080;
				
				case 181:
					return 6087;
				
				case 182:
					return 6094;
				
				case 183:
					return 6101;
				
				default:
			}
			switch (iParam1)
			{
				case 184:
					return 6178;
				
				case 185:
					return 6185;
				
				case 186:
					return 6192;
				
				case 187:
					return 6199;
				
				case 188:
					return 6206;
				
				case 189:
					return 6213;
				
				case 190:
					return 6220;
				
				case 191:
					return 6227;
				
				case 192:
					return 6234;
				
				case 193:
					return 6241;
				
				default:
			}
			switch (iParam1)
			{
				case 194:
					return 6575;
				
				case 195:
					return 6582;
				
				case 196:
					return 6589;
				
				case 197:
					return 6596;
				
				case 198:
					return 6603;
				
				case 199:
					return 6610;
				
				case 200:
					return 6617;
				
				case 201:
					return 6624;
				
				case 202:
					return 6631;
				
				case 203:
					return 6638;
				
				case 204:
					return 6645;
				
				case 205:
					return 6652;
				
				case 206:
					return 6659;
				
				case 207:
					return 6666;
				
				case 208:
					return 6673;
				
				case 209:
					return 6680;
				
				case 210:
					return 6687;
				
				case 211:
					return 6694;
				
				case 212:
					return 6701;
				
				case 213:
					return 6708;
				
				case 214:
					return 6715;
				
				case 215:
					return 6722;
				
				case 216:
					return 6729;
				
				case 217:
					return 6736;
				
				case 218:
					return 6743;
				
				case 219:
					return 6750;
				
				case 220:
					return 6757;
				
				case 221:
					return 6764;
				
				case 222:
					return 6771;
				
				case 223:
					return 6778;
				
				case 224:
					return 6785;
				
				case 225:
					return 6792;
				
				case 226:
					return 6799;
				
				case 227:
					return 6806;
				
				case 228:
					return 6813;
				
				case 229:
					return 6820;
				
				case 230:
					return 6827;
				
				default:
			}
			switch (iParam1)
			{
				case 231:
					return 7297;
				
				case 232:
					return 7304;
				
				case 233:
					return 7311;
				
				case 234:
					return 7318;
				
				case 235:
					return 7325;
				
				case 236:
					return 7332;
				
				case 237:
					return 7339;
				
				case 238:
					return 7346;
				
				case 239:
					return 7353;
				
				case 240:
					return 7360;
				
				case 241:
					return 7367;
				
				case 242:
					return 7374;
				
				case 243:
					return 7381;
				
				case 244:
					return 7388;
				
				case 245:
					return 7395;
				
				case 246:
					return 7402;
				
				case 247:
					return 7409;
				
				case 248:
					return 7416;
				
				case 249:
					return 7423;
				
				case 250:
					return 7430;
				
				case 251:
					return 7437;
				
				case 252:
					return 7444;
				
				case 253:
					return 7451;
				
				case 254:
					return 7458;
				
				case 255:
					return 7465;
				
				case 256:
					return 7472;
				
				case 257:
					return 7479;
				
				case 258:
					return 7486;
				
				case 259:
					return 7493;
				
				case 260:
					return 7500;
				
				default:
			}
			switch (iParam1)
			{
				case 261:
					return 8020;
				
				case 262:
					return 8027;
				
				case 263:
					return 8034;
				
				case 264:
					return 8041;
				
				case 265:
					return 8048;
				
				case 266:
					return 8055;
				
				case 267:
					return 8062;
				
				case 268:
					return 8069;
				
				case 269:
					return 8076;
				
				case 270:
					return 8083;
				
				case 271:
					return 8544;
				
				case 272:
					return 8551;
				
				case 273:
					return 8558;
				
				case 274:
					return 8565;
				
				case 275:
					return 8572;
				
				case 276:
					return 8579;
				
				case 277:
					return 8586;
				
				case 278:
					return 8593;
				
				case 279:
					return 8600;
				
				case 280:
					return 8607;
				
				case 281:
					return 8991;
				
				case 282:
					return 8998;
				
				case 283:
					return 9005;
				
				case 284:
					return 9012;
				
				case 285:
					return 9019;
				
				case 286:
					return 9026;
				
				case 287:
					return 9033;
				
				case 288:
					return 9040;
				
				case 289:
					return 9047;
				
				case 290:
					return 9054;
				
				case 291:
					return 9061;
				
				case 292:
					return 9067;
				
				case 293:
					return 9073;
				
				case 294:
					return 9079;
				
				case 295:
					return 9086;
				
				case 296:
					return 9093;
				
				case 297:
					return 9100;
				
				case 298:
					return 9107;
				
				case 299:
					return 9114;
				
				case 300:
					return 9121;
				
				case 301:
					return 9128;
				
				case 302:
					return 9135;
				
				case 303:
					return 9142;
				
				case 304:
					return 9149;
				
				case 305:
					return 9155;
				
				case 306:
					return 9161;
				
				case 307:
					return 9642;
				
				case 308:
					return 9649;
				
				case 309:
					return 9656;
				
				case 310:
					return 9663;
				
				case 311:
					return 9670;
				
				case 312:
					return 9677;
				
				case 313:
					return 9684;
				
				case 314:
					return 9691;
				
				case 315:
					return 9698;
				
				case 316:
					return 9705;
				
				case 317:
					return 9926;
				
				case 318:
					return 9933;
				
				case 319:
					return 9940;
				
				case 320:
					return 9947;
				
				case 321:
					return 9954;
				
				case 322:
					return 9961;
				
				case 323:
					return 9968;
				
				case 324:
					return 9975;
				
				case 325:
					return 9982;
				
				case 326:
					return 9989;
				
				case 327:
					return 9996;
				
				case 328:
					return 10003;
				
				case 329:
					return 10010;
				
				case 330:
					return 10017;
				
				case 331:
					return 10024;
				
				case 332:
					return 10031;
				
				case 333:
					return 10038;
				
				case 334:
					return 10045;
				
				case 335:
					return 10052;
				
				case 336:
					return 10059;
				
				default:
			}
			switch (iParam1)
			{
				case 337:
					return 10452;
				
				case 338:
					return 10459;
				
				case 339:
					return 10466;
				
				case 340:
					return 10473;
				
				case 341:
					return 10480;
				
				case 342:
					return 10487;
				
				case 343:
					return 10494;
				
				case 344:
					return 10501;
				
				case 345:
					return 10508;
				
				case 346:
					return 10515;
				
				case 347:
					return 10522;
				
				case 348:
					return 10528;
				
				case 349:
					return 10534;
				
				case 350:
					return 10540;
				
				case 351:
					return 10547;
				
				case 352:
					return 10554;
				
				case 353:
					return 10561;
				
				case 354:
					return 10568;
				
				case 355:
					return 10575;
				
				case 356:
					return 10582;
				
				case 357:
					return 10589;
				
				case 358:
					return 10596;
				
				case 359:
					return 10603;
				
				case 360:
					return 10610;
				
				case 361:
					return 10616;
				
				case 362:
					return 10622;
				
				default:
			}
			break;
	}
	return 1630;
}

int func_282(int iParam0, bool bParam1)//Position - 0x133F1
{
	if (iParam0 <= 38)
	{
		if (iParam0 < 10)
		{
			if (bParam1)
			{
				return (4212 + iParam0);
			}
			else
			{
				return (31488 + iParam0);
			}
		}
		else if (iParam0 > 12 && iParam0 < 23)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 3);
			}
			else
			{
				return ((31488 + iParam0) - 3);
			}
		}
		else if (iParam0 > 25 && iParam0 < 36)
		{
			if (bParam1)
			{
				return ((4212 + iParam0) - 6);
			}
			else
			{
				return ((31488 + iParam0) - 6);
			}
		}
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return ((6015 + iParam0) - 39);
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7252 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9310 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30134 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30134 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_283(11))
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15084 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15361;
	}
	else if (iParam0 < 184)
	{
		return ((18036 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18953 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21942 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24535 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26319 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28039 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31488 + 30 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34036 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36528 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36528 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_283(int iParam0)//Position - 0x13695
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 108;
			break;
		
		case 9:
			return 128;
			break;
		
		case 10:
			return 148;
			break;
		
		case 11:
			return 156;
			break;
		
		case 6:
			return 75;
			break;
		
		case 7:
			return 88;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 179;
			break;
		
		case 13:
			return 186;
			break;
		
		case 14:
			return 192;
			break;
		
		case 15:
			return 202;
			break;
		
		case 16:
			return 212;
			break;
		
		case 17:
			return 222;
			break;
		
		case 18:
			return 236;
			break;
		
		case 19:
			return 246;
			break;
		
		case 20:
			return 256;
			break;
		
		case 21:
			return 268;
			break;
		
		case 22:
			return 278;
			break;
		
		case 23:
			return 294;
			break;
		
		case 24:
			return 307;
			break;
		
		case 25:
			return 317;
			break;
		
		case 26:
			return 337;
			break;
		
		case 27:
			return 350;
			break;
		
		case 28:
			return 363;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_292(iParam0);
		return func_291(iVar0);
	}
	return (func_284(iParam0, -1, 1) * iParam0 + 1);
}

int func_284(int iParam0, int iParam1, bool bParam2)//Position - 0x13822
{
	if (iParam0 == -1)
	{
		if (iParam1 >= 1)
		{
			if (func_287(iParam1, 0, 0))
			{
				return 20;
			}
			else if (func_286(iParam1))
			{
				return 0;
			}
			else if (func_285(iParam1, -1))
			{
				return 10;
			}
			else if (iParam1 == 115)
			{
				return 8;
			}
			else if (iParam1 == 116)
			{
				return 20;
			}
			else if (iParam1 == 117)
			{
				return 7;
			}
			else if (iParam1 == 118)
			{
				return 1;
			}
			else if ((iParam1 == 119 || iParam1 == 120) || iParam1 == 121)
			{
				return 10;
			}
			else if (iParam1 == 122)
			{
				return 9;
			}
			else if (iParam1 == 123 || iParam1 == 124)
			{
				return 10;
			}
			else if (iParam1 == 125)
			{
				return 10;
			}
			else if (iParam1 == 126)
			{
				return 10;
			}
			else if (iParam1 == 127)
			{
				return 10;
			}
			else if (iParam1 == 128)
			{
				return 20;
			}
			else if (iParam1 <= 128 && iParam1 > 0)
			{
				if (Global_1312193[iParam1 /*1951*/].f_33 == 2)
				{
					if (bParam2)
					{
						return 3;
					}
					else
					{
						return 2;
					}
				}
				else if (Global_1312193[iParam1 /*1951*/].f_33 == 6)
				{
					if (bParam2)
					{
						return 8;
					}
					else
					{
						return 6;
					}
				}
				else if (Global_1312193[iParam1 /*1951*/].f_33 == 10)
				{
					if (bParam2)
					{
						return 13;
					}
					else
					{
						return 10;
					}
				}
			}
		}
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 7:
		case 23:
		case 24:
		case 27:
		case 28:
			return 13;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 10;
			break;
		
		case 8:
		case 9:
		case 10:
			return 20;
			break;
		
		case 11:
			return 8;
			break;
		
		case 12:
			return 20;
			break;
		
		case 13:
			return 7;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
		case 16:
		case 17:
			return 10;
			break;
		
		case 18:
		case 19:
		case 20:
			return 10;
			break;
		
		case 21:
			return 10;
			break;
		
		case 22:
			return 10;
			break;
		
		case 25:
			return 10;
			break;
		
		case 26:
			return 20;
			break;
	}
	return 0;
}

int func_285(int iParam0, int iParam1)//Position - 0x13ACC
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

int func_286(int iParam0)//Position - 0x13BA9
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_287(int iParam0, bool bParam1, bool bParam2)//Position - 0x13BD8
{
	if (bParam2)
	{
		return func_288(PLAYER::PLAYER_ID(), 0);
	}
	if (bParam1)
	{
		if (func_288(PLAYER::PLAYER_ID(), 0))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 103:
			case 106:
			case 109:
			case 112:
			case 104:
			case 107:
			case 110:
			case 113:
			case 105:
			case 108:
			case 111:
			case 114:
				return 1;
				break;
			}
	}
	switch (iParam0)
	{
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 1;
			break;
	}
	return 0;
}

int func_288(int iParam0, bool bParam1)//Position - 0x13CB3
{
	if (Global_1853184 != func_8())
	{
		if (!func_290(Global_1853184))
		{
			return 0;
		}
		if (bParam1)
		{
			if (PLAYER::PLAYER_ID() != Global_1853184)
			{
				if (BitTest(Global_2689235[Global_1853184 /*453*/].f_197, 24) || func_289(Global_1853184))
				{
					return 1;
				}
			}
		}
	}
	return BitTest(Global_2689235[iParam0 /*453*/].f_197, 24);
}

int func_289(int iParam0)//Position - 0x13D19
{
	if (iParam0 != func_8())
	{
		return BitTest(Global_2689235[iParam0 /*453*/].f_197, 9);
	}
	return 0;
}

int func_290(int iParam0)//Position - 0x13D3C
{
	if (iParam0 != func_8())
	{
		return BitTest(Global_1853348[iParam0 /*834*/].f_267.f_366, 2);
	}
	return 0;
}

int func_291(int iParam0)//Position - 0x13D65
{
	switch (iParam0)
	{
		case 0:
			return 157;
		
		case 2:
			return 224;
		
		case 1:
			return 227;
		
		case 3:
			return 279;
		
		default:
	}
	return -1;
}

int func_292(int iParam0)//Position - 0x13DA2
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 4)
	{
		return iParam0;
	}
	return -1;
}

int func_293(int iParam0)//Position - 0x13DC8
{
	if (iParam0 < 10)
	{
		return (7263 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (7263 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (7263 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (7263 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7263 + iParam0) - 12);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9330 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30154 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30154 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_283(11))
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15154 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15362;
	}
	else if (iParam0 < 184)
	{
		return ((18061 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18963 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21979 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24565 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26329 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28049 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31528 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34056 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36548 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36548 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_294(int iParam0)//Position - 0x1402E
{
	if (iParam0 < 10)
	{
		return (5975 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5975 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5975 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5975 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7242 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9290 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30114 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30114 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_283(11))
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((15014 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15360;
	}
	else if (iParam0 < 184)
	{
		return ((18011 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18943 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21905 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24505 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26309 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28029 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31478 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((34016 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36508 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36508 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_295(int iParam0)//Position - 0x14292
{
	if (iParam0 < 10)
	{
		return (5935 + iParam0);
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (5935 + (iParam0 - 3));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (5935 + (iParam0 - 6));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5935 + (iParam0 - 9));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return ((7232 + iParam0) - 52);
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return ((9270 + iParam0) - 65);
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return ((30094 + iParam0) - 281);
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (30094 + ((iParam0 - 281) - 3));
	}
	else if (iParam0 < func_283(11))
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 <= 157)
	{
		return ((14944 + iParam0) - 88);
	}
	else if (iParam0 == 158)
	{
		return 15359;
	}
	else if (iParam0 < 184)
	{
		return ((17986 + iParam0) - 159);
	}
	else if (iParam0 < 194)
	{
		return ((18933 + iParam0) - 184);
	}
	else if (iParam0 < 231)
	{
		return ((21868 + iParam0) - 194);
	}
	else if (iParam0 < 261)
	{
		return ((24475 + iParam0) - 231);
	}
	else if (iParam0 < 271)
	{
		return ((26299 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28019 + iParam0) - 271);
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return ((31468 + iParam0) - 307);
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return ((33996 + iParam0) - 317);
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return ((36488 + iParam0) - 337);
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36488 + ((iParam0 - 337) - 3));
	}
	return 0;
}

int func_296(int iParam0)//Position - 0x144F6
{
	int iVar0;
	
	iVar0 = (4424 - 4400);
	if (iParam0 < 10)
	{
		return (4400 + (iParam0 * iVar0));
	}
	else if (iParam0 > 12 && iParam0 < 23)
	{
		return (4640 + ((iParam0 - 13) * iVar0));
	}
	else if (iParam0 > 25 && iParam0 < 36)
	{
		return (4880 + ((iParam0 - 26) * iVar0));
	}
	else if (iParam0 > 38 && iParam0 < 49)
	{
		return (5120 + ((iParam0 - 39) * iVar0));
	}
	else if (iParam0 > 51 && iParam0 < 62)
	{
		return (6414 + ((iParam0 - 52) * iVar0));
	}
	else if (iParam0 > 64 && iParam0 < 85)
	{
		return (7682 + ((iParam0 - 65) * iVar0));
	}
	else if (iParam0 >= 281 && iParam0 < 291)
	{
		return (29534 + ((iParam0 - 281) * iVar0));
	}
	else if (iParam0 >= 294 && iParam0 < 304)
	{
		return (29774 + ((iParam0 - 294) * iVar0));
	}
	else if (iParam0 < func_283(11))
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 <= 157)
	{
		return (9554 + ((iParam0 - 88) * iVar0));
	}
	else if (iParam0 == 158)
	{
		return 15282;
	}
	else if (iParam0 < 184)
	{
		return (16061 + ((iParam0 - 159) * iVar0));
	}
	else if (iParam0 < 194)
	{
		return (18163 + ((iParam0 - 184) * iVar0));
	}
	else if (iParam0 < 231)
	{
		return (19019 + ((iParam0 - 194) * iVar0));
	}
	else if (iParam0 < 261)
	{
		return (22195 + ((iParam0 - 231) * iVar0));
	}
	else if (iParam0 < 271)
	{
		return (25539 + ((iParam0 - 261) * iVar0));
	}
	else if (iParam0 < 281)
	{
		return (27259 + ((iParam0 - 271) * iVar0));
	}
	else if (iParam0 > 306 && iParam0 < 317)
	{
		return (31188 + ((iParam0 - 307) * iVar0));
	}
	else if (iParam0 >= 317 && iParam0 < 337)
	{
		return (33436 + ((iParam0 - 317) * iVar0));
	}
	else if (iParam0 >= 337 && iParam0 < 347)
	{
		return (35928 + ((iParam0 - 337) * iVar0));
	}
	else if (iParam0 >= 350 && iParam0 < 360)
	{
		return (36168 + ((iParam0 - 350) * iVar0));
	}
	return 0;
}

int func_297(int iParam0)//Position - 0x1479D
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return 1;
			break;
	}
	return 0;
}

int func_298(int iParam0, int iParam1)//Position - 0x14868
{
	int iVar0;
	
	if ((iParam0 == 3880 || iParam0 == 3881) || iParam0 == 3882)
	{
		if (iParam1 < 10)
		{
			iVar0 = (iParam0 + iParam1 * 3);
		}
		else if (iParam1 < 23)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3910 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3911 + (iParam1 - 13) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3912 + (iParam1 - 13) * 3);
			}
		}
		else if (iParam1 < 36)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (3946 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (3947 + (iParam1 - 26) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (3948 + (iParam1 - 26) * 3);
			}
		}
		else if (iParam1 < 49)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (5855 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (5856 + (iParam1 - 39) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (5857 + (iParam1 - 39) * 3);
			}
		}
		else if (iParam1 < 62)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (7149 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (7150 + (iParam1 - 52) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (7151 + (iParam1 - 52) * 3);
			}
		}
		else if (iParam1 < 85)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (9107 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (9108 + (iParam1 - 65) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (9109 + (iParam1 - 65) * 3);
			}
		}
		else if (iParam1 < func_283(11))
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 <= 157)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (14384 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (14385 + (iParam1 - 88) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (14386 + (iParam1 - 88) * 3);
			}
		}
		else if (iParam1 == 158)
		{
			if (iParam0 == 3880)
			{
				iVar0 = 15351;
			}
			else if (iParam0 == 3881)
			{
				iVar0 = 15352;
			}
			else if (iParam0 == 3882)
			{
				iVar0 = 15353;
			}
		}
		else if (iParam1 < 184)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (17786 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (17787 + (iParam1 - 159) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (17788 + (iParam1 - 159) * 3);
			}
		}
		else if (iParam1 < 194)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (18853 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (18854 + (iParam1 - 184) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (18855 + (iParam1 - 184) * 3);
			}
		}
		else if (iParam1 < 231)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (21572 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (21573 + (iParam1 - 194) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (21574 + (iParam1 - 194) * 3);
			}
		}
		else if (iParam1 < 261)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (24265 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (24266 + (iParam1 - 231) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (24267 + (iParam1 - 231) * 3);
			}
		}
		else if (iParam1 < 271)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (26229 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (26230 + (iParam1 - 261) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (26231 + (iParam1 - 261) * 3);
			}
		}
		else if (iParam1 < 281)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (27949 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (27950 + (iParam1 - 271) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (27951 + (iParam1 - 271) * 3);
			}
		}
		else if (iParam1 < 291)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29474 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29475 + (iParam1 - 281) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29476 + (iParam1 - 281) * 3);
			}
		}
		else if (iParam1 < 304)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (29504 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (29505 + (iParam1 - 294) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (29506 + (iParam1 - 294) * 3);
			}
		}
		else if (iParam1 > 306 && iParam1 < 317)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (31158 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (31159 + (iParam1 - 307) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (31160 + (iParam1 - 307) * 3);
			}
		}
		else if (iParam1 >= 317 && iParam1 < 337)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (33376 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (33377 + (iParam1 - 317) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (33378 + (iParam1 - 317) * 3);
			}
		}
		else if (iParam1 >= 337 && iParam1 < 347)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35868 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35869 + (iParam1 - 337) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35870 + (iParam1 - 337) * 3);
			}
		}
		else if (iParam1 >= 350 && iParam1 < 360)
		{
			if (iParam0 == 3880)
			{
				iVar0 = (35898 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3881)
			{
				iVar0 = (35899 + (iParam1 - 350) * 3);
			}
			else if (iParam0 == 3882)
			{
				iVar0 = (35900 + (iParam1 - 350) * 3);
			}
		}
	}
	else if (iParam1 < 10)
	{
		iVar0 = (iParam0 + (iParam1 * (1456 - 1411)));
	}
	else if (iParam1 >= 10 && iParam1 <= 12)
	{
		iVar0 = ((iParam1 - 10) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 1861;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 1862;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 1863;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 1864;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 1865;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 1866;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 1867;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 1868;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 1869;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 1870;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 1871;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 1872;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 1873;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 1874;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 1875;
		}
	}
	else if (iParam1 < 23)
	{
		iVar0 = (1906 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 13) * (1456 - 1411)));
	}
	else if (iParam1 >= 23 && iParam1 <= 25)
	{
		iVar0 = ((iParam1 - 23) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2356;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2357;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2358;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2359;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2360;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2361;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2362;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2363;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2364;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2365;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2366;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2367;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2368;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2369;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2370;
		}
	}
	else if (iParam1 < 36)
	{
		iVar0 = (2405 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 26) * (1456 - 1411)));
	}
	else if (iParam1 >= 36 && iParam1 <= 38)
	{
		iVar0 = ((iParam1 - 36) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 2855;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 2856;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 2857;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 2858;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 2859;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 2860;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 2861;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 2862;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 2863;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 2864;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 2865;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 2866;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 2867;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 2868;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 2869;
		}
	}
	else if (iParam1 < 49)
	{
		iVar0 = (5360 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 39) * (1456 - 1411)));
	}
	else if (iParam1 >= 49 && iParam1 <= 51)
	{
		iVar0 = ((iParam1 - 49) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 5810;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 5811;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 5812;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 5813;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 5814;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 5815;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 5816;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 5817;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 5818;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 5819;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 5820;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 5821;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 5822;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 5823;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 5824;
		}
	}
	else if (iParam1 < 62)
	{
		iVar0 = (6654 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 52) * (1456 - 1411)));
	}
	else if (iParam1 >= 62 && iParam1 <= 64)
	{
		iVar0 = ((iParam1 - 62) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 7104;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 7105;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 7106;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 7107;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 7108;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 7109;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 7110;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 7111;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 7112;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 7113;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 7114;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 7115;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 7116;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 7117;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 7118;
		}
	}
	else if (iParam1 < 85)
	{
		iVar0 = (8162 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 65) * (1456 - 1411)));
	}
	else if (iParam1 >= 85 && iParam1 <= 87)
	{
		iVar0 = ((iParam1 - 85) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 9062;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 9063;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 9064;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 9065;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 9066;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 9067;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 9068;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 9069;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 9070;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 9071;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 9072;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 9073;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 9074;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 9075;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 9076;
		}
	}
	else if (iParam1 < func_283(11))
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_283(7)) * (1456 - 1411)));
	}
	else if (iParam1 <= 157)
	{
		iVar0 = (11234 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - func_283(7)) * (1456 - 1411)));
	}
	else if (iParam1 == 158)
	{
		iVar0 = (15306 - 1411);
		iVar0 = (iVar0 + iParam0);
	}
	else if (iParam1 < 184)
	{
		iVar0 = (16661 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 159) * (1456 - 1411)));
	}
	else if (iParam1 < 194)
	{
		iVar0 = (18403 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 184) * (1456 - 1411)));
	}
	else if (iParam1 < 231)
	{
		iVar0 = (19907 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 194) * (1456 - 1411)));
	}
	else if (iParam1 < 261)
	{
		iVar0 = (22915 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 231) * (1456 - 1411)));
	}
	else if (iParam1 < 271)
	{
		iVar0 = (25779 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 261) * (1456 - 1411)));
	}
	else if (iParam1 < 281)
	{
		iVar0 = (27499 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 271) * (1456 - 1411)));
	}
	else if (iParam1 < 291)
	{
		iVar0 = (28484 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 281) * (1456 - 1411)));
	}
	else if (iParam1 >= 291 && iParam1 <= 293)
	{
		iVar0 = ((iParam1 - 291) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 28934;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 28935;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 28936;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 28937;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 28938;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 28939;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 28940;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 28941;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 28942;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 28943;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 28944;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 28945;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 28946;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 28947;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 28948;
		}
	}
	else if (iParam1 < 304)
	{
		iVar0 = (28979 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 294) * (1456 - 1411)));
	}
	else if (iParam1 >= 304 && iParam1 <= 306)
	{
		iVar0 = ((iParam1 - 304) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 += 29429;
		}
		else if (iParam0 == 1412)
		{
			iVar0 += 29430;
		}
		else if (iParam0 == 1441)
		{
			iVar0 += 29431;
		}
		else if (iParam0 == 1442)
		{
			iVar0 += 29432;
		}
		else if (iParam0 == 1443)
		{
			iVar0 += 29433;
		}
		else if (iParam0 == 1445)
		{
			iVar0 += 29434;
		}
		else if (iParam0 == 1447)
		{
			iVar0 += 29435;
		}
		else if (iParam0 == 1448)
		{
			iVar0 += 29436;
		}
		else if (iParam0 == 1449)
		{
			iVar0 += 29437;
		}
		else if (iParam0 == 1450)
		{
			iVar0 += 29438;
		}
		else if (iParam0 == 1451)
		{
			iVar0 += 29439;
		}
		else if (iParam0 == 1452)
		{
			iVar0 += 29440;
		}
		else if (iParam0 == 1453)
		{
			iVar0 += 29441;
		}
		else if (iParam0 == 1454)
		{
			iVar0 += 29442;
		}
		else if (iParam0 == 1455)
		{
			iVar0 += 29443;
		}
	}
	else if (iParam1 > 306 && iParam1 < 317)
	{
		iVar0 = (30708 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 307) * (1456 - 1411)));
	}
	else if (iParam1 >= 317 && iParam1 < 337)
	{
		iVar0 = (32476 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 317) * (1456 - 1411)));
	}
	else if (iParam1 < 347)
	{
		iVar0 = (34878 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 337) * (1456 - 1411)));
	}
	else if (iParam1 >= 347 && iParam1 <= 349)
	{
		iVar0 = ((iParam1 - 347) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35328);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35329);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35330);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35331);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35332);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35333);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35334);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35335);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35336);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35337);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35338);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35339);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35340);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35341);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35342);
		}
	}
	else if (iParam1 < 360)
	{
		iVar0 = (35373 - 1411);
		iVar0 = (iVar0 + iParam0);
		iVar0 = (iVar0 + ((iParam1 - 350) * (1456 - 1411)));
	}
	else if (iParam1 >= 360 && iParam1 <= 362)
	{
		iVar0 = ((iParam1 - 360) * (1876 - 1861));
		if (iParam0 == 1411)
		{
			iVar0 = (iVar0 + 35823);
		}
		else if (iParam0 == 1412)
		{
			iVar0 = (iVar0 + 35824);
		}
		else if (iParam0 == 1441)
		{
			iVar0 = (iVar0 + 35825);
		}
		else if (iParam0 == 1442)
		{
			iVar0 = (iVar0 + 35826);
		}
		else if (iParam0 == 1443)
		{
			iVar0 = (iVar0 + 35827);
		}
		else if (iParam0 == 1445)
		{
			iVar0 = (iVar0 + 35828);
		}
		else if (iParam0 == 1447)
		{
			iVar0 = (iVar0 + 35829);
		}
		else if (iParam0 == 1448)
		{
			iVar0 = (iVar0 + 35830);
		}
		else if (iParam0 == 1449)
		{
			iVar0 = (iVar0 + 35831);
		}
		else if (iParam0 == 1450)
		{
			iVar0 = (iVar0 + 35832);
		}
		else if (iParam0 == 1451)
		{
			iVar0 = (iVar0 + 35833);
		}
		else if (iParam0 == 1452)
		{
			iVar0 = (iVar0 + 35834);
		}
		else if (iParam0 == 1453)
		{
			iVar0 = (iVar0 + 35835);
		}
		else if (iParam0 == 1454)
		{
			iVar0 = (iVar0 + 35836);
		}
		else if (iParam0 == 1455)
		{
			iVar0 = (iVar0 + 35837);
		}
	}
	return iVar0;
}

void func_299(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x15EDF
{
	int iVar0;
	
	if (func_300())
	{
		iVar0 = Global_2866852[iParam0 /*3*/][func_22(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, bParam1, bParam3);
		}
	}
}

int func_300()//Position - 0x15F11
{
	return 1;
	return 0;
}

void func_301(int iParam0)//Position - 0x15F1E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				MISC::SET_BIT(&iVar0, 3);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
			}
		}
	}
}

void func_302(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)//Position - 0x15F72
{
	int iVar0;
	var uVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_339();
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
		{
			VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		}
		if (bParam5)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 12);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 15);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 8);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 9);
			func_337();
			func_336(iParam1, 1);
			Global_1952156 = 1;
		}
		func_306(iParam0, &(Global_1585857[iParam1 /*142*/]), bParam5);
		Global_1585857[iParam1 /*142*/].f_70 = 1;
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 1);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 6);
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 7);
		}
		if (bParam3)
		{
			MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		}
		else
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 0);
		}
		if (bParam4)
		{
			func_305(iParam1);
		}
		if (bParam6)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 15);
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
		}
		if (bParam7)
		{
			switch (iParam10)
			{
				case 0:
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 27);
					break;
				
				case 1:
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 28);
					break;
				}
		}
		if (bParam8)
		{
			MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 13);
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				if (BitTest(iVar0, 3))
				{
					MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 2);
				}
			}
		}
		if (VEHICLE::GET_VEHICLE_MOD_KIT(iParam0) >= 0)
		{
			func_304(&iParam0, &(Global_1585857[iParam1 /*142*/].f_9), &(Global_1585857[iParam1 /*142*/].f_59));
			if (func_303(iParam1, &uVar1))
			{
				if (bParam5 || PLAYER::GET_PLAYERS_LAST_VEHICLE() == iParam0)
				{
					Global_2359296[func_184() /*5567*/].f_593.f_86 = iParam1 + 1;
				}
				MISC::SET_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 25);
				MISC::CLEAR_BIT(&(Global_1585857[iParam1 /*142*/].f_103), 26);
			}
		}
		Global_2359296[func_184() /*5567*/].f_681.f_1275 = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_279(iParam1, &(Global_1585857[iParam1 /*142*/]), 0, iParam9, 0, 0);
	}
}

bool func_303(int iParam0, var uParam1)//Position - 0x161CC
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 <= 9)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 13 && iParam0 <= 22)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 26 && iParam0 <= 35)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 39 && iParam0 <= 48)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if (iParam0 >= 52 && iParam0 <= 61)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((iParam0 >= 65 && iParam0 <= 74) || (iParam0 >= 75 && iParam0 <= 84))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0 += 3;
	if ((((iParam0 >= 88 && iParam0 <= 107) || (iParam0 >= 108 && iParam0 <= 127)) || (iParam0 >= 128 && iParam0 <= 147)) || (iParam0 >= 148 && iParam0 <= 155))
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0 += 20;
	if (iParam0 >= 179 && iParam0 <= 185)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 191 && iParam0 <= 221)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	iVar0++;
	if (iParam0 >= 227 && iParam0 <= 235)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 237 && iParam0 <= 245)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	if (iParam0 >= 247 && iParam0 <= 255)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (iParam0 >= 258 && iParam0 <= 267)
	{
		*uParam1 = (iParam0 - iVar0);
	}
	iVar0++;
	iVar0++;
	if (*uParam1 >= 212 || *uParam1 == -1)
	{
		*uParam1 = 0;
		return 0;
	}
	return *uParam1 != -1;
}

int func_304(int iParam0, var uParam1, var uParam2)//Position - 0x1643F
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
				switch (VEHICLE::_GET_VEHICLE_XENON_LIGHTS_COLOR(*iParam0))
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

void func_305(int iParam0)//Position - 0x16632
{
	Global_2359296[func_184() /*5567*/].f_681.f_2 = iParam0;
}

void func_306(int iParam0, var uParam1, bool bParam2)//Position - 0x1664C
{
	int iVar0;
	
	func_335(uParam1);
	if (bParam2)
	{
		uParam1->f_103 = 0;
		uParam1->f_105 = 0;
		StringCopy(&(uParam1->f_106), "", 64);
		StringCopy(&(uParam1->f_122), "", 64);
		uParam1->f_140 = 0;
		uParam1->f_138 = -1;
		uParam1->f_139 = -1;
		uParam1->f_141 = NETWORK::GET_CLOUD_TIME_AS_INT();
		if (Global_262145.f_11088)
		{
			MISC::SET_BIT(&(uParam1->f_103), 22);
		}
	}
	if (func_334(iParam0, 0))
	{
		func_333();
		MISC::SET_BIT(&(uParam1->f_103), 3);
	}
	func_309(iParam0, uParam1);
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (BitTest(iVar0, 3))
			{
				MISC::SET_BIT(&(uParam1->f_103), 2);
			}
		}
	}
	if (BitTest(uParam1->f_103, 8))
	{
		if (!func_307(iParam0))
		{
		}
	}
	else if (func_307(iParam0))
	{
		MISC::SET_BIT(&(uParam1->f_103), 8);
		MISC::SET_BIT(&(uParam1->f_103), 9);
	}
}

int func_307(int iParam0)//Position - 0x1672E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_308(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_308(int iParam0)//Position - 0x16766
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				return BitTest(iVar0, 16);
			}
		}
	}
	return 0;
}

void func_309(int iParam0, var uParam1)//Position - 0x167B1
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_329(iParam0, uParam1);
		MISC::CLEAR_BIT(&(uParam1->f_95), 0);
		if (BitTest(uParam1->f_77, 11))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (func_307(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (func_327(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_95), 0);
		}
		if (VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0) && !VEHICLE::_GET_DRIFT_TYRES_ENABLED(iParam0))
		{
			uParam1->f_102 = 2;
		}
		else if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			uParam1->f_102 = 1;
		}
		else if (VEHICLE::_GET_DRIFT_TYRES_ENABLED(iParam0))
		{
			uParam1->f_102 = 3;
		}
		if (uParam1->f_70 == 0)
		{
			uParam1->f_70 = 1;
		}
		uParam1->f_78 = AUDIO::GET_VEHICLE_DEFAULT_HORN(iParam0);
		uParam1->f_79 = AUDIO::_GET_VEHICLE_DEFAULT_HORN_VARIATION(iParam0);
		uParam1->f_80 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(iParam0);
		VEHICLE::_GET_VEHICLE_INTERIOR_COLOR(iParam0, &(uParam1->f_97));
		VEHICLE::_GET_VEHICLE_DASHBOARD_COLOR(iParam0, &(uParam1->f_99));
		uParam1->f_98 = VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam0);
		iVar0 = func_317(iParam0, &(uParam1->f_94), &(uParam1->f_96));
		MISC::CLEAR_BIT(&(uParam1->f_95), 3);
		if (!iVar0 == func_8())
		{
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(iVar0, &(uParam1->f_81), 13);
			MISC::SET_BIT(&(uParam1->f_95), 1);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 1);
		}
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			MISC::SET_BIT(&(uParam1->f_95), 2);
			if (uParam1->f_94 == 1)
			{
				if (func_316(iParam0))
				{
					MISC::SET_BIT(&(uParam1->f_95), 3);
				}
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_95), 2);
		}
		if (VEHICLE::IS_VEHICLE_MODEL(iParam0, joaat("deathbike2")))
		{
			uParam1->f_99 = func_310(func_313(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		}
	}
}

int func_310(int iParam0)//Position - 0x16942
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_312(iParam0);
	func_311(iVar1, &iVar0);
	return iVar0;
}

bool func_311(int iParam0, int iParam1)//Position - 0x1695D
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		
		case 1:
			*iParam1 = 5;
			break;
		
		case 2:
			*iParam1 = 6;
			break;
		
		case 3:
			*iParam1 = 7;
			break;
		
		case 4:
			*iParam1 = 111;
			break;
		
		case 5:
			*iParam1 = 112;
			break;
		
		case 6:
			*iParam1 = 107;
			break;
		
		case 7:
			*iParam1 = 104;
			break;
		
		case 8:
			*iParam1 = 98;
			break;
		
		case 9:
			*iParam1 = 100;
			break;
		
		case 10:
			*iParam1 = 102;
			break;
		
		case 11:
			*iParam1 = 99;
			break;
		
		case 12:
			*iParam1 = 105;
			break;
		
		case 13:
			*iParam1 = 106;
			break;
		
		case 14:
			*iParam1 = 37;
			break;
		
		case 15:
			*iParam1 = 90;
			break;
		
		case 16:
			*iParam1 = 88;
			break;
		
		case 17:
			*iParam1 = 89;
			break;
		
		case 18:
			*iParam1 = 91;
			break;
		
		case 19:
			*iParam1 = 38;
			break;
		
		case 20:
			*iParam1 = 138;
			break;
		
		case 21:
			*iParam1 = 36;
			break;
		
		case 22:
			*iParam1 = 27;
			break;
		
		case 23:
			*iParam1 = 28;
			break;
		
		case 24:
			*iParam1 = 29;
			break;
		
		case 25:
			*iParam1 = 150;
			break;
		
		case 26:
			*iParam1 = 30;
			break;
		
		case 27:
			*iParam1 = 31;
			break;
		
		case 28:
			*iParam1 = 32;
			break;
		
		case 29:
			*iParam1 = 35;
			break;
		
		case 30:
			*iParam1 = 135;
			break;
		
		case 31:
			*iParam1 = 137;
			break;
		
		case 32:
			*iParam1 = 136;
			break;
		
		case 33:
			*iParam1 = 71;
			break;
		
		case 34:
			*iParam1 = 145;
			break;
		
		case 35:
			*iParam1 = 63;
			break;
		
		case 36:
			*iParam1 = 64;
			break;
		
		case 37:
			*iParam1 = 65;
			break;
		
		case 38:
			*iParam1 = 66;
			break;
		
		case 39:
			*iParam1 = 67;
			break;
		
		case 40:
			*iParam1 = 68;
			break;
		
		case 41:
			*iParam1 = 69;
			break;
		
		case 42:
			*iParam1 = 73;
			break;
		
		case 43:
			*iParam1 = 70;
			break;
		
		case 44:
			*iParam1 = 74;
			break;
		
		case 45:
			*iParam1 = 51;
			break;
		
		case 46:
			*iParam1 = 53;
			break;
		
		case 47:
			*iParam1 = 54;
			break;
		
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_312(int iParam0)//Position - 0x16C1F
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 36;
		
		case 2:
			return 35;
		
		case 3:
			return 46;
		
		case 4:
			return 48;
		
		case 5:
			return 16;
		
		case 6:
			return 14;
		
		case 7:
			return 19;
		
		case 8:
			return 22;
		
		case 9:
			return 31;
		
		case 10:
			return 30;
		
		case 11:
			return 33;
		
		case 12:
			return 34;
		
		default:
	}
	return 0;
}

int func_313(int iParam0, int iParam1, int iParam2)//Position - 0x16CBD
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_314()) && Global_1576214)
	{
		if ((iParam0 == Global_1576215 && iParam1 == Global_1576216) && iParam2 == Global_1576217)
		{
			return 13;
		}
	}
	return 0;
}

int func_314()//Position - 0x16E9F
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			Var0 = { func_315() };
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_315()//Position - 0x16EE7
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_316(int iParam0)//Position - 0x16EFC
{
	if (Global_2815059.f_298 == iParam0)
	{
		return 1;
	}
	return 0;
}

int func_317(int iParam0, var uParam1, var uParam2)//Position - 0x16F15
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (func_326(iParam0, 1))
		{
			*uParam1 = 1;
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("PV_Slot", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "PV_Slot"))
				{
					*uParam2 = DECORATOR::DECOR_GET_INT(iParam0, "PV_Slot");
				}
			}
			return func_325(iParam0);
		}
		else if (func_324(iParam0, 1))
		{
			return func_323(iParam0, 1, 0);
		}
		else if (func_322(iParam0, 1))
		{
			return func_321(iParam0, 1, 0);
		}
		else if (func_320(iParam0, 1))
		{
			*uParam1 = 2;
			return func_318(iParam0);
		}
		else if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					*uParam1 = 3;
					return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
				}
			}
		}
	}
	*uParam1 = 4;
	return PLAYER::PLAYER_ID();
}

int func_318(int iParam0)//Position - 0x16FF9
{
	int iVar0;
	
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player");
	return func_319(iVar0, 0, 1, 0);
}

int func_319(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x17016
{
	int iVar0;
	int iVar1;
	
	if (bParam2)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (func_6(iVar0, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0)))
			{
				if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iVar0))
				{
					return iVar0;
				}
			}
			iVar1++;
		}
	}
	else if (func_6(iParam3, 0, 1) || (iParam1 && NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam3)))
	{
		if (iParam0 == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(iParam3))
		{
			return iParam3;
		}
	}
	return func_8();
}

int func_320(int iParam0, bool bParam1)//Position - 0x170A1
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_321(int iParam0, bool bParam1, int iParam2)//Position - 0x170E0
{
	int iVar0;
	
	if (!func_322(iParam0, 1))
	{
		return func_8();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Hacker_Truck");
		return func_319(iVar0, 0, bParam1, iParam2);
	}
	return func_8();
}

int func_322(int iParam0, bool bParam1)//Position - 0x17121
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Hacker_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_323(int iParam0, bool bParam1, int iParam2)//Position - 0x17160
{
	int iVar0;
	
	if (!func_324(iParam0, 1))
	{
		return func_8();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Truck");
		return func_319(iVar0, 0, bParam1, iParam2);
	}
	return func_8();
}

int func_324(int iParam0, bool bParam1)//Position - 0x171A1
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Truck"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_325(int iParam0)//Position - 0x171E0
{
	int iVar0;
	
	if (!func_326(iParam0, 1))
	{
		return func_8();
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle");
	return func_319(iVar0, 0, 1, 0);
}

int func_326(int iParam0, bool bParam1)//Position - 0x1720F
{
	if (Global_78319)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_327(int iParam0)//Position - 0x1724E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(iParam0, 0);
	}
	if (iVar0 == 1 || iVar0 == 2)
	{
		if (iVar0 == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				iVar1 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				iVar1 = MISC::GET_GAME_TIMER();
			}
			iVar2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(iVar1, Global_1577911));
			iVar3 = 20000;
			if (Global_1836584)
			{
				iVar3 = 2000;
			}
			if (iVar2 > iVar3)
			{
				GRAPHICS::_0x82ACC484FFA3B05F(iParam0);
				func_328(iParam0);
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

void func_328(int iParam0)//Position - 0x172DB
{
	int iVar0;
	
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
			{
				iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			}
		}
	}
	if (!BitTest(iVar0, 16))
	{
		MISC::SET_BIT(&iVar0, 16);
		DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar0);
	}
}

void func_329(int iParam0, var uParam1)//Position - 0x1733B
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_332(uParam1);
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
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_77), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_77), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_331(uParam1->f_66))
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
		func_304(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_77), func_330(iVar0 + 1));
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

int func_330(int iParam0)//Position - 0x175E6
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

int func_331(int iParam0)//Position - 0x17696
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

void func_332(var uParam0)//Position - 0x176B6
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

void func_333()//Position - 0x17766
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 363)
	{
		if (BitTest(Global_1585857[iVar0 /*142*/].f_103, 3))
		{
			MISC::CLEAR_BIT(&(Global_1585857[iVar0 /*142*/].f_103), 3);
		}
		iVar0++;
	}
}

int func_334(int iParam0, int iParam1)//Position - 0x177A0
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (iParam1 == 0)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
					{
						return 1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_335(var uParam0)//Position - 0x17803
{
	func_332(uParam0);
	uParam0->f_78 = -1;
	uParam0->f_80 = 0f;
	uParam0->f_97 = 1;
	uParam0->f_98 = 0;
	uParam0->f_99 = 132;
	uParam0->f_81 = 0;
	uParam0->f_81.f_1 = 0;
	uParam0->f_81.f_2 = 0;
	uParam0->f_81.f_3 = 0;
	uParam0->f_81.f_4 = 0;
	uParam0->f_81.f_5 = 0;
	uParam0->f_81.f_6 = 0;
	uParam0->f_81.f_7 = 0;
	uParam0->f_81.f_8 = 0;
	uParam0->f_81.f_9 = 0;
	uParam0->f_81.f_10 = 0;
	uParam0->f_81.f_11 = 0;
	uParam0->f_81.f_12 = 0;
	uParam0->f_95 = 0;
	uParam0->f_94 = 0;
	uParam0->f_96 = -1;
}

void func_336(int iParam0, bool bParam1)//Position - 0x17893
{
	int iVar0;
	
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 39)
		{
			if (Global_2815059.f_2309[iVar0 /*44*/].f_40 == iParam0)
			{
				func_336(iVar0, 0);
			}
			iVar0++;
		}
	}
	else
	{
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/]), "", 24);
		Global_2815059.f_2309[iParam0 /*44*/].f_6 = 138;
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/].f_7), "", 64);
		StringCopy(&(Global_2815059.f_2309[iParam0 /*44*/].f_23), "", 64);
		Global_2815059.f_2309[iParam0 /*44*/].f_39 = -1;
		Global_2815059.f_2309[iParam0 /*44*/].f_40 = -1;
		func_69(&(Global_2815059.f_2309[iParam0 /*44*/].f_41));
		Global_2815059.f_2309[iParam0 /*44*/].f_43 = 0;
	}
}

void func_337()//Position - 0x1794D
{
	func_338(10);
}

void func_338(int iParam0)//Position - 0x1795B
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1836751.f_4[iVar0]), iVar1);
}

void func_339()//Position - 0x17981
{
	Global_2703735.f_61.f_65 = 0;
	func_340(25);
	func_340(24);
}

void func_340(bool bParam0)//Position - 0x1799E
{
	if (bParam0 < 32)
	{
		if (BitTest(Global_2703735.f_61.f_1, bParam0))
		{
			MISC::CLEAR_BIT(&(Global_2703735.f_61.f_1), bParam0);
		}
	}
	else if (BitTest(Global_2703735.f_61.f_2, (bParam0 - 32)))
	{
		MISC::CLEAR_BIT(&(Global_2703735.f_61.f_2), (bParam0 - 32));
	}
}

void func_341(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x179EE
{
	if (func_345() < 0 && Global_1958535)
	{
		return;
	}
	if (func_344(35))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703735.f_61.f_52, 3))
	{
		bParam0 = true;
	}
	if (BitTest(Global_2703735.f_61.f_56, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (BitTest(Global_2703735.f_61.f_60, 3))
	{
		bParam0 = true;
		bParam1 = false;
	}
	if (bParam0)
	{
		func_343(2);
	}
	else
	{
		func_343(1);
	}
	if (bParam1)
	{
		func_343(11);
	}
	if (bParam2)
	{
		func_343(32);
		if (bParam3)
		{
			if (func_345() >= 0 && BitTest(Global_1585857[func_345() /*142*/].f_103, 0))
			{
				func_343(33);
			}
		}
		else
		{
			func_340(33);
		}
		if (func_345() >= 0)
		{
			if (func_342(Global_1585857[func_345() /*142*/].f_66))
			{
				func_343(40);
			}
		}
	}
	else if (bParam5)
	{
		func_343(37);
	}
	if (bParam4)
	{
		func_343(36);
	}
	if (func_344(36))
	{
		if (func_344(2))
		{
			func_340(36);
		}
	}
	if (bParam6)
	{
		func_343(38);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2815059.f_424 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_342(int iParam0)//Position - 0x17B16
{
	if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	return 0;
}

void func_343(bool bParam0)//Position - 0x17B2D
{
	if (bParam0 < 32)
	{
		if (!BitTest(Global_2703735.f_61.f_1, bParam0))
		{
			MISC::SET_BIT(&(Global_2703735.f_61.f_1), bParam0);
		}
	}
	else if (!BitTest(Global_2703735.f_61.f_2, (bParam0 - 32)))
	{
		MISC::SET_BIT(&(Global_2703735.f_61.f_2), (bParam0 - 32));
	}
}

bool func_344(int iParam0)//Position - 0x17B7F
{
	if (iParam0 < 32)
	{
		return BitTest(Global_2703735.f_61.f_1, iParam0);
	}
	return BitTest(Global_2703735.f_61.f_2, (iParam0 - 32));
}

int func_345()//Position - 0x17BAD
{
	if (Global_2359296[func_184() /*5567*/].f_681.f_2 >= 363)
	{
		Global_2359296[func_184() /*5567*/].f_681.f_2 = -1;
		return -1;
	}
	return Global_2359296[func_184() /*5567*/].f_681.f_2;
}

void func_346(int iParam0, int iParam1, int iParam2)//Position - 0x17BF0
{
	if (iParam0 < 0)
	{
		return;
	}
	iParam1++;
	func_347(iParam0, iParam1, iParam2);
	if (iParam0 >= 363)
	{
		return;
	}
	if (iParam2 == func_18() || iParam2 == -1)
	{
		Global_1940666[iParam0] = iParam1;
	}
}

void func_347(int iParam0, int iParam1, int iParam2)//Position - 0x17C3A
{
	if (iParam1 <= 255)
	{
		func_66(func_349(iParam0), iParam1, iParam2);
		func_66(func_348(iParam0), 0, iParam2);
	}
	else
	{
		func_66(func_349(iParam0), 255, iParam2);
		func_66(func_348(iParam0), (iParam1 - 255), iParam2);
	}
}

int func_348(int iParam0)//Position - 0x17C86
{
	if (iParam0 < 261)
	{
		return (24625 + iParam0);
	}
	else if (iParam0 < 271)
	{
		return ((26349 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28069 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30200 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31548 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34096 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36594 + iParam0) - 337);
	}
	return (24625 + iParam0);
}

int func_349(int iParam0)//Position - 0x17D37
{
	if (iParam0 < 158)
	{
		if (iParam0 <= 38)
		{
			return (4036 + iParam0);
		}
		else if (iParam0 <= 48)
		{
			return ((5905 + iParam0) - 39);
		}
		else if (iParam0 <= 51)
		{
			return ((6025 + iParam0) - 49);
		}
		else if (iParam0 <= 64)
		{
			return ((7199 + iParam0) - 52);
		}
		else if (iParam0 <= 87)
		{
			return ((9207 + iParam0) - 65);
		}
		else
		{
			return ((14734 + iParam0) - 88);
		}
	}
	else if (iParam0 == 158)
	{
		return 15356;
	}
	else if (iParam0 < 261)
	{
		if (iParam0 < 184)
		{
			return ((17911 + iParam0) - 159);
		}
		else if (iParam0 < 194)
		{
			return ((18903 + iParam0) - 184);
		}
		else if (iParam0 < 231)
		{
			return ((21757 + iParam0) - 194);
		}
		else
		{
			return ((24595 + iParam0) - 231);
		}
	}
	else if (iParam0 < 271)
	{
		return ((26339 + iParam0) - 261);
	}
	else if (iParam0 < 281)
	{
		return ((28059 + iParam0) - 271);
	}
	else if (iParam0 < 307)
	{
		return ((30174 + iParam0) - 281);
	}
	else if (iParam0 < 317)
	{
		return ((31538 + iParam0) - 307);
	}
	else if (iParam0 < 337)
	{
		return ((34076 + iParam0) - 317);
	}
	else if (iParam0 < 363)
	{
		return ((36568 + iParam0) - 337);
	}
	return (4036 + iParam0);
}

bool func_350(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x17EBE
{
	int iVar0;
	int iVar1;
	
	if (*uParam2 != 0 && *uParam2 != 1)
	{
		*uParam2 = 0;
	}
	switch (*uParam2)
	{
		case 0:
			if (!func_400() && Global_1964691)
			{
				return 0;
			}
			iVar0 = func_399(iParam1);
			iVar1 = func_396(ENTITY::GET_ENTITY_MODEL(iParam0), 0, -1, 0);
			if (func_147(78225582, -1224924353, iVar1, -897111558, 1, 0, 1, 4, iVar0, 3))
			{
				if (func_147(78225582, 1496367840, -207913414, -897111558, 1, 0, 1, 4, 0, 3))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
					{
						VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
					}
					if (func_351(iParam1, iParam0, iParam3, bParam4))
					{
						*uParam2 = 1;
					}
					else
					{
						*uParam2 = 3;
					}
				}
				else
				{
					*uParam2 = 3;
				}
			}
			else
			{
				*uParam2 = 3;
			}
			if (*uParam2 == 1 && func_142())
			{
			}
			else
			{
				*uParam2 = 3;
				func_107(func_112());
			}
			break;
		
		case 1:
			if (func_112() < 0)
			{
				*uParam2 = 3;
			}
			else if (func_141(func_112()))
			{
				if (func_140(func_112()) == 2)
				{
					*uParam2 = 2;
					func_107(func_112());
				}
				else
				{
					*uParam2 = 3;
					func_107(func_112());
				}
			}
			break;
	}
	return *uParam2 != 1;
}

int func_351(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x1800F
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<4> Var22;
	var uVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	char* sVar36;
	
	iVar10 = func_395(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (((!Global_4539334 || !ENTITY::DOES_ENTITY_EXIST(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false)) || VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0)
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0 && func_394(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			func_390(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 0);
			if (!func_389(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
			{
				return 0;
			}
			if (!func_389(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
			{
				return 0;
			}
			if (!func_387(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_388(iVar0)))
			{
				return 0;
			}
			if (!func_389(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
			{
				return 0;
			}
			if (!func_387(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_388(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar11 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar11 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
	{
		iVar12 = func_385(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar13 = func_383(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar14 = func_379(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar15 = func_378(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar16 = func_377(iParam1);
		if (bVar11)
		{
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar12, -1, iParam1, 0))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar12, -1, iParam1, 1))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar12, -1, iParam1, 2))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar12, -1, iParam1, 3))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar12, -1, iParam1, 4))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar12, -1, iParam1, 5))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar12, -1, iParam1, 6))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar12, -1, iParam1, 7))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar12, -1, iParam1, 8))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar12, -1, iParam1, 9))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar12, iVar16, iParam1, 10))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar12, -1, iParam1, 11))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar12, -1, iParam1, 12))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar12, -1, iParam1, 13))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar12, -1, iParam1, 15))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar12, -1, iParam1, 16))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_375(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_375(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(iParam1, 25) + 1, 41, iVar13, -1, iParam1, 25))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(iParam1, 26) + 1, 42, iVar13, -1, iParam1, 26))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(iParam1, 27) + 1, 43, iVar13, -1, iParam1, 27))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(iParam1, 28) + 1, 44, iVar13, -1, iParam1, 28))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(iParam1, 29) + 1, 45, iVar13, -1, iParam1, 29))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(iParam1, 30) + 1, 46, iVar13, -1, iParam1, 30))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(iParam1, 31) + 1, 47, iVar13, -1, iParam1, 31))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(iParam1, 32) + 1, 48, iVar13, -1, iParam1, 32))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(iParam1, 33) + 1, 49, iVar13, -1, iParam1, 33))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(iParam1, 34) + 1, 50, iVar13, -1, iParam1, 34))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(iParam1, 35) + 1, 51, iVar13, -1, iParam1, 35))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(iParam1, 36) + 1, 52, iVar13, -1, iParam1, 36))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(iParam1, 37) + 1, 53, iVar13, -1, iParam1, 37))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(iParam1, 38) + 1, 54, iVar13, -1, iParam1, 38))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(iParam1, 39) + 1, 55, iVar13, -1, iParam1, 39))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(iParam1, 40) + 1, 56, iVar13, -1, iParam1, 40))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(iParam1, 41) + 1, 57, iVar13, -1, iParam1, 41))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(iParam1, 42) + 1, 58, iVar13, -1, iParam1, 42))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(iParam1, 43) + 1, 59, iVar13, -1, iParam1, 43))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(iParam1, 44) + 1, 60, iVar13, -1, iParam1, 44))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(iParam1, 45) + 1, 61, iVar13, -1, iParam1, 45))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(iParam1, 46) + 1, 62, iVar13, -1, iParam1, 46))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(iParam1, 47) + 1, 63, iVar13, -1, iParam1, 47))
			{
				return 0;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(iParam1, 48) + 1, 64, iVar14, -1, iParam1, 48))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			uVar17 = func_374(VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam1, 14, VEHICLE::GET_VEHICLE_MOD(iParam1, 14)));
			if (!func_372(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_373(uVar17), 10, iVar12))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!func_371(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15))
			{
				return 0;
			}
			if (!func_371(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15))
			{
				return 0;
			}
		}
		if (!func_369(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar11)
		{
			iVar18 = 0;
			switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1))
			{
				case 0:
					iVar18 = 0;
					break;
				
				case 3:
					iVar18 = 1;
					break;
				
				case 2:
					iVar18 = 2;
					break;
				
				case 1:
					iVar18 = 3;
					break;
				
				case 4:
					iVar18 = 4;
					break;
				
				case 5:
					iVar18 = 5;
					break;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar18, 33, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			iVar19 = 0;
			switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1))
			{
				case 3:
					iVar19 = 0;
					break;
				
				case 0:
					iVar19 = 1;
					break;
				
				case 4:
					iVar19 = 2;
					break;
				
				case 2:
					iVar19 = 3;
					break;
				
				case 1:
					iVar19 = 4;
					break;
			}
			if (!func_376(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar19, 23, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23) == 0)
			{
				if (!func_376(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_376(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24) == 0)
			{
				if (!func_376(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_376(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		func_390(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &Var5, &iVar8, &iVar9, 1);
		iVar20 = func_368(iVar9);
		if (!func_376(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar20, 29, iVar10, -1, 0, 23))
		{
			return 0;
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar6, iVar7);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar8, iVar9);
		if (bParam3)
		{
			while (func_367(iVar21, &Var22, &uVar23, &iVar24, &iVar25))
			{
				if (iVar24 == iVar6 && iVar25 == iVar8)
				{
					Var5 = { Var22 };
				}
				iVar21++;
			}
		}
		if (!func_389(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
		{
			return 0;
		}
		if (!func_389(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &Var5, 3, 24, iVar10, iVar2, iVar8))
		{
			return 0;
		}
		if (!func_387(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_388(iVar0)))
		{
			return 0;
		}
		if (!func_389(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
		{
			return 0;
		}
		if (!func_387(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_388(iVar1)))
		{
			return 0;
		}
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar26, &iVar27, &iVar28);
		switch (func_364(iVar26, iVar27, iVar28))
		{
			case 1:
				iVar29 = 3;
				break;
			
			case 2:
				iVar29 = 4;
				break;
			
			case 3:
				iVar29 = 5;
				break;
			
			case 4:
				iVar29 = 6;
				break;
			
			case 5:
				iVar29 = 11;
				break;
			
			case 6:
				iVar29 = 7;
				break;
			
			case 7:
				iVar29 = 10;
				break;
			
			case 8:
				iVar29 = 8;
				break;
			
			case 9:
				iVar29 = 12;
				break;
			
			case 10:
				iVar29 = 13;
				break;
			
			case 11:
				iVar29 = -1;
				break;
			
			case 12:
				iVar29 = 9;
				break;
			
			case 0:
				if (func_363(ENTITY::GET_ENTITY_MODEL(iParam1)) || VEHICLE::IS_VEHICLE_MODEL(iParam1, joaat("oppressor2")))
				{
					iVar29 = 255;
					break;
				}
				break;
		}
		if (bVar11)
		{
			if (!func_362(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar29, 18, iVar12))
			{
				return 0;
			}
		}
		iVar30 = func_361(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 2), (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 0) || VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 1)), VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 3));
		if (bVar11)
		{
			if (!func_360(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar30, 21, iVar12, 1))
			{
				return 0;
			}
		}
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam1, &iVar26, &iVar27, &iVar28);
		iVar31 = func_313(iVar26, iVar27, iVar28);
		if (bVar11)
		{
			if (!func_360(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar31, 21, iVar12, 0))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_376(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar12, func_359(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (VEHICLE::_GET_VEHICLE_ROOF_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_376(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::_GET_VEHICLE_ROOF_LIVERY(iParam1), 39, iVar14, func_359(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1))
			{
				if (!func_358(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12))
				{
					return 0;
				}
			}
		}
		if (bVar11)
		{
			VEHICLE::_GET_VEHICLE_INTERIOR_COLOR(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (func_357(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = func_356(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (bVar32)
			{
				func_355(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar36, 38, 5, 3);
			}
			VEHICLE::_GET_VEHICLE_DASHBOARD_COLOR(iParam1, &iVar35);
			bVar32 = false;
			iVar33 = 0;
			while (func_311(iVar33, &iVar34) && !bVar32)
			{
				if (iVar34 == iVar35)
				{
					bVar32 = true;
					sVar36 = func_354(iVar33);
				}
				else
				{
					iVar33++;
				}
			}
			if (!bVar32)
			{
				if (iVar35 == 0)
				{
					sVar36 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar32 = true;
				}
				else if (iVar35 == 132)
				{
					sVar36 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar32 = true;
				}
			}
			if (bVar32)
			{
				func_355(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar36, 65, 6, 3);
			}
		}
		if (uParam2 && bVar11)
		{
			if (!func_353(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar11)
		{
			if (!func_352(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_352(int iParam0, char* sParam1)//Position - 0x18F14
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_INSURANCE_NONE", 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_353(int iParam0, char* sParam1, int iParam2)//Position - 0x18F71
{
	char cVar0[64];
	char cVar1[16];
	char cVar2[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam2), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || MISC::GET_HASH_KEY(&cVar1) == -515263000)
	{
		return 1;
	}
	StringConCat(&cVar2, "VEM_INSURANCE_", 64);
	StringConCat(&cVar2, &cVar1, 64);
	switch (iParam2)
	{
		case joaat("dubsta2"):
		case joaat("cavalcade2"):
		case joaat("mesa2"):
		case joaat("rapidgt2"):
		case joaat("emperor2"):
		case joaat("manana2"):
			StringConCat(&cVar2, "2", 64);
			break;
		
		case joaat("mesa3"):
		case joaat("emperor3"):
		case joaat("burrito3"):
		case joaat("mule3"):
			StringConCat(&cVar2, "3", 64);
			break;
		
		case joaat("tornado4"):
			StringConCat(&cVar2, "4", 64);
			break;
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar2)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar2), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_354(int iParam0)//Position - 0x19067
{
	switch (iParam0)
	{
		case 0:
			return "SILVER";
			break;
		
		case 1:
			return "BLUE_SILVER";
			break;
		
		case 2:
			return "ROLLED_STEEL";
			break;
		
		case 3:
			return "SHADOW_SILVER";
			break;
		
		case 4:
			return "WHITE";
			break;
		
		case 5:
			return "FROST_WHITE";
			break;
		
		case 6:
			return "CREAM";
			break;
		
		case 7:
			return "SIENNA_BROWN";
			break;
		
		case 8:
			return "SADDLE_BROWN";
			break;
		
		case 9:
			return "MOSS_BROWN";
			break;
		
		case 10:
			return "WOODBEECH_BROWN";
			break;
		
		case 11:
			return "STRAW_BROWN";
			break;
		
		case 12:
			return "SANDY_BROWN";
			break;
		
		case 13:
			return "BLEECHED_BROWN";
			break;
		
		case 14:
			return "GOLD";
			break;
		
		case 15:
			return "BRONZE";
			break;
		
		case 16:
			return "YELLOW";
			break;
		
		case 17:
			return "RACE_YELLOW";
			break;
		
		case 18:
			return "FLUR_YELLOW";
			break;
		
		case 19:
			return "ORANGE";
			break;
		
		case 20:
			return "BRIGHT_ORANGE";
			break;
		
		case 21:
			return "SUNRISE_ORANGE";
			break;
		
		case 22:
			return "RED";
			break;
		
		case 23:
			return "TORINO_RED";
			break;
		
		case 24:
			return "FORMULA_RED";
			break;
		
		case 25:
			return "LAVA_RED";
			break;
		
		case 26:
			return "BLAZE_RED";
			break;
		
		case 27:
			return "GRACE_RED";
			break;
		
		case 28:
			return "GARNET_RED";
			break;
		
		case 29:
			return "CANDY_RED";
			break;
		
		case 30:
			return "HOT PINK";
			break;
		
		case 31:
			return "PINK";
			break;
		
		case 32:
			return "SALMON_PINK";
			break;
		
		case 33:
			return "PURPLE";
			break;
		
		case 34:
			return "BRIGHT_PURPLE";
			break;
		
		case 35:
			return "SAXON_BLUE";
			break;
		
		case 36:
			return "BLUE";
			break;
		
		case 37:
			return "MARINER_BLUE";
			break;
		
		case 38:
			return "HARBOR_BLUE";
			break;
		
		case 39:
			return "DIAMOND_BLUE";
			break;
		
		case 40:
			return "SURF_BLUE";
			break;
		
		case 41:
			return "NAUTICAL_BLUE";
			break;
		
		case 42:
			return "RACING_BLUE";
			break;
		
		case 43:
			return "ULTRA_BLUE";
			break;
		
		case 44:
			return "LIGHT_BLUE";
			break;
		
		case 45:
			return "SEA_GREEN";
			break;
		
		case 46:
			return "BRIGHT_GREEN";
			break;
		
		case 47:
			return "PETROL_GREEN";
			break;
		
		case 48:
			return "LIME_GREEN";
			break;
	}
	return "";
}

int func_355(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x19389
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		StringCopy(&cVar1, "VEM_COLOUR_", 64);
		StringIntConCat(&cVar1, iParam4, 64);
		StringConCat(&cVar1, "_", 64);
		StringConCat(&cVar1, sParam2, 64);
		StringConCat(&cVar1, "_t", 64);
		StringIntConCat(&cVar1, iParam3, 64);
		StringConCat(&cVar1, "_v", 64);
		StringIntConCat(&cVar1, iParam5, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_356(int iParam0)//Position - 0x1942A
{
	switch (iParam0)
	{
		case 0:
			return "BLACK";
			break;
		
		case 1:
			return "GRAPHITE";
			break;
		
		case 2:
			return "ANTHR_BLACK";
			break;
		
		case 3:
			return "BLACK_STEEL";
			break;
		
		case 4:
			return "DARK_SILVER";
			break;
		
		case 5:
			return "BLUE_SILVER";
			break;
		
		case 6:
			return "ROLLED_STEEL";
			break;
		
		case 7:
			return "SHADOW_SILVER";
			break;
		
		case 8:
			return "STONE_SILVER";
			break;
		
		case 9:
			return "MIDNIGHT_SILVER";
			break;
		
		case 10:
			return "CAST_IRON_SIL";
			break;
		
		case 11:
			return "RED";
			break;
		
		case 12:
			return "TORINO_RED";
			break;
		
		case 13:
			return "LAVA_RED";
			break;
		
		case 14:
			return "BLAZE_RED";
			break;
		
		case 15:
			return "GRACE_RED";
			break;
		
		case 16:
			return "GARNET_RED";
			break;
		
		case 17:
			return "SUNSET_RED";
			break;
		
		case 18:
			return "CABERNET_RED";
			break;
		
		case 19:
			return "WINE_RED";
			break;
		
		case 20:
			return "CANDY_RED";
			break;
		
		case 21:
			return "PINK";
			break;
		
		case 22:
			return "SALMON_PINK";
			break;
		
		case 23:
			return "SUNRISE_ORANGE";
			break;
		
		case 24:
			return "ORANGE";
			break;
		
		case 25:
			return "BRIGHT_ORANGE";
			break;
		
		case 26:
			return "BRONZE";
			break;
		
		case 27:
			return "YELLOW";
			break;
		
		case 28:
			return "RACE_YELLOW";
			break;
		
		case 29:
			return "FLUR_YELLOW";
			break;
		
		case 30:
			return "DARK_GREEN";
			break;
		
		case 31:
			return "RACING_GREEN";
			break;
		
		case 32:
			return "SEA_GREEN";
			break;
		
		case 33:
			return "OLIVE_GREEN";
			break;
		
		case 34:
			return "BRIGHT_GREEN";
			break;
		
		case 35:
			return "PETROL_GREEN";
			break;
		
		case 36:
			return "LIME_GREEN";
			break;
		
		case 37:
			return "MIDNIGHT_BLUE";
			break;
		
		case 38:
			return "GALAXY_BLUE";
			break;
		
		case 39:
			return "DARK_BLUE";
			break;
		
		case 40:
			return "SAXON_BLUE";
			break;
		
		case 41:
			return "MARINER_BLUE";
			break;
		
		case 42:
			return "HARBOR_BLUE";
			break;
		
		case 43:
			return "DIAMOND_BLUE";
			break;
		
		case 44:
			return "SURF_BLUE";
			break;
		
		case 45:
			return "NAUTICAL_BLUE";
			break;
		
		case 46:
			return "RACING_BLUE";
			break;
		
		case 47:
			return "ULTRA_BLUE";
			break;
		
		case 48:
			return "LIGHT_BLUE";
			break;
		
		case 49:
			return "CHOCOLATE_BROWN";
			break;
		
		case 50:
			return "BISON_BROWN";
			break;
		
		case 51:
			return "CREEK_BROWN";
			break;
		
		case 52:
			return "UMBER_BROWN";
			break;
		
		case 53:
			return "MAPLE_BROWN";
			break;
		
		case 54:
			return "BEECHWOOD_BROWN";
			break;
		
		case 55:
			return "SIENNA_BROWN";
			break;
		
		case 56:
			return "SADDLE_BROWN";
			break;
		
		case 57:
			return "MOSS_BROWN";
			break;
		
		case 58:
			return "WOODBEECH_BROWN";
			break;
		
		case 59:
			return "STRAW_BROWN";
			break;
		
		case 60:
			return "SANDY_BROWN";
			break;
		
		case 61:
			return "BLEECHED_BROWN";
			break;
		
		case 62:
			return "SPIN_PURPLE";
			break;
		
		case 63:
			return "MIGHT_PURPLE";
			break;
		
		case 64:
			return "BRIGHT_PURPLE";
			break;
		
		case 65:
			return "CREAM";
			break;
		
		case 66:
			return "WHITE";
			break;
		
		case 67:
			return "FROST_WHITE";
			break;
	}
	return "";
}

bool func_357(int iParam0, var uParam1)//Position - 0x1987C
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		
		case 1:
			*uParam1 = 1;
			break;
		
		case 2:
			*uParam1 = 11;
			break;
		
		case 3:
			*uParam1 = 2;
			break;
		
		case 4:
			*uParam1 = 3;
			break;
		
		case 5:
			*uParam1 = 5;
			break;
		
		case 6:
			*uParam1 = 6;
			break;
		
		case 7:
			*uParam1 = 7;
			break;
		
		case 8:
			*uParam1 = 8;
			break;
		
		case 9:
			*uParam1 = 9;
			break;
		
		case 10:
			*uParam1 = 10;
			break;
		
		case 11:
			*uParam1 = 27;
			break;
		
		case 12:
			*uParam1 = 28;
			break;
		
		case 13:
			*uParam1 = 150;
			break;
		
		case 14:
			*uParam1 = 30;
			break;
		
		case 15:
			*uParam1 = 31;
			break;
		
		case 16:
			*uParam1 = 32;
			break;
		
		case 17:
			*uParam1 = 33;
			break;
		
		case 18:
			*uParam1 = 34;
			break;
		
		case 19:
			*uParam1 = 143;
			break;
		
		case 20:
			*uParam1 = 35;
			break;
		
		case 21:
			*uParam1 = 137;
			break;
		
		case 22:
			*uParam1 = 136;
			break;
		
		case 23:
			*uParam1 = 36;
			break;
		
		case 24:
			*uParam1 = 38;
			break;
		
		case 25:
			*uParam1 = 138;
			break;
		
		case 26:
			*uParam1 = 90;
			break;
		
		case 27:
			*uParam1 = 88;
			break;
		
		case 28:
			*uParam1 = 89;
			break;
		
		case 29:
			*uParam1 = 91;
			break;
		
		case 30:
			*uParam1 = 49;
			break;
		
		case 31:
			*uParam1 = 50;
			break;
		
		case 32:
			*uParam1 = 51;
			break;
		
		case 33:
			*uParam1 = 52;
			break;
		
		case 34:
			*uParam1 = 53;
			break;
		
		case 35:
			*uParam1 = 54;
			break;
		
		case 36:
			*uParam1 = 92;
			break;
		
		case 37:
			*uParam1 = 141;
			break;
		
		case 38:
			*uParam1 = 61;
			break;
		
		case 39:
			*uParam1 = 62;
			break;
		
		case 40:
			*uParam1 = 63;
			break;
		
		case 41:
			*uParam1 = 65;
			break;
		
		case 42:
			*uParam1 = 66;
			break;
		
		case 43:
			*uParam1 = 67;
			break;
		
		case 44:
			*uParam1 = 68;
			break;
		
		case 45:
			*uParam1 = 69;
			break;
		
		case 46:
			*uParam1 = 73;
			break;
		
		case 47:
			*uParam1 = 70;
			break;
		
		case 48:
			*uParam1 = 74;
			break;
		
		case 49:
			*uParam1 = 96;
			break;
		
		case 50:
			*uParam1 = 101;
			break;
		
		case 51:
			*uParam1 = 95;
			break;
		
		case 52:
			*uParam1 = 94;
			break;
		
		case 53:
			*uParam1 = 97;
			break;
		
		case 54:
			*uParam1 = 103;
			break;
		
		case 55:
			*uParam1 = 104;
			break;
		
		case 56:
			*uParam1 = 98;
			break;
		
		case 57:
			*uParam1 = 100;
			break;
		
		case 58:
			*uParam1 = 102;
			break;
		
		case 59:
			*uParam1 = 99;
			break;
		
		case 60:
			*uParam1 = 105;
			break;
		
		case 61:
			*uParam1 = 106;
			break;
		
		case 62:
			*uParam1 = 72;
			break;
		
		case 63:
			*uParam1 = 146;
			break;
		
		case 64:
			*uParam1 = 145;
			break;
		
		case 65:
			*uParam1 = 107;
			break;
		
		case 66:
			*uParam1 = 111;
			break;
		
		case 67:
			*uParam1 = 112;
			break;
	}
	return *uParam1 != -1;
}

int func_358(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x19C45
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_359(int iParam0)//Position - 0x19CBC
{
	switch (iParam0)
	{
		case joaat("windsor"):
			return 1;
			break;
	}
	return -1;
}

int func_360(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)//Position - 0x19CD9
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == 0 && !bParam6)
	{
		StringConCat(&cVar1, "255", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_361(bool bParam0, bool bParam1, bool bParam2)//Position - 0x19D78
{
	if ((bParam2 && bParam1) && bParam0)
	{
		return 7;
	}
	else if ((bParam2 && bParam1) && !bParam0)
	{
		return 6;
	}
	else if ((!bParam2 && bParam1) && bParam0)
	{
		return 5;
	}
	else if ((bParam2 && !bParam1) && bParam0)
	{
		return 4;
	}
	else if ((!bParam2 && bParam1) && !bParam0)
	{
		return 3;
	}
	else if ((bParam2 && !bParam1) && !bParam0)
	{
		return 2;
	}
	else if ((!bParam2 && !bParam1) && bParam0)
	{
		return 1;
	}
	return 0;
}

int func_362(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x19E3D
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar1, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_363(int iParam0)//Position - 0x19ED3
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("strikeforce"):
		case joaat("seasparrow"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("CONADA"):
			return 1;
		
		default:
	}
	return 0;
}

int func_364(int iParam0, int iParam1, int iParam2)//Position - 0x1A019
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1576215 && iParam1 == Global_1576216) && iParam2 == Global_1576217)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_366())
	{
		HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_365())
	{
		HUD::GET_HUD_COLOUR(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		HUD::GET_HUD_COLOUR(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_365()//Position - 0x1A247
{
	return DLC::IS_DLC_PRESENT(1785846048);
}

bool func_366()//Position - 0x1A258
{
	return DLC::IS_DLC_PRESENT(42019760);
}

bool func_367(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4)//Position - 0x1A269
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "BR BLACK_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
		
		case 1:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
		
		case 2:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
		
		case 3:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
		
		case 4:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
		
		case 5:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
		
		case 6:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
		
		case 7:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
		
		case 8:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
		
		case 9:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
		
		case 10:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
		
		case 11:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
		
		case 12:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
		
		case 13:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
		
		case 14:
			StringCopy(sParam1, "CHROME", 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
		
		case 15:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 16:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
		
		case 17:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
		
		case 18:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
		
		case 19:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
		
		case 20:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
		
		case 21:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
		
		case 22:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
		
		case 23:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
		
		case 24:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
		
		case 25:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
		
		case 26:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
		
		case 27:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
		
		case 28:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
		
		case 29:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
		
		case 30:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
		
		case 31:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
		
		case 32:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
		
		case 33:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
		
		case 34:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
		
		case 35:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
		
		case 36:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
		
		case 37:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
		
		case 38:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
		
		case 39:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
		
		case 40:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
		
		case 41:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
		
		case 42:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 43:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
		
		case 44:
			StringCopy(sParam1, "RACE_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
		
		case 45:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
		
		case 46:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
		
		case 47:
			StringCopy(sParam1, "RACING_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
		
		case 48:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
		
		case 49:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
		
		case 50:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
		
		case 51:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
		
		case 52:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
		
		case 53:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
		
		case 54:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
		
		case 55:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
		
		case 56:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
		
		case 57:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
		
		case 58:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
		
		case 59:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
		
		case 60:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
		
		case 61:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
		
		case 62:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
		
		case 63:
			StringCopy(sParam1, "ULTRA_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
		
		case 64:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
		
		case 65:
			StringCopy(sParam1, "CHOCOLATE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
		
		case 66:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
		
		case 67:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
		
		case 68:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
		
		case 69:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
		
		case 70:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
		
		case 71:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
		
		case 72:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
		
		case 73:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
		
		case 74:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
		
		case 75:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
		
		case 76:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
		
		case 77:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
		
		case 78:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
		
		case 79:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
		
		case 80:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
		
		case 81:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
		
		case 82:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
		
		case 83:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 84:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
		
		case 85:
			StringCopy(sParam1, "BLACK_GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
		
		case 86:
			StringCopy(sParam1, "GRAPHITE", 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
		
		case 87:
			StringCopy(sParam1, "ANTHR_BLACK", 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
		
		case 88:
			StringCopy(sParam1, "BLACK_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
		
		case 89:
			StringCopy(sParam1, "DARK_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
		
		case 90:
			StringCopy(sParam1, "SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
		
		case 91:
			StringCopy(sParam1, "BLUE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
		
		case 92:
			StringCopy(sParam1, "ROLLED_STEEL", 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
		
		case 93:
			StringCopy(sParam1, "SHADOW_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
		
		case 94:
			StringCopy(sParam1, "STONE_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
		
		case 95:
			StringCopy(sParam1, "MIDNIGHT_SILVER", 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
		
		case 96:
			StringCopy(sParam1, "CAST_IRON_SIL", 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
		
		case 97:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
		
		case 98:
			StringCopy(sParam1, "TORINO_RED", 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
		
		case 99:
			StringCopy(sParam1, "FORMULA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
		
		case 100:
			StringCopy(sParam1, "LAVA_RED", 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
		
		case 101:
			StringCopy(sParam1, "BLAZE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
		
		case 102:
			StringCopy(sParam1, "GRACE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
		
		case 103:
			StringCopy(sParam1, "GARNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
		
		case 104:
			StringCopy(sParam1, "SUNSET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
		
		case 105:
			StringCopy(sParam1, "CABERNET_RED", 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
		
		case 106:
			StringCopy(sParam1, "WINE_RED", 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
		
		case 107:
			StringCopy(sParam1, "CANDY_RED", 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
		
		case 108:
			StringCopy(sParam1, "HOT PINK", 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
		
		case 109:
			StringCopy(sParam1, "PINK", 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
		
		case 110:
			StringCopy(sParam1, "SALMON_PINK", 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
		
		case 111:
			StringCopy(sParam1, "SUNRISE_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
		
		case 112:
			StringCopy(sParam1, "BRIGHT_ORANGE", 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
		
		case 113:
			StringCopy(sParam1, "GOLD", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
		
		case 114:
			StringCopy(sParam1, "BRONZE", 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
		
		case 115:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
		
		case 116:
			StringCopy(sParam1, "FLUR_YELLOW", 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
		
		case 117:
			StringCopy(sParam1, "DARK_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
		
		case 118:
			StringCopy(sParam1, "SEA_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
		
		case 119:
			StringCopy(sParam1, "OLIVE_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
		
		case 120:
			StringCopy(sParam1, "BRIGHT_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
		
		case 121:
			StringCopy(sParam1, "PETROL_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
		
		case 122:
			StringCopy(sParam1, "LIME_GREEN", 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
		
		case 123:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
		
		case 124:
			StringCopy(sParam1, "GALAXY_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
		
		case 125:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
		
		case 126:
			StringCopy(sParam1, "SAXON_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
		
		case 127:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
		
		case 128:
			StringCopy(sParam1, "MARINER_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
		
		case 129:
			StringCopy(sParam1, "HARBOR_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
		
		case 130:
			StringCopy(sParam1, "DIAMOND_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
		
		case 131:
			StringCopy(sParam1, "SURF_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
		
		case 132:
			StringCopy(sParam1, "NAUTICAL_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
		
		case 133:
			StringCopy(sParam1, "RACING_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
		
		case 134:
			StringCopy(sParam1, "LIGHT_BLUE", 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
		
		case 135:
			StringCopy(sParam1, "BISON_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
		
		case 136:
			StringCopy(sParam1, "CREEK_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
		
		case 137:
			StringCopy(sParam1, "UMBER_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
		
		case 138:
			StringCopy(sParam1, "MAPLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
		
		case 139:
			StringCopy(sParam1, "BEECHWOOD_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
		
		case 140:
			StringCopy(sParam1, "SIENNA_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
		
		case 141:
			StringCopy(sParam1, "SADDLE_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
		
		case 142:
			StringCopy(sParam1, "MOSS_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
		
		case 143:
			StringCopy(sParam1, "WOODBEECH_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
		
		case 144:
			StringCopy(sParam1, "STRAW_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
		
		case 145:
			StringCopy(sParam1, "SANDY_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
		
		case 146:
			StringCopy(sParam1, "BLEECHED_BROWN", 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
		
		case 147:
			StringCopy(sParam1, "PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
		
		case 148:
			StringCopy(sParam1, "SPIN_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
		
		case 149:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
		
		case 150:
			StringCopy(sParam1, "BRIGHT_PURPLE", 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
		
		case 151:
			StringCopy(sParam1, "CREAM", 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
		
		case 152:
			StringCopy(sParam1, "FROST_WHITE", 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
		
		case 153:
			StringCopy(sParam1, "BLACK", 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
		
		case 154:
			StringCopy(sParam1, "GREY", 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
		
		case 155:
			StringCopy(sParam1, "LIGHT_GREY", 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
		
		case 156:
			StringCopy(sParam1, "WHITE", 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
		
		case 157:
			StringCopy(sParam1, "BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
		
		case 158:
			StringCopy(sParam1, "DARK_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
		
		case 159:
			StringCopy(sParam1, "MIDNIGHT_BLUE", 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
		
		case 160:
			StringCopy(sParam1, "MIGHT_PURPLE", 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
		
		case 161:
			StringCopy(sParam1, "Purple", 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
		
		case 162:
			StringCopy(sParam1, "RED", 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
		
		case 163:
			StringCopy(sParam1, "DARK_RED", 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
		
		case 164:
			StringCopy(sParam1, "ORANGE", 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
		
		case 165:
			StringCopy(sParam1, "YELLOW", 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
		
		case 166:
			StringCopy(sParam1, "GREEN", 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
		
		case 167:
			StringCopy(sParam1, "MATTE_FOR", 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
		
		case 168:
			StringCopy(sParam1, "MATTE_FOIL", 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
		
		case 169:
			StringCopy(sParam1, "MATTE_OD", 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
		
		case 170:
			StringCopy(sParam1, "MATTE_DIRT", 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
		
		case 171:
			StringCopy(sParam1, "MATTE_DESERT", 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
		
		case 172:
			StringCopy(sParam1, "BR_STEEL", 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
		
		case 173:
			StringCopy(sParam1, "BR_ALUMINIUM", 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
		
		case 174:
			StringCopy(sParam1, "GOLD_P", 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
		
		case 175:
			StringCopy(sParam1, "GOLD_S", 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}
	return *uParam2 != -1;
}

int func_368(int iParam0)//Position - 0x1B75B
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 156:
			iVar0 = 0;
			break;
		
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 11:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 4;
			break;
		
		case 8:
			iVar0 = 5;
			break;
		
		case 122:
			iVar0 = 6;
			break;
		
		case 27:
			iVar0 = 7;
			break;
		
		case 30:
			iVar0 = 8;
			break;
		
		case 45:
			iVar0 = 9;
			break;
		
		case 35:
			iVar0 = 10;
			break;
		
		case 33:
			iVar0 = 11;
			break;
		
		case 136:
			iVar0 = 12;
			break;
		
		case 135:
			iVar0 = 13;
			break;
		
		case 36:
			iVar0 = 14;
			break;
		
		case 41:
			iVar0 = 15;
			break;
		
		case 138:
			iVar0 = 16;
			break;
		
		case 37:
			iVar0 = 17;
			break;
		
		case 99:
			iVar0 = 18;
			break;
		
		case 90:
			iVar0 = 19;
			break;
		
		case 95:
			iVar0 = 20;
			break;
		
		case 115:
			iVar0 = 21;
			break;
		
		case 109:
			iVar0 = 22;
			break;
		
		case 153:
			iVar0 = 23;
			break;
		
		case 154:
			iVar0 = 24;
			break;
		
		case 88:
			iVar0 = 25;
			break;
		
		case 89:
			iVar0 = 26;
			break;
		
		case 91:
			iVar0 = 27;
			break;
		
		case 55:
			iVar0 = 28;
			break;
		
		case 125:
			iVar0 = 29;
			break;
		
		case 53:
			iVar0 = 30;
			break;
		
		case 56:
			iVar0 = 31;
			break;
		
		case 151:
			iVar0 = 32;
			break;
		
		case 82:
			iVar0 = 33;
			break;
		
		case 64:
			iVar0 = 34;
			break;
		
		case 87:
			iVar0 = 35;
			break;
		
		case 70:
			iVar0 = 36;
			break;
		
		case 140:
			iVar0 = 37;
			break;
		
		case 81:
			iVar0 = 38;
			break;
		
		case 145:
			iVar0 = 39;
			break;
		
		case 142:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_369(int iParam0, char* sParam1, int iParam2)//Position - 0x1B97C
{
	char cVar0[64];
	int iVar1;
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar1 = func_370(VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam2));
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iVar1))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, iVar1, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_370(int iParam0)//Position - 0x1B9D5
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case -1:
			StringConCat(&cVar0, "MWT_INVALID", 32);
			break;
		
		case 0:
			StringConCat(&cVar0, "MWT_SPORT", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MWT_MUSCLE", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MWT_LOWRIDER", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MWT_SUV", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MWT_OFFROAD", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MWT_TUNER", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MWT_BIKE", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MWT_HIEND", 32);
			break;
		
		case 8:
			StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
			break;
		
		case 9:
			StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
			break;
		
		case 10:
			StringConCat(&cVar0, "MWT_SUPERMOD3", 32);
			break;
		
		case 11:
			StringConCat(&cVar0, "MWT_SUPERMOD4", 32);
			break;
		
		case 12:
			StringConCat(&cVar0, "MWT_SUPERMOD5", 32);
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_371(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1BAF6
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	iVar2 = VEHICLE::GET_VEHICLE_MOD(iParam2, iParam3);
	if (iVar2 == -1 || (iParam3 == 24 && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2))))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2)))
		{
			StringConCat(&cVar1, "CMOD_WHE_B_0", 64);
		}
		else
		{
			StringConCat(&cVar1, "CMOD_WHE_0", 64);
		}
	}
	else
	{
		StringConCat(&cVar1, VEHICLE::GET_MOD_TEXT_LABEL(iParam2, iParam3, iVar2), 64);
	}
	StringConCat(&cVar1, "_t19_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_372(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x1BBBE
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_373(var uParam0)//Position - 0x1BC3D
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	iVar1 = uParam0;
	switch (iVar1)
	{
		case 0:
			sVar0 = "CMOD_HRN_0";
			break;
		
		case 1:
			sVar0 = "HORN_INDI_1";
			break;
		
		case 2:
			sVar0 = "HORN_INDI_2";
			break;
		
		case 3:
			sVar0 = "HORN_INDI_3";
			break;
		
		case 4:
			sVar0 = "HORN_INDI_4";
			break;
		
		case 5:
			sVar0 = "HORN_HIPS1";
			break;
		
		case 6:
			sVar0 = "HORN_HIPS2";
			break;
		
		case 7:
			sVar0 = "HORN_HIPS3";
			break;
		
		case 8:
			sVar0 = "HORN_HIPS4";
			break;
		
		case 9:
			sVar0 = "HORN_CNOTE_C0";
			break;
		
		case 10:
			sVar0 = "HORN_CNOTE_D0";
			break;
		
		case 11:
			sVar0 = "HORN_CNOTE_E0";
			break;
		
		case 12:
			sVar0 = "HORN_CNOTE_F0";
			break;
		
		case 13:
			sVar0 = "HORN_CNOTE_G0";
			break;
		
		case 14:
			sVar0 = "HORN_CNOTE_A0";
			break;
		
		case 15:
			sVar0 = "HORN_CNOTE_B0";
			break;
		
		case 16:
			sVar0 = "HORN_CNOTE_C1";
			break;
		
		case 17:
			sVar0 = "HORN_CLAS1";
			break;
		
		case 18:
			sVar0 = "HORN_CLAS2";
			break;
		
		case 19:
			sVar0 = "HORN_CLAS3";
			break;
		
		case 20:
			sVar0 = "HORN_CLAS4";
			break;
		
		case 21:
			sVar0 = "HORN_CLAS5";
			break;
		
		case 22:
			sVar0 = "HORN_CLAS6";
			break;
		
		case 23:
			sVar0 = "HORN_CLAS7";
			break;
		
		case 24:
			sVar0 = "HORN_LUXE1";
			break;
		
		case 25:
			sVar0 = "HORN_LUXE2";
			break;
		
		case 26:
			sVar0 = "HORN_LUXE3";
			break;
		
		case 30:
			sVar0 = "HORN_LOWRDER1";
			break;
		
		case 31:
			sVar0 = "HORN_LOWRDER2";
			break;
		
		case 34:
			sVar0 = "HORN_HWEEN1";
			break;
		
		case 35:
			sVar0 = "HORN_HWEEN2";
			break;
		
		case 38:
			sVar0 = "HORN_XM15_1";
			break;
		
		case 39:
			sVar0 = "HORN_XM15_2";
			break;
		
		case 40:
			sVar0 = "HORN_XM15_3";
			break;
		
		case 46:
			sVar0 = "CMOD_HRN_CLO";
			break;
		
		case 45:
			sVar0 = "CMOD_HRN_COP";
			break;
		
		case 44:
			sVar0 = "CMOD_HRN_TRK";
			break;
		
		case 47:
			sVar0 = "CMOD_HRN_MUS1";
			break;
		
		case 48:
			sVar0 = "CMOD_HRN_MUS2";
			break;
		
		case 49:
			sVar0 = "CMOD_HRN_MUS3";
			break;
		
		case 50:
			sVar0 = "CMOD_HRN_MUS4";
			break;
		
		case 51:
			sVar0 = "CMOD_HRN_MUS5";
			break;
		
		case 52:
			sVar0 = "CMOD_HRN_SAD";
			break;
		
		case 53:
			sVar0 = "CMOD_AIRHORN_01";
			break;
		
		case 54:
			sVar0 = "CMOD_AIRHORN_02";
			break;
		
		case 55:
			sVar0 = "CMOD_AIRHORN_03";
			break;
	}
	return sVar0;
}

int func_374(int iParam0)//Position - 0x1BF09
{
	switch (iParam0)
	{
		case joaat("indep_horn_1"):
			return 1;
			break;
		
		case joaat("indep_horn_2"):
			return 2;
			break;
		
		case joaat("indep_horn_3"):
			return 3;
			break;
		
		case joaat("indep_horn_4"):
			return 4;
			break;
		
		case joaat("hipster_horn_1"):
			return 5;
			break;
		
		case joaat("hipster_horn_2"):
			return 6;
			break;
		
		case joaat("hipster_horn_3"):
			return 7;
			break;
		
		case joaat("hipster_horn_4"):
			return 8;
			break;
		
		case joaat("dlc_busi2_c_major_notes_c0"):
			return 9;
			break;
		
		case joaat("dlc_busi2_c_major_notes_d0"):
			return 10;
			break;
		
		case joaat("dlc_busi2_c_major_notes_e0"):
			return 11;
			break;
		
		case joaat("dlc_busi2_c_major_notes_f0"):
			return 12;
			break;
		
		case joaat("dlc_busi2_c_major_notes_g0"):
			return 13;
			break;
		
		case joaat("dlc_busi2_c_major_notes_a0"):
			return 14;
			break;
		
		case joaat("dlc_busi2_c_major_notes_b0"):
			return 15;
			break;
		
		case joaat("dlc_busi2_c_major_notes_c1"):
			return 16;
			break;
		
		case joaat("musical_horn_business_1"):
			return 17;
			break;
		
		case joaat("musical_horn_business_2"):
			return 18;
			break;
		
		case joaat("musical_horn_business_3"):
			return 19;
			break;
		
		case joaat("musical_horn_business_4"):
			return 20;
			break;
		
		case joaat("musical_horn_business_5"):
			return 21;
			break;
		
		case joaat("musical_horn_business_6"):
			return 22;
			break;
		
		case joaat("musical_horn_business_7"):
			return 23;
			break;
		
		case joaat("luxe_horn_2"):
			return 24;
			break;
		
		case joaat("luxe_horn_1"):
			return 25;
			break;
		
		case joaat("luxe_horn_3"):
			return 26;
			break;
		
		case joaat("luxury_horn_2"):
			return 27;
			break;
		
		case joaat("luxory_horn_1"):
			return 28;
			break;
		
		case joaat("luxury_horn_3"):
			return 29;
			break;
		
		case joaat("LOWRIDER_HORN_1"):
			return 30;
			break;
		
		case joaat("LOWRIDER_HORN_2"):
			return 31;
			break;
		
		case joaat("LOWRIDER_HORN_1_PREVIEW"):
			return 32;
			break;
		
		case joaat("LOWRIDER_HORN_2_PREVIEW"):
			return 33;
			break;
		
		case joaat("ORGAN_HORN_LOOP_01"):
			return 34;
			break;
		
		case joaat("ORGAN_HORN_LOOP_02"):
			return 35;
			break;
		
		case joaat("ORGAN_HORN_LOOP_01_PREVIEW"):
			return 36;
			break;
		
		case joaat("ORGAN_HORN_LOOP_02_PREVIEW"):
			return 37;
			break;
		
		case joaat("XM15_HORN_01"):
			return 38;
			break;
		
		case joaat("XM15_HORN_02"):
			return 39;
			break;
		
		case joaat("XM15_HORN_03"):
			return 40;
			break;
		
		case joaat("XM15_HORN_01_PREVIEW"):
			return 41;
			break;
		
		case joaat("XM15_HORN_02_PREVIEW"):
			return 42;
			break;
		
		case joaat("XM15_HORN_03_PREVIEW"):
			return 43;
			break;
		
		case joaat("HORN_CLOWN"):
			return 46;
			break;
		
		case joaat("HORN_COP"):
			return 45;
			break;
		
		case joaat("HORN_TRUCK"):
			return 44;
			break;
		
		case joaat("HORN_MUSICAL_1"):
			return 47;
			break;
		
		case joaat("HORN_MUSICAL_2"):
			return 48;
			break;
		
		case joaat("HORN_MUSICAL_3"):
			return 49;
			break;
		
		case joaat("HORN_MUSICAL_4"):
			return 50;
			break;
		
		case joaat("HORN_MUSICAL_5"):
			return 51;
			break;
		
		case joaat("HORN_SAD_TROMBONE"):
			return 52;
			break;
		
		case joaat("dlc_aw_airhorn_01"):
			return 53;
			break;
		
		case joaat("dlc_aw_airhorn_02"):
			return 54;
			break;
		
		case joaat("dlc_aw_airhorn_03"):
			return 55;
			break;
		
		case joaat("dlc_aw_airhorn_01_preview"):
			return 56;
			break;
		
		case joaat("dlc_aw_airhorn_02_preview"):
			return 57;
			break;
		
		case joaat("dlc_aw_airhorn_03_preview"):
			return 58;
			break;
	}
	return 0;
}

int func_375(bool bParam0)//Position - 0x1C32E
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_376(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x1C340
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	if (iParam8 != 23)
	{
		if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam7, iParam8) == 0)
		{
			if ((iParam8 >= 0 && iParam8 < 64) && !BitTest(Global_4539663[(iParam8 / 32)], (iParam8 % 32)))
			{
				return 1;
			}
		}
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar1, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar1, "_n", 64);
		StringIntConCat(&cVar1, iParam6, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_377(int iParam0)//Position - 0x1C433
{
	int iVar0;
	
	iVar0 = -1;
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("revolter"):
		case joaat("savestra"):
		case joaat("comet4"):
		case joaat("viseris"):
			iVar0 = 1;
			break;
		
		case joaat("avenger"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_378(int iParam0)//Position - 0x1C475
{
	switch (iParam0)
	{
		case joaat("faction3"):
			return 12;
			break;
		
		case joaat("diablous"):
			return 4;
			break;
		
		case joaat("fcr"):
			return 4;
			break;
	}
	return func_395(iParam0);
}

int func_379(int iParam0)//Position - 0x1C4B2
{
	switch (iParam0)
	{
		case joaat("btype2"):
			return 9;
			break;
		
		case joaat("lurcher"):
			return 8;
			break;
		
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
		
		case joaat("btype3"):
			return 5;
			break;
		
		case joaat("omnis"):
			return 13;
			break;
		
		case joaat("bf400"):
			return 14;
			break;
		
		case joaat("tropos"):
			return 15;
			break;
		
		case joaat("brioso"):
			return 16;
			break;
		
		case joaat("trophytruck"):
			return 17;
			break;
		
		case joaat("trophytruck2"):
			return 18;
			break;
		
		case joaat("cliffhanger"):
			return 19;
			break;
		
		case joaat("tampa2"):
			return 20;
			break;
		
		case joaat("gargoyle"):
			return 21;
			break;
		
		case joaat("le7b"):
			return 22;
			break;
		
		case joaat("lynx"):
			return 24;
			break;
		
		case joaat("sheava"):
			return 25;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
			break;
	}
	if (func_382(iParam0))
	{
		return 33;
	}
	else if (func_381(iParam0))
	{
		return 34;
	}
	if (func_380(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_380(int iParam0)//Position - 0x1C684
{
	switch (iParam0)
	{
		case joaat("scarab"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("monster3"):
		case joaat("dominator4"):
		case joaat("impaler2"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("deathbike"):
		case joaat("zr380"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
			return 1;
		
		default:
	}
	return 0;
}

int func_381(int iParam0)//Position - 0x1C770
{
	switch (iParam0)
	{
		case joaat("hunter"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("khanjali"):
		case joaat("strikeforce"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
			return 1;
			break;
	}
	return 0;
}

int func_382(int iParam0)//Position - 0x1C7B7
{
	switch (iParam0)
	{
		case joaat("havok"):
		case joaat("microlight"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("pyro"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("starling"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("cuban800"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("volatol"):
		case joaat("seasparrow"):
		case joaat("seasparrow2"):
			return 1;
			break;
	}
	return 0;
}

int func_383(int iParam0)//Position - 0x1C846
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 3;
			break;
		
		case joaat("sabregt2"):
			return 3;
			break;
		
		case joaat("slamvan3"):
			return 3;
			break;
		
		case joaat("tornado5"):
			return 3;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
			return 27;
			break;
	}
	if (func_380(iParam0))
	{
		return 38;
	}
	if (func_384(iParam0))
	{
		return 38;
	}
	return 3;
}

int func_384(int iParam0)//Position - 0x1C9BB
{
	switch (iParam0)
	{
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("buffalo4"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("GREENWOOD"):
		case joaat("OMNISEGT"):
			return 1;
			break;
	}
	return 0;
}

int func_385(int iParam0)//Position - 0x1CA02
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 0;
			break;
		
		case joaat("sabregt2"):
			return 0;
			break;
		
		case joaat("slamvan3"):
			return 0;
			break;
		
		case joaat("tornado5"):
			return 0;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
		
		case joaat("virgo3"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("fcr"):
			return 0;
			break;
		
		case joaat("diablous"):
			return 0;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb"):
			return 3;
			break;
		
		case joaat("specter"):
			return 3;
			break;
		
		case joaat("nero"):
			return 3;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("youga3"):
			return 27;
			break;
		
		case joaat("gauntlet5"):
			return 27;
			break;
		
		case joaat("manana2"):
			return 27;
			break;
		
		case joaat("peyote3"):
			return 27;
			break;
		
		case joaat("yosemite3"):
			return 27;
			break;
		
		case joaat("glendale2"):
			return 27;
			break;
	}
	switch (iParam0)
	{
		case joaat("apc"):
			return 29;
			break;
		
		case joaat("halftrack"):
			return 29;
			break;
		
		case joaat("trailersmall2"):
			return 29;
			break;
		
		case joaat("deluxo"):
			return 29;
			break;
		
		case joaat("stromberg"):
			return 29;
			break;
		
		case joaat("caracara"):
			return 29;
			break;
		
		case joaat("dune3"):
			return 30;
			break;
		
		case joaat("insurgent3"):
			return 30;
			break;
		
		case joaat("tampa3"):
			return 30;
			break;
		
		case joaat("technical3"):
			return 30;
			break;
		
		case joaat("oppressor"):
			return 31;
			break;
		
		case joaat("oppressor2"):
			return 31;
			break;
		
		case joaat("phantom3"):
			return 32;
			break;
		
		case joaat("hauler2"):
			return 32;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("barrage"):
			return 35;
			break;
		
		case joaat("mule4"):
			return 37;
			break;
		
		case joaat("speedo4"):
			return 36;
			break;
		
		case joaat("pounder2"):
			return 36;
			break;
		
		case joaat("rcbandito"):
			return 39;
			break;
		
		case joaat("minitank"):
			return 36;
			break;
		
		case joaat("jb7002"):
			return 36;
			break;
	}
	if (func_382(iParam0))
	{
		return 33;
	}
	else if (func_381(iParam0))
	{
		return 34;
	}
	else if (func_380(iParam0))
	{
		return 38;
	}
	switch (iParam0)
	{
		case joaat("vigilante"):
			return 31;
			break;
	}
	if (func_384(iParam0))
	{
		return 38;
	}
	if (func_386(iParam0))
	{
		return 3;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("adder"):
			return 3;
			break;
		
		case joaat("airbus"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 4;
			break;
		
		case joaat("alpha"):
			return 3;
			break;
		
		case joaat("annihilator"):
			return 0;
			break;
		
		case joaat("asea"):
			return 0;
			break;
		
		case joaat("asterope"):
			return 0;
			break;
		
		case joaat("baller2"):
			return 2;
			break;
		
		case joaat("banshee"):
			return 3;
			break;
		
		case joaat("barracks"):
			return 0;
			break;
		
		case joaat("bati"):
			return 4;
			break;
		
		case joaat("bati2"):
			return 4;
			break;
		
		case joaat("besra"):
			return 0;
			break;
		
		case joaat("bfinjection"):
			return 0;
			break;
		
		case joaat("bifta"):
			return 0;
			break;
		
		case joaat("bison"):
			return 2;
			break;
		
		case joaat("blade"):
			return 3;
			break;
		
		case joaat("blazer"):
			return 0;
			break;
		
		case joaat("blazer3"):
			return 0;
			break;
		
		case joaat("bmx"):
			return 0;
			break;
		
		case joaat("bobcatxl"):
			return 2;
			break;
		
		case joaat("bodhi2"):
			return 0;
			break;
		
		case joaat("btype"):
			return 0;
			break;
		
		case joaat("buffalo"):
			return 0;
			break;
		
		case joaat("buffalo2"):
			return 1;
			break;
		
		case joaat("bullet"):
			return 3;
			break;
		
		case joaat("bus"):
			return 0;
			break;
		
		case joaat("buzzard"):
			return 0;
			break;
		
		case joaat("carbonizzare"):
			return 3;
			break;
		
		case joaat("carbonrs"):
			return 3;
			break;
		
		case joaat("cavalcade"):
			return 2;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("cheetah"):
			return 3;
			break;
		
		case joaat("coach"):
			return 0;
			break;
		
		case joaat("cogcabrio"):
			return 3;
			break;
		
		case joaat("comet2"):
			return 3;
			break;
		
		case joaat("coquette"):
			return 3;
			break;
		
		case joaat("coquette2"):
			return 1;
			break;
		
		case joaat("cruiser"):
			return 0;
			break;
		
		case joaat("crusader"):
			return 0;
			break;
		
		case joaat("cuban800"):
			return 0;
			break;
		
		case joaat("dilettante"):
			return 0;
			break;
		
		case joaat("dilettante2"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("double"):
			return 4;
			break;
		
		case joaat("dubsta3"):
			return 3;
			break;
		
		case joaat("dump"):
			return 0;
			break;
		
		case joaat("dune"):
			return 0;
			break;
		
		case joaat("duster"):
			return 0;
			break;
		
		case joaat("elegy2"):
			return 3;
			break;
		
		case joaat("entityxf"):
			return 3;
			break;
		
		case joaat("exemplar"):
			return 3;
			break;
		
		case joaat("f620"):
			return 1;
			break;
		
		case joaat("faggio2"):
			return 4;
			break;
		
		case joaat("felon"):
			return 0;
			break;
		
		case joaat("felon2"):
			return 0;
			break;
		
		case joaat("feltzer2"):
			return 3;
			break;
		
		case joaat("frogger"):
			return 0;
			break;
		
		case joaat("frogger2"):
			return 0;
			break;
		
		case joaat("fugitive"):
			return 0;
			break;
		
		case joaat("fusilade"):
			return 1;
			break;
		
		case joaat("gauntlet"):
			return 0;
			break;
		
		case joaat("gauntlet2"):
			return 0;
			break;
		
		case joaat("glendale"):
			return 3;
			break;
		
		case joaat("granger"):
			return 2;
			break;
		
		case joaat("gresley"):
			return 2;
			break;
		
		case joaat("hexer"):
			return 4;
			break;
		
		case joaat("hotknife"):
			return 3;
			break;
		
		case joaat("huntley"):
			return 1;
			break;
		
		case joaat("hydra"):
			return 0;
			break;
		
		case joaat("infernus"):
			return 3;
			break;
		
		case joaat("ingot"):
			return 0;
			break;
		
		case joaat("intruder"):
			return 0;
			break;
		
		case joaat("issi2"):
			return 0;
			break;
		
		case joaat("jackal"):
			return 1;
			break;
		
		case joaat("jb700"):
			return 3;
			break;
		
		case joaat("jester"):
			return 3;
			break;
		
		case joaat("jester2"):
			return 3;
			break;
		
		case joaat("jetmax"):
			return 0;
			break;
		
		case joaat("journey"):
			return 0;
			break;
		
		case joaat("kalahari"):
			return 0;
			break;
		
		case joaat("khamelion"):
			return 3;
			break;
		
		case joaat("landstalker"):
			return 2;
			break;
		
		case joaat("luxor"):
			return 0;
			break;
		
		case joaat("mammatus"):
			return 0;
			break;
		
		case joaat("marquis"):
			return 0;
			break;
		
		case joaat("massacro"):
			return 3;
			break;
		
		case joaat("massacro2"):
			return 3;
			break;
		
		case joaat("maverick"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
		
		case joaat("mesa2"):
			return 2;
			break;
		
		case joaat("mesa3"):
			return 2;
			break;
		
		case joaat("miljet"):
			return 0;
			break;
		
		case joaat("minivan"):
			return 0;
			break;
		
		case joaat("monroe"):
			return 3;
			break;
		
		case joaat("monster"):
			return 0;
			break;
		
		case joaat("mule"):
			return 0;
			break;
		
		case joaat("mule2"):
			return 0;
			break;
		
		case joaat("mule3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("nemesis"):
			return 4;
			break;
		
		case joaat("ninef"):
			return 3;
			break;
		
		case joaat("ninef2"):
			return 3;
			break;
		
		case joaat("oracle"):
			return 1;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("panto"):
			return 3;
			break;
		
		case joaat("paradise"):
			return 0;
			break;
		
		case joaat("pcj"):
			return 4;
			break;
		
		case joaat("penumbra"):
			return 1;
			break;
		
		case joaat("picador"):
			return 0;
			break;
		
		case joaat("pigalle"):
			return 3;
			break;
		
		case joaat("premier"):
			return 0;
			break;
		
		case joaat("primo"):
			return 0;
			break;
		
		case joaat("radi"):
			return 0;
			break;
		
		case joaat("rancherxl"):
			return 2;
			break;
		
		case joaat("rancherxl2"):
			return 2;
			break;
		
		case joaat("rapidgt"):
			return 3;
			break;
		
		case joaat("ratloader"):
			return 2;
			break;
		
		case joaat("ratloader2"):
			return 2;
			break;
		
		case joaat("rebel"):
			return 2;
			break;
		
		case joaat("rebel2"):
			return 2;
			break;
		
		case joaat("regina"):
			return 0;
			break;
		
		case joaat("rentalbus"):
			return 0;
			break;
		
		case joaat("rhapsody"):
			return 3;
			break;
		
		case joaat("rhino"):
			return 0;
			break;
		
		case joaat("rocoto"):
			return 2;
			break;
		
		case joaat("ruffian"):
			return 4;
			break;
		
		case joaat("rumpo"):
			return 0;
			break;
		
		case joaat("sadler"):
			return 2;
			break;
		
		case joaat("sanchez"):
			return 4;
			break;
		
		case joaat("sanchez2"):
			return 4;
			break;
		
		case joaat("sandking"):
			return 2;
			break;
		
		case joaat("sandking2"):
			return 2;
			break;
		
		case joaat("schafter2"):
			return 1;
			break;
		
		case joaat("schwarzer"):
			return 1;
			break;
		
		case joaat("scorcher"):
			return 0;
			break;
		
		case joaat("seashark"):
			return 0;
			break;
		
		case joaat("seminole"):
			return 2;
			break;
		
		case joaat("sentinel"):
			return 1;
			break;
		
		case joaat("sentinel2"):
			return 1;
			break;
		
		case joaat("shamal"):
			return 0;
			break;
		
		case joaat("sovereign"):
			return 4;
			break;
		
		case joaat("speeder"):
			return 0;
			break;
		
		case joaat("squalo"):
			return 0;
			break;
		
		case joaat("stanier"):
			return 0;
			break;
		
		case joaat("stinger"):
			return 3;
			break;
		
		case joaat("stingergt"):
			return 3;
			break;
		
		case joaat("stratum"):
			return 0;
			break;
		
		case joaat("stretch"):
			return 0;
			break;
		
		case joaat("stunt"):
			return 0;
			break;
		
		case joaat("suntrap"):
			return 0;
			break;
		
		case joaat("superd"):
			return 3;
			break;
		
		case joaat("surano"):
			return 3;
			break;
		
		case joaat("surfer"):
			return 0;
			break;
		
		case joaat("surge"):
			return 0;
			break;
		
		case joaat("tailgater"):
			return 0;
			break;
		
		case joaat("thrust"):
			return 4;
			break;
		
		case joaat("titan"):
			return 0;
			break;
		
		case joaat("tribike"):
			return 4;
			break;
		
		case joaat("tribike2"):
			return 4;
			break;
		
		case joaat("tribike3"):
			return 4;
			break;
		
		case joaat("tropic"):
			return 0;
			break;
		
		case joaat("turismor"):
			return 3;
			break;
		
		case joaat("vacca"):
			return 3;
			break;
		
		case joaat("vader"):
			return 4;
			break;
		
		case joaat("valkyrie"):
			return 0;
			break;
		
		case joaat("velum"):
			return 0;
			break;
		
		case joaat("vestra"):
			return 0;
			break;
		
		case joaat("vigero"):
			return 1;
			break;
		
		case joaat("voltic"):
			return 3;
			break;
		
		case joaat("warrener"):
			return 3;
			break;
		
		case joaat("washington"):
			return 0;
			break;
		
		case joaat("youga"):
			return 2;
			break;
		
		case joaat("zentorno"):
			return 3;
			break;
		
		case joaat("zion"):
			return 1;
			break;
		
		case joaat("zion2"):
			return 1;
			break;
		
		case joaat("ztype"):
			return 3;
			break;
		
		case joaat("swift"):
			return 0;
			break;
		
		case joaat("innovation"):
			return 4;
			break;
		
		case joaat("hakuchou"):
			return 4;
			break;
		
		case joaat("furoregt"):
			return 0;
			break;
		
		case joaat("kuruma"):
			return 3;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("blista3"):
			return 0;
			break;
		
		case joaat("buffalo3"):
			return 1;
			break;
		
		case joaat("dodo"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("dukes"):
			return 1;
			break;
		
		case joaat("dukes2"):
			return 0;
			break;
		
		case joaat("marshall"):
			return 0;
			break;
		
		case joaat("stalion"):
			return 0;
			break;
		
		case joaat("stalion2"):
			return 0;
			break;
		
		case joaat("submersible"):
			return 0;
			break;
		
		case joaat("submersible2"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 2;
			break;
		
		case joaat("bjxl"):
			return 2;
			break;
		
		case joaat("blista"):
			return 0;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("buccaneer"):
			return 0;
			break;
		
		case joaat("daemon"):
			return 4;
			break;
		
		case joaat("dloader"):
			return 0;
			break;
		
		case joaat("fq2"):
			return 0;
			break;
		
		case joaat("habanero"):
			return 0;
			break;
		
		case joaat("manana"):
			return 0;
			break;
		
		case joaat("patriot"):
			return 2;
			break;
		
		case joaat("peyote"):
			return 0;
			break;
		
		case joaat("phoenix"):
			return 0;
			break;
		
		case joaat("prairie"):
			return 0;
			break;
		
		case joaat("sabregt"):
			return 0;
			break;
		
		case joaat("serrano"):
			return 2;
			break;
		
		case joaat("speedo"):
			return 0;
			break;
		
		case joaat("speedo2"):
			return 0;
			break;
		
		case joaat("voodoo2"):
			return 0;
			break;
		
		case joaat("romero"):
			return 0;
			break;
		
		case joaat("surfer2"):
			return 0;
			break;
		
		case joaat("emperor2"):
			return 0;
			break;
		
		case joaat("dubsta2"):
			return 2;
			break;
		
		case joaat("blazer2"):
			return 0;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("dubsta"):
			return 2;
			break;
		
		case joaat("rapidgt2"):
			return 1;
			break;
		
		case joaat("boxville4"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
	}
	switch (iParam0)
	{
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 3;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
			return 3;
			break;
		
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
			break;
		
		case joaat("btype2"):
		case joaat("lurcher"):
			return 3;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("ardent"):
		case joaat("cheetah2"):
		case joaat("torero"):
		case joaat("vagner"):
		case joaat("xa21"):
			return 3;
			break;
		
		case joaat("contender"):
			return 2;
			break;
		
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("sentinel3"):
		case joaat("riata"):
			return 3;
			break;
		
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("swinger"):
		case joaat("patriot2"):
		case joaat("menacer"):
		case joaat("freecrawler"):
		case joaat("stafford"):
		case joaat("scramjet"):
		case joaat("terbyte"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("lguard"):
		case joaat("blazer2"):
		case joaat("firetruk"):
		case joaat("burrito2"):
		case joaat("boxville"):
		case joaat("stockade"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("furia"):
		case joaat("yosemite2"):
		case joaat("retinue2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("club"):
		case joaat("dukes3"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("baller7"):
		case joaat("astron"):
		case joaat("comet7"):
		case joaat("ignus"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("cinquemila"):
		case joaat("mule5"):
		case joaat("iwagen"):
			return 3;
			break;
	}
	return 0;
}

int func_386(int iParam0)//Position - 0x1DCE7
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return 1;
			break;
		
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 1;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 1;
			break;
		
		case joaat("faction3"):
		case joaat("virgo2"):
			return 1;
			break;
		
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return 1;
			break;
		
		case joaat("tampa"):
			return 1;
			break;
		
		case joaat("banshee2"):
			return 1;
			break;
		
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
			return 1;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
			return 1;
			break;
		
		case joaat("avarus"):
		case joaat("defiler"):
		case joaat("nightblade"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("chimera"):
		case joaat("esskey"):
		case joaat("ratbike"):
		case joaat("hakuchou2"):
		case joaat("daemon2"):
		case joaat("shotaro"):
		case joaat("raptor"):
		case joaat("blazer4"):
		case joaat("sanctus"):
		case joaat("vortex"):
		case joaat("manchez"):
		case joaat("tornado6"):
		case joaat("youga2"):
		case joaat("wolfsbane"):
		case joaat("faggio3"):
		case joaat("faggio"):
			return 1;
			break;
		
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("nero"):
		case joaat("penetrator"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("technical2"):
		case joaat("tempesta"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("elegy"):
		case joaat("italigtb2"):
		case joaat("nero2"):
		case joaat("ruiner3"):
		case joaat("specter"):
		case joaat("specter2"):
			return 1;
			break;
		
		case joaat("gp1"):
		case joaat("ruston"):
		case joaat("infernus2"):
		case joaat("turismo2"):
			return 1;
			break;
		
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return 1;
			break;
		
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("ellie"):
		case joaat("fagaloa"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("brutus"):
		case joaat("imperator2"):
		case joaat("imperator3"):
		case joaat("deathbike3"):
		case joaat("deathbike2"):
		case joaat("impaler3"):
		case joaat("brutus2"):
		case joaat("bruiser2"):
		case joaat("slamvan5"):
		case joaat("issi5"):
		case joaat("monster4"):
		case joaat("scarab2"):
		case joaat("cerberus2"):
		case joaat("dominator5"):
		case joaat("zr3802"):
		case joaat("impaler4"):
		case joaat("brutus3"):
		case joaat("bruiser3"):
		case joaat("slamvan6"):
		case joaat("issi6"):
		case joaat("monster5"):
		case joaat("scarab3"):
		case joaat("cerberus3"):
		case joaat("dominator6"):
		case joaat("zr3803"):
		case joaat("rcbandito"):
		case joaat("caracara2"):
		case joaat("drafter"):
		case joaat("dynasty"):
		case joaat("gauntlet3"):
		case joaat("gauntlet4"):
		case joaat("hellion"):
		case joaat("issi7"):
		case joaat("krieger"):
		case joaat("locust"):
		case joaat("nebula"):
		case joaat("neo"):
		case joaat("novak"):
		case joaat("s80"):
		case joaat("thrax"):
		case joaat("zion3"):
		case joaat("zorrusso"):
		case joaat("emerus"):
		case joaat("peyote2"):
		case joaat("rrocket"):
		case joaat("jugular"):
		case joaat("paragon"):
		case joaat("paragon2"):
		case joaat("slamvan2"):
		case joaat("asbo"):
		case joaat("kanjo"):
		case joaat("formula"):
		case joaat("imorgon"):
		case joaat("komoda"):
		case joaat("manana2"):
		case joaat("rebla"):
		case joaat("sugoi"):
		case joaat("youga3"):
		case joaat("zhaba"):
		case joaat("vstr"):
		case joaat("everon"):
		case joaat("sultan2"):
		case joaat("jb7002"):
		case joaat("outlaw"):
		case joaat("stryder"):
		case joaat("vagrant"):
		case joaat("formula2"):
		case joaat("minitank"):
		case joaat("gauntlet5"):
		case joaat("dukes3"):
		case joaat("club"):
		case joaat("peyote3"):
		case joaat("glendale2"):
		case joaat("penumbra2"):
		case joaat("landstalker2"):
		case joaat("seminole2"):
		case joaat("tigon"):
		case joaat("openwheel1"):
		case joaat("coquette4"):
		case joaat("openwheel2"):
		case joaat("manchez2"):
		case joaat("brioso2"):
		case joaat("winky"):
		case joaat("verus"):
		case joaat("alkonost"):
		case joaat("avisa"):
		case joaat("longfin"):
		case joaat("patrolboat"):
		case joaat("seasparrow2"):
		case joaat("seasparrow3"):
		case joaat("slamtruck"):
		case joaat("vetir"):
		case joaat("kosatka"):
		case joaat("italirsx"):
		case joaat("toreador"):
		case joaat("weevil"):
		case joaat("dinghy5"):
		case joaat("annihilator2"):
		case joaat("squaddie"):
		case joaat("veto"):
		case joaat("veto2"):
		case joaat("calico"):
		case joaat("comet6"):
		case joaat("cypher"):
		case joaat("dominator7"):
		case joaat("jester4"):
		case joaat("remus"):
		case joaat("vectre"):
		case joaat("zr350"):
		case joaat("warrener2"):
		case joaat("rt3000"):
		case joaat("futo2"):
		case joaat("tailgater2"):
		case joaat("sultan3"):
		case joaat("dominator8"):
		case joaat("euros"):
		case joaat("growler"):
		case joaat("previon"):
		case joaat("baller7"):
		case joaat("astron"):
		case joaat("buffalo4"):
		case joaat("comet7"):
		case joaat("deity"):
		case joaat("granger2"):
		case joaat("ignus"):
		case joaat("jubilee"):
		case joaat("patriot3"):
		case joaat("youga4"):
		case joaat("zeno"):
		case joaat("mule5"):
		case joaat("champion"):
		case joaat("iwagen"):
		case joaat("reever"):
		case joaat("shinobi"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("BRIOSO3"):
		case joaat("CORSITA"):
		case joaat("DRAUGUR"):
		case joaat("GREENWOOD"):
		case joaat("KANJOSJ"):
		case joaat("LM87"):
		case joaat("POSTLUDE"):
		case joaat("RHINEHART"):
		case joaat("SM722"):
		case joaat("TENF"):
		case joaat("TENF2"):
		case joaat("TORERO2"):
		case joaat("VIGERO2"):
		case joaat("WEEVIL2"):
		case joaat("RUINER4"):
		case joaat("SENTINEL4"):
		case joaat("CONADA"):
		case joaat("OMNISEGT"):
			return 1;
			break;
	}
	return 0;
}

int func_387(int iParam0, char* sParam1, int iParam2)//Position - 0x1E652
{
	char cVar0[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(iParam2))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_388(int iParam0)//Position - 0x1E69F
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MCT_METALLIC", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MCT_CLASSIC", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MCT_MATTE", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MCT_METALS", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MCT_CHROME", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MCT_INVALID", 32);
			iParam0 = 255;
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_389(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1E74D
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOPPING::NET_GAMESERVER_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar1, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar1, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar1, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar1, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar1, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar1, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar1, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar1, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar1, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar1, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 7)
	{
		StringConCat(&cVar1, "MCT_NONE_", 64);
	}
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (iParam6 == 7)
	{
		StringCopy(&cVar1, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar1, iParam7, 64);
	}
	if (!NETSHOPPING::_NET_GAMESERVER_CATALOG_ITEM_EXISTS_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_147(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

void func_390(int iParam0, int* iParam1, char* sParam2, int* iParam3, int* iParam4, char* sParam5, int* iParam6, int iParam7, char* sParam8, int* iParam9, int* iParam10, bool bParam11)//Position - 0x1E884
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	VEHICLE::GET_VEHICLE_COLOURS(iParam0, iParam3, iParam6);
	VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, iParam9, iParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	if (bParam11)
	{
		VEHICLE::GET_VEHICLE_MOD_COLOR_1(iParam0, iParam1, &uVar0, &iVar2);
		VEHICLE::GET_VEHICLE_MOD_COLOR_2(iParam0, iParam4, &uVar1);
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 7)
		{
			if (!func_391(iVar3))
			{
				iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, true);
				iVar4 = 0;
				while (iVar4 < iVar5)
				{
					VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, iVar3, iVar4, iVar2);
					VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar6, &uVar9);
					if (iVar6 == *iParam3)
					{
						*iParam1 = iVar3;
						StringCopy(sParam2, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, false), 16);
						iVar4 = iVar5 + 1;
					}
					iVar4++;
				}
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 7;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		*iParam1 = 7;
		IntToString(sParam2, *iParam3, 16);
	}
	if (bParam11)
	{
		iVar4 = 0;
		iVar5 = VEHICLE::GET_NUM_MOD_COLORS(0, true);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, 0, iVar4, iVar4);
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar8, &uVar9);
			if (iVar8 == *iParam9)
			{
				StringCopy(sParam8, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, false), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		IntToString(sParam8, *iParam9, 16);
		*iParam7 = 7;
	}
	else
	{
		*iParam7 = *iParam1;
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 7)
		{
			if (!func_391(iVar3))
			{
				iVar4 = 0;
				iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, true);
				iVar4 = 0;
				while (iVar4 < iVar5)
				{
					VEHICLE::SET_VEHICLE_MOD_COLOR_2(iParam0, iVar3, iVar4);
					VEHICLE::GET_VEHICLE_COLOURS(iParam0, &uVar9, &iVar7);
					if (iVar7 == *iParam6)
					{
						*iParam4 = iVar3;
						StringCopy(sParam5, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(iParam0), 16);
						iVar4 = iVar5 + 1;
					}
					iVar4++;
				}
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 7;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		*iParam4 = 7;
		IntToString(sParam5, *iParam6, 16);
	}
	VEHICLE::SET_VEHICLE_COLOURS(iParam0, *iParam3, *iParam6);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, *iParam9, *iParam10);
}

int func_391(int iParam0)//Position - 0x1EA84
{
	if (!func_393() && func_392(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_392(int iParam0)//Position - 0x1EAA4
{
	switch (iParam0)
	{
		case 6:
			return 1;
			break;
	}
	return 0;
}

int func_393()//Position - 0x1EAC1
{
	return 0;
}

int func_394(int iParam0)//Position - 0x1EACA
{
	if (iParam0 == joaat("bmx"))
	{
		return 1;
	}
	if (iParam0 == joaat("cruiser"))
	{
		return 1;
	}
	if (iParam0 == joaat("scorcher"))
	{
		return 1;
	}
	if ((iParam0 == joaat("tribike") || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3"))
	{
		return 1;
	}
	if (iParam0 == joaat("fixter"))
	{
		return 1;
	}
	return 0;
}

int func_395(int iParam0)//Position - 0x1EB36
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("sultanrs"):
		case joaat("banshee2"):
		case joaat("btype3"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("diablous2"):
		case joaat("fcr2"):
		case joaat("italigtb2"):
		case joaat("specter2"):
		case joaat("nero2"):
		case joaat("comet3"):
		case joaat("elegy"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("trailersmall2"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("oppressor"):
		case joaat("trailerlarge"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("microlight"):
		case joaat("rogue"):
		case joaat("tula"):
		case joaat("havok"):
		case joaat("mogul"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("cyclone"):
		case joaat("visione"):
		case joaat("vigilante"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("cuban800"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("chernobog"):
		case joaat("deluxo"):
		case joaat("khanjali"):
		case joaat("riot2"):
		case joaat("stromberg"):
		case joaat("thruster"):
		case joaat("caracara"):
		case joaat("seasparrow"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("speedo4"):
		case joaat("oppressor2"):
		case joaat("strikeforce"):
		case joaat("clique"):
		case joaat("deveste"):
		case joaat("deviant"):
		case joaat("impaler"):
		case joaat("scarab"):
		case joaat("schlagen"):
		case joaat("toros"):
		case joaat("vamos"):
		case joaat("tulip"):
		case joaat("monster3"):
		case joaat("impaler2"):
		case joaat("bruiser"):
		case joaat("cerberus"):
		case joaat("dominator4"):
		case joaat("imperator"):
		case joaat("issi4"):
		case joaat("italigto"):
		case joaat("deathbike"):
		case joaat("slamvan4"):
		case joaat("zr380"):
		case joaat("brutus"):
		case joaat("rcbandito"):
		case joaat("jb7002"):
		case joaat("minitank"):
		case joaat("formula"):
		case joaat("formula2"):
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("yosemite3"):
		case joaat("glendale2"):
		case joaat("seasparrow2"):
		case joaat("alkonost"):
		case joaat("annihilator2"):
		case joaat("sultan3"):
		case joaat("buffalo4"):
		case joaat("deity"):
		case joaat("jubilee"):
		case joaat("granger2"):
		case joaat("patriot3"):
		case joaat("champion"):
		case joaat("WEEVIL2"):
		case joaat("TENF2"):
		case joaat("BRIOSO3"):
		case joaat("SENTINEL4"):
			return 3;
			break;
	}
	if (func_380(iParam0))
	{
		return 3;
	}
	if (func_384(iParam0))
	{
		return 3;
	}
	return func_385(iParam0);
}

int func_396(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x1EE24
{
	int iVar0;
	struct<4> Var1;
	char* sVar2;
	
	iVar0 = func_385(iParam0);
	StringCopy(&Var1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam0), 16);
	if (bParam1)
	{
		func_397(&sVar2, Var1, iParam0, 4, 1, iVar0, iParam2, -1, 0, bParam3);
	}
	else
	{
		func_397(&sVar2, Var1, iParam0, 4, 0, iVar0, iParam2, -1, 0, bParam3);
	}
	return MISC::GET_HASH_KEY(&sVar2);
}

void func_397(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0x1EE78
{
	switch (MISC::GET_HASH_KEY(&cParam1))
	{
		case 64715401:
		case joaat("GSA_TYPE_R"):
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case joaat("GSA_TYPE_C"):
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case joaat("GSA_TYPE_RO"):
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case joaat("GSA_TYPE_CH"):
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case joaat("GSA_TYPE_G"):
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case joaat("GSA_TYPE_B"):
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case joaat("GSA_TYPE_FW"):
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 1:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 2:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 4:
			if (iParam4 == Global_75446)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam4 == Global_75447)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == Global_75448)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam4 == Global_75449)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam4 == Global_75450)
			{
				StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == func_398())
			{
				StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (iParam4 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 24 || iParam6 == 25)
				{
					if (iParam8 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 7)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = -1;
				}
				else if (iParam6 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 22)
			{
				StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 40)
			{
				switch (iParam4)
				{
					case joaat("fcr2"):
						StringCopy(&cParam1, "FCR2", 16);
						break;
					
					case joaat("diablous2"):
						StringCopy(&cParam1, "DIABLOUS2", 16);
						break;
					
					case joaat("comet3"):
						StringCopy(&cParam1, "COMET3", 16);
						break;
					
					default:
						StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
						if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
						{
							return;
						}
						break;
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
			}
			break;
	}
	if (bParam11)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_398()//Position - 0x1F464
{
	return joaat("kosatka");
}

int func_399(int iParam0)//Position - 0x1F471
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_1", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_2", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_3", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_4", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_5", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_6", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_7", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_8", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_9", 64);
			break;
	}
	if (iParam0 >= 10)
	{
		StringCopy(&cVar0, "MP_STAT_MPSV_MODEL_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_400()//Position - 0x1F55B
{
	if (((func_112() == -1 && Global_2787732 == -1) && Global_2787713 == -1) && Global_2787714 != 2)
	{
		return 1;
	}
	return 0;
}

int func_401(int iParam0)//Position - 0x1F592
{
	if (func_402(iParam0))
	{
		return BitTest(Global_1585857[iParam0 /*142*/].f_103, 6);
	}
	return 0;
}

int func_402(int iParam0)//Position - 0x1F5B6
{
	int iVar0;
	
	func_404(iParam0, &iVar0);
	if ((iParam0 >= 0 && iParam0 <= 363) && !func_403(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_403(int iParam0)//Position - 0x1F5E9
{
	switch (iParam0)
	{
		case 10:
		case 11:
		case 12:
		case 23:
		case 24:
		case 25:
		case 36:
		case 37:
		case 38:
		case 49:
		case 50:
		case 51:
		case 62:
		case 63:
		case 64:
		case 85:
		case 86:
		case 87:
		case 291:
		case 292:
		case 293:
		case 304:
		case 305:
		case 306:
		case 347:
		case 348:
		case 349:
		case 360:
		case 361:
		case 362:
			return 1;
			break;
	}
	return 0;
}

void func_404(int iParam0, var uParam1)//Position - 0x1F6B4
{
	int iVar0;
	
	*uParam1 = -1;
	if (iParam0 >= 0)
	{
		iVar0 = 0;
		while (iVar0 < 363)
		{
			if (iParam0 == (Global_1940666[iVar0] - 1))
			{
				*uParam1 = iVar0;
				return;
			}
			iVar0++;
		}
	}
}

bool func_405()//Position - 0x1F6F1
{
	return Global_2703735.f_61.f_49;
}

int func_406(int iParam0)//Position - 0x1F701
{
	switch (iParam0)
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_407()//Position - 0x1F748
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

bool func_408()//Position - 0x1F767
{
	return MISC::GET_GAME_TIMER() <= Global_23150.f_6269 + 100;
}

int func_409(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x1F77C
{
	bool bVar0;
	bool bVar1;
	
	if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !func_6(PLAYER::PLAYER_ID(), 1, 1)) || func_525()) || Global_1574964) || Global_2715699.f_3479.f_32)
	{
		*iParam1 = -1;
		func_524(uParam0, iParam5, 0);
		return 1;
	}
	bVar0 = false;
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_523();
	func_82();
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	PAD::SET_INPUT_EXCLUSIVE(2, 241);
	PAD::SET_INPUT_EXCLUSIVE(2, 242);
	PAD::SET_INPUT_EXCLUSIVE(2, 180);
	PAD::SET_INPUT_EXCLUSIVE(2, 181);
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, 24);
		PAD::SET_INPUT_EXCLUSIVE(0, 257);
		PAD::ENABLE_CONTROL_ACTION(2, 237, true);
		PAD::ENABLE_CONTROL_ACTION(2, 238, true);
		PAD::ENABLE_CONTROL_ACTION(2, 242, true);
		PAD::ENABLE_CONTROL_ACTION(2, 241, true);
		PAD::DISABLE_CONTROL_ACTION(2, 2, true);
		PAD::DISABLE_CONTROL_ACTION(2, 1, true);
		PAD::DISABLE_CONTROL_ACTION(0, 24, true);
		PAD::DISABLE_CONTROL_ACTION(0, 257, true);
		if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 202);
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
		}
		func_520(0, 0, 0, 1);
		HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_370), 1);
	if (func_518(0, iParam5, 0))
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!BitTest(uParam0->f_370, 0))
			{
				func_462(uParam0, iParam3, bParam4);
				MISC::SET_BIT(&(uParam0->f_370), 0);
				func_454(uParam0, bParam4, bVar1, iParam3, bParam6);
				func_422(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
			}
			else if ((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_421(8, -1)) && !Global_2714762.f_785.f_5)
			{
				if (PAD::_IS_USING_KEYBOARD(2))
				{
					if (func_420())
					{
						if (uParam0->f_366 == 0)
						{
							if (Global_4539961 != uParam0->f_367)
							{
								uParam0->f_367 = Global_4539961;
								AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
								MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							}
							else
							{
								bVar0 = true;
							}
						}
						else if (Global_4539961 != uParam0->f_368)
						{
							uParam0->f_368 = Global_4539961;
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
						}
						else
						{
							bVar0 = true;
						}
					}
				}
				if (!BitTest(uParam0->f_373, 0))
				{
					if (((PAD::IS_CONTROL_JUST_PRESSED(2, 201) || func_419()) || bVar0) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 201)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_366 == 0)
						{
							uParam0->f_375 = 0;
							if (uParam0->f_367 >= 0 && uParam0->f_1[uParam0->f_367] >= 0)
							{
								*uParam2 = func_526(1, 0, iParam3, func_415(uParam0->f_1[uParam0->f_367], -1), -1, 0);
								if (*uParam2 >= 0)
								{
									func_414(*uParam2, iParam1, 1);
									if (*iParam1 < 0)
									{
										*iParam1 = func_534(1, 0, iParam3, 0, -1, 0);
									}
								}
								if (*iParam1 >= 0 && *uParam2 >= 0)
								{
									MISC::CLEAR_BIT(&(uParam0->f_370), 0);
									func_524(uParam0, iParam5, 0);
									return 1;
								}
							}
							else if (uParam0->f_367 < 0)
							{
							}
							if (uParam0->f_367 < 0)
							{
								uParam0->f_375 = 0;
							}
							else
							{
								uParam0->f_375 = uParam0->f_1[uParam0->f_367];
							}
							uParam0->f_366 = 1;
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							bVar1 = true;
						}
						else if (!BitTest(uParam0->f_373, 2) && !BitTest(uParam0->f_365, uParam0->f_368))
						{
							func_413(-1);
							func_412(176, "BB_YES", -1);
							func_412(177, "BB_NO", -1);
							MISC::SET_BIT(&(uParam0->f_373), 2);
						}
						else if (uParam0->f_368 >= 0)
						{
							*uParam2 = uParam0->f_1[uParam0->f_368];
							func_414(*uParam2, iParam1, 1);
							if (*iParam1 < 0)
							{
								*iParam1 = func_534(1, 0, iParam3, 0, -1, 0);
							}
							if (*iParam1 >= 0 && *uParam2 >= 0)
							{
								MISC::CLEAR_BIT(&(uParam0->f_370), 0);
								func_524(uParam0, iParam5, 0);
							}
							else
							{
								func_524(uParam0, iParam5, 0);
								*iParam1 = -1;
								return 1;
							}
							return 1;
						}
						MISC::SET_BIT(&(uParam0->f_373), 0);
					}
				}
				else if (!PAD::IS_CONTROL_PRESSED(2, 201) && !bVar0)
				{
					MISC::CLEAR_BIT(&(uParam0->f_373), 0);
				}
				if (!BitTest(uParam0->f_373, 1))
				{
					if ((((func_411() || PAD::IS_CONTROL_JUST_PRESSED(2, 238)) || PAD::IS_CONTROL_JUST_PRESSED(2, 202)) || (func_407() && Global_4539961 > -1)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 202)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", true);
						if (uParam0->f_366 == 0)
						{
							func_454(uParam0, bParam4, bVar1, iParam3, bParam6);
							func_422(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
							func_524(uParam0, iParam5, 1);
							*iParam1 = -1;
							MISC::SET_BIT(&(uParam0->f_370), 7);
							return 1;
						}
						else if (!BitTest(uParam0->f_373, 2))
						{
							uParam0->f_366 = 0;
							bVar1 = true;
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
						}
						else
						{
							func_413(-1);
							func_412(176, "BB_SELECT", -1);
							func_412(177, "BB_BACK", -1);
							MISC::CLEAR_BIT(&(uParam0->f_373), 2);
						}
						MISC::SET_BIT(&(uParam0->f_373), 1);
					}
				}
				else if ((!PAD::IS_CONTROL_PRESSED(2, 202) && !PAD::IS_CONTROL_PRESSED(2, 238)) && !func_411())
				{
					MISC::CLEAR_BIT(&(uParam0->f_373), 1);
				}
				if (!BitTest(uParam0->f_373, 2))
				{
					if (!BitTest(uParam0->f_373, 4))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 172) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 172)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241))
						{
							if (uParam0->f_366 == 0)
							{
								uParam0->f_367 = (uParam0->f_367 - 1);
							}
							else
							{
								uParam0->f_368 = (uParam0->f_368 - 1);
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_373), 4);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							func_69(&(uParam0->f_371));
						}
					}
					else if (func_410(uParam0, 172))
					{
						MISC::CLEAR_BIT(&(uParam0->f_373), 4);
					}
					if (!BitTest(uParam0->f_373, 5))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 173) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 173)) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 242))
						{
							if (uParam0->f_366 == 0)
							{
								uParam0->f_367++;
							}
							else
							{
								uParam0->f_368++;
							}
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							MISC::SET_BIT(&(uParam0->f_373), 5);
							MISC::CLEAR_BIT(&(uParam0->f_370), 0);
							func_69(&(uParam0->f_371));
						}
					}
					else if (func_410(uParam0, 173))
					{
						MISC::CLEAR_BIT(&(uParam0->f_373), 5);
					}
				}
				if (uParam0->f_366 == 0)
				{
					if (uParam0->f_367 >= uParam0->f_369)
					{
						uParam0->f_367 = 0;
					}
					if (uParam0->f_367 < 0)
					{
						uParam0->f_367 = (uParam0->f_369 - 1);
					}
				}
				else
				{
					if (uParam0->f_368 >= uParam0->f_369)
					{
						uParam0->f_368 = 0;
					}
					if (uParam0->f_368 < 0)
					{
						uParam0->f_368 = (uParam0->f_369 - 1);
					}
				}
				func_454(uParam0, bParam4, bVar1, iParam3, bParam6);
				if (!BitTest(uParam0->f_373, 2) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					func_422(1, iParam5, 1, 0, 1, -1082130432, 0, 0, -1);
				}
			}
		}
	}
	return 0;
}

int func_410(var uParam0, int iParam1)//Position - 0x1FEA1
{
	if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam1)) || func_70(&(uParam0->f_371), 250, 1))
	{
		return 1;
	}
	return 0;
}

int func_411()//Position - 0x1FED8
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177))
	{
		return 1;
	}
	return 0;
}

void func_412(int iParam0, char* sParam1, int iParam2)//Position - 0x1FF2C
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_23150.f_5160 >= 12)
	{
		StringCopy(&Global_4539885, sVar0, 64);
		StringCopy(&(Global_4539885.f_16), sParam1, 16);
		Global_4539885.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_23150.f_5443), Global_23150.f_5160);
	StringCopy(&(Global_23150.f_5162[Global_23150.f_5160 /*16*/]), sVar0, 64);
	StringCopy(&(Global_23150.f_5355[Global_23150.f_5160 /*4*/]), sParam1, 16);
	Global_23150.f_5404[Global_23150.f_5160] = iParam2;
	Global_23150.f_5417[Global_23150.f_5160] = iParam0;
	Global_23150.f_5430[Global_23150.f_5160] = 32;
	Global_23150.f_5160++;
}

void func_413(int iParam0)//Position - 0x1FFDB
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	Global_23150.f_5443 = 0;
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_103(&iVar1, 0, iParam0))
		{
			return;
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_23150.f_6051[iVar1 /*10*/]))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}
}

void func_414(int iParam0, int iParam1, bool bParam2)//Position - 0x20097
{
	if (Global_262145.f_10629)
	{
		*iParam1 = iParam0;
	}
	if (iParam0 >= 0)
	{
		*iParam1 = (Global_1940666[iParam0] - 1);
		if (bParam2)
		{
			if ((MISC::GET_FRAME_COUNT() % 5) == 0)
			{
			}
		}
	}
	else
	{
		*iParam1 = -1;
	}
}

int func_415(int iParam0, int iParam1)//Position - 0x200D7
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_18();
	}
	if (iParam0 == 7 && !Global_262145.f_17499)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_292(iParam0);
		if (iVar1 == 0 && func_21(5396, iParam1, 0) != 0)
		{
			return 1234;
		}
		if (func_418(-1) && iVar1 == 2)
		{
			return 1236;
		}
		if (func_417(PLAYER::PLAYER_ID()) && iVar1 == 1)
		{
			return 1237;
		}
		if (func_416(-1) && iVar1 == 3)
		{
			return 1238;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1659765[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2869950[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 29)
		{
			return 0;
		}
		return Global_2869777[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

bool func_416(int iParam0)//Position - 0x201C9
{
	return func_21(9517, iParam0, 0) != 0;
}

int func_417(int iParam0)//Position - 0x201DD
{
	if (iParam0 != func_8())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_336 != 0;
	}
	return 0;
}

bool func_418(int iParam0)//Position - 0x20203
{
	if (!Global_262145.f_24199)
	{
		return 0;
	}
	return func_21(7210, iParam0, 0) != 0;
}

int func_419()//Position - 0x20226
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176))
	{
		return 1;
	}
	return 0;
}

int func_420()//Position - 0x2027A
{
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (Global_4539961 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_421(int iParam0, int iParam1)//Position - 0x202A1
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1648034.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1648034.f_1048, iParam0);
}

void func_422(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)//Position - 0x202D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int* iVar45;
	int* iVar46;
	int* iVar47;
	int* iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	bool bVar53;
	float fVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	int* iVar58;
	int* iVar59;
	float fVar60;
	char cVar61[64];
	char cVar62[64];
	float fVar63;
	int iVar64;
	float fVar65;
	float fVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	char cVar73[16];
	float fVar74;
	float fVar75;
	float fVar76;
	float fVar77;
	float fVar78;
	
	if (!func_103(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_452(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar55 = 0f;
	if (Global_23150)
	{
		if (func_450(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = (fVar37 / fVar36);
		}
		else
		{
			Global_23150 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_23149;
	}
	fVar55 = (fParam5 * fVar56);
	if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar57 = Global_23148;
	}
	else
	{
		fVar57 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
	}
	fVar60 = 1f;
	func_448(bParam7, &iVar58, &iVar59, &fVar60);
	if (bParam3)
	{
		if (Global_23150.f_5609 <= 1)
		{
			func_444(Global_23150.f_5609 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_23150.f_6405 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_23150.f_6119)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_23148;
			}
			else
			{
				if (Global_23150)
				{
					StringCopy(&cVar61, func_443(29), 64);
					StringCopy(&cVar62, func_441(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
					{
						func_440(Global_23147, Global_23148, fParam5, fVar55, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar61, &cVar62, (Global_23147 + (fParam5 * 0.5f)), (Global_23148 + (fVar55 * 0.5f)), fParam5, fVar55, 0f, 255, 255, 255, 255, false, 0);
					}
				}
				if (Global_23150.f_8778)
				{
					iVar1 = Global_23150.f_8774;
					iVar2 = Global_23150.f_8775;
					iVar3 = Global_23150.f_8776;
					iVar4 = Global_23150.f_8777;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_440(Global_23147, (Global_23148 + fVar55), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_23148 + fVar55) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_23150.f_1)) != 0)
				{
					func_439();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_23150.f_74)
					{
						if (Global_23150.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_23150.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_14[iVar16], Global_23150.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_23150.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_23150.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_23150.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_23147 + 0.00390625f), ((Global_23148 + fVar55) + 0.00416664f), 0);
				}
				if (Global_23150.f_6126)
				{
					func_439();
					func_437((((Global_23147 + fParam5) - 0.00390625f) - func_438("CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6127, Global_23150.f_6128);
				}
				else if (Global_23150.f_6122 > Global_23150.f_5616)
				{
					if (Global_23150.f_6125 != 0)
					{
						func_439();
						func_437((((Global_23147 + fParam5) - 0.00390625f) - func_438("CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124)), ((Global_23148 + fVar55) + 0.00416664f), "CM_ITEM_COUNT", Global_23150.f_6125, Global_23150.f_6124);
					}
				}
			}
			iVar6 = Global_23150.f_6129;
			iVar9 = 0;
			fVar63 = fVar49;
			if (Global_23150.f_8788)
			{
				iVar1 = Global_23150.f_8784;
				iVar2 = Global_23150.f_8785;
				iVar3 = Global_23150.f_8786;
				iVar4 = Global_23150.f_8787;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_23150.f_5616 && iVar6 <= Global_23150.f_5609)
			{
				if (iVar6 >= 0)
				{
					if (Global_23150.f_5876[iVar6])
					{
						if (Global_23150.f_5747[iVar6] && iVar6 != Global_23150.f_6129)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar54 = 0.034722f;
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar54 = Global_23150.f_6136[iVar6];
						}
						fVar49 = (fVar49 + fVar54);
						iVar9++;
					}
				}
				iVar6++;
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar63 + ((fVar49 - fVar63) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar63), 0f, 255, 255, 255, 255, false, 0);
			if (Global_23150.f_6122 > Global_23150.f_5616)
			{
				if (Global_23150.f_8793)
				{
					iVar1 = Global_23150.f_8789;
					iVar2 = Global_23150.f_8790;
					iVar3 = Global_23150.f_8791;
					iVar4 = Global_23150.f_8792;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_440(Global_23147, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar60));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar60));
				if (Global_23150.f_8806)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar60), ((Var38.f_1 / 720f) * fVar60), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_23150.f_5081)) != 0 && Global_23150.f_5157 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_23150.f_5159 != 0)
				{
					func_450(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_436(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_440(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_436(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_5081));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_23150.f_5153)
				{
					if (Global_23150.f_5087[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_5092[iVar15]);
						iVar15++;
					}
					else if (Global_23150.f_5087[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_5096[iVar16], Global_23150.f_5100[iVar16]);
						iVar16++;
					}
					else if (Global_23150.f_5087[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_23150.f_5087[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_5104[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_23150.f_5159 != 0)
				{
					func_450(Global_23150.f_5159, 1, 1, &fVar36, &fVar37, bParam7);
					func_435(Global_23150.f_5159, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_443(Global_23150.f_5159), func_441(Global_23150.f_5159, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_23150.f_5157 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_23150.f_5158) > Global_23150.f_5157)
					{
						StringCopy(&(Global_23150.f_5081), "", 24);
						Global_23150.f_5157 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4539885.f_21)) != 0 && Global_4539885.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_23147 + 0.0046875f);
				if (Global_4539885.f_67 != 0)
				{
					func_450(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_23147 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_436(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_440(Global_23147, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_23150.f_8798)
				{
					iVar1 = Global_23150.f_8794;
					iVar2 = Global_23150.f_8795;
					iVar3 = Global_23150.f_8796;
					iVar4 = Global_23150.f_8797;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_23147 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, false, 0);
				func_436(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4539885.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4539885.f_61)
				{
					if (Global_4539885.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4539885.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4539885.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4539885.f_34[iVar16], Global_4539885.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4539885.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4539885.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4539885.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4539885.f_67 != 0)
				{
					func_450(Global_4539885.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_435(Global_4539885.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_443(Global_4539885.f_67), func_441(Global_4539885.f_67, 1), ((Global_23147 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
				}
				fVar49 = (fVar49 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4539885.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4539885.f_66) > Global_4539885.f_65)
					{
						StringCopy(&(Global_4539885.f_21), "", 16);
						Global_4539885.f_65 = -1;
					}
				}
			}
			func_431(iVar58, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_23150.f_6119)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar64 = Global_23150.f_5609;
			if (Global_23150.f_6120)
			{
				iVar64 = (Global_23150.f_6123 - 1);
			}
			fVar65 = 0f;
			fVar66 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar64)
			{
				fVar54 = 0.034722f;
				if (Global_23150.f_6136[iVar6] != 0f)
				{
					fVar54 = Global_23150.f_6136[iVar6];
				}
				if (Global_23150.f_6120)
				{
					iVar6 = Global_23150.f_8429[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_23150.f_6129 && iVar9 < Global_23150.f_5616)
				{
					bVar33 = true;
					if (Global_23150.f_6130 == iVar6)
					{
						fVar66 = fVar65;
					}
					if (Global_23150.f_5747[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_23150.f_6270[iVar6] = fVar35;
				fVar34 = (Global_23147 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_23150.f_6130 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar68 = 255;
					iVar69 = 255;
					iVar70 = 255;
					iVar71 = 255;
					if (Global_23150.f_8800)
					{
						HUD::GET_HUD_COLOUR(Global_23150.f_8799, &iVar68, &iVar69, &iVar70, &iVar71);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar68, &iVar69, &iVar70, &iVar71);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_23147 + (fParam5 * 0.5f)), (((fVar57 + fVar66) + (0.00277776f * IntToFloat(iVar12))) + (fVar54 * 0.5f)), fParam5, fVar54, 0f, iVar68, iVar69, iVar70, iVar71, false, 0);
					Global_23150.f_6268 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_23150.f_5617)
				{
					if (BitTest(Global_23150.f_5480[iVar6], iVar8) || Global_23150.f_5447[iVar8] == 5)
					{
						if (Global_23150.f_6120)
						{
							iVar19 = Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar20 = Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar21 = Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar22 = Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)];
							iVar23 = Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)];
						}
						else
						{
							Global_23150.f_8445[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar19;
							Global_23150.f_8486[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar20;
							Global_23150.f_8527[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar21;
							Global_23150.f_8568[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar22;
							Global_23150.f_8609[((iVar9 * Global_23150.f_5617) + iVar8)] = iVar23;
						}
						iVar72 = 0;
						bVar53 = false;
						if (Global_23150.f_6402[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[0])
							{
								bVar53 = true;
								iVar72 = 0;
							}
						}
						if (Global_23150.f_6402[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_23150.f_6399[1])
							{
								bVar53 = true;
								iVar72 = 1;
							}
						}
						if (Global_23150.f_5453[iVar8] != -1f)
						{
							fVar34 = ((Global_23147 + 0.0046875f) + Global_23150.f_5453[iVar8]);
						}
						if ((iVar8 < 4 && Global_23150.f_5453[iVar8 + 1] != -1f) && fVar34 < Global_23150.f_5453[iVar8 + 1])
						{
							fVar44 = (Global_23150.f_5453[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar44 = (((Global_23147 + Global_23149) - 0.0046875f) - fVar34);
						}
						if ((Global_23150.f_5466[iVar8] && Global_23150.f_6265) && bVar32)
						{
							bVar52 = true;
						}
						else
						{
							bVar52 = false;
						}
						switch (Global_23150.f_5447[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										fVar41 = 0f;
										fVar42 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											if (Global_23150.f_2130[iVar24])
											{
												bVar51 = true;
											}
											func_429(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, iVar72, bVar51, bVar50);
											HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_23150.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0)
										{
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_450(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + fVar36);
													if (iVar14 > 0)
													{
														fVar42 = (fVar42 - (0.00078125f * 4f));
													}
													if ((Global_23150.f_4824[(iVar22 + iVar14)] == 2 || Global_23150.f_4824[(iVar22 + iVar14)] == 51) || Global_23150.f_4824[(iVar22 + iVar14)] == 61)
													{
														fVar42 = (fVar42 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
										Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											iVar67 = (iVar8 - 1);
											while (iVar67 >= 0)
											{
												if (Global_23150.f_5474[iVar67] == 2)
												{
													Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] = (Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar67)] - Global_23150.f_5459[iVar8]);
												}
												iVar67 = (iVar67 + -1);
											}
										}
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_450(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_450(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_435(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_443(26), func_441(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (func_450(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_450(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_435(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_443(27), func_441(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar50 = false;
										bVar51 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar51 = true;
											}
											else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar50 = true;
											}
											iVar14++;
										}
										if (Global_23150.f_2130[iVar24])
										{
											bVar51 = true;
										}
										func_429(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_428(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23150.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[(iVar21 + iVar27)], Global_23150.f_4695[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar28)] == 2 || Global_23150.f_4824[(iVar22 + iVar28)] == 51) || Global_23150.f_4824[(iVar22 + iVar28)] == 61)
											{
												if (func_450(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (func_450(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_435(Global_23150.f_4824[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
														if (iVar5 == 1)
														{
															if (Global_23150.f_5474[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_443(Global_23150.f_4824[(iVar22 + iVar28)]), func_441(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_443(Global_23150.f_4824[(iVar22 + iVar28)]), func_441(Global_23150.f_4824[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
														}
														fVar40 = (fVar40 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_23150.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_23150.f_5474[iVar8] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
											if (func_19() && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_23150.f_2130[iVar24])
													{
														bVar51 = true;
													}
													func_429(0, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, bVar51, bVar50);
													StringCopy(&cVar73, "TEST_LABEL", 16);
													fVar74 = 0f;
													fVar75 = 55f;
													fVar76 = 0.0185f;
													fVar77 = 0.004f;
													fVar78 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar78 * 0.6f)), (fVar35 + (fVar76 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar74), SYSTEM::FLOOR(fVar75), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar73);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_23150.f_6129 + iVar30));
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar78), (fVar35 + fVar77), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar40 = (fVar40 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_23150.f_4824[(iVar22 + iVar14)] != 2 && Global_23150.f_4824[(iVar22 + iVar14)] != 51) && Global_23150.f_4824[(iVar22 + iVar14)] != 61)
											{
												if (func_450(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_450(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_435(Global_23150.f_4824[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_23150.f_4824[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_443(Global_23150.f_4824[(iVar22 + iVar14)]), func_441(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (Global_23147 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else if (Global_23150.f_5474[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_443(Global_23150.f_4824[(iVar22 + iVar14)]), func_441(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_443(Global_23150.f_4824[(iVar22 + iVar14)]), func_441(Global_23150.f_4824[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
															}
														}
													}
													fVar40 = (fVar40 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar39 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_23150.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_429(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_428(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[iVar20]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_450(26, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_450(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_435(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_443(26), func_441(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (func_450(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_450(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_435(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_443(27), func_441(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_429(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										func_427((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4309[iVar20], 0);
									}
								}
								bVar39 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_23150.f_6120)
									{
										func_429(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
										if (Global_23150.f_8804 && Global_23150.f_8805 == iVar6)
										{
											func_428(bVar32);
										}
										HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
										fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
										fVar40 = 0f;
										if (Global_23150.f_5474[iVar8] == 2)
										{
											fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
										}
										else if (Global_23150.f_5474[iVar8] == 0)
										{
											fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
										}
										Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
										Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar41;
									}
									else
									{
										fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
										fVar41 = Global_23150.f_8691[((iVar9 * Global_23150.f_5617) + iVar8)];
									}
									if (bVar52)
									{
										if (func_450(26, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 - (fVar36 * 2f));
											}
											fVar43 = (fVar36 * 0.5f);
											if (func_450(26, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_435(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_443(26), func_441(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
										if (func_450(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar40 = (fVar40 + fVar36);
											fVar43 = (fVar36 * 0.5f);
											if (func_450(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_435(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
												if (iVar5 == 1)
												{
													GRAPHICS::DRAW_SPRITE(func_443(27), func_441(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
												}
											}
										}
									}
									func_429(bVar32, Global_23150.f_1616[iVar24], Global_23150.f_1873[iVar24], bVar53, 0, 0, 0);
									func_426((fVar34 + fVar40), fVar35, "NUMBER", Global_23150.f_4566[iVar21], Global_23150.f_4695[iVar21]);
								}
								bVar39 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_450(Global_23150.f_4824[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_23150.f_6120)
										{
											fVar42 = fVar36;
											fVar40 = 0f;
											if (Global_23150.f_5474[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
											}
											else if (Global_23150.f_5474[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
											}
											Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar40;
											Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_23150.f_8650[((iVar9 * Global_23150.f_5617) + iVar8)];
											fVar42 = Global_23150.f_8732[((iVar9 * Global_23150.f_5617) + iVar8)];
										}
										if (bVar52)
										{
											if (func_450(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_23150.f_5474[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_450(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_435(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_443(26), func_441(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
													}
												}
											}
											if (func_450(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_450(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_435(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													if (iVar5 == 1)
													{
														GRAPHICS::DRAW_SPRITE(func_443(27), func_441(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_450(Global_23150.f_4824[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_435(Global_23150.f_4824[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_443(Global_23150.f_4824[iVar22]), func_441(Global_23150.f_4824[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar54 * 0.5f)), (fVar36 * func_425(Global_23150.f_4824[iVar22])), (fVar37 * func_425(Global_23150.f_4824[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, false, 0);
											}
										}
									}
								}
								bVar39 = true;
								iVar22++;
								break;
							
							case 5:
								bVar39 = true;
								break;
						}
						if (Global_23150.f_5447[iVar8] == 5)
						{
							if (Global_23150.f_5459[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
							if (Global_23150.f_5466[iVar8])
							{
								if (func_450(26, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_23150.f_5459[iVar8]);
					}
					iVar8++;
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_23150.f_8429[iVar9] = iVar6;
						Global_23150.f_6131 = iVar6;
						iVar9++;
						if (Global_23150.f_5747[iVar6])
						{
							iVar13++;
						}
						if (Global_23150.f_6136[iVar6] != 0f)
						{
							fVar65 = (fVar65 + Global_23150.f_6136[iVar6]);
						}
						else
						{
							fVar65 = (fVar65 + 0.034722f);
						}
					}
					if (!Global_23150.f_6119)
					{
						Global_23150.f_5876[iVar6] = 1;
						if (Global_23150.f_5618[iVar6])
						{
							if (bVar32)
							{
								Global_23150.f_6125 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_23150.f_6125 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_23150.f_6119)
			{
				Global_23150.f_6121 = ((fVar57 + fVar65) + (0.00277776f * IntToFloat(iVar12)));
				Global_23150.f_6124 = iVar11;
				Global_23150.f_6122 = iVar10;
				Global_23150.f_6119 = 1;
			}
		}
		if (!Global_23150.f_6120)
		{
			Global_23150.f_6123 = iVar9;
			Global_23150.f_6120 = 1;
		}
		iVar5++;
	}
	Global_23150.f_6267 = fVar49;
	Global_23150.f_6269 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23150.f_6267);
	if (!Global_23150.f_8773)
	{
		func_424(0);
	}
	Global_23150.f_8773 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_423(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_423(int iParam0)//Position - 0x23049
{
	Global_1649593.f_1163 = iParam0;
}

void func_424(int iParam0)//Position - 0x2305A
{
	if (func_134())
	{
		return;
	}
	if (!Global_20266.f_1 == 1)
	{
		if (func_52(0))
		{
			func_130(iParam0);
		}
		MISC::SET_BIT(&Global_8137, 2);
	}
}

float func_425(int iParam0)//Position - 0x2308D
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 53:
		case 44:
		case 45:
		case 46:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_426(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)//Position - 0x230FC
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_427(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x2311B
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

void func_428(bool bParam0)//Position - 0x23139
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_23150.f_8801[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_23150.f_8801[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_429(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x2317F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_430(Global_23150.f_6402[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_430(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x2332D
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_431(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x235B7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_103(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_452(bParam4, bParam8))
	{
		return;
	}
	if (func_433())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_16(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_23150.f_5160 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (Global_23150.f_5417[iVar1] != 363)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_23150.f_5417[iVar1], true), 64);
				}
				else if (Global_23150.f_5430[iVar1] != 32)
				{
					StringCopy(&(Global_23150.f_5162[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(2, Global_23150.f_5430[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_23150.f_5161 = 0;
		}
		if (!Global_23150.f_5161)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_23150.f_5472 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_23150.f_5160)
			{
				if (MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_432(&(Global_23150.f_5162[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_23150.f_5355[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_432(&(Global_23150.f_5162[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_23150.f_5404[iVar1] == -1)
					{
						func_253(&(Global_23150.f_5355[iVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_23150.f_5404[iVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23150.f_5355[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23150.f_5417[iVar1] != 363 && BitTest(Global_23150.f_5443, iVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23150.f_5417[iVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4539885.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23150.f_5160);
				func_432(&Global_4539885);
				if (Global_4539885.f_20 == -1)
				{
					func_253(&(Global_4539885.f_16));
				}
				else
				{
					iVar4 = Global_23150.f_5404[iVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539885.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_23150.f_5473)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23150.f_5161 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_23150.f_5160)
		{
			if (Global_23150.f_5404[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_23150.f_5355[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar1++;
		}
		if (Global_4539885.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23150.f_6051[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4539885.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_23150.f_8808)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_23150.f_8808 = 1;
			}
		}
		else if (Global_23150.f_8808)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_23150.f_8808 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_23150.f_5446)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23150.f_6051[iVar0 /*10*/], Global_23150.f_5444, Global_23150.f_5445, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23150.f_6051[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_432(char* sParam0)//Position - 0x23ABB
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

int func_433()//Position - 0x23AC9
{
	struct<3> Var0;
	
	if (Global_20266.f_1 > 3)
	{
		return 1;
	}
	if (func_434())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_20211 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_434()//Position - 0x23B37
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_435(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)//Position - 0x23B51
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 48:
		case 47:
		case 42:
		case 36:
		case 37:
		case 53:
		case 39:
		case 40:
		case 38:
		case 44:
		case 45:
		case 46:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 54:
			*iParam5 = 100;
			break;
		
		case 62:
			*iParam5 = 100;
			break;
		
		case 55:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_436(float fParam0)//Position - 0x23C66
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_23147 + Global_23149) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_437(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)//Position - 0x23CC5
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_438(char* sParam0, int iParam1, int iParam2)//Position - 0x23CE8
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_439();
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_439()//Position - 0x23D2A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_23150.f_8783)
	{
		iVar0 = Global_23150.f_8779;
		iVar1 = Global_23150.f_8780;
		iVar2 = Global_23150.f_8781;
		iVar3 = Global_23150.f_8782;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_23147 + 0.0046875f), ((Global_23147 + Global_23149) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_440(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x23DB4
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

var func_441(int iParam0, bool bParam1)//Position - 0x23DE3
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_7420[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23150.f_7420[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var2 = { func_209(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_442(&uVar1);
			}
		}
		else
		{
			return func_442(&(Global_23150.f_7420[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 51:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 52:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 54:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 55:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 59:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 60:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 62:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 61:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_442(var uParam0)//Position - 0x2430D
{
	return uParam0;
}

char* func_443(int iParam0)//Position - 0x24317
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_6411[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_23150.f_6411[iParam0 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var1 = { func_209(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_442(&uVar0);
		}
		else
		{
			return func_442(&(Global_23150.f_6411[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 51)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_444(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x2438C
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_23150.f_5609 > iParam0)
	{
		return;
	}
	if (Global_23150.f_5609 >= 128)
	{
		return;
	}
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 < Global_23150.f_6132)
	{
		return;
	}
	if (Global_23150.f_5609 != iParam0)
	{
		Global_23150.f_5609 = iParam0;
		Global_23150.f_5610 = 0;
	}
	iVar0 = Global_23150.f_5447[Global_23150.f_5610];
	if (iVar0 != 1)
	{
		while (Global_23150.f_5610 < 4 && iVar0 != 1)
		{
			Global_23150.f_5610++;
			iVar0 = Global_23150.f_5447[Global_23150.f_5610];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_23150.f_1616[Global_23150.f_5611] = bParam3;
	Global_23150.f_1873[Global_23150.f_5611] = iParam4;
	Global_23150.f_2130[Global_23150.f_5611] = iParam6;
	Global_23150.f_5611++;
	if (!bParam3)
	{
		func_447(Global_23150.f_5609, 1);
	}
	else
	{
		func_447(Global_23150.f_5609, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_446(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
		if (Global_23150.f_5466[Global_23150.f_5610])
		{
			func_450(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_23150.f_5459[Global_23150.f_5610])
		{
			Global_23150.f_5459[Global_23150.f_5610] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_445(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]));
			if (fVar4 > Global_23150.f_6136[iParam0])
			{
				Global_23150.f_6136[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_23150.f_5480[iParam0]), Global_23150.f_5610);
	Global_23150.f_5610++;
	Global_23150.f_6135 = 1;
	Global_23150.f_6133 = (Global_23150.f_5611 - 1);
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = iParam2;
}

float func_445(char* sParam0)//Position - 0x245A8
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_446(char* sParam0)//Position - 0x245C4
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_429(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
}

void func_447(int iParam0, bool bParam1)//Position - 0x24601
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_23150.f_6406[iVar0]), (iParam0 - iVar0 * 32));
	}
}

void func_448(bool bParam0, int* iParam1, int* iParam2, float fParam3)//Position - 0x2464D
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (func_449(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = SYSTEM::ROUND((fVar1 * fVar2));
		*iParam2 = SYSTEM::ROUND(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = SYSTEM::ROUND((fVar0 / *fParam3));
	*iParam2 = SYSTEM::ROUND((fVar1 / *fParam3));
}

bool func_449(int iParam0, int iParam1)//Position - 0x246D5
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_450(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x246F0
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	float fVar6;
	
	StringCopy(&cVar0, func_443(iParam0), 64);
	StringCopy(&cVar1, func_441(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		func_448(bParam5, &iVar2, &iVar3, &fVar4);
		Var5 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) };
		fVar6 = (func_451(iParam0) / fVar4);
		Var5 = { Var5 * Vector(fVar6, fVar6, fVar6) };
		if (!bParam2)
		{
			Var5.f_0 = (Var5.f_0 - 2f);
			Var5.f_1 = (Var5.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var5.f_0 = 288f;
			Var5.f_1 = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_23150.f_7420[29 /*16*/])) == joaat("CREW_LOGO"))
		{
			Var5.f_0 = 106f;
			Var5.f_1 = 106f;
		}
		*fParam3 = ((Var5.f_0 / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var5.f_1 / IntToFloat(iVar3)) / (Var5.f_0 / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_23149)
			{
				*fParam4 = (*fParam4 * (Global_23149 / *fParam3));
				*fParam3 = Global_23149;
			}
		}
		return 1;
	}
	return 0;
}

float func_451(int iParam0)//Position - 0x2481C
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 52:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 62:
			return 0.5f;
			break;
		
		case 61:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_452(bool bParam0, bool bParam1)//Position - 0x248F0
{
	if (Global_2703735.f_1571.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_421(8, -1) && func_453() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_78579) || Global_23150.f_8807) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_100493.f_1458)
	{
		return 0;
	}
	return 1;
}

int func_453()//Position - 0x2498D
{
	return Global_1574991;
}

void func_454(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x24999
{
	if (!bParam2)
	{
		if (uParam0->f_366 == 0)
		{
			if (uParam0->f_1[uParam0->f_367] == 12)
			{
				if (!bParam4)
				{
					func_461("DEL_VEH_SEL1ac", 100, 0);
				}
				else
				{
					func_461("CAS_VEH_SELLV", 0, 0);
					func_460(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam3));
				}
			}
			else if (!bParam4)
			{
				func_461("DEL_VEH_SEL1", 100, 0);
			}
			else
			{
				func_461("CAS_VEH_SELLV", 0, 0);
				func_460(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam3));
			}
		}
		else if (BitTest(uParam0->f_373, 2))
		{
			if (func_455(uParam0->f_1[uParam0->f_367], 0, -1, 1))
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PLYVEH_CM_CONT", "PLYVEH_CM_1Bac", 36, 0, false, -1, 0, 0, true, 0);
			}
			else
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PLYVEH_CM_CONT", "PLYVEH_CM_1B", 36, 0, false, -1, 0, 0, true, 0);
			}
		}
		else if (BitTest(uParam0->f_365, uParam0->f_368))
		{
			if (func_455(uParam0->f_1[uParam0->f_367], 0, -1, 1))
			{
				func_461("DEL_VEH_SEL2ac", 100, 0);
			}
			else
			{
				func_461("DEL_VEH_SEL2", 100, 0);
			}
		}
		else if (bParam1)
		{
			if (func_455(uParam0->f_1[uParam0->f_367], 0, -1, 0))
			{
				func_461("MP_PROP_SC_3ac", 100, 0);
			}
			else
			{
				func_461("MP_PROP_SC_3", 100, 0);
			}
		}
		else if (func_455(uParam0->f_1[uParam0->f_367], 0, -1, 1))
		{
			func_461("MP_PROP_SC_1ac", 100, 0);
		}
		else
		{
			func_461("MP_PROP_SC_1", 100, 0);
		}
	}
}

int func_455(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x24B08
{
	int iVar0;
	
	if (bParam1)
	{
		func_458(iParam0, &iVar0, iParam2);
	}
	else
	{
		func_404(iParam0, &iVar0);
	}
	if (iVar0 >= 0)
	{
		if (bParam3)
		{
		}
		if (iVar0 >= func_456(12) && iVar0 < func_283(12))
		{
			return 1;
		}
	}
	return 0;
}

int func_456(int iParam0)//Position - 0x24B54
{
	int iVar0;
	
	switch (iParam0)
	{
		case 8:
			return 88;
			break;
		
		case 9:
			return 108;
			break;
		
		case 10:
			return 128;
			break;
		
		case 11:
			return 148;
			break;
		
		case 6:
			return 65;
			break;
		
		case 7:
			return 75;
			break;
		
		case 5:
			return -1;
			break;
		
		case 12:
			return 159;
			break;
		
		case 13:
			return 179;
			break;
		
		case 14:
			return 191;
			break;
		
		case 15:
			return 192;
			break;
		
		case 16:
			return 202;
			break;
		
		case 17:
			return 212;
			break;
		
		case 18:
			return 227;
			break;
		
		case 19:
			return 237;
			break;
		
		case 20:
			return 247;
			break;
		
		case 21:
			return 258;
			break;
		
		case 22:
			return 268;
			break;
		
		case 23:
			return 281;
			break;
		
		case 24:
			return 294;
			break;
		
		case 25:
			return 307;
			break;
		
		case 26:
			return 317;
			break;
		
		case 27:
			return 337;
			break;
		
		case 28:
			return 350;
			break;
	}
	if (iParam0 >= 1000)
	{
		iVar0 = func_292(iParam0);
		return func_457(iVar0);
	}
	return (func_284(iParam0, -1, 1) * iParam0);
}

int func_457(int iParam0)//Position - 0x24CDE
{
	switch (iParam0)
	{
		case 0:
			return 156;
		
		case 2:
			return 223;
		
		case 1:
			return 224;
		
		case 3:
			return 278;
		
		default:
	}
	return -1;
}

void func_458(int iParam0, var uParam1, int iParam2)//Position - 0x24D1B
{
	int iVar0;
	
	*uParam1 = -1;
	iVar0 = 0;
	while (iVar0 < 363)
	{
		if (iParam0 == (func_459(iVar0, iParam2) - 1))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
}

int func_459(int iParam0, int iParam1)//Position - 0x24D52
{
	int iVar0;
	
	iVar0 = func_67(func_349(iParam0), iParam1);
	iVar0 = (iVar0 + func_67(func_348(iParam0), iParam1));
	return iVar0;
}

void func_460(char* sParam0)//Position - 0x24D7B
{
	if (Global_23150.f_5156 >= 3 || Global_23150.f_5153 >= 4)
	{
		return;
	}
	Global_23150.f_5087[Global_23150.f_5153] = 1;
	Global_23150.f_5153++;
	StringCopy(&(Global_23150.f_5104[Global_23150.f_5156 /*16*/]), sParam0, 64);
	Global_23150.f_5156++;
}

void func_461(char* sParam0, int iParam1, int iParam2)//Position - 0x24DDC
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_5081), sParam0, 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = iParam1;
	Global_23150.f_5158 = MISC::GET_GAME_TIMER();
	Global_23150.f_5159 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
}

void func_462(var uParam0, int iParam1, bool bParam2)//Position - 0x24E41
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	struct<16> Var13;
	struct<4> Var14;
	
	iVar0 = 0;
	func_517(0, 0);
	if (bParam2)
	{
		func_512(func_516(), 0);
	}
	func_511(1, 1, 0, 0, 0);
	func_510(1, 2, 1, 1, 1);
	func_509(0, 0, 0, 0, 0);
	bVar2 = false;
	bVar7 = func_394(iParam1);
	iVar11 = 1;
	switch (uParam0->f_366)
	{
		case 0:
			uParam0->f_375 = 0;
			func_508("DEL_VEH_SEL0");
			iVar1 = 0;
			while (iVar1 < 29)
			{
				iVar3 = func_415(iVar1, -1);
				if ((iVar3 > 0 && func_507(iVar3)) && func_499(iVar1))
				{
					if (!func_497(iParam1, iVar1))
					{
					}
					else
					{
						Var14 = { Global_1312193[iVar3 /*1951*/].f_16 };
						if (iVar3 == 116)
						{
							StringCopy(&Var14, func_495(func_496(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 117)
						{
							StringCopy(&Var14, func_493(func_494(PLAYER::PLAYER_ID())), 16);
						}
						if (iVar3 == 118)
						{
							StringCopy(&Var14, "MP_BHUB_CLUBG", 16);
						}
						if (iVar3 == 119)
						{
							StringCopy(&Var14, func_492(1), 16);
						}
						if (iVar3 == 120)
						{
							StringCopy(&Var14, func_492(2), 16);
						}
						if (iVar3 == 121)
						{
							StringCopy(&Var14, func_492(3), 16);
						}
						if (iVar3 == 122)
						{
							StringCopy(&Var14, func_491(1), 16);
						}
						if (iVar3 == 123)
						{
							StringCopy(&Var14, func_491(2), 16);
						}
						if (iVar3 == 124)
						{
							StringCopy(&Var14, func_491(3), 16);
						}
						if (iVar3 == 125)
						{
							StringCopy(&Var14, "CASINO_GARNAME", 16);
						}
						if (iVar3 == 126)
						{
							StringCopy(&Var14, "ARCADE_GARNAME", 16);
						}
						if (iVar3 == 127)
						{
							StringCopy(&Var14, "AUT_SHP_GAR", 16);
						}
						if (iVar3 == 128)
						{
							StringCopy(&Var14, "FIXER_GARNAME", 16);
						}
						if (!func_490())
						{
							if (!func_489() && !func_488(iVar3))
							{
								func_444(iVar0, &Var14, 0, 1, 0, 0, 0);
							}
							else
							{
								Var6 = { Var14 };
								StringConCat(&Var6, "S", 16);
								func_444(iVar0, &Var6, 0, 1, 0, 0, 0);
							}
						}
						else
						{
							func_444(iVar0, "PIM_DNAME", 1, 1, 0, 0, 0);
							func_487(HUD::_GET_LABEL_TEXT(&Var14), 0, 1, 1);
						}
						uParam0->f_1[iVar0] = iVar1;
						iVar0++;
					}
				}
				iVar1++;
			}
			if (((((func_21(5396, -1, 0) != 0 && func_67(15270, -1) == 7) && !Global_262145.f_21126) && func_477(iParam1, 156)) && !VEHICLE::IS_THIS_MODEL_A_HELI(iParam1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				func_444(iVar0, func_476(0), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = func_475(0);
				iVar0++;
			}
			if (func_418(-1) && func_477(iParam1, 223))
			{
				func_444(iVar0, func_476(2), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = func_475(2);
				iVar0++;
			}
			if (func_416(-1) && func_477(iParam1, 278))
			{
				func_444(iVar0, func_476(3), 0, 1, 0, 0, 0);
				uParam0->f_1[iVar0] = func_475(3);
				iVar0++;
			}
			uParam0->f_369 = iVar0;
			func_474(uParam0->f_367, 1, 1);
			break;
		
		case 1:
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam1) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam1))
			{
				func_508("DEL_VEH_SEL3ac");
			}
			else
			{
				func_508("DEL_VEH_SEL3");
			}
			uParam0->f_365 = 0;
			iVar4 = func_456(uParam0->f_375);
			iVar5 = (10 + func_456(uParam0->f_375));
			if (uParam0->f_375 >= 29)
			{
				iVar10 = func_292(uParam0->f_375);
				iVar1 = 0;
				while (iVar1 < func_473(iVar10))
				{
					iVar8 = (iVar1 + iVar4);
					if (!bVar7)
					{
						if (func_403(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (!func_403(iVar8))
					{
						bVar2 = true;
					}
					if (!func_477(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_414(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585857[iVar9 /*142*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1585857[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (func_472(&(Global_1585857[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (func_471(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_470(Global_1585857[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { func_468(-1, iVar8, 1) };
							if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 1))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_444(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_467(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_464(&Var13, 0, 0, 1);
									}
									if (func_472(&(Global_1585857[iVar9 /*142*/])))
									{
										func_467("VEH_LIVERY", 0);
									}
									if (func_471(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_470(Global_1585857[iVar9 /*142*/].f_66))
									{
										func_467("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									func_444(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_365), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (func_394(Global_1585857[iVar9 /*142*/].f_66))
								{
									if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_444(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_467(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											func_464(&Var13, 0, 0, 1);
										}
										if (func_472(&(Global_1585857[iVar9 /*142*/])))
										{
											func_467("VEH_LIVERY", 0);
										}
										if (func_471(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_470(Global_1585857[iVar9 /*142*/].f_66))
										{
											func_467("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_444(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_467(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											func_464(&Var13, 0, 0, 1);
										}
										if (func_472(&(Global_1585857[iVar9 /*142*/])))
										{
											func_467("VEH_LIVERY", 0);
										}
										if (func_471(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_470(Global_1585857[iVar9 /*142*/].f_66))
										{
											func_467("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!func_394(Global_1585857[iVar9 /*142*/].f_66))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_444(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_467(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_464(&Var13, 0, 0, 1);
									}
									if (func_472(&(Global_1585857[iVar9 /*142*/])))
									{
										func_467("VEH_LIVERY", 0);
									}
									if (func_471(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_470(Global_1585857[iVar9 /*142*/].f_66))
									{
										func_467("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_444(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_467(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_464(&Var13, 0, 0, 1);
									}
									if (func_472(&(Global_1585857[iVar9 /*142*/])))
									{
										func_467("VEH_LIVERY", 0);
									}
									if (func_471(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_470(Global_1585857[iVar9 /*142*/].f_66))
									{
										func_467("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							func_444(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_365), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar3 = func_415(uParam0->f_375, -1);
				iVar1 = 0;
				while (iVar1 < func_284(uParam0->f_375, -1, 1))
				{
					iVar8 = (iVar1 + iVar4);
					bVar2 = false;
					if (iVar3 <= 0)
					{
						bVar2 = true;
					}
					else if (Global_1312193[iVar3 /*1951*/].f_33 == 2)
					{
						if (iVar8 >= iVar4 + 2 && iVar8 != iVar5)
						{
							bVar2 = true;
						}
					}
					else if (Global_1312193[iVar3 /*1951*/].f_33 == 6)
					{
						if ((iVar8 >= iVar4 + 6 && iVar8 != iVar5) && iVar8 != iVar5 + 1)
						{
							bVar2 = true;
						}
					}
					if (!bVar7)
					{
						if (iVar8 >= iVar5 && func_403(iVar8))
						{
							bVar2 = true;
						}
					}
					else if (iVar8 < iVar5)
					{
						bVar2 = true;
					}
					if (!func_463(iVar8, iVar3, uParam0->f_375))
					{
						bVar2 = true;
					}
					if (!func_477(iParam1, iVar8))
					{
						bVar2 = true;
					}
					if (!bVar2)
					{
						func_414(iVar8, &iVar9, 1);
						if ((iVar9 >= 0 && Global_1585857[iVar9 /*142*/].f_66 != 0) && STREAMING::IS_MODEL_IN_CDIMAGE(Global_1585857[iVar9 /*142*/].f_66))
						{
							iVar11 = 1;
							StringCopy(&Var12, "", 24);
							if (func_472(&(Global_1585857[iVar9 /*142*/])))
							{
								iVar11++;
							}
							if (func_471(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_470(Global_1585857[iVar9 /*142*/].f_66))
							{
								iVar11++;
							}
							Var13 = { func_468(-1, iVar8, 1) };
							if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 1))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 2) && !bVar7)
								{
									StringCopy(&Var12, "MP_MAN_VEH_S0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_444(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_467(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_464(&Var13, 0, 0, 1);
									}
									if (func_472(&(Global_1585857[iVar9 /*142*/])))
									{
										func_467("VEH_LIVERY", 0);
									}
									if (func_471(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_470(Global_1585857[iVar9 /*142*/].f_66))
									{
										func_467("VEH_TOPL", 0);
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
								else
								{
									func_444(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0, 0);
									uParam0->f_1[iVar0] = iVar8;
									MISC::SET_BIT(&(uParam0->f_365), iVar0);
									iVar0++;
								}
							}
							else if (bVar7)
							{
								if (func_394(Global_1585857[iVar9 /*142*/].f_66))
								{
									if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
									{
										StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_444(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_467(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											func_464(&Var13, 0, 0, 1);
										}
										if (func_472(&(Global_1585857[iVar9 /*142*/])))
										{
											func_467("VEH_LIVERY", 0);
										}
										if (func_471(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_470(Global_1585857[iVar9 /*142*/].f_66))
										{
											func_467("VEH_TOPL", 0);
										}
									}
									else
									{
										StringCopy(&Var12, "PIL_MP_VEH_0", 24);
										StringIntConCat(&Var12, iVar11, 24);
										func_444(iVar0, &Var12, iVar11, 1, 0, 0, 0);
										if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
										{
											func_467(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
										}
										else
										{
											func_464(&Var13, 0, 0, 1);
										}
										if (func_472(&(Global_1585857[iVar9 /*142*/])))
										{
											func_467("VEH_LIVERY", 0);
										}
										if (func_471(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_470(Global_1585857[iVar9 /*142*/].f_66))
										{
											func_467("VEH_TOPL", 0);
										}
									}
									uParam0->f_1[iVar0] = iVar8;
									iVar0++;
								}
							}
							else if (!func_394(Global_1585857[iVar9 /*142*/].f_66))
							{
								if (BitTest(Global_1585857[iVar9 /*142*/].f_103, 6))
								{
									StringCopy(&Var12, "MP_MAN_VEH_S1", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_444(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_467(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_464(&Var13, 0, 0, 1);
									}
									if (func_472(&(Global_1585857[iVar9 /*142*/])))
									{
										func_467("VEH_LIVERY", 0);
									}
									if (func_471(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_470(Global_1585857[iVar9 /*142*/].f_66))
									{
										func_467("VEH_TOPL", 0);
									}
								}
								else
								{
									StringCopy(&Var12, "PIL_MP_VEH_0", 24);
									StringIntConCat(&Var12, iVar11, 24);
									func_444(iVar0, &Var12, iVar11, 1, 0, 0, 0);
									if (MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
									{
										func_467(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Global_1585857[iVar9 /*142*/].f_66), 0);
									}
									else
									{
										func_464(&Var13, 0, 0, 1);
									}
									if (func_472(&(Global_1585857[iVar9 /*142*/])))
									{
										func_467("VEH_LIVERY", 0);
									}
									if (func_471(Global_1585857[iVar9 /*142*/].f_66, Global_1585857[iVar9 /*142*/].f_77, Global_1585857[iVar9 /*142*/].f_9[10]) && func_470(Global_1585857[iVar9 /*142*/].f_66))
									{
										func_467("VEH_TOPL", 0);
									}
								}
								uParam0->f_1[iVar0] = iVar8;
								iVar0++;
							}
						}
						else
						{
							func_444(iVar0, "MP_MAN_VEH_S", 0, 1, 0, 0, 0);
							uParam0->f_1[iVar0] = iVar8;
							MISC::SET_BIT(&(uParam0->f_365), iVar0);
							iVar0++;
						}
					}
					iVar1++;
				}
			}
			uParam0->f_369 = iVar0;
			if (uParam0->f_368 >= uParam0->f_369)
			{
				uParam0->f_368 = 0;
			}
			func_474(uParam0->f_368, 1, 1);
			break;
	}
	func_413(-1);
	func_412(176, "BB_SELECT", -1);
	func_412(177, "BB_BACK", -1);
}

int func_463(int iParam0, int iParam1, int iParam2)//Position - 0x25CC3
{
	if ((iParam1 > 0 && iParam1 <= 128) && func_507(iParam1))
	{
		if (iParam0 >= 0)
		{
			if (((iParam0 - func_456(iParam2)) >= 0 && (iParam0 - func_456(iParam2)) < Global_1312193[iParam1 /*1951*/].f_33) && iParam0 < 363)
			{
				return 1;
			}
			if (Global_1312193[iParam1 /*1951*/].f_33 == 2 && iParam0 == (10 + func_456(iParam2)))
			{
				return 1;
			}
			if ((Global_1312193[iParam1 /*1951*/].f_33 == 6 && iParam0 >= (10 + func_456(iParam2))) && iParam0 <= (11 + func_456(iParam2)))
			{
				return 1;
			}
			if (Global_1312193[iParam1 /*1951*/].f_33 == 10)
			{
				if (func_285(iParam1, -1))
				{
				}
				else if (iParam0 >= (10 + func_456(iParam2)) && iParam0 <= (12 + func_456(iParam2)))
				{
					return 1;
				}
			}
			if ((iParam2 == 11 && iParam0 >= func_456(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 12 && iParam0 >= func_456(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 13 && iParam0 >= func_456(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 14 && iParam0 >= func_456(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 15 && iParam0 >= func_456(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 16 && iParam0 >= func_456(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if ((iParam2 == 17 && iParam0 >= func_456(iParam2)) && iParam0 < func_283(iParam2))
			{
				return 1;
			}
			if (iParam2 == 18)
			{
				if ((iParam0 >= func_456(iParam2) && iParam0 < func_283(iParam2)) || iParam0 == 236)
				{
					return 1;
				}
			}
			if (iParam2 == 19)
			{
				if ((iParam0 >= func_456(iParam2) && iParam0 < func_283(iParam2)) || iParam0 == 246)
				{
					return 1;
				}
			}
			if (iParam2 == 20)
			{
				if ((iParam0 >= func_456(iParam2) && iParam0 < func_283(iParam2)) || iParam0 == 256)
				{
					return 1;
				}
			}
			if (iParam2 == 21)
			{
				if (iParam0 >= func_456(iParam2) && iParam0 < func_283(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 22)
			{
				if (iParam0 >= func_456(iParam2) && iParam0 < func_283(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 25)
			{
				if (iParam0 >= func_456(iParam2) && iParam0 < func_283(iParam2))
				{
					return 1;
				}
			}
			if (iParam2 == 26)
			{
				if (iParam0 >= func_456(iParam2) && iParam0 < func_283(iParam2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_464(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x25FFE
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_23150.f_5612 >= 40)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	StringCopy(&(Global_2725950[Global_23150.f_5612 /*16*/]), sParam0, 64);
	Global_23150.f_5612++;
	if (bParam3)
	{
		Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 9;
	}
	else
	{
		Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 7;
	}
	Global_23150.f_6134++;
	fVar0 = func_466();
	if (bParam2)
	{
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = func_466();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			func_450(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = func_465();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

float func_465()//Position - 0x26163
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_23150.f_4824[((Global_23150.f_5615 - iVar1) + iVar0)] != 0)
		{
			if (func_450(Global_23150.f_4824[((Global_23150.f_5615 - iVar1) + iVar0)], 1, 0, &fVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_466()//Position - 0x26216
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_429(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(Global_23150.f_79[Global_23150.f_6133 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_23150.f_6134)
	{
		if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(Global_23150.f_6133 + iVar8) /*6*/]));
			}
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_23150.f_79[(Global_23150.f_6133 + iVar8) /*6*/]));
			}
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23150.f_4309[((Global_23150.f_5613 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23150.f_4566[((Global_23150.f_5614 - iVar4) + iVar10)], Global_23150.f_4695[((Global_23150.f_5614 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_23150.f_2387[Global_23150.f_6133 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2725950[((Global_23150.f_5612 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_23150.f_79[Global_23150.f_6133 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(true);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_23150.f_4824[((Global_23150.f_5615 - iVar5) + iVar7)] != 0)
		{
			func_450(Global_23150.f_4824[((Global_23150.f_5615 - iVar5) + iVar7)], 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_467(char* sParam0, bool bParam1)//Position - 0x2665D
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_23150.f_5611 >= 256)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	StringCopy(&(Global_23150.f_79[Global_23150.f_5611 /*6*/]), sParam0, 24);
	Global_23150.f_5611++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 1;
	Global_23150.f_6134++;
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = func_466();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			func_450(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = func_465();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

struct<16> func_468(int iParam0, int iParam1, bool bParam2)//Position - 0x26799
{
	struct<16> Var0;
	
	if (bParam2)
	{
	}
	if (iParam0 == -1)
	{
		if (func_469(iParam1) != -1)
		{
			Var0 = { Global_2359296[func_184() /*5567*/].f_7.f_105[func_469(iParam1) /*16*/] };
		}
	}
	else if (iParam0 > -1 && iParam0 < 30)
	{
		Var0 = { Global_2359296[func_184() /*5567*/].f_7.f_105[iParam0 /*16*/] };
	}
	else if (bParam2)
	{
	}
	return Var0;
}

int func_469(int iParam0)//Position - 0x26811
{
	int iVar0;
	
	func_404(Global_4282954, &iVar0);
	if ((((iVar0 >= 227 && iVar0 < 257) && iParam0 == -1) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && !func_525())
	{
		return (iVar0 - 227);
	}
	if (iParam0 != -1)
	{
		if (iParam0 >= 227 && iParam0 < 257)
		{
			return (iParam0 - 227);
		}
	}
	return -1;
}

int func_470(int iParam0)//Position - 0x26880
{
	switch (iParam0)
	{
		case joaat("faction3"):
		case joaat("contender"):
			return 0;
			break;
	}
	return 1;
}

int func_471(int iParam0, var uParam1, int iParam2)//Position - 0x268A3
{
	switch (iParam0)
	{
		case joaat("banshee"):
		case joaat("banshee2"):
			if (!BitTest(uParam1, 1))
			{
				return 1;
			}
			break;
		
		case joaat("stinger"):
		case joaat("coquette2"):
		case joaat("coquette3"):
			if (!BitTest(uParam1, 1))
			{
				return 1;
			}
			break;
		
		case joaat("chino"):
		case joaat("voltic"):
		case joaat("stalion"):
		case joaat("chino2"):
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("faction3"):
			if (!BitTest(uParam1, 1) && !BitTest(uParam1, 2))
			{
				return 1;
			}
			break;
		
		case joaat("buccaneer2"):
		case joaat("peyote2"):
		case joaat("peyote3"):
			if ((!BitTest(uParam1, 1) && !BitTest(uParam1, 2)) && !BitTest(uParam1, 3))
			{
				return 1;
			}
			break;
		
		case joaat("coquette"):
			if (!BitTest(uParam1, 1) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case joaat("mamba"):
			if (!BitTest(uParam1, 2))
			{
				return 1;
			}
			break;
		
		case joaat("pfister811"):
			if (!BitTest(uParam1, 0) && iParam2 != 1)
			{
				return 1;
			}
			break;
		
		case joaat("contender"):
		case joaat("kamacho"):
			if (!BitTest(uParam1, 0))
			{
				return 1;
			}
			break;
		
		case joaat("manana2"):
			if (BitTest(uParam1, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_472(var uParam0)//Position - 0x269E7
{
	switch (uParam0->f_66)
	{
		case joaat("windsor"):
			if (uParam0->f_67 > 0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x26A0E
{
	return (func_291(iParam0) - func_457(iParam0));
}

void func_474(int iParam0, bool bParam1, int iParam2)//Position - 0x26A23
{
	int iVar0;
	int iVar1;
	
	Global_23150.f_6130 = iParam0;
	Global_23150.f_6265 = iParam2;
	if (Global_23150.f_6130 < Global_23150.f_6129)
	{
		Global_23150.f_6129 = Global_23150.f_6130;
	}
	else if ((Global_23150.f_6120 && Global_23150.f_6130 > Global_23150.f_6131) || (!Global_23150.f_6120 && Global_23150.f_6130 >= (Global_23150.f_6129 + Global_23150.f_5616)))
	{
		iVar0 = Global_23150.f_6129;
		while (iVar0 <= Global_23150.f_6130)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_23150.f_5480[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_23150.f_5616 && Global_23150.f_6129 < 128)
		{
			Global_23150.f_6129++;
			iVar1 = 0;
			iVar0 = Global_23150.f_6129;
			while (iVar0 <= Global_23150.f_6130)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_23150.f_5480[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_23150.f_5081), "", 24);
		StringCopy(&(Global_4539885.f_21), "", 16);
	}
}

int func_475(int iParam0)//Position - 0x26B73
{
	return (1000 + iParam0);
}

char* func_476(int iParam0)//Position - 0x26B81
{
	switch (iParam0)
	{
		case 0:
			return "GRTRUCK";
		
		case 2:
			return "MP_BHUB_CLUBT";
		
		case 1:
			return "MP_BHUB_GAR0";
		
		case 3:
			return "MP_BHUB_SUB";
		
		default:
	}
	return "";
}

int func_477(int iParam0, int iParam1)//Position - 0x26BC7
{
	if (!func_486(iParam1) && !func_406(iParam0))
	{
		if (func_485(iParam0, 0))
		{
			if (iParam1 == func_484(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (func_483(iParam1))
		{
			return 0;
		}
	}
	if (func_394(iParam0))
	{
		if (!func_403(iParam1))
		{
			return 0;
		}
	}
	else if (func_403(iParam1))
	{
		return 0;
	}
	if (func_482(iParam1))
	{
		if (!(VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)))
		{
			return 0;
		}
	}
	if (func_486(iParam1))
	{
		if (!func_406(iParam0))
		{
			return 0;
		}
		else if ((func_481(iParam0) + func_456(11)) != iParam1)
		{
			return 0;
		}
	}
	if (func_480(iParam1))
	{
		if (!func_363(iParam0))
		{
			return 0;
		}
	}
	else if (func_363(iParam0))
	{
		return 0;
	}
	if (!func_479(iParam1, 1))
	{
		if (func_478(iParam0))
		{
			return 0;
		}
	}
	if (iParam1 == 223 && iParam0 != joaat("oppressor2"))
	{
		return 0;
	}
	if ((iParam1 == 278 && iParam0 != joaat("toreador")) && iParam0 != joaat("stromberg"))
	{
		return 0;
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_478(int iParam0)//Position - 0x26D7D
{
	switch (iParam0)
	{
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
		case joaat("cerberus"):
		case joaat("cerberus2"):
		case joaat("cerberus3"):
			return 1;
			break;
	}
	return 0;
}

int func_479(int iParam0, bool bParam1)//Position - 0x26DCA
{
	if (iParam0 >= func_456(18) && iParam0 < func_283(20))
	{
		return 1;
	}
	if (bParam1)
	{
		if ((iParam0 == 236 || iParam0 == 246) || iParam0 == 256)
		{
			return 1;
		}
	}
	return 0;
}

int func_480(int iParam0)//Position - 0x26E19
{
	if (iParam0 >= func_456(12) && iParam0 < func_283(12))
	{
		return 1;
	}
	return 0;
}

int func_481(int iParam0)//Position - 0x26E40
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case joaat("technical2"):
			return 0;
			break;
		
		case joaat("boxville5"):
			return 1;
			break;
		
		case joaat("wastelander"):
			return 2;
			break;
		
		case joaat("phantom2"):
			return 3;
			break;
		
		case joaat("voltic2"):
			return 4;
			break;
		
		case joaat("dune4"):
			return 5;
			break;
		
		case joaat("dune5"):
			return 5;
			break;
		
		case joaat("ruiner2"):
			return 6;
			break;
		
		case joaat("blazer5"):
			return 7;
			break;
	}
	return -1;
}

int func_482(int iParam0)//Position - 0x26EC9
{
	if (iParam0 >= func_456(6) && iParam0 < func_283(6))
	{
		return 1;
	}
	return 0;
}

int func_483(int iParam0)//Position - 0x26EEE
{
	switch (iParam0)
	{
		case 157:
		case 158:
		case 190:
		case 188:
		case 187:
		case 186:
		case 189:
		case 222:
		case 224:
		case 225:
		case 226:
		case 257:
		case 279:
			return 1;
			break;
	}
	if (iParam0 >= func_456(11) && iParam0 < func_283(11))
	{
		return 1;
	}
	return 0;
}

int func_484(int iParam0)//Position - 0x26F71
{
	if (func_406(iParam0))
	{
		return (func_481(iParam0) + func_456(11));
	}
	else
	{
		switch (iParam0)
		{
			case joaat("trailersmall2"):
				return 157;
				break;
			
			case joaat("hauler2"):
			case joaat("phantom3"):
				return 158;
				break;
			
			case joaat("avenger"):
				return 190;
				break;
			
			case joaat("khanjali"):
				return 188;
				break;
			
			case joaat("chernobog"):
				return 187;
				break;
			
			case joaat("riot2"):
				return 186;
				break;
			
			case joaat("thruster"):
				return 189;
				break;
		}
		if (iParam0 == joaat("terbyte"))
		{
			return 222;
		}
		else if (iParam0 == joaat("speedo4"))
		{
			return 224;
		}
		else if (iParam0 == joaat("mule4"))
		{
			return 225;
		}
		else if (iParam0 == joaat("pounder2"))
		{
			return 226;
		}
		if (iParam0 == joaat("rcbandito"))
		{
			return 257;
		}
		if (iParam0 == joaat("minitank"))
		{
			return 279;
		}
	}
	return -1;
}

int func_485(int iParam0, bool bParam1)//Position - 0x2706A
{
	if (func_406(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("trailersmall2"):
		case joaat("hauler2"):
		case joaat("phantom3"):
			if (!bParam1)
			{
				return 1;
			}
			break;
		
		case joaat("avenger"):
		case joaat("khanjali"):
		case joaat("chernobog"):
		case joaat("riot2"):
		case joaat("thruster"):
		case joaat("speedo4"):
		case joaat("mule4"):
		case joaat("pounder2"):
		case joaat("terbyte"):
		case joaat("rcbandito"):
		case joaat("minitank"):
			return 1;
			break;
	}
	return 0;
}

int func_486(int iParam0)//Position - 0x270EF
{
	if (iParam0 >= func_456(11) && iParam0 < func_283(11))
	{
		return 1;
	}
	return 0;
}

void func_487(char* sParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x27116
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_23150.f_5612 >= 40)
	{
		return;
	}
	if (Global_23150.f_6134 >= 4)
	{
		return;
	}
	if (Global_23150.f_6135 != 1)
	{
		return;
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		return;
	}
	StringCopy(&(Global_2725950[Global_23150.f_5612 /*16*/]), sParam0, 64);
	Global_23150.f_5612++;
	Global_23150.f_2387[Global_23150.f_6133 /*5*/][Global_23150.f_6134] = 5;
	Global_23150.f_6134++;
	fVar0 = 0f;
	if (bParam3)
	{
		fVar0 = func_466();
	}
	if (bParam2)
	{
	}
	if (Global_23150.f_6134 >= Global_23150.f_6132)
	{
		fVar0 = func_466();
		if (Global_23150.f_5466[Global_23150.f_5610] && Global_23150.f_6134 == Global_23150.f_6132)
		{
			func_450(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_23150.f_5459[(Global_23150.f_5610 - 1)])
		{
			Global_23150.f_5459[(Global_23150.f_5610 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_23150.f_6134 >= Global_23150.f_6132)
		{
			fVar3 = func_465();
			if (fVar3 > Global_23150.f_6136[Global_23150.f_5609])
			{
				Global_23150.f_6136[Global_23150.f_5609] = fVar3;
			}
		}
	}
}

int func_488(int iParam0)//Position - 0x27263
{
	if ((iParam0 == 83 || iParam0 == 84) || iParam0 == 85)
	{
		return 1;
	}
	return 0;
}

int func_489()//Position - 0x2728E
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 9:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_490()//Position - 0x272B0
{
	switch (LOCALIZATION::GET_CURRENT_LANGUAGE())
	{
		case 7:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

char* func_491(int iParam0)//Position - 0x272D2
{
	switch (iParam0)
	{
		case 1:
			return "ARENA_GAR_F0";
			break;
		
		case 2:
			return "ARENA_GAR_F1";
			break;
		
		case 3:
			return "ARENA_GAR_F2";
			break;
	}
	return "";
}

char* func_492(int iParam0)//Position - 0x27314
{
	switch (iParam0)
	{
		case 1:
			return "MP_BHUB_GAR1";
			break;
		
		case 2:
			return "MP_BHUB_GAR2";
			break;
		
		case 3:
			return "MP_BHUB_GAR3";
			break;
	}
	return "";
}

char* func_493(int iParam0)//Position - 0x27356
{
	switch (iParam0)
	{
		case 1:
			return "MP_DBASE_1";
			break;
		
		case 2:
			return "MP_DBASE_2";
			break;
		
		case 3:
			return "MP_DBASE_3";
			break;
		
		case 4:
			return "MP_DBASE_4";
			break;
		
		case 5:
			return "MP_DBASE_6";
			break;
		
		case 6:
			return "MP_DBASE_7";
			break;
		
		case 7:
			return "MP_DBASE_8";
			break;
		
		case 8:
			return "MP_DBASE_9";
			break;
		
		case 9:
			return "MP_DBASE_10";
			break;
	}
	return "";
}

int func_494(int iParam0)//Position - 0x273F8
{
	if (iParam0 != func_8())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_285;
	}
	return 0;
}

char* func_495(int iParam0)//Position - 0x2741C
{
	switch (iParam0)
	{
		case 1:
			return "MP_HANGAR_1";
			break;
		
		case 2:
			return "MP_HANGAR_2";
			break;
		
		case 3:
			return "MP_HANGAR_3";
			break;
		
		case 4:
			return "MP_HANGAR_4";
			break;
		
		case 5:
			return "MP_HANGAR_5";
			break;
	}
	return "";
}

int func_496(int iParam0)//Position - 0x2747E
{
	if (iParam0 != func_8())
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_278;
	}
	return 0;
}

int func_497(int iParam0, int iParam1)//Position - 0x274A2
{
	int iVar0;
	
	if (iParam0 == joaat("minitank"))
	{
		return 0;
	}
	if ((((iParam0 == joaat("thruster") || iParam0 == joaat("khanjali")) || iParam0 == joaat("riot2")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("avenger"))
	{
		if (iParam1 == 13)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 != 11)
	{
		if (func_406(iParam0))
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (((((iParam0 == joaat("bruiser") || iParam0 == joaat("bruiser2")) || iParam0 == joaat("bruiser3")) || iParam0 == joaat("monster3")) || iParam0 == joaat("monster4")) || iParam0 == joaat("monster5"))
	{
		if ((iParam1 == 18 || iParam1 == 19) || iParam1 == 20)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("speedo4") || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2"))
	{
		if (((iParam1 == 14 || iParam1 == 15) || iParam1 == 16) || iParam1 == 17)
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_363(iParam0))
	{
		if (iParam1 == 12)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 12)
	{
		return 0;
	}
	if (iParam0 == func_498())
	{
		if (iParam1 == 15)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam1 == 6)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
		{
			return 0;
		}
		else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iParam1 == 5)
	{
		return 0;
	}
	else if ((((((((((((((iParam1 == 8 || iParam1 == 9) || iParam1 == 10) || iParam1 == 13) || iParam1 == 14) || iParam1 == 15) || iParam1 == 16) || iParam1 == 17) || iParam1 == 18) || iParam1 == 19) || iParam1 == 20) || iParam1 == 21) || iParam1 == 22) || iParam1 == 25) || iParam1 == 26)
	{
		if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
		{
			return 0;
		}
	}
	else if (iParam1 == 11)
	{
		iVar0 = func_481(iParam0);
		if (iVar0 == -1)
		{
			return 0;
		}
	}
	return 1;
}

int func_498()//Position - 0x27798
{
	return joaat("terbyte");
}

int func_499(int iParam0)//Position - 0x277A5
{
	if (iParam0 == 22)
	{
		if (!func_502())
		{
			return 0;
		}
	}
	else if (iParam0 == 25)
	{
		if (!func_500(1))
		{
			return 0;
		}
	}
	return 1;
}

bool func_500(bool bParam0)//Position - 0x277D8
{
	if (bParam0)
	{
		return BitTest(func_21(9618, -1, 0), 0);
	}
	return func_501(PLAYER::PLAYER_ID());
}

int func_501(int iParam0)//Position - 0x277FB
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return BitTest(func_21(9618, -1, 0), 0);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_1, 0);
	}
	return 0;
}

bool func_502()//Position - 0x27830
{
	return (func_505(0) && func_503(0));
}

int func_503(bool bParam0)//Position - 0x27847
{
	if (bParam0)
	{
		return BitTest(func_21(8726, -1, 0), 4);
	}
	return func_504(PLAYER::PLAYER_ID());
}

int func_504(int iParam0)//Position - 0x2786A
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return BitTest(func_21(8726, -1, 0), 4);
	}
	if (iParam0 != -1)
	{
		return BitTest(Global_1970897[iParam0 /*68*/].f_40, 4);
	}
	return 0;
}

int func_505(bool bParam0)//Position - 0x2789F
{
	if (bParam0)
	{
		return func_506(27227, -1);
	}
	if (PLAYER::PLAYER_ID() != func_8())
	{
		return BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_408.f_1, 2);
	}
	return 0;
}

bool func_506(int iParam0, int iParam1)//Position - 0x278DB
{
	if (iParam1 == -1)
	{
		iParam1 = func_18();
	}
	return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_507(int iParam0)//Position - 0x278F7
{
	switch (iParam0)
	{
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
			return 0;
			break;
	}
	return 1;
}

void func_508(char* sParam0)//Position - 0x2792C
{
	int iVar0;
	
	StringCopy(&(Global_23150.f_1), sParam0, 16);
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_509(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x27977
{
	Global_23150.f_5466[0] = iParam0;
	Global_23150.f_5466[1] = iParam1;
	Global_23150.f_5466[2] = iParam2;
	Global_23150.f_5466[3] = iParam3;
	Global_23150.f_5466[4] = iParam4;
}

void func_510(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x279B6
{
	Global_23150.f_5474[0] = iParam0;
	Global_23150.f_5474[1] = iParam1;
	Global_23150.f_5474[2] = iParam2;
	Global_23150.f_5474[3] = iParam3;
	Global_23150.f_5474[4] = iParam4;
}

void func_511(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x279F5
{
	Global_23150.f_5447[0] = iParam0;
	Global_23150.f_5447[1] = iParam1;
	Global_23150.f_5447[2] = iParam2;
	Global_23150.f_5447[3] = iParam3;
	Global_23150.f_5447[4] = iParam4;
	Global_23150.f_5617 = 0;
	if (iParam0 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam1 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam2 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam3 != 0)
	{
		Global_23150.f_5617++;
	}
	if (iParam4 != 0)
	{
		Global_23150.f_5617++;
	}
}

void func_512(int iParam0, int iParam1)//Position - 0x27A9F
{
	char* sVar0;
	
	sVar0 = func_515(iParam0, iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_513(1, sVar0, sVar0);
	}
}

void func_513(int iParam0, char* sParam1, char* sParam2)//Position - 0x27AC4
{
	Global_23150 = iParam0;
	func_514(29, sParam1, sParam2);
}

void func_514(int iParam0, char* sParam1, char* sParam2)//Position - 0x27ADB
{
	StringCopy(&(Global_23150.f_6411[iParam0 /*16*/]), sParam1, 64);
	StringCopy(&(Global_23150.f_7420[iParam0 /*16*/]), sParam2, 64);
}

char* func_515(int iParam0, int iParam1)//Position - 0x27AFF
{
	switch (iParam0)
	{
		case 0:
			return "ShopUI_Title_HighEndSalon";
			break;
		
		case 1:
		case 4:
		case 6:
			return "ShopUI_Title_Barber";
			break;
		
		case 2:
			return "ShopUI_Title_Barber2";
			break;
		
		case 3:
			return "ShopUI_Title_Barber3";
			break;
		
		case 5:
			return "ShopUI_Title_Barber4";
			break;
		
		case 7:
		case 8:
		case 10:
		case 11:
		case 13:
			return "ShopUI_Title_LowEndFashion";
			break;
		
		case 9:
		case 12:
			return "ShopUI_Title_LowEndFashion2";
			break;
		
		case 14:
		case 15:
		case 16:
		case 17:
			return "ShopUI_Title_MidFashion";
			break;
		
		case 18:
		case 19:
		case 20:
			return "ShopUI_Title_HighEndFashion";
			break;
		
		case 21:
			return "ShopUI_Title_Movie_Masks";
			break;
		
		case 22:
			return "ShopUI_Title_Tattoos";
			break;
		
		case 23:
		case 24:
			return "ShopUI_Title_Tattoos2";
			break;
		
		case 25:
			return "ShopUI_Title_Tattoos3";
			break;
		
		case 26:
			return "ShopUI_Title_Tattoos4";
			break;
		
		case 27:
			return "ShopUI_Title_Tattoos5";
			break;
		
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
			return "ShopUI_Title_GunClub";
			break;
		
		case 39:
		case 40:
		case 41:
		case 43:
			return "ShopUI_Title_Carmod";
			break;
		
		case 42:
			return "ShopUI_Title_Carmod2";
			break;
		
		case 44:
			return "ShopUI_Title_Supermod";
			break;
		
		case 45:
			switch (iParam1)
			{
				case 4:
				case 5:
					return "ShopUI_Title_ClubhouseMod";
					break;
				
				case 10:
					return "ShopUI_Title_GR_GunMod";
					break;
				
				case 12:
					return "ShopUI_Title_SM_Hangar";
				
				case 13:
					return "ShopUI_Title_GR_GunMod";
				
				case 14:
					return "ShopUI_Title_GR_GunMod";
				
				case 15:
					return "ShopUI_Title_GR_GunMod";
				
				case 16:
					return "ShopUI_Title_GR_GunMod";
				
				case 17:
					return "ShopUI_Title_ArenaWar";
				
				case 18:
					return "ShopUI_Title_Los_Santos_Car_Meet";
					break;
				
				case 19:
					return "ShopUI_Title_Auto_Shop";
				
				case 20:
					return "SHOP_BANNER_CLINTON_PARTNER";
			}
			return "ShopUI_Title_IE_ModGarage";
			break;
		
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
			return "ShopUI_Title_GR_GunMod";
		
		case 50:
		case 51:
			return "ShopUI_Title_Casino";
		
		case 54:
			return "ShopUI_Title_Los_Santos_Car_Meet";
		
		case 55:
			return "ShopUI_Title_Los_Santos_Car_Meet";
		
		case 56:
			return "SHOP_BANNER_CLINTON_PARTNER";
			break;
		
		case 57:
			return "SHOP_BANNER_RECORD_A_STUDIOS";
			break;
	}
	return "";
}

int func_516()//Position - 0x27E0A
{
	return Global_100493.f_472;
}

void func_517(bool bParam0, bool bParam1)//Position - 0x27E19
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_23150.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_23150.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		StringCopy(&(Global_2725950[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4309[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_4566[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_23150.f_4824[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_23150.f_5480[iVar0] = 0;
		Global_23150.f_5618[iVar0] = 0;
		Global_23150.f_5747[iVar0] = 0;
		Global_23150.f_6270[iVar0] = 0f;
		Global_23150.f_5876[iVar0] = 0;
		Global_23150.f_6136[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_23150.f_5447[iVar0] = 0;
		Global_23150.f_5459[iVar0] = 0f;
		Global_23150.f_5453[iVar0] = -1f;
		Global_23150.f_5466[iVar0] = 0;
		Global_23150.f_5474[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_23150.f_5355[iVar0 /*4*/]), "", 16);
		Global_23150.f_5404[iVar0] = -1;
		Global_23150.f_5417[iVar0] = 363;
		Global_23150.f_5430[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 63)
	{
		StringCopy(&(Global_23150.f_6411[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_23150.f_7420[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_23150.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4539885.f_16), "", 16);
	Global_4539885.f_20 = -1;
	Global_23150 = 0;
	Global_23150.f_5609 = 0;
	Global_23150.f_5610 = 0;
	Global_23150.f_5611 = 0;
	Global_23150.f_5613 = 0;
	Global_23150.f_5614 = 0;
	Global_23150.f_5615 = 0;
	Global_23150.f_5612 = 0;
	Global_23150.f_6265 = 0;
	Global_23150.f_6405 = 0;
	Global_23150.f_6130 = 0;
	Global_23150.f_6129 = 0;
	Global_23150.f_6131 = 0;
	StringCopy(&(Global_23150.f_5081), "", 24);
	Global_23150.f_5153 = 0;
	Global_23150.f_5154 = 0;
	Global_23150.f_5155 = 0;
	Global_23150.f_5156 = 0;
	Global_23150.f_5157 = 0;
	Global_23150.f_5158 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5087[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_5159 = 0;
	StringCopy(&(Global_4539885.f_21), "", 16);
	Global_4539885.f_61 = 0;
	Global_4539885.f_62 = 0;
	Global_4539885.f_63 = 0;
	Global_4539885.f_64 = 0;
	Global_4539885.f_65 = 0;
	Global_4539885.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4539885.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4539885.f_67 = 0;
	StringCopy(&(Global_23150.f_1), "", 16);
	Global_23150.f_5465 = 0f;
	Global_23150.f_74 = 0;
	Global_23150.f_75 = 0;
	Global_23150.f_76 = 0;
	Global_23150.f_77 = 0;
	Global_23150.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_23150.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_6135 = 0;
	Global_23150.f_6134 = 0;
	Global_23150.f_6132 = 0;
	Global_23150.f_6133 = 0;
	Global_23150.f_5160 = 0;
	Global_23150.f_5161 = 0;
	Global_23150.f_5616 = 10;
	Global_23150.f_5617 = 0;
	Global_23150.f_6267 = 0f;
	Global_23150.f_6268 = 0f;
	Global_23150.f_6119 = 0;
	Global_23150.f_6120 = 0;
	Global_23150.f_6121 = 0f;
	Global_23150.f_6122 = 0;
	Global_23150.f_6124 = 0;
	Global_23150.f_6123 = 0;
	Global_23150.f_6125 = 0;
	Global_23150.f_6126 = 0;
	Global_23150.f_6127 = 0;
	Global_23150.f_6128 = 0;
	Global_23150.f_8804 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_23150.f_6399[iVar0] = -1;
		Global_23150.f_6402[iVar0] = -1;
		iVar0++;
	}
	Global_23150.f_5472 = 0f;
	Global_23150.f_5443 = 0;
	Global_23150.f_5473 = 0;
	iVar0 = 0;
	while (iVar0 < Global_23150.f_6406)
	{
		Global_23150.f_6406[iVar0] = 0;
		iVar0++;
	}
	Global_23150.f_8783 = 0;
	Global_23150.f_8778 = 0;
	Global_23150.f_8788 = 0;
	Global_23150.f_8793 = 0;
	Global_23150.f_8798 = 0;
	Global_23150.f_8800 = 0;
	Global_23150.f_8806 = 0;
	Global_23147 = 0.05f;
	Global_23148 = 0.05f;
	Global_23149 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(false);
	if (bParam0)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_23149 = (0.225f * (1.777778f / fVar2));
	}
	else
	{
		Global_23149 = 0.225f;
	}
}

bool func_518(char* sParam0, int iParam1, bool bParam2)//Position - 0x28304
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_103(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_23150.f_6026[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23150.f_6026[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_23150.f_6026[iVar0 /*4*/]), 9);
		Global_23150.f_6019[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_23150.f_6026[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_23150.f_6005[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23150.f_6012[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_23150.f_6051[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_519(&(Global_23150.f_6051[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_519(var uParam0)//Position - 0x283FA
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_520(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2849C
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_USING_KEYBOARD(2))
	{
		Global_4539961 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(true);
	fVar0 = Global_23147;
	fVar2 = (fVar0 + Global_23149);
	fVar3 = Global_23150.f_6121;
	fVar1 = (Global_23150.f_6121 - (IntToFloat(Global_23150.f_6123) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_23150.f_6123 < 1)
	{
		fVar1 = (Global_23150.f_6121 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_GET_SCRIPT_GFX_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_522();
	if (Global_4539961 == -6)
	{
		return;
	}
	Global_4539961 = -1;
	fVar7 = Global_4539955;
	fVar8 = Global_4539956;
	if (Global_23150.f_6124 > Global_23150.f_6123)
	{
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= fVar3) && Global_4539956 < (fVar3 + fVar6))
		{
			Global_4539961 = -2;
			if (bParam3)
			{
				func_521(0);
			}
			return;
		}
		if (((Global_4539955 >= fVar0 && Global_4539955 <= fVar2) && Global_4539956 >= (fVar3 + fVar6)) && Global_4539956 < (fVar3 + 0.034722f))
		{
			Global_4539961 = -3;
			if (bParam3)
			{
				func_521(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_23150.f_6124 == -1)
		{
			Global_4539961 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_23150.f_6123);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_440(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_23149, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4539961 = Global_23150.f_8429[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4539961 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4539961 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4539961 = -4;
		return;
	}
	Global_4539961 = -1;
}

void func_521(bool bParam0)//Position - 0x28748
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_23147;
	fVar1 = Global_23150.f_6121;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4539961 == -2)
	{
		func_440(fVar0, fVar1, Global_23149, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4539961 == -3)
	{
		func_440(fVar0, (fVar1 + fVar2), Global_23149, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_522()//Position - 0x287D1
{
	Global_4539957 = Global_4539955;
	Global_4539958 = Global_4539956;
	Global_4539955 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4539956 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4539959 = (Global_4539955 - Global_4539957);
	Global_4539960 = (Global_4539956 - Global_4539958);
}

void func_523()//Position - 0x28819
{
	Global_2815059.f_4599 = 0;
}

void func_524(var uParam0, int iParam1, bool bParam2)//Position - 0x28829
{
	if (BitTest(uParam0->f_370, 7))
	{
		bParam2 = true;
	}
	*uParam0 = 0;
	uParam0->f_367 = 0;
	uParam0->f_369 = 0;
	uParam0->f_370 = 0;
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_370), 7);
	}
	uParam0->f_373 = 0;
	func_101(1, iParam1);
}

bool func_525()//Position - 0x28870
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_192 != 0;
}

int func_526(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x28887
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (Global_262145.f_10629)
	{
		if (bParam5)
		{
			return func_531(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
		else
		{
			return func_534(iParam0, bParam1, iParam2, iParam3, iParam4, 0);
		}
	}
	if (func_287(iParam3, 0, 0))
	{
		iParam3 = func_530(iParam3);
	}
	if (!func_406(iParam2) && func_485(iParam2, 0))
	{
		iVar6 = func_484(iParam2);
		if (iVar6 >= 0)
		{
			if (bParam5)
			{
				func_529(iVar6, &iVar7, iParam4);
			}
			else
			{
				func_414(iVar6, &iVar7, 1);
			}
			if (iVar7 >= 0)
			{
				if (bParam5)
				{
					if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
					{
						return iVar7;
					}
					else
					{
						iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
						if (bParam1)
						{
							if (BitTest(iVar5, 0))
							{
								return iVar7;
							}
						}
					}
				}
				else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
				{
					return iVar6;
				}
				else if (bParam1)
				{
					if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
					{
						return iVar6;
					}
				}
			}
			else
			{
				return iVar6;
			}
		}
		return -1;
	}
	if (((func_21(5396, iParam4, 0) != 0 && func_67(15270, iParam4) == 7) && !Global_262145.f_21126) && func_477(iParam2, 156))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1234)
		{
			iVar6 = func_528(156, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_418(iParam4) && func_477(iParam2, 223))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1236)
		{
			iVar6 = func_528(223, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_416(iParam4) && func_477(iParam2, 278))
	{
		if ((iParam3 == 0 || iParam3 == -1) || iParam3 == 1238)
		{
			iVar6 = func_528(278, iParam0, bParam1, iParam2, iParam4, bParam5);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if (func_527(iVar1))
		{
		}
		else if (func_415(iVar1, iParam4) >= Global_1312193)
		{
			return -1;
		}
		else if (func_415(iVar1, iParam4) > 0 && func_415(iVar1, iParam4) <= 128)
		{
			iVar2 = 0;
			if ((iParam3 == 0 || iParam3 == -1) || iParam3 == func_415(iVar1, iParam4))
			{
				iVar4 = Global_1312193[func_415(iVar1, iParam4) /*1951*/].f_33;
				if (func_415(iVar1, iParam4) == 116)
				{
					iVar4 = 20;
				}
				else if (func_415(iVar1, iParam4) == 117)
				{
					iVar4 = 7;
				}
				else if (func_415(iVar1, iParam4) == 118)
				{
					iVar4 = 1;
				}
				else if ((func_415(iVar1, iParam4) == 119 || func_415(iVar1, iParam4) == 120) || func_415(iVar1, iParam4) == 121)
				{
					iVar4 = 10;
				}
				else if ((func_415(iVar1, iParam4) == 122 || func_415(iVar1, iParam4) == 123) || func_415(iVar1, iParam4) == 124)
				{
					iVar4 = 10;
				}
				else if (func_415(iVar1, iParam4) == 125)
				{
					iVar4 = 10;
				}
				else if (func_415(iVar1, iParam4) == 126)
				{
					iVar4 = 10;
				}
				else if (func_415(iVar1, iParam4) == 127)
				{
					iVar4 = 10;
				}
				else if (func_415(iVar1, iParam4) == 128)
				{
					iVar4 = 20;
				}
				if (func_394(iParam2))
				{
					if (iVar4 == 10)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 6)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_456(iVar1));
				iVar7 = -1;
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_463(iVar6, func_415(iVar1, iParam4), iVar1) && func_477(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_529(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_414(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
										{
											return iVar7;
										}
										else
										{
											iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (BitTest(iVar5, 0))
												{
													return iVar7;
												}
											}
										}
									}
									else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_463(iVar6, func_415(iVar1, iParam4), iVar1) && func_477(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_529(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_414(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
									}
									else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = -1;
								iVar6 = (iVar2 + iVar0);
								if (func_463(iVar6, func_415(iVar1, iParam4), iVar1) && func_477(iParam2, iVar6))
								{
									if (bParam5)
									{
										func_529(iVar6, &iVar7, iParam4);
									}
									else
									{
										func_414(iVar6, &iVar7, 1);
									}
									if (iVar7 >= 0)
									{
										if (bParam5)
										{
											iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
											if (BitTest(iVar5, 0))
											{
												return iVar6;
											}
										}
										else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
									}
									else
									{
										return iVar6;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_463(iVar6, func_415(iVar1, iParam4), iVar1) && func_477(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_529(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_414(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
										if (BitTest(iVar5, 1) && !BitTest(iVar5, 2))
										{
											return iVar6;
										}
									}
									else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 1) && !BitTest(Global_1585857[iVar7 /*142*/].f_103, 2))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = -1;
							iVar6 = (iVar2 + iVar0);
							if (func_463(iVar6, func_415(iVar1, iParam4), iVar1) && func_477(iParam2, iVar6))
							{
								if (bParam5)
								{
									func_529(iVar6, &iVar7, iParam4);
								}
								else
								{
									func_414(iVar6, &iVar7, 1);
								}
								if (iVar7 >= 0)
								{
									if (bParam5)
									{
										if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
										{
											return iVar6;
										}
										else
										{
											iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
											if (bParam1)
											{
												if (BitTest(iVar5, 0))
												{
													return iVar6;
												}
												else if (BitTest(iVar5, 1))
												{
													return iVar6;
												}
											}
											else if (BitTest(iVar5, 1))
											{
												return iVar6;
											}
										}
									}
									else if (Global_1585857[iVar7 /*142*/].f_66 == 0)
									{
										return iVar6;
									}
									else if (bParam1)
									{
										if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 0))
										{
											return iVar6;
										}
										else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 1))
										{
											return iVar6;
										}
									}
									else if (BitTest(Global_1585857[iVar7 /*142*/].f_103, 1))
									{
										return iVar6;
									}
								}
								else
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	return -1;
}

int func_527(int iParam0)//Position - 0x29093
{
	switch (iParam0)
	{
		case 5:
		case 99:
			return 1;
			break;
		
		case 22:
			if (!func_502())
			{
				return 1;
			}
			break;
		
		case 25:
			if (!func_500(1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_528(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x290E1
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	switch (iParam1)
	{
		case 0:
			if (func_477(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_529(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_414(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_21(func_281(4, iVar1), iParam4, 0) == 0)
						{
							return iVar1;
						}
						else
						{
							iVar0 = func_21(func_281(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (BitTest(iVar0, 0))
								{
									return iVar1;
								}
							}
						}
					}
					else if (Global_1585857[iVar1 /*142*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 0))
						{
							return iParam0;
						}
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		
		case 1:
			iVar1 = -1;
			if (func_477(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_529(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_414(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_21(func_281(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
					}
					else if (Global_1585857[iVar1 /*142*/].f_66 == 0)
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			iVar1 = -1;
			if (bParam2)
			{
				if (func_477(iParam3, iParam0))
				{
					if (bParam5)
					{
						func_529(iParam0, &iVar1, iParam4);
					}
					else
					{
						func_414(iParam0, &iVar1, 1);
					}
					if (iVar1 >= 0)
					{
						if (bParam5)
						{
							iVar0 = func_21(func_281(1, iVar1), iParam4, 0);
							if (BitTest(iVar0, 0))
							{
								return iParam0;
							}
						}
						else if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 0))
						{
							return iParam0;
						}
					}
					else
					{
						return iParam0;
					}
				}
			}
			iVar1 = -1;
			if (func_477(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_529(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_414(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						iVar0 = func_21(func_281(1, iVar1), iParam4, 0);
						if (BitTest(iVar0, 1) && !BitTest(iVar0, 2))
						{
							return iParam0;
						}
					}
					else if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 1) && !BitTest(Global_1585857[iVar1 /*142*/].f_103, 2))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
		
		case 2:
			iVar1 = -1;
			if (func_477(iParam3, iParam0))
			{
				if (bParam5)
				{
					func_529(iParam0, &iVar1, iParam4);
				}
				else
				{
					func_414(iParam0, &iVar1, 1);
				}
				if (iVar1 >= 0)
				{
					if (bParam5)
					{
						if (func_21(func_281(4, iVar1), iParam4, 0) == 0)
						{
							return iParam0;
						}
						else
						{
							iVar0 = func_21(func_281(1, iVar1), iParam4, 0);
							if (bParam2)
							{
								if (BitTest(iVar0, 0))
								{
									return iParam0;
								}
								else if (BitTest(iVar0, 1))
								{
									return iParam0;
								}
							}
							else if (BitTest(iVar0, 1))
							{
								return iParam0;
							}
						}
					}
					else if (Global_1585857[iVar1 /*142*/].f_66 == 0)
					{
						return iParam0;
					}
					else if (bParam2)
					{
						if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 0))
						{
							return iParam0;
						}
						else if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 1))
						{
							return iParam0;
						}
					}
					else if (BitTest(Global_1585857[iVar1 /*142*/].f_103, 1))
					{
						return iParam0;
					}
				}
				else
				{
					return iParam0;
				}
			}
			break;
	}
	return -1;
}

void func_529(int iParam0, int iParam1, int iParam2)//Position - 0x2941B
{
	*iParam1 = (func_459(iParam0, iParam2) - 1);
}

int func_530(int iParam0)//Position - 0x29430
{
	if (((iParam0 == 103 || iParam0 == 106) || iParam0 == 109) || iParam0 == 112)
	{
		return 103;
	}
	if (((iParam0 == 104 || iParam0 == 107) || iParam0 == 110) || iParam0 == 113)
	{
		return 104;
	}
	if (((iParam0 == 105 || iParam0 == 108) || iParam0 == 111) || iParam0 == 114)
	{
		return 105;
	}
	return -1;
}

int func_531(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x294C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	
	bVar6 = func_111();
	bVar6 = true;
	if (func_287(iParam3, 0, 0))
	{
		iParam3 = func_530(iParam3);
	}
	if (!func_406(iParam2) && func_485(iParam2, 0))
	{
		iVar7 = func_484(iParam2);
		return func_533(iVar7, iParam0, bParam1, iParam2, 1, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if ((bVar6 || func_415(iVar1, iParam4) > 0) && !func_527(iVar1))
		{
			iVar2 = 0;
			if ((bVar6 || iParam3 == 0) || iParam3 == func_415(iVar1, iParam4))
			{
				if (bVar6)
				{
					iVar4 = func_284(iVar1, -1, 1);
				}
				else
				{
					iVar4 = Global_1312193[func_415(iVar1, iParam4) /*1951*/].f_33;
				}
				if (func_394(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_456(iVar1));
				iVar7 = 0;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_532(iParam2, iVar7))
							{
								if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (BitTest(iVar5, 0))
										{
											return iVar7;
										}
									}
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_532(iParam2, iVar7))
							{
								if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar7 = (iVar2 + iVar0);
								if (func_532(iParam2, iVar7))
								{
									iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
									if (BitTest(iVar5, 0))
									{
										return iVar7;
									}
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_532(iParam2, iVar7))
							{
								iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
								if (BitTest(iVar5, 1) && !BitTest(iVar5, 2))
								{
									return iVar7;
								}
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar7 = (iVar2 + iVar0);
							if (func_532(iParam2, iVar7))
							{
								if (func_21(func_281(4, iVar7), iParam4, 0) == 0)
								{
									return iVar7;
								}
								else
								{
									iVar5 = func_21(func_281(1, iVar7), iParam4, 0);
									if (bParam1)
									{
										if (BitTest(iVar5, 0))
										{
											return iVar7;
										}
										else if (BitTest(iVar5, 1))
										{
											return iVar7;
										}
									}
									else if (BitTest(iVar5, 1))
									{
										return iVar7;
									}
								}
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((func_21(5396, iParam4, 0) != 0 && !Global_262145.f_21126) && func_477(iParam2, 156))
	{
		iVar7 = func_533(156, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (func_418(iParam4) && func_477(iParam2, 223))
	{
		iVar7 = func_533(223, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	if (func_416(iParam4) && func_477(iParam2, 278))
	{
		iVar7 = func_533(278, iParam0, bParam1, iParam2, 1, iParam4, 0);
		if (iVar7 != -1)
		{
			return iVar7;
		}
	}
	return -1;
}

int func_532(int iParam0, int iParam1)//Position - 0x29853
{
	if (!func_406(iParam0))
	{
		if (func_485(iParam0, 0))
		{
			if (iParam1 == func_484(iParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (!func_486(iParam1) && func_483(iParam1))
		{
			return 0;
		}
	}
	if (func_394(iParam0))
	{
		if (!func_297(iParam1))
		{
			return 0;
		}
	}
	else if (func_297(iParam1))
	{
		return 0;
	}
	if (func_480(iParam1))
	{
		if (!func_363(iParam0))
		{
			return 0;
		}
	}
	else if (func_363(iParam0))
	{
		return 0;
	}
	if ((iParam0 == joaat("cerberus") || iParam0 == joaat("cerberus2")) || iParam0 == joaat("cerberus3"))
	{
		if ((iParam1 != 236 && iParam1 != 246) && iParam1 != 256)
		{
			return 0;
		}
	}
	else if ((iParam1 == 236 || iParam1 == 246) || iParam1 == 256)
	{
		return 0;
	}
	return 1;
}

int func_533(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x2995E
{
	int iVar0;
	
	if (iParam0 == 158 && iParam6)
	{
		if (func_532(iParam3, iParam0))
		{
			if (bParam4)
			{
				if (func_21(func_281(4, iParam0), iParam5, 0) == joaat("hauler2") || func_21(func_281(4, iParam0), iParam5, 0) == joaat("phantom3"))
				{
					return iParam0;
				}
				else if (func_21(func_281(4, iParam0), iParam5, 0) == 0)
				{
					return iParam0;
				}
				else
				{
					return iParam0;
				}
			}
			else if (Global_1585857[iParam0 /*142*/].f_66 == joaat("hauler2") || Global_1585857[iParam0 /*142*/].f_66 == joaat("phantom3"))
			{
				return iParam0;
			}
			else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
			{
				return iParam0;
			}
			else
			{
				return iParam0;
			}
		}
	}
	if (bParam4)
	{
		switch (iParam1)
		{
			case 0:
				if (func_532(iParam3, iParam0))
				{
					if (func_21(func_281(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_21(func_281(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (BitTest(iVar0, 0))
							{
								return iParam0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (func_532(iParam3, iParam0))
				{
					if (func_21(func_281(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
				}
				if (bParam2)
				{
					if (func_532(iParam3, iParam0))
					{
						iVar0 = func_21(func_281(1, iParam0), iParam5, 0);
						if (BitTest(iVar0, 0))
						{
							return iParam0;
						}
					}
				}
				if (func_532(iParam3, iParam0))
				{
					iVar0 = func_21(func_281(1, iParam0), iParam5, 0);
					if (BitTest(iVar0, 1) && !BitTest(iVar0, 2))
					{
						return iParam0;
					}
				}
				break;
			
			case 2:
				if (func_532(iParam3, iParam0))
				{
					if (func_21(func_281(4, iParam0), iParam5, 0) == 0)
					{
						return iParam0;
					}
					else
					{
						iVar0 = func_21(func_281(1, iParam0), iParam5, 0);
						if (bParam2)
						{
							if (BitTest(iVar0, 0))
							{
								return iParam0;
							}
							else if (BitTest(iVar0, 1))
							{
								return iParam0;
							}
						}
						else if (BitTest(iVar0, 1))
						{
							return iParam0;
						}
					}
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (!func_532(iParam3, iParam0))
				{
				}
				else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
				}
				break;
			
			case 1:
				if (!func_532(iParam3, iParam0))
				{
				}
				else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				if (bParam2)
				{
					if (!func_532(iParam3, iParam0))
					{
					}
					else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
				}
				if (!func_532(iParam3, iParam0))
				{
				}
				else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1) && !BitTest(Global_1585857[iParam0 /*142*/].f_103, 2))
				{
					return iParam0;
				}
				else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
				{
				}
				break;
			
			case 2:
				if (!func_532(iParam3, iParam0))
				{
				}
				else if (Global_1585857[iParam0 /*142*/].f_66 == 0)
				{
					return iParam0;
				}
				else if (bParam2)
				{
					if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 0))
					{
						return iParam0;
					}
					else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
					{
						return iParam0;
					}
				}
				else if (BitTest(Global_1585857[iParam0 /*142*/].f_103, 1))
				{
					return iParam0;
				}
				break;
			}
	}
	return -1;
}

int func_534(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x29CE6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	
	bVar5 = func_111();
	bVar5 = true;
	if (func_287(iParam3, 0, 0))
	{
		iParam3 = func_530(iParam3);
	}
	if (iParam3 == 126)
	{
		if (func_415(22, -1) > 0)
		{
			if (!func_502())
			{
				return -1;
			}
		}
	}
	if (iParam3 == 127)
	{
		if (func_415(25, -1) > 0)
		{
			if (!func_500(1))
			{
				return -1;
			}
		}
	}
	if (!func_406(iParam2) && func_485(iParam2, 0))
	{
		iVar6 = func_484(iParam2);
		return func_533(iVar6, iParam0, bParam1, iParam2, 0, iParam4, iParam5);
	}
	iVar1 = 0;
	while (iVar1 < 29)
	{
		if (func_527(iVar1))
		{
		}
		else if (!bVar5 && func_415(iVar1, iParam4) >= Global_1312193)
		{
			return -1;
		}
		else if (bVar5 || (func_415(iVar1, iParam4) > 0 && func_415(iVar1, iParam4) <= 128))
		{
			iVar2 = 0;
			if ((bVar5 || iParam3 == 0) || iParam3 == func_415(iVar1, iParam4))
			{
				if (bVar5)
				{
					iVar4 = func_284(iVar1, -1, 1);
				}
				else
				{
					iVar4 = Global_1312193[func_415(iVar1, iParam4) /*1951*/].f_33;
				}
				if (func_394(iParam2))
				{
					if (iVar4 == 13)
					{
						iVar3 = 3;
					}
					else if (iVar4 == 8)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					iVar2 = 10;
				}
				else
				{
					iVar3 = iVar4;
					iVar2 = 0;
				}
				iVar2 = (iVar2 + func_456(iVar1));
				iVar6 = -1;
				switch (iParam0)
				{
					case 0:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_532(iParam2, iVar6))
							{
							}
							else if (Global_1585857[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
							}
							iVar0++;
						}
						break;
					
					case 1:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_532(iParam2, iVar6))
							{
							}
							else if (Global_1585857[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							iVar0++;
						}
						if (bParam1)
						{
							iVar0 = 0;
							while (iVar0 < iVar3)
							{
								iVar6 = (iVar2 + iVar0);
								if (!func_532(iParam2, iVar6))
								{
								}
								else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
								iVar0++;
							}
						}
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_532(iParam2, iVar6))
							{
							}
							else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1) && !BitTest(Global_1585857[iVar6 /*142*/].f_103, 2))
							{
								return iVar6;
							}
							else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1))
							{
							}
							iVar0++;
						}
						break;
					
					case 2:
						iVar0 = 0;
						while (iVar0 < iVar3)
						{
							iVar6 = (iVar2 + iVar0);
							if (!func_532(iParam2, iVar6))
							{
							}
							else if (Global_1585857[iVar6 /*142*/].f_66 == 0)
							{
								return iVar6;
							}
							else if (bParam1)
							{
								if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 0))
								{
									return iVar6;
								}
								else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1))
								{
									return iVar6;
								}
							}
							else if (BitTest(Global_1585857[iVar6 /*142*/].f_103, 1))
							{
								return iVar6;
							}
							iVar0++;
						}
						break;
					}
				}
		}
		iVar1++;
	}
	if ((func_21(5396, iParam4, 0) != 0 && !Global_262145.f_21126) && func_477(iParam2, 156))
	{
		iVar6 = func_533(156, iParam0, bParam1, iParam2, 0, iParam4, 0);
		if (iVar6 != -1)
		{
			return iVar6;
		}
	}
	if (func_418(iParam4))
	{
		if (func_532(iParam2, 223))
		{
			iVar6 = func_533(223, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	if (func_416(iParam4))
	{
		if (func_532(iParam2, 278))
		{
			iVar6 = func_533(278, iParam0, bParam1, iParam2, 0, iParam4, 0);
			if (iVar6 != -1)
			{
				return iVar6;
			}
		}
	}
	return -1;
}

void func_535(int iParam0, int iParam1)//Position - 0x2A0FF
{
	*iParam1 = -1;
	if (func_415(0, -1) >= 1 && func_497(iParam0, 0))
	{
		if (((((((((((((func_415(1, -1) >= 1 || (func_415(6, -1) >= 1 && func_497(iParam0, 6))) || func_415(8, -1) >= 1) || func_542()) || (func_540() && func_477(iParam0, 159))) || (func_538() && func_497(iParam0, 13))) || (func_536() && func_497(iParam0, 14))) || (func_418(-1) && iParam0 == joaat("oppressor2"))) || (func_415(18, -1) >= 1 && func_497(iParam0, 18))) || (func_415(21, -1) >= 1 && func_497(iParam0, 21))) || ((func_415(22, -1) >= 1 && func_497(iParam0, 22)) && func_502())) || (func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0))) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_415(0, -1);
		return;
	}
	else if (func_415(6, -1) >= 1 && func_497(iParam0, 6))
	{
		if (((((((((((func_415(8, -1) >= 1 || func_542()) || (func_540() && func_477(iParam0, 159))) || (func_538() && func_497(iParam0, 13))) || (func_536() && func_497(iParam0, 14))) || (func_418(-1) && iParam0 == joaat("oppressor2"))) || (func_415(18, -1) >= 1 && func_497(iParam0, 18))) || (func_415(21, -1) >= 1 && func_497(iParam0, 21))) || ((func_415(22, -1) >= 1 && func_497(iParam0, 22)) && func_502())) || (func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0))) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_415(6, -1);
		return;
	}
	else if (func_415(8, -1) >= 1 && func_497(iParam0, 8))
	{
		if ((((((((((func_542() || (func_540() && func_477(iParam0, 159))) || (func_538() && func_497(iParam0, 13))) || (func_536() && func_497(iParam0, 14))) || (func_418(-1) && iParam0 == joaat("oppressor2"))) || (func_415(18, -1) >= 1 && func_497(iParam0, 18))) || (func_415(21, -1) >= 1 && func_497(iParam0, 21))) || ((func_415(22, -1) >= 1 && func_497(iParam0, 22)) && func_502())) || (func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0))) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_415(8, -1);
		return;
	}
	else if (func_542() && func_477(iParam0, 156))
	{
		if ((((((((((func_540() && func_477(iParam0, 159)) || (func_538() && func_497(iParam0, 13))) || (func_536() && func_497(iParam0, 14))) || (func_418(-1) && iParam0 == joaat("oppressor2"))) || (func_415(18, -1) >= 1 && func_497(iParam0, 18))) || (func_415(21, -1) >= 1 && func_497(iParam0, 21))) || ((func_415(22, -1) >= 1 && func_497(iParam0, 22)) && func_502())) || (func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0))) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1234;
		return;
	}
	else if (func_540() && func_477(iParam0, 159))
	{
		if (((((((((func_538() && func_497(iParam0, 13)) || (func_536() && func_497(iParam0, 14))) || (func_418(-1) && iParam0 == joaat("oppressor2"))) || (func_415(18, -1) >= 1 && func_497(iParam0, 18))) || (func_415(21, -1) >= 1 && func_497(iParam0, 21))) || ((func_415(22, -1) >= 1 && func_497(iParam0, 22)) && func_502())) || (func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0))) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_415(12, -1);
		return;
	}
	else if (func_538() && func_497(iParam0, 13))
	{
		if (((((((func_536() && func_497(iParam0, 14)) || (func_415(18, -1) >= 1 && func_497(iParam0, 18))) || (func_415(21, -1) >= 1 && func_497(iParam0, 21))) || ((func_415(22, -1) >= 1 && func_497(iParam0, 22)) && func_502())) || (func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0))) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		if (func_418(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = func_415(13, -1);
		return;
	}
	else if (func_536() && func_497(iParam0, 14))
	{
		if ((((((((func_536() && func_415(15, -1) >= 1) && func_497(iParam0, 15)) || (func_415(18, -1) >= 1 && func_497(iParam0, 18))) || (func_415(21, -1) >= 1 && func_497(iParam0, 21))) || ((func_415(22, -1) >= 1 && func_497(iParam0, 22)) && func_502())) || (func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0))) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		if (func_418(-1) && iParam0 == joaat("oppressor2"))
		{
			return;
		}
		*iParam1 = func_415(14, -1);
		return;
	}
	else if (func_418(-1) && iParam0 == joaat("oppressor2"))
	{
		if (((((func_415(18, -1) >= 1 && func_497(iParam0, 18)) || (func_415(21, -1) >= 1 && func_497(iParam0, 21))) || ((func_415(22, -1) >= 1 && func_497(iParam0, 22)) && func_502())) || ((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0))) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1236;
		return;
	}
	else if (func_415(18, -1) >= 1 && func_497(iParam0, 18))
	{
		if ((((((func_415(19, -1) >= 1 && func_497(iParam0, 18)) || (func_415(21, -1) >= 1 && func_497(iParam0, 21))) || ((func_415(22, -1) >= 1 && func_497(iParam0, 22)) && func_502())) || (func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0))) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_415(18, -1);
		return;
	}
	else if (func_415(21, -1) >= 1 && func_497(iParam0, 21))
	{
		if (((((func_415(22, -1) >= 1 && func_497(iParam0, 22)) && func_502()) || (func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))) || ((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0))) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_415(21, -1);
		return;
	}
	else if ((func_415(22, -1) >= 1 && func_497(iParam0, 22)) && func_502())
	{
		if (((func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg"))) || ((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0))) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_415(22, -1);
		return;
	}
	else if (func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))
	{
		if (((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0)) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		*iParam1 = 1238;
		return;
	}
	else if ((func_415(25, -1) >= 1 && func_497(iParam0, 25)) && func_500(0))
	{
		if ((func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg"))) || (func_415(26, -1) >= 1 && func_497(iParam0, 26)))
		{
			return;
		}
		*iParam1 = func_415(25, -1);
		return;
	}
	else if (func_415(26, -1) >= 1 && func_497(iParam0, 26))
	{
		if (func_416(-1) && (iParam0 == joaat("toreador") || iParam0 == joaat("stromberg")))
		{
			return;
		}
		*iParam1 = func_415(26, -1);
		return;
	}
}

bool func_536()//Position - 0x2AE29
{
	return func_537() != 0;
}

int func_537()//Position - 0x2AE37
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_336;
}

bool func_538()//Position - 0x2AE50
{
	return func_539() != 0;
}

int func_539()//Position - 0x2AE5E
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_285;
}

bool func_540()//Position - 0x2AE77
{
	return func_541() != 0;
}

int func_541()//Position - 0x2AE85
{
	return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_278;
}

bool func_542()//Position - 0x2AE9E
{
	return func_21(5396, -1, 0) != 0;
}

int func_543(int iParam0, int iParam1)//Position - 0x2AEB1
{
	if (func_415(0, iParam1) != 0 && func_497(iParam0, 0))
	{
		return 1;
	}
	else if (func_415(6, iParam1) != 0 && func_497(iParam0, 6))
	{
		return 1;
	}
	else if (func_415(8, iParam1) != 0 && func_497(iParam0, 8))
	{
		return 1;
	}
	else if (func_415(11, iParam1) != 0 && func_497(iParam0, 11))
	{
		return 1;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 1;
	}
	else if (iParam0 == joaat("minitank"))
	{
		return 1;
	}
	else if (((func_21(5396, iParam1, 0) != 0 && func_67(15270, iParam1) == 7) && !Global_262145.f_21126) && func_477(iParam0, 156))
	{
		return 1;
	}
	else if (func_415(12, iParam1) != 0 && func_497(iParam0, 12))
	{
		return 1;
	}
	else if (func_415(13, -1) != 0 && func_497(iParam0, 13))
	{
		return 1;
	}
	else if (func_415(15, iParam1) != 0 && func_497(iParam0, 15))
	{
		return 1;
	}
	else if (func_418(iParam1) && func_477(iParam0, 223))
	{
		return 1;
	}
	else if (func_415(14, -1) != 0 && func_497(iParam0, 14))
	{
		return 1;
	}
	else if (func_415(18, iParam1) != 0 && func_497(iParam0, 18))
	{
		return 1;
	}
	else if (func_415(21, iParam1) != 0 && func_497(iParam0, 21))
	{
		return 1;
	}
	else if ((func_415(22, iParam1) != 0 && func_497(iParam0, 22)) && func_502())
	{
		return 1;
	}
	else if (func_416(iParam1) && func_477(iParam0, 278))
	{
		return 1;
	}
	else if ((func_415(25, iParam1) != 0 && func_497(iParam0, 25)) && func_500(1))
	{
		return 1;
	}
	else if (func_415(26, iParam1) != 0 && func_497(iParam0, 26))
	{
		return 1;
	}
	return 0;
}

int func_544()//Position - 0x2B10E
{
	int iVar0;
	int iVar1;
	
	if (func_25(joaat("mpply_lw_podium_veh_model")) != Global_262145.f_26763)
	{
		return 0;
	}
	iVar0 = func_21(8353, -1, 0);
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (iVar1 > iVar0)
	{
		return 0;
	}
	return 1;
}

int func_545(var uParam0, char* sParam1, int* iParam2, var uParam3, int iParam4, int* iParam5, struct<246> Param6, var uParam7)//Position - 0x2B14D
{
	switch (iParam4)
	{
		case 0:
			return func_768(sParam1, iParam5, -1, 1);
			break;
		
		case 1:
			return func_637(sParam1, iParam2, uParam3);
			break;
		
		case 2:
			return func_717(uParam0, sParam1, uParam7, -1, 1);
			break;
		
		case 3:
			return func_747(uParam0, sParam1, -1, 1);
			break;
		
		case 4:
			return func_760(uParam0, sParam1, -1, 1);
			break;
		
		case 5:
			return func_588(sParam1, uParam3, Param6);
			break;
		
		case 6:
			if (func_586())
			{
				return func_546(sParam1, func_557(0));
			}
			else
			{
				MISC::CLEAR_BIT(iParam5, 19);
			}
			break;
	}
	return 0;
}

int func_546(char* sParam0, int iParam1)//Position - 0x2B20F
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		switch (iParam1)
		{
			case 0:
				iVar0 = 5;
				func_552(iVar0);
				break;
			
			case 1:
				iVar0 = func_550(PLAYER::PLAYER_ID(), 1);
				func_552(iVar0);
				break;
			
			case 2:
				iVar0 = func_550(PLAYER::PLAYER_ID(), 3);
				func_552(iVar0);
				break;
			
			case 3:
				iVar0 = func_550(PLAYER::PLAYER_ID(), 4);
				func_552(iVar0);
				break;
			
			case 4:
				iVar0 = func_550(PLAYER::PLAYER_ID(), 2);
				func_552(iVar0);
				break;
			
			case 5:
				iVar0 = func_550(PLAYER::PLAYER_ID(), 0);
				func_552(iVar0);
				break;
			
			case 6:
			case 7:
			case 8:
			case 9:
			case 10:
			case 11:
				func_548(func_549(iParam1));
				break;
		}
		StringCopy(sParam0, func_547(iParam1), 64);
		return 1;
	}
	else if (iParam1 == -1)
	{
	}
	return 0;
}

char* func_547(int iParam0)//Position - 0x2B301
{
	switch (iParam0)
	{
		case 0:
			return "AMDO_OBJ_140";
			break;
		
		case 1:
			return "AMDO_OBJ_136";
			break;
		
		case 2:
			return "AMDO_OBJ_138";
			break;
		
		case 3:
			return "AMDO_OBJ_135";
			break;
		
		case 4:
			return "AMDO_OBJ_137";
			break;
		
		case 5:
			return "AMDO_OBJ_139";
			break;
		
		case 6:
			return "BYCB_FREEL";
			break;
		
		case 7:
			return "BYCB_SASHDE";
			break;
		
		case 8:
			return "BYCB_MGUN";
			break;
		
		case 9:
			return "BYCB_EGG";
			break;
		
		case 10:
			return "BYCB_DMND";
			break;
		
		case 11:
			return "BYCB_WATCH";
			break;
	}
	return "INVALID";
}

void func_548(int iParam0)//Position - 0x2B3D4
{
	if (0 == iParam0)
	{
		return;
	}
	if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "CASINO_LUCKY_WHEEL"))
	{
		return;
	}
	Global_1966186 = iParam0;
}

int func_549(int iParam0)//Position - 0x2B3FE
{
	switch (iParam0)
	{
		case 6:
			return 5;
		
		case 7:
			return 4;
		
		case 8:
			return 2;
		
		case 9:
			return 1;
		
		case 10:
			return 3;
		
		case 11:
			return 6;
		
		default:
	}
	return 0;
}

int func_550(int iParam0, int iParam1)//Position - 0x2B44A
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] != 0)
		{
			if (func_551(Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/]) == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_551(int iParam0)//Position - 0x2B4A8
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

void func_552(int iParam0)//Position - 0x2B5EE
{
	int iVar0;
	
	if (!func_556(iParam0))
	{
		return;
	}
	iVar0 = func_555(PLAYER::PLAYER_ID(), iParam0);
	MISC::SET_BIT(&Global_2787736, iParam0);
	Global_1640642[iParam0] = 0;
	Global_2787737[iParam0] = func_553(PLAYER::PLAYER_ID(), iVar0);
}

int func_553(int iParam0, int iParam1)//Position - 0x2B634
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_554(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] == iParam1)
			{
				return Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_2;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_554(int iParam0)//Position - 0x2B693
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_555(int iParam0, int iParam1)//Position - 0x2B6B2
{
	var uVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_554(Global_1853348[iParam0 /*834*/].f_267.f_191[iParam1 /*13*/]))
	{
		uVar0 = Global_1853348[iParam0 /*834*/].f_267.f_191[iParam1 /*13*/];
	}
	return uVar0;
}

bool func_556(int iParam0)//Position - 0x2B70B
{
	return (iParam0 >= 0 && iParam0 < 6);
}

int func_557(int iParam0)//Position - 0x2B720
{
	int iVar0[12];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 12)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_558(iVar0[iVar2], iParam0));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 12)
	{
		if (iVar3 <= func_558(iVar0[iVar2], iParam0))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_558(iVar0[iVar2], iParam0));
		}
		iVar2++;
	}
	return -1;
}

int func_558(int iParam0, var uParam1)//Position - 0x2B7A8
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			if (func_584(PLAYER::PLAYER_ID()))
			{
				iVar0 = func_555(PLAYER::PLAYER_ID(), 5);
				if (((func_582(PLAYER::PLAYER_ID(), iVar0) && func_580(PLAYER::PLAYER_ID(), 5)) && func_553(PLAYER::PLAYER_ID(), iVar0) < 80) || uParam1)
				{
					return Global_262145.f_26852;
				}
			}
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			if (func_578(PLAYER::PLAYER_ID(), func_579(iParam0)))
			{
				if (func_575(func_579(iParam0)) || uParam1)
				{
					return Global_262145.f_26852;
				}
			}
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
			if (func_561() || uParam1)
			{
				if (!func_559(iParam0) || uParam1)
				{
					return Global_262145.f_26852;
				}
			}
			break;
	}
	return 0;
}

bool func_559(int iParam0)//Position - 0x2B8B9
{
	int iVar0;
	
	iVar0 = func_549(iParam0);
	return func_560(iVar0);
}

int func_560(int iParam0)//Position - 0x2B8CF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_1945958[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_561()//Position - 0x2B8FB
{
	if ((func_574(PLAYER::PLAYER_ID()) && func_569() < 6) && func_562())
	{
		return 1;
	}
	return 0;
}

int func_562()//Position - 0x2B927
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar0 /*3*/] != 0)
		{
			if (!func_563(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar0 /*3*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_563(int iParam0)//Position - 0x2B97A
{
	return 0 == func_564(iParam0);
}

int func_564(int iParam0)//Position - 0x2B98A
{
	int iVar0;
	int iVar1;
	
	if (func_568(iParam0))
	{
		iVar0 = func_567(iParam0);
		iVar1 = func_565(iParam0);
		if (iVar1 == 2)
		{
			return (111 - iVar0);
		}
		else if (iVar1 == 1)
		{
			return (42 - iVar0);
		}
		else
		{
			return (16 - iVar0);
		}
	}
	return 0;
}

int func_565(int iParam0)//Position - 0x2B9D9
{
	if (func_566(iParam0))
	{
		switch (iParam0)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 9:
				return 0;
			
			case 10:
			case 11:
			case 12:
			case 13:
			case 14:
			case 15:
			case 21:
			case 7:
				return 1;
			
			case 16:
			case 17:
			case 18:
			case 19:
			case 20:
			case 22:
			case 6:
			case 8:
				return 2;
			}
		
		default:
	}
	return 3;
}

int func_566(int iParam0)//Position - 0x2BA82
{
	if (iParam0 < 1 || iParam0 > 22)
	{
		return 0;
	}
	return 1;
}

int func_567(int iParam0)//Position - 0x2BAA1
{
	int iVar0;
	
	if (func_566(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (iParam0 == Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar0 /*3*/])
			{
				return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar0 /*3*/].f_1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_568(int iParam0)//Position - 0x2BAF7
{
	int iVar0;
	
	if (func_566(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar0 /*3*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_569()//Position - 0x2BB38
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		iVar2 = func_573(iVar1);
		if (iVar2 != 0)
		{
			iVar0 = (iVar0 + func_570(iVar2));
		}
		iVar1++;
	}
	return iVar0;
}

int func_570(int iParam0)//Position - 0x2BB6D
{
	int iVar0;
	
	if (func_566(iParam0))
	{
		iVar0 = func_571(func_572(iParam0));
		return func_21(iVar0, -1, 0);
	}
	return 0;
}

int func_571(int iParam0)//Position - 0x2BB96
{
	if (iParam0 == 0)
	{
		return 3649;
	}
	else if (iParam0 == 1)
	{
		return 3650;
	}
	else if (iParam0 == 2)
	{
		return 3651;
	}
	else if (iParam0 == 3)
	{
		return 3652;
	}
	else if (iParam0 == 4)
	{
		return 3653;
	}
	return 3649;
}

int func_572(int iParam0)//Position - 0x2BBE9
{
	int iVar0;
	
	if (func_566(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iVar0 /*3*/] == iParam0)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_573(int iParam0)//Position - 0x2BC2B
{
	if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iParam0 /*3*/] != 0)
	{
		return Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_114[iParam0 /*3*/];
	}
	return 0;
}

int func_574(int iParam0)//Position - 0x2BC63
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_114[iVar0 /*3*/] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_575(int iParam0)//Position - 0x2BC98
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_555(PLAYER::PLAYER_ID(), iVar0);
		if (iVar1 != 0)
		{
			if (func_551(iVar1) == iParam0)
			{
				if (((func_582(PLAYER::PLAYER_ID(), iVar1) && func_576(PLAYER::PLAYER_ID(), iVar0)) && func_580(PLAYER::PLAYER_ID(), iVar0)) && func_553(PLAYER::PLAYER_ID(), iVar1) < 80)
				{
					return 1;
				}
				else
				{
					if (!func_582(PLAYER::PLAYER_ID(), iVar1))
					{
					}
					if (!func_576(PLAYER::PLAYER_ID(), iVar0))
					{
					}
					if (!func_580(PLAYER::PLAYER_ID(), iVar0))
					{
					}
					if (func_553(PLAYER::PLAYER_ID(), iVar1) >= 80)
					{
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_576(int iParam0, int iParam1)//Position - 0x2BD50
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = func_555(iParam0, iParam1);
	iVar2 = func_551(iVar1);
	switch (iVar2)
	{
		case 1:
			if (func_577(iParam0, iVar1) > 8)
			{
				iVar0 = 1;
			}
			break;
		
		case 3:
			if (func_577(iParam0, iVar1) > 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 4:
			if (func_577(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 0:
			if (func_577(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (func_577(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 5:
			if (func_577(iParam0, iVar1) > 1)
			{
				iVar0 = 1;
			}
			break;
	}
	return iVar0;
}

int func_577(int iParam0, int iParam1)//Position - 0x2BE07
{
	int iVar0;
	
	if (iParam0 == func_8())
	{
		return 0;
	}
	if (func_554(iParam1))
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] == iParam1)
			{
				return Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_4;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_578(int iParam0, int iParam1)//Position - 0x2BE66
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	if (iParam0 == func_8())
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] != 0)
		{
			iVar1 = Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/];
			if (func_551(iVar1) == iParam1)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_579(int iParam0)//Position - 0x2BED2
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 2:
			return 3;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		default:
	}
	return -1;
}

int func_580(int iParam0, int iParam1)//Position - 0x2BF14
{
	if (iParam0 != func_8() && func_581(iParam0, func_555(iParam0, iParam1)))
	{
		return Global_1853348[iParam0 /*834*/].f_267.f_191[iParam1 /*13*/].f_6;
	}
	return 0;
}

int func_581(int iParam0, int iParam1)//Position - 0x2BF51
{
	int iVar0;
	
	if (func_554(iParam1) && iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_582(int iParam0, int iParam1)//Position - 0x2BF9C
{
	int iVar0;
	
	if (func_581(iParam0, iParam1))
	{
		iVar0 = func_583(iParam0, iParam1);
		if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_4 > 0 && Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/].f_7)
		{
			return 1;
		}
	}
	return 0;
}

int func_583(int iParam0, int iParam1)//Position - 0x2BFF0
{
	int iVar0;
	
	if (func_554(iParam1) && iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

bool func_584(int iParam0)//Position - 0x2C03D
{
	return func_585(iParam0) != 0;
}

int func_585(int iParam0)//Position - 0x2C04D
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Global_1853348[iParam0 /*834*/].f_267.f_191[5 /*13*/];
}

int func_586()//Position - 0x2C073
{
	bool bVar0;
	int iVar1[5];
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_584(PLAYER::PLAYER_ID()))
	{
		iVar3 = func_555(PLAYER::PLAYER_ID(), 5);
		if ((func_582(PLAYER::PLAYER_ID(), iVar3) && func_580(PLAYER::PLAYER_ID(), 5)) && func_553(PLAYER::PLAYER_ID(), iVar3) < 80)
		{
			bVar0 = true;
		}
		if (!func_582(PLAYER::PLAYER_ID(), iVar3))
		{
		}
		if (!func_580(PLAYER::PLAYER_ID(), 5))
		{
		}
		if (func_553(PLAYER::PLAYER_ID(), iVar3) >= 80)
		{
		}
	}
	if (func_587(PLAYER::PLAYER_ID()))
	{
		iVar4 = 0;
		while (iVar4 < 5)
		{
			iVar5 = func_555(PLAYER::PLAYER_ID(), iVar4);
			if ((((iVar5 != 0 && func_582(PLAYER::PLAYER_ID(), iVar5)) && func_576(PLAYER::PLAYER_ID(), iVar4)) && func_580(PLAYER::PLAYER_ID(), iVar4)) && func_553(PLAYER::PLAYER_ID(), iVar5) < 80)
			{
				iVar1[iVar4] = 1;
			}
			if (iVar5 == 0)
			{
			}
			else
			{
				if (!func_582(PLAYER::PLAYER_ID(), iVar5))
				{
				}
				if (!func_576(PLAYER::PLAYER_ID(), iVar4))
				{
				}
				if (!func_580(PLAYER::PLAYER_ID(), iVar4))
				{
				}
				if (func_553(PLAYER::PLAYER_ID(), iVar5) >= 80)
				{
				}
			}
			iVar4++;
		}
	}
	if (func_561())
	{
		iVar6 = 6;
		while (iVar6 <= 11)
		{
			if (!func_559(iVar6))
			{
				bVar2 = true;
			}
			iVar6++;
		}
	}
	if (bVar0)
	{
		return 1;
	}
	iVar7 = 0;
	while (iVar7 < 5)
	{
		if (iVar1[iVar7])
		{
			return 1;
		}
		iVar7++;
	}
	if (bVar2)
	{
		return 1;
	}
	return 0;
}

int func_587(int iParam0)//Position - 0x2C201
{
	int iVar0;
	
	if (iParam0 != func_8())
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1853348[iParam0 /*834*/].f_267.f_191[iVar0 /*13*/] != 0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_588(char* sParam0, var uParam1, struct<246> Param2)//Position - 0x2C23F
{
	if (!BitTest(uParam1->f_380, 0))
	{
		uParam1->f_381 = func_635();
		MISC::SET_BIT(&(uParam1->f_380), 0);
	}
	else if (uParam1->f_381 == -1)
	{
	}
	else
	{
		switch (uParam1->f_381)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
				return func_628(sParam0, uParam1->f_381, uParam1, Param2);
			
			case 8:
			case 9:
			case 10:
			case 11:
			case 12:
			case 13:
				return func_620(sParam0, uParam1, uParam1->f_381, 0);
			
			case 14:
				return func_620(sParam0, uParam1, uParam1->f_381, 1);
			
			case 15:
				if (func_250(PLAYER::PLAYER_ID()) >= 5)
				{
					func_590(func_18(), func_215(func_619(PLAYER::PLAYER_ID(), 1), 0));
					func_589();
					StringCopy(sParam0, "CAS_LW_ARMU", 64);
					return 1;
					break;
				}
				MISC::CLEAR_BIT(&(uParam1->f_380), 0);
			}
		
		default:
	}
	return 0;
}

void func_589()//Position - 0x2C355
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = SYSTEM::ROUND((50f * Global_262145.f_111));
		func_24(817, iVar0, -1, 1, 0);
		iVar1 = PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID());
		iVar2 = PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID());
		iVar3 = (iVar1 - iVar2);
		PED::SET_PED_ARMOUR(PLAYER::PLAYER_PED_ID(), (iVar2 + iVar3));
	}
}

void func_590(int iParam0, int iParam1)//Position - 0x2C3AF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	
	if (iParam1 >= func_618(238))
	{
		func_604(238, 1, 0);
	}
	if (iParam1 >= func_618(239))
	{
		func_604(239, 1, 0);
	}
	if (iParam1 >= func_618(240))
	{
		func_604(240, 1, 0);
	}
	if (iParam1 >= func_618(241))
	{
		func_604(241, 1, 0);
	}
	if (iParam1 >= func_618(242))
	{
		func_604(242, 1, 0);
	}
	if (iParam1 >= func_618(243))
	{
		func_604(243, 1, 0);
	}
	if (iParam1 >= func_618(244))
	{
		func_604(244, 1, 0);
	}
	if (iParam1 >= func_618(245))
	{
		func_604(245, 1, 0);
	}
	if (iParam1 >= func_618(246))
	{
		func_604(246, 1, 0);
	}
	if (iParam1 >= func_618(247))
	{
		func_604(247, 1, 0);
	}
	if (iParam1 >= func_618(156))
	{
		func_604(156, 1, 0);
	}
	if (iParam1 >= func_618(157))
	{
		func_604(157, 1, 0);
	}
	if (iParam1 >= func_618(158))
	{
		func_604(158, 1, 0);
	}
	if (iParam1 >= func_618(159))
	{
		func_604(159, 1, 0);
	}
	if (iParam1 >= func_618(160))
	{
		func_604(160, 1, 0);
	}
	iVar0 = 0;
	if (func_596(238))
	{
		iVar0++;
	}
	if (func_596(239))
	{
		iVar0++;
	}
	if (func_596(240))
	{
		iVar0++;
	}
	if (func_596(241))
	{
		iVar0++;
	}
	if (func_596(242))
	{
		iVar0++;
	}
	if (func_596(243))
	{
		iVar0++;
	}
	if (func_596(244))
	{
		iVar0++;
	}
	if (func_596(245))
	{
		iVar0++;
	}
	if (func_596(246))
	{
		iVar0++;
	}
	if (func_596(247))
	{
		iVar0++;
	}
	if (func_596(156))
	{
		func_24(1881, iVar0, iParam0, 1, 0);
		iVar1 = 1722125749;
		iVar2 = 1927737204;
		iVar3 = -1379218218;
		iVar4 = -1095556500;
		func_591(1, iVar1, iVar2, iVar0, 0, iVar4, 0, iVar3, 0);
	}
	if (func_596(157))
	{
		func_24(1882, iVar0, iParam0, 1, 0);
		iVar5 = -583313972;
		iVar6 = 1927737204;
		iVar7 = -1379218218;
		iVar8 = -1095556500;
		func_591(1, iVar5, iVar6, iVar0, 0, iVar8, 0, iVar7, 0);
	}
	if (func_596(158))
	{
		func_24(1883, iVar0, iParam0, 1, 0);
		iVar9 = 1174170707;
		iVar10 = 1927737204;
		iVar11 = -1379218218;
		iVar12 = -1095556500;
		func_591(1, iVar9, iVar10, iVar0, 0, iVar12, 0, iVar11, 0);
	}
	if (func_596(159))
	{
		func_24(1884, iVar0, iParam0, 1, 0);
		iVar13 = 1006076045;
		iVar14 = 1927737204;
		iVar15 = -1379218218;
		iVar16 = -1095556500;
		func_591(1, iVar13, iVar14, iVar0, 0, iVar16, 0, iVar15, 0);
	}
	if (func_596(160))
	{
		func_24(1885, iVar0, iParam0, 1, 0);
		iVar17 = -391796677;
		iVar18 = 1927737204;
		iVar19 = -1379218218;
		iVar20 = -1095556500;
		func_591(1, iVar17, iVar18, iVar0, 0, iVar20, 0, iVar19, 0);
	}
}

void func_591(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x2C6C1
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = false;
	if (Global_1888831)
	{
		if (Global_1888831.f_3.f_6 != iParam1)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3 != iParam0)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_3 != iParam4)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_5 != iParam2)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_1 != iParam5)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_4 != iParam7)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_9 != iParam6)
		{
			bVar0 = true;
		}
		else if (Global_1888831.f_3.f_2 != func_594())
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		func_593(&(Global_1888831.f_3));
		STATS::_PLAYSTATS_INVENTORY(&(Global_1888831.f_3));
		func_592();
	}
	Global_1888831 = 1;
	Global_1888831.f_3 = iParam0;
	if (func_314())
	{
		Global_1888831.f_3.f_2 = func_594();
	}
	Global_1888831.f_3.f_6 = iParam1;
	Global_1888831.f_3.f_5 = iParam2;
	Global_1888831.f_3.f_7 = (Global_1888831.f_3.f_7 + iParam3);
	Global_1888831.f_3.f_3 = iParam4;
	Global_1888831.f_3.f_8 = iParam8;
	Global_1888831.f_3.f_1 = iParam5;
	Global_1888831.f_3.f_4 = iParam7;
	Global_1888831.f_3.f_9 = iParam6;
	func_69(&(Global_1888831.f_1));
	func_71(&(Global_1888831.f_1), 0, 0);
}

void func_592()//Position - 0x2C81F
{
	Global_1888831 = 0;
	Global_1888831.f_3 = 0;
	Global_1888831.f_3.f_2 = 0;
	Global_1888831.f_3.f_6 = 0;
	Global_1888831.f_3.f_5 = 0;
	Global_1888831.f_3.f_7 = 0;
	Global_1888831.f_3.f_3 = 0;
	Global_1888831.f_3.f_8 = 0;
	Global_1888831.f_3.f_1 = 0;
	Global_1888831.f_3.f_4 = 0;
	Global_1888831.f_3.f_9 = 0;
	func_69(&(Global_1888831.f_1));
}

void func_593(var uParam0)//Position - 0x2C88E
{
}

int func_594()//Position - 0x2C896
{
	struct<13> Var0;
	
	Var0 = { func_315() };
	return func_595(&Var0);
}

int func_595(var* uParam0)//Position - 0x2C8AD
{
	var uVar0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar0, 35, uParam0);
				return uVar0;
			}
		}
	}
	return -1;
}

int func_596(int iParam0)//Position - 0x2C8DD
{
	var uVar0;
	int iVar1;
	
	if (func_603())
	{
		return 0;
	}
	uVar0 = func_598(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_597(iVar1));
}

int func_597(int iParam0)//Position - 0x2C905
{
	return (iParam0 % 32);
}

int func_598(var uParam0)//Position - 0x2C912
{
	int iVar0;
	
	iVar0 = func_21(func_599(uParam0, 999), -1, 0);
	return iVar0;
}

int func_599(var uParam0, int iParam1)//Position - 0x2C92D
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_602(iVar0);
	if (((func_601() == 0 || func_600() == 0) || iParam1 == 0) || (func_601() == 999 && func_600() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 697;
				break;
			
			case 1:
				return 698;
				break;
			
			case 2:
				return 699;
				break;
			
			case 3:
				return 700;
				break;
			
			case 4:
				return 701;
				break;
			
			case 5:
				return 702;
				break;
			
			case 6:
				return 703;
				break;
			
			case 7:
				return 704;
				break;
			
			case 8:
				return 705;
				break;
			
			case 9:
				return 2055;
				break;
			
			case 10:
				return 2067;
				break;
			
			case 11:
				return 2094;
				break;
			
			case 12:
				return 2430;
				break;
			
			case 13:
				return 2950;
				break;
			
			case 14:
				return 5513;
				break;
			
			case 15:
				return 5517;
				break;
			
			case 16:
				return 5521;
				break;
			
			case 17:
				return 5525;
				break;
			
			case 18:
				return 5529;
				break;
			
			case 19:
				return 5533;
				break;
			
			case 20:
				return 5593;
				break;
			
			case 21:
				return 5597;
				break;
			
			case 22:
				return 5601;
				break;
			
			case 23:
				return 5605;
				break;
			
			case 24:
				return 5609;
				break;
			
			case 25:
				return 5613;
				break;
			
			case 26:
				return 5617;
				break;
			
			case 27:
				return 5638;
				break;
			
			case 28:
				return 5642;
				break;
			
			case 29:
				return 5646;
				break;
			
			case 30:
				return 5650;
				break;
			
			case 31:
				return 5654;
				break;
			
			case 32:
				return 5658;
				break;
			
			case 33:
				return 6468;
				break;
			
			case 34:
				return 6472;
				break;
			
			case 35:
				return 6476;
				break;
			
			case 36:
				return 6480;
				break;
			
			case 37:
				return 6484;
				break;
			
			case 38:
				return 6488;
				break;
			
			case 39:
				return 6492;
				break;
			
			case 40:
				return 10267;
				break;
		}
	}
	return 13122;
}

int func_600()//Position - 0x2CBEF
{
	return Global_31960;
}

int func_601()//Position - 0x2CBFA
{
	return Global_31959;
}

int func_602(int iParam0)//Position - 0x2CC05
{
	return (iParam0 / 32);
}

bool func_603()//Position - 0x2CC12
{
	return Global_1575037;
}

void func_604(int iParam0, bool bParam1, bool bParam2)//Position - 0x2CC1E
{
	if (bParam1)
	{
		if (!func_596(iParam0))
		{
			func_617(iParam0, 1);
		}
		if (bParam2)
		{
			if (func_615(iParam0) == 0)
			{
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(func_614(iParam0));
				HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK(func_613(iParam0), 2, func_614(iParam0));
				if (AUDIO::HAS_SOUND_FINISHED(-1))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CHALLENGE_UNLOCKED", "HUD_AWARDS", true);
				}
				func_606(29, func_614(iParam0), func_612(iParam0), func_610(iParam0), func_608(iParam0), -1, 0, 0, 0, -1, 0);
				func_605(iParam0, 1);
			}
		}
	}
	else if (func_596(iParam0))
	{
		func_617(iParam0, 0);
	}
}

void func_605(int iParam0, bool bParam1)//Position - 0x2CCBB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&(Global_2825435.f_1011[func_602(iVar0)]), func_597(iVar0));
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2825435.f_1011[func_602(iVar0)]), func_597(iVar0));
		}
	}
}

void func_606(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)//Position - 0x2CD0A
{
	int iVar0;
	
	iVar0 = func_607(&Global_1656668);
	Global_1656668[iVar0 /*106*/] = iParam0;
	StringCopy(&(Global_1656668[iVar0 /*106*/].f_17), sParam3, 64);
	StringCopy(&(Global_1656668[iVar0 /*106*/].f_1), sParam4, 64);
	StringCopy(&(Global_1656668[iVar0 /*106*/].f_33), sParam1, 64);
	StringCopy(&(Global_1656668[iVar0 /*106*/].f_49), sParam2, 64);
	Global_1656668[iVar0 /*106*/].f_97 = iParam5;
	Global_1656668[iVar0 /*106*/].f_104 = iParam9;
	Global_1656668[iVar0 /*106*/].f_105 = iParam10;
	if (iParam6 != 0)
	{
	}
	if (iParam7 != 0)
	{
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		StringCopy(&(Global_1656668[iVar0 /*106*/].f_98), sParam8, 24);
	}
}

int func_607(var uParam0)//Position - 0x2CDA6
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if ((*uParam0)[iVar1 /*106*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

char* func_608(int iParam0)//Position - 0x2CDD5
{
	char* sVar0;
	
	sVar0 = "MpAwards1";
	switch (iParam0)
	{
		case 155:
			return func_609(joaat("weapon_smokegrenade"), 0);
			break;
	}
	return sVar0;
}

char* func_609(int iParam0, int iParam1)//Position - 0x2CE02
{
	switch (iParam0)
	{
		case joaat("weapon_knife"):
			return "MPWeaponsUnusedForNow";
			break;
		
		case joaat("weapon_stungun"):
			return "MPWeaponsGang0";
			break;
		
		case joaat("weapon_pistol"):
			return "MPWeaponsGang1";
			break;
		
		case joaat("weapon_appistol"):
			return "MPWeaponsGang1";
			break;
		
		case joaat("gadget_parachute"):
			return "MPWeaponsGang1";
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("component_smg_clip_01"):
				case joaat("component_smg_clip_02"):
				case joaat("component_at_pi_supp"):
				case joaat("component_at_ar_flsh"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("component_sniperrifle_clip_01"):
				case joaat("component_at_scope_large"):
				case joaat("component_at_ar_supp_02"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("component_carbinerifle_clip_01"):
				case joaat("component_carbinerifle_clip_02"):
				case joaat("component_at_railcover_01"):
				case joaat("component_at_ar_afgrip"):
				case joaat("component_at_ar_flsh"):
				case joaat("component_at_scope_medium"):
				case joaat("component_at_ar_supp"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("component_at_sr_supp"):
				case joaat("component_at_pi_flsh"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("weapon_grenade"):
			return "MPWeaponsGang0";
			break;
		
		case joaat("weapon_stickybomb"):
			return "MPWeaponsCommon";
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("component_at_ar_afgrip"):
				case joaat("component_at_ar_flsh"):
				case joaat("component_at_scope_small"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("component_at_scope_medium"):
				case joaat("component_at_ar_afgrip"):
				case joaat("component_combatmg_clip_02"):
				case joaat("component_combatmg_clip_01"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("component_assaultshotgun_clip_01"):
				case joaat("component_assaultshotgun_clip_02"):
				case joaat("component_at_ar_afgrip"):
				case joaat("component_at_ar_flsh"):
				case joaat("component_at_ar_supp_02"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("weapon_rpg"):
			return "MPWeaponsCommon";
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("component_heavysniper_clip_01"):
				case joaat("component_at_scope_max"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang0";
					break;
				
				case joaat("component_advancedrifle_clip_01"):
				case joaat("component_advancedrifle_clip_02"):
				case joaat("component_at_ar_afgrip"):
				case joaat("component_at_ar_flsh"):
				case joaat("component_at_scope_medium"):
				case joaat("component_at_ar_supp"):
					return "MPWeaponsGang0";
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("component_microsmg_clip_01"):
				case joaat("component_microsmg_clip_02"):
				case joaat("component_at_pi_flsh"):
				case joaat("component_at_scope_macro"):
				case joaat("component_at_ar_supp_02"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				
				case joaat("component_assaultrifle_clip_01"):
				case joaat("component_assaultrifle_clip_02"):
				case joaat("component_at_ar_afgrip"):
				case joaat("component_at_ar_flsh"):
				case joaat("component_at_scope_macro"):
				case joaat("component_at_ar_supp_02"):
					return "MPWeaponsGang1";
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				
				case joaat("component_mg_clip_01"):
				case joaat("component_mg_clip_02"):
				case joaat("component_at_scope_small"):
					return "MPWeaponsGang1";
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return "MPWeaponsGang1";
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsGang1";
					break;
				
				case joaat("component_minigun_clip_01"):
					return "MPWeaponsGang1";
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					return "MPWeaponsCommon";
					break;
				
				case joaat("component_at_pi_supp"):
				case joaat("component_at_pi_flsh"):
				case joaat("component_combatpistol_clip_02"):
				case joaat("component_combatpistol_clip_01"):
					return "MPWeaponsCommon";
					break;
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			return "MPWeaponsCommon";
			break;
	}
	return "";
}

char* func_610(int iParam0)//Position - 0x2D253
{
	char* sVar0;
	
	sVar0 = "GenericKit";
	switch (iParam0)
	{
		case 155:
			return func_611(joaat("weapon_smokegrenade"), 0, 0);
			break;
	}
	return sVar0;
}

char* func_611(int iParam0, int iParam1, int iParam2)//Position - 0x2D281
{
	if (iParam2 == 0)
	{
		switch (iParam0)
		{
			case joaat("weapon_knife"):
				return "W_ME_KNIFE_01";
				break;
			
			case joaat("weapon_stungun"):
				return "W_PI_Stungun";
				break;
			
			case joaat("weapon_pistol"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_Pistol";
						break;
					
					case joaat("component_pistol_clip_01"):
						return "W_PI_Pistol_Mag1";
						break;
					
					case joaat("component_pistol_clip_02"):
						return "W_PI_Pistol_Mag2";
						break;
					
					case joaat("component_at_pi_flsh"):
						return "W_PI_Pistol_Flash";
						break;
					
					case joaat("component_at_pi_supp_02"):
						return "W_PI_Pistol_Supp";
						break;
				}
				break;
			
			case joaat("gadget_parachute"):
				return "Parachute_Main";
				break;
			
			case joaat("weapon_smg"):
				switch (iParam1)
				{
					case 0:
						return "W_SB_SMG";
						break;
					
					case joaat("component_smg_clip_01"):
						return "W_SB_SMG_Mag1";
						break;
					
					case joaat("component_smg_clip_02"):
						return "W_SB_SMG_Mag2";
						break;
					
					case joaat("component_at_pi_supp"):
						return "W_SB_SMG_Supp";
						break;
					
					case joaat("component_at_ar_flsh"):
						return "W_SB_SMG_Flash";
						break;
				}
				break;
			
			case joaat("weapon_sniperrifle"):
				switch (iParam1)
				{
					case 0:
						return "W_SR_SniperRifle";
						break;
					
					case joaat("component_sniperrifle_clip_01"):
						return "W_SR_SniperRifle_Mag1";
						break;
					
					case joaat("component_at_scope_large"):
						return "W_SR_SniperRifle_Scope";
						break;
					
					case joaat("component_at_ar_supp_02"):
						return "W_SR_SniperRifle_Supp";
						break;
				}
				break;
			
			case joaat("weapon_carbinerifle"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_CarbineRifle";
						break;
					
					case joaat("component_carbinerifle_clip_01"):
						return "W_AR_CarbineRifle_Mag1";
						break;
					
					case joaat("component_carbinerifle_clip_02"):
						return "W_AR_CarbineRifle_Mag2";
						break;
					
					case joaat("component_at_railcover_01"):
						return "CarbineRifle_RAILCOVER_1";
						break;
					
					case joaat("component_at_ar_afgrip"):
						return "W_AR_CarbineRifle_Grip";
						break;
					
					case joaat("component_at_ar_flsh"):
						return "W_AR_CarbineRifle_Flash";
						break;
					
					case joaat("component_at_scope_medium"):
						return "W_AR_CarbineRifle_Scope";
						break;
					
					case joaat("component_at_ar_supp"):
						return "W_AR_CarbineRifle_Supp";
						break;
				}
				break;
			
			case joaat("weapon_specialcarbine"):
				break;
			
			case joaat("weapon_snspistol"):
				break;
			
			case joaat("weapon_pumpshotgun"):
				switch (iParam1)
				{
					case 0:
						return "W_SG_PumpShotgun";
						break;
					
					case joaat("component_at_sr_supp"):
						return "W_SG_PumpShotgun_Supp";
						break;
					
					case joaat("component_at_pi_flsh"):
						return "W_SG_PumpShotgun_Flash";
						break;
				}
				break;
			
			case joaat("weapon_grenade"):
				return "W_Ex_GrenadeFrag";
				break;
			
			case joaat("weapon_stickybomb"):
				return "W_Ex_PE";
				break;
			
			case joaat("weapon_grenadelauncher"):
				switch (iParam1)
				{
					case 0:
						return "W_R_GrenadeLauncher";
						break;
					
					case joaat("component_at_ar_afgrip"):
						return "W_R_GrenadeLauncher_Grip";
						break;
					
					case joaat("component_at_ar_flsh"):
						return "W_R_GrenadeLauncher_Flash";
						break;
					
					case joaat("component_at_scope_small"):
						return "W_R_GrenadeLauncher_Scope";
						break;
				}
				break;
			
			case joaat("weapon_combatmg"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_CombatMG";
						break;
					
					case joaat("component_at_scope_medium"):
						return "W_MG_CombatMG_Scope";
						break;
					
					case joaat("component_at_ar_afgrip"):
						return "W_MG_CombatMG_Grip";
						break;
					
					case joaat("component_combatmg_clip_02"):
						return "W_MG_CombatMG_Mag2";
						break;
					
					case joaat("component_combatmg_clip_01"):
						return "W_MG_CombatMG_Mag1";
						break;
				}
				break;
			
			case joaat("weapon_assaultshotgun"):
				switch (iParam1)
				{
					case 0:
						return "W_SG_AssaultShotgun";
						break;
					
					case joaat("component_assaultshotgun_clip_01"):
						return "W_SG_AssaultShotgun_Mag1";
						break;
					
					case joaat("component_assaultshotgun_clip_02"):
						return "W_SG_AssaultShotgun_Mag2";
						break;
					
					case joaat("component_at_ar_afgrip"):
						return "W_SG_AssaultShotgun_Grip";
						break;
					
					case joaat("component_at_ar_flsh"):
						return "W_SG_AssaultShotgun_Flsh";
						break;
					
					case joaat("component_at_ar_supp_02"):
						return "W_SG_AssaultShotgun_Supp";
						break;
				}
				break;
			
			case joaat("weapon_appistol"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_AppPistol";
						break;
					
					case joaat("component_appistol_clip_01"):
						return "W_PI_AppPistol_Mag1";
						break;
					
					case joaat("component_appistol_clip_02"):
						return "W_PI_AppPistol_Mag2";
						break;
					
					case joaat("component_at_pi_flsh"):
						return "W_PI_AppPistol_Flash";
						break;
					
					case joaat("component_at_pi_supp"):
						return "W_PI_AppPistol_Supp";
						break;
				}
				break;
			
			case joaat("weapon_rpg"):
				return "W_LR_RPG";
				break;
			
			case joaat("weapon_heavysniper"):
				switch (iParam1)
				{
					case 0:
						return "W_SR_HeavySniper";
						break;
					
					case joaat("component_heavysniper_clip_01"):
						return "W_SR_HeavySniper_Mag1";
						break;
					
					case joaat("component_at_scope_max"):
						return "W_SR_HeavySniper_Scope";
						break;
				}
				break;
			
			case joaat("weapon_advancedrifle"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_AdvancedRifle";
						break;
					
					case joaat("component_advancedrifle_clip_01"):
						return "W_AR_AdvancedRifle_mag1";
						break;
					
					case joaat("component_advancedrifle_clip_02"):
						return "W_AR_AdvancedRifle_Mag2";
						break;
					
					case joaat("component_at_ar_afgrip"):
						return "AdvancedRifle_AFGRIP";
						break;
					
					case joaat("component_at_ar_flsh"):
						return "AssaultRifle_FLASHLIGHT";
						break;
					
					case joaat("component_at_scope_medium"):
						return "AssaultRifle_SCOPE_SMALL";
						break;
					
					case joaat("component_at_ar_supp"):
						return "AdvancedRifle_SUPPRESSOR";
						break;
				}
				break;
			
			case joaat("weapon_microsmg"):
				switch (iParam1)
				{
					case 0:
						return "W_SB_MicroSMG";
						break;
					
					case joaat("component_microsmg_clip_01"):
						return "W_SB_MicroSMG_Mag1";
						break;
					
					case joaat("component_microsmg_clip_02"):
						return "W_SB_MicroSMG_Mag2";
						break;
					
					case joaat("component_at_pi_flsh"):
						return "W_SB_MicroSMG_Flash";
						break;
					
					case joaat("component_at_scope_macro"):
						return "W_SB_MicroSMG_Scope";
						break;
					
					case joaat("component_at_ar_supp_02"):
						return "W_SB_MicroSMG_Supp";
						break;
				}
				break;
			
			case joaat("weapon_assaultrifle"):
				switch (iParam1)
				{
					case 0:
						return "W_AR_AssaultRifle";
						break;
					
					case joaat("component_assaultrifle_clip_01"):
						return "W_AR_AssaultRifle_Mag1";
						break;
					
					case joaat("component_assaultrifle_clip_02"):
						return "W_AR_AssaultRifle_Mag2";
						break;
					
					case joaat("component_at_ar_afgrip"):
						return "W_AR_AssaultRifle_Grip";
						break;
					
					case joaat("component_at_ar_flsh"):
						return "W_AR_AssaultRifle_Flash";
						break;
					
					case joaat("component_at_scope_macro"):
						return "W_AR_AssaultRifle_Scope";
						break;
					
					case joaat("component_at_ar_supp_02"):
						return "W_AR_AssaultRifle_Supp";
						break;
				}
				break;
			
			case joaat("weapon_mg"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_MG";
						break;
					
					case joaat("component_mg_clip_01"):
						return "W_MG_MG_Mag1";
						break;
					
					case joaat("component_mg_clip_02"):
						return "W_MG_MG_Mag2";
						break;
					
					case joaat("component_at_scope_small_02"):
						return "W_MG_MG_Scope";
						break;
				}
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				return "W_SG_SAWNOFF";
				break;
			
			case joaat("weapon_minigun"):
				switch (iParam1)
				{
					case 0:
						return "W_MG_Minigun";
						break;
					
					case joaat("component_minigun_clip_01"):
						return "W_MG_Minigun_Laser";
						break;
				}
				break;
			
			case joaat("weapon_combatpistol"):
				switch (iParam1)
				{
					case 0:
						return "W_PI_CombatPistol";
						break;
					
					case joaat("component_at_pi_supp"):
						return "W_PI_CombatPistol_Supp";
						break;
					
					case joaat("component_at_pi_flsh"):
						return "W_PI_CombatPistol_Flash";
						break;
					
					case joaat("component_combatpistol_clip_02"):
						return "W_PI_CombatPistol_Mag1";
						break;
					
					case joaat("component_combatpistol_clip_01"):
						return "W_PI_CombatPistol_Mag2";
						break;
				}
				break;
			
			case joaat("weapon_smokegrenade"):
				return "W_Ex_GrenadeSmoke";
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_knife"):
				return "W_ME_Knife_SILHOUETTE";
				break;
			
			case joaat("weapon_stungun"):
				return "W_PI_Stungun_SILHOUETTE";
				break;
			
			case joaat("weapon_pistol"):
				return "W_PI_Pistol_SILHOUETTE";
				break;
			
			case joaat("gadget_parachute"):
				return "Parachute_Main";
				break;
			
			case joaat("weapon_smg"):
				return "W_SB_SMG_SILHOUETTE";
				break;
			
			case joaat("weapon_sniperrifle"):
				return "W_SR_SniperRifle_SILHOUETTE";
				break;
			
			case joaat("weapon_carbinerifle"):
				return "W_AR_CarbineRifle_SILHOUETTE";
				break;
			
			case joaat("weapon_specialcarbine"):
				return "W_AR_CarbineRifle_SILHOUETTE";
				break;
			
			case joaat("weapon_snspistol"):
				break;
			
			case joaat("weapon_pumpshotgun"):
				return "W_SG_PumpShotgun_SILHOUETTE";
				break;
			
			case joaat("weapon_grenade"):
				return "W_Ex_GrenadeFrag_SILHOUETTE";
				break;
			
			case joaat("weapon_stickybomb"):
				return "W_Ex_PE_SILHOUETTE";
				break;
			
			case joaat("weapon_grenadelauncher"):
				return "W_R_GrenadeLauncher_SILHOUETTE";
				break;
			
			case joaat("weapon_combatmg"):
				return "W_MG_CombatMG_SILHOUETTE";
				break;
			
			case joaat("weapon_assaultshotgun"):
				return "W_SG_AssaultShotgun_SILHOUETTE";
				break;
			
			case joaat("weapon_appistol"):
				return "W_PI_AppPistol_SILHOUETTE";
				break;
			
			case joaat("weapon_rpg"):
				return "W_LR_RPG_SILHOUETTE";
				break;
			
			case joaat("weapon_heavysniper"):
				return "W_SR_HeavySniper_SILHOUETTE";
				break;
			
			case joaat("weapon_advancedrifle"):
				return "W_AR_AdvancedRifle_SILHOUETTE";
				break;
			
			case joaat("weapon_microsmg"):
				return "W_SB_MicroSMG_SILHOUETTE";
				break;
			
			case joaat("weapon_assaultrifle"):
				return "W_AR_AssaultRifle_SILHOUETTE";
				break;
			
			case joaat("weapon_mg"):
				return "W_MG_MG_SILHOUETTE";
				break;
			
			case joaat("weapon_sawnoffshotgun"):
				return "W_SG_SAWNOFF_SILHOUETTE";
				break;
			
			case joaat("weapon_minigun"):
				return "W_MG_Minigun_SILHOUETTE";
				break;
			
			case joaat("weapon_combatpistol"):
				return "W_PI_CombatPistol_SILHOUETTE";
				break;
			
			case joaat("weapon_smokegrenade"):
				return "W_Ex_GrenadeSmoke_SILHOUETTE";
				break;
			}
	}
	return "";
}

char* func_612(int iParam0)//Position - 0x2DABE
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 1:
			return "WT_PARA";
			break;
		
		case 5:
			return "KIT_THERMAL";
			break;
		
		case 2:
			return "KIT_SMOK_RED";
			break;
		
		case 3:
			return "KIT_SMOK_ORA";
			break;
		
		case 4:
			return "KIT_SMOK_YEL";
			break;
		
		case 6:
			return "KIT_SMOK_BLA";
			break;
		
		case 7:
			return "KIT_SMOK_BLU";
			break;
		
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return "WM_TINTD";
			break;
	}
	return sVar0;
}

char* func_613(int iParam0)//Position - 0x2DE96
{
	switch (iParam0)
	{
		case 56:
		case 76:
		case 96:
		case 116:
			return "TINT_PISTOL";
			break;
		
		case 57:
		case 77:
		case 97:
		case 117:
			return "TINT_CMBTPISTOL";
			break;
		
		case 58:
		case 78:
		case 98:
		case 118:
			return "TINT_APPISTOL";
			break;
		
		case 59:
		case 79:
		case 99:
		case 119:
			return "TINT_MICROSMG";
			break;
		
		case 60:
		case 80:
		case 100:
		case 120:
			return "TINT_SMG";
			break;
		
		case 61:
		case 81:
		case 101:
		case 121:
			return "TINT_ASLTRIFLE";
			break;
		
		case 62:
		case 82:
		case 102:
		case 122:
			return "TINT_CRBNRIFLE";
			break;
		
		case 63:
		case 83:
		case 103:
		case 123:
			return "TINT_ADVRRIFLE";
			break;
		
		case 64:
		case 84:
		case 104:
		case 124:
			return "TINT_MG";
			break;
		
		case 65:
		case 85:
		case 105:
		case 125:
			return "TINT_CMBTMG";
			break;
		
		case 66:
		case 86:
		case 106:
		case 126:
			return "TINT_PUMP";
			break;
		
		case 67:
		case 87:
		case 107:
		case 127:
			return "TINT_SAWOFF";
			break;
		
		case 68:
		case 88:
		case 108:
		case 128:
			return "TINT_ASLTSHTGN";
			break;
		
		case 71:
		case 91:
		case 111:
		case 131:
			return "TINT_SNIPERRFL";
			break;
		
		case 72:
		case 92:
		case 112:
		case 132:
			return "TINT_HVYSNIPER";
			break;
		
		case 73:
		case 93:
		case 113:
		case 133:
			return "TINT_GRNLAUNCH";
			break;
		
		case 74:
		case 94:
		case 114:
		case 134:
			return "TINT_RPG";
			break;
		
		case 75:
		case 95:
		case 115:
		case 135:
			return "TINT_MINIGUN";
			break;
		
		case 192:
		case 163:
		case 164:
		case 165:
			return "TINT_ASSAULTSMG";
			break;
		
		case 169:
		case 170:
		case 171:
			return "TINT_ASSAULTSNIPER";
			break;
		
		case 175:
		case 176:
		case 177:
		case 194:
			return "TINT_Pistol50";
			break;
		
		case 181:
		case 182:
		case 183:
		case 193:
			return "TINT_ASSAULTMG";
			break;
		
		case 187:
		case 188:
		case 189:
		case 191:
			return "TINT_HEAVYRIFLE";
			break;
	}
	return "WEAPON_UNLOCK";
}

char* func_614(int iParam0)//Position - 0x2E1B1
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 5:
			return "KIT_THERMAL";
			break;
		
		case 2:
			return "KIT_SMOK_RED";
			break;
		
		case 3:
			return "KIT_SMOK_ORA";
			break;
		
		case 4:
			return "KIT_SMOK_YEL";
			break;
		
		case 6:
			return "KIT_SMOK_BLA";
			break;
		
		case 7:
			return "KIT_SMOK_BLU";
			break;
		
		case 16:
			return "AWT_651";
		
		case 17:
			return "AWT_651";
		
		case 18:
			return "AWT_651";
		
		case 19:
			return "AWT_651";
		
		case 20:
			return "AWT_651";
		
		case 21:
			return "AWT_651";
		
		case 22:
			return "AWT_651";
		
		case 23:
			return "AWT_651";
		
		case 24:
			return "AWT_651";
		
		case 25:
			return "AWT_651";
		
		case 26:
			return "AWT_651";
		
		case 27:
			return "AWT_651";
		
		case 28:
			return "AWT_651";
		
		case 29:
			return "AWT_651";
		
		case 30:
			return "AWT_651";
		
		case 31:
			return "AWT_651";
		
		case 32:
			return "AWT_651";
		
		case 33:
			return "AWT_651";
		
		case 34:
			return "AWT_651";
		
		case 35:
			return "AWT_651";
		
		case 36:
			return "AWT_650";
		
		case 37:
			return "AWT_650";
		
		case 38:
			return "AWT_650";
		
		case 39:
			return "AWT_650";
		
		case 40:
			return "AWT_650";
		
		case 41:
			return "AWT_650";
		
		case 42:
			return "AWT_650";
		
		case 43:
			return "AWT_650";
		
		case 44:
			return "AWT_650";
		
		case 45:
			return "AWT_650";
		
		case 46:
			return "AWT_650";
		
		case 47:
			return "AWT_650";
		
		case 48:
			return "AWT_650";
		
		case 49:
			return "AWT_650";
		
		case 50:
			return "AWT_650";
		
		case 51:
			return "AWT_650";
		
		case 52:
			return "AWT_650";
		
		case 53:
			return "AWT_650";
		
		case 54:
			return "AWT_650";
		
		case 55:
			return "AWT_650";
		
		case 136:
			return "AWT_657";
		
		case 137:
			return "AWT_657";
		
		case 138:
			return "AWT_657";
		
		case 139:
			return "AWT_657";
		
		case 140:
			return "AWT_657";
		
		case 141:
			return "AWT_657";
		
		case 142:
			return "AWT_657";
		
		case 143:
			return "AWT_657";
		
		case 144:
			return "AWT_657";
		
		case 145:
			return "AWT_657";
		
		case 146:
			return "AWT_657";
		
		case 147:
			return "AWT_657";
		
		case 148:
			return "AWT_657";
		
		case 149:
			return "AWT_657";
		
		case 150:
			return "AWT_657";
		
		case 151:
			return "AWT_657";
		
		case 152:
			return "AWT_657";
		
		case 153:
			return "AWT_657";
		
		case 154:
			return "AWT_657";
		
		case 155:
			return "AWT_657";
		
		case 56:
			return "TAN_TINT_HEAD";
			break;
		
		case 57:
			return "TAN_TINT_HEAD";
			break;
		
		case 58:
			return "TAN_TINT_HEAD";
			break;
		
		case 59:
			return "TAN_TINT_HEAD";
			break;
		
		case 60:
			return "TAN_TINT_HEAD";
			break;
		
		case 61:
			return "TAN_TINT_HEAD";
			break;
		
		case 62:
			return "TAN_TINT_HEAD";
			break;
		
		case 63:
			return "TAN_TINT_HEAD";
			break;
		
		case 64:
			return "TAN_TINT_HEAD";
			break;
		
		case 65:
			return "TAN_TINT_HEAD";
			break;
		
		case 66:
			return "TAN_TINT_HEAD";
			break;
		
		case 67:
			return "TAN_TINT_HEAD";
			break;
		
		case 68:
			return "TAN_TINT_HEAD";
			break;
		
		case 71:
			return "TAN_TINT_HEAD";
			break;
		
		case 72:
			return "TAN_TINT_HEAD";
			break;
		
		case 73:
			return "TAN_TINT_HEAD";
			break;
		
		case 74:
			return "TAN_TINT_HEAD";
			break;
		
		case 75:
			return "TAN_TINT_HEAD";
			break;
		
		case 76:
			return "GREEN_TINT_HEAD";
			break;
		
		case 77:
			return "GREEN_TINT_HEAD";
			break;
		
		case 78:
			return "GREEN_TINT_HEAD";
			break;
		
		case 79:
			return "GREEN_TINT_HEAD";
			break;
		
		case 80:
			return "GREEN_TINT_HEAD";
			break;
		
		case 81:
			return "GREEN_TINT_HEAD";
			break;
		
		case 82:
			return "GREEN_TINT_HEAD";
			break;
		
		case 83:
			return "GREEN_TINT_HEAD";
			break;
		
		case 84:
			return "GREEN_TINT_HEAD";
			break;
		
		case 85:
			return "GREEN_TINT_HEAD";
			break;
		
		case 86:
			return "GREEN_TINT_HEAD";
			break;
		
		case 87:
			return "GREEN_TINT_HEAD";
			break;
		
		case 88:
			return "GREEN_TINT_HEAD";
			break;
		
		case 91:
			return "GREEN_TINT_HEAD";
			break;
		
		case 92:
			return "GREEN_TINT_HEAD";
			break;
		
		case 93:
			return "GREEN_TINT_HEAD";
			break;
		
		case 94:
			return "GREEN_TINT_HEAD";
			break;
		
		case 95:
			return "GREEN_TINT_HEAD";
			break;
		
		case 96:
			return "RED_TINT_HEAD";
			break;
		
		case 97:
			return "RED_TINT_HEAD";
			break;
		
		case 98:
			return "RED_TINT_HEAD";
			break;
		
		case 99:
			return "RED_TINT_HEAD";
			break;
		
		case 100:
			return "RED_TINT_HEAD";
			break;
		
		case 101:
			return "RED_TINT_HEAD";
			break;
		
		case 102:
			return "RED_TINT_HEAD";
			break;
		
		case 103:
			return "RED_TINT_HEAD";
			break;
		
		case 104:
			return "RED_TINT_HEAD";
			break;
		
		case 105:
			return "RED_TINT_HEAD";
			break;
		
		case 106:
			return "RED_TINT_HEAD";
			break;
		
		case 107:
			return "RED_TINT_HEAD";
			break;
		
		case 108:
			return "RED_TINT_HEAD";
			break;
		
		case 111:
			return "RED_TINT_HEAD";
			break;
		
		case 112:
			return "RED_TINT_HEAD";
			break;
		
		case 113:
			return "RED_TINT_HEAD";
			break;
		
		case 114:
			return "RED_TINT_HEAD";
			break;
		
		case 115:
			return "RED_TINT_HEAD";
			break;
		
		case 116:
			return "BLUE_TINT_HEAD";
			break;
		
		case 117:
			return "BLUE_TINT_HEAD";
			break;
		
		case 118:
			return "BLUE_TINT_HEAD";
			break;
		
		case 119:
			return "BLUE_TINT_HEAD";
			break;
		
		case 120:
			return "BLUE_TINT_HEAD";
			break;
		
		case 121:
			return "BLUE_TINT_HEAD";
			break;
		
		case 122:
			return "BLUE_TINT_HEAD";
			break;
		
		case 123:
			return "BLUE_TINT_HEAD";
			break;
		
		case 124:
			return "BLUE_TINT_HEAD";
			break;
		
		case 125:
			return "BLUE_TINT_HEAD";
			break;
		
		case 126:
			return "BLUE_TINT_HEAD";
			break;
		
		case 127:
			return "BLUE_TINT_HEAD";
			break;
		
		case 128:
			return "BLUE_TINT_HEAD";
			break;
		
		case 131:
			return "BLUE_TINT_HEAD";
			break;
		
		case 132:
			return "BLUE_TINT_HEAD";
			break;
		
		case 133:
			return "BLUE_TINT_HEAD";
			break;
		
		case 134:
			return "BLUE_TINT_HEAD";
			break;
		
		case 135:
			return "BLUE_TINT_HEAD";
			break;
		
		case 163:
			return "TAN_TINT_HEAD";
			break;
		
		case 164:
			return "BLUE_TINT_HEAD";
			break;
		
		case 165:
			return "RED_TINT_HEAD";
			break;
		
		case 169:
			return "TAN_TINT_HEAD";
			break;
		
		case 170:
			return "BLUE_TINT_HEAD";
			break;
		
		case 171:
			return "RED_TINT_HEAD";
			break;
		
		case 175:
			return "TAN_TINT_HEAD";
			break;
		
		case 176:
			return "BLUE_TINT_HEAD";
			break;
		
		case 177:
			return "RED_TINT_HEAD";
			break;
		
		case 181:
			return "TAN_TINT_HEAD";
			break;
		
		case 182:
			return "BLUE_TINT_HEAD";
			break;
		
		case 183:
			return "RED_TINT_HEAD";
			break;
		
		case 187:
			return "TAN_TINT_HEAD";
			break;
		
		case 188:
			return "BLUE_TINT_HEAD";
			break;
		
		case 189:
			return "RED_TINT_HEAD";
			break;
		
		case 191:
			return "GREEN_TINT_HEAD";
			break;
		
		case 192:
			return "GREEN_TINT_HEAD";
			break;
		
		case 193:
			return "GREEN_TINT_HEAD";
			break;
		
		case 194:
			return "GREEN_TINT_HEAD";
			break;
	}
	return sVar0;
}

int func_615(int iParam0)//Position - 0x2EAE3
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_616(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_597(iVar1));
}

var func_616(int iParam0)//Position - 0x2EB00
{
	var uVar0;
	
	uVar0 = Global_2825435.f_1011[func_602(iParam0)];
	return uVar0;
}

void func_617(int iParam0, bool bParam1)//Position - 0x2EB1B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_598(iParam0);
	iVar1 = iParam0;
	if (iVar1 > -1)
	{
		if (bParam1)
		{
			MISC::SET_BIT(&iVar0, func_597(iVar1));
		}
		else
		{
			MISC::CLEAR_BIT(&iVar0, func_597(iVar1));
		}
		func_24(func_599(iParam0, 999), iVar0, -1, 1, 0);
	}
}

int func_618(int iParam0)//Position - 0x2EB6A
{
	switch (iParam0)
	{
		case 1:
			return 11;
			break;
		
		case 256:
			return 11;
			break;
		
		case 257:
			return 11;
			break;
		
		case 258:
			return 11;
			break;
		
		case 259:
			return 11;
			break;
		
		case 260:
			return 11;
			break;
		
		case 261:
			return 11;
			break;
		
		case 262:
			return 11;
			break;
		
		case 305:
			return 11;
			break;
		
		case 306:
			return 11;
			break;
		
		case 307:
			return 11;
			break;
		
		case 308:
			return 11;
			break;
		
		case 309:
			return 11;
			break;
		
		case 310:
			return 11;
			break;
		
		case 311:
			return 11;
			break;
		
		case 312:
			return 11;
			break;
		
		case 313:
			return 11;
			break;
		
		case 314:
			return 11;
			break;
		
		case 315:
			return 11;
			break;
		
		case 316:
			return 11;
			break;
		
		case 317:
			return 11;
			break;
		
		case 318:
			return 11;
			break;
		
		case 319:
			return 11;
			break;
		
		case 320:
			return 11;
			break;
		
		case 321:
			return 11;
			break;
		
		case 322:
			return 11;
			break;
		
		case 323:
			return 11;
			break;
		
		case 263:
			return 11;
			break;
		
		case 264:
			return 11;
			break;
		
		case 265:
			return 11;
			break;
		
		case 302:
			return 11;
			break;
		
		case 303:
			return 11;
			break;
		
		case 304:
			return 11;
			break;
		
		case 296:
			return 11;
			break;
		
		case 297:
			return 11;
			break;
		
		case 298:
			return 11;
			break;
		
		case 299:
			return 11;
			break;
		
		case 300:
			return 11;
			break;
		
		case 301:
			return 11;
			break;
		
		case 1228:
			return 11;
			break;
		
		case 1229:
			return 11;
			break;
		
		case 1230:
			return 11;
			break;
		
		case 1231:
			return 11;
			break;
		
		case 1232:
			return 11;
			break;
		
		case 1233:
			return 11;
			break;
		
		case 1251:
			return 11;
			break;
		
		case 1252:
			return 11;
			break;
		
		case 156:
			return 5;
			break;
		
		case 157:
			return 10;
			break;
		
		case 158:
			return 15;
			break;
		
		case 159:
			return 20;
			break;
		
		case 160:
			return 25;
			break;
		
		case 2:
			return 27;
			break;
		
		case 3:
			return 24;
			break;
		
		case 4:
			return 22;
			break;
		
		case 6:
			return 15;
			break;
		
		case 7:
			return 18;
			break;
		
		case 8:
			return 44;
			break;
		
		case 9:
			return 16;
			break;
		
		case 10:
			return 23;
			break;
		
		case 11:
			return 38;
			break;
		
		case 12:
			return 32;
			break;
		
		case 13:
			return 11;
			break;
		
		case 14:
			return 56;
			break;
		
		case 15:
			return 28;
			break;
		
		case 288:
			return 44;
			break;
		
		case 289:
			return 16;
			break;
		
		case 290:
			return 23;
			break;
		
		case 291:
			return 38;
			break;
		
		case 292:
			return 32;
			break;
		
		case 293:
			return 11;
			break;
		
		case 294:
			return 56;
			break;
		
		case 295:
			return 28;
			break;
		
		case 17:
			return 75;
			break;
		
		case 136:
			return 50;
			break;
		
		case 137:
			return 50;
			break;
		
		case 138:
			return 50;
			break;
		
		case 139:
			return 50;
			break;
		
		case 140:
			return 50;
			break;
		
		case 141:
			return 50;
			break;
		
		case 142:
			return 50;
			break;
		
		case 143:
			return 50;
			break;
		
		case 144:
			return 50;
			break;
		
		case 145:
			return 50;
			break;
		
		case 146:
			return 50;
			break;
		
		case 147:
			return 50;
			break;
		
		case 148:
			return 50;
			break;
		
		case 149:
			return 50;
			break;
		
		case 150:
			return 50;
			break;
		
		case 151:
			return 50;
			break;
		
		case 152:
			return 50;
			break;
		
		case 153:
			return 50;
			break;
		
		case 154:
			return 50;
			break;
		
		case 155:
			return 50;
			break;
		
		case 36:
			return 100;
			break;
		
		case 238:
			if (Global_262145.f_2867 > -1)
			{
				return Global_262145.f_2867;
			}
			else
			{
				return 0;
			}
			break;
		
		case 239:
			if (Global_262145.f_2868 > -1)
			{
				return Global_262145.f_2868;
			}
			else
			{
				return 15;
			}
			break;
		
		case 240:
			if (Global_262145.f_2869 > -1)
			{
				return Global_262145.f_2869;
			}
			else
			{
				return 30;
			}
			break;
		
		case 241:
			if (Global_262145.f_2870 > -1)
			{
				return Global_262145.f_2870;
			}
			else
			{
				return 45;
			}
			break;
		
		case 242:
			if (Global_262145.f_2871 > -1)
			{
				return Global_262145.f_2871;
			}
			else
			{
				return 60;
			}
			break;
		
		case 243:
			if (Global_262145.f_2872 > -1)
			{
				return Global_262145.f_2872;
			}
			else
			{
				return 75;
			}
			break;
		
		case 244:
			if (Global_262145.f_2873 > -1)
			{
				return Global_262145.f_2873;
			}
			else
			{
				return 90;
			}
			break;
		
		case 245:
			if (Global_262145.f_2874 > -1)
			{
				return Global_262145.f_2874;
			}
			else
			{
				return 105;
			}
			break;
		
		case 246:
			if (Global_262145.f_2875 > -1)
			{
				return Global_262145.f_2875;
			}
			else
			{
				return 130;
			}
			break;
		
		case 247:
			if (Global_262145.f_2876 > -1)
			{
				return Global_262145.f_2876;
			}
			else
			{
				return 145;
			}
			break;
	}
	switch (iParam0)
	{
		case 345:
			return 11;
			break;
		
		case 346:
			return 11;
			break;
		
		case 347:
			return 11;
			break;
		
		case 348:
			return 11;
			break;
		
		case 349:
			return 11;
			break;
		
		case 350:
			return 11;
			break;
		
		case 351:
			return 11;
			break;
		
		case 352:
			return 11;
			break;
		
		case 353:
			return 11;
			break;
		
		case 354:
			return 11;
			break;
		
		case 355:
			return 11;
			break;
		
		case 356:
			return 11;
			break;
		
		case 357:
			return 11;
			break;
		
		case 358:
			return 11;
			break;
		
		case 359:
			return 11;
			break;
		
		case 360:
			return 11;
			break;
		
		case 361:
			return 11;
			break;
		
		case 362:
			return 11;
			break;
		
		case 363:
			return 11;
			break;
		
		case 364:
			return 11;
			break;
	}
	switch (iParam0)
	{
		case 56:
			return 100;
		
		case 57:
			return 100;
		
		case 58:
			return 100;
		
		case 59:
			return 100;
		
		case 60:
			return 100;
		
		case 61:
			return 100;
		
		case 62:
			return 100;
		
		case 63:
			return 100;
		
		case 64:
			return 100;
		
		case 65:
			return 100;
		
		case 66:
			return 100;
		
		case 67:
			return 100;
		
		case 68:
			return 100;
		
		case 69:
			return 100;
		
		case 70:
			return 100;
		
		case 71:
			return 100;
		
		case 72:
			return 100;
		
		case 73:
			return 100;
		
		case 74:
			return 100;
		
		case 75:
			return 100;
		
		case 76:
			return 200;
		
		case 77:
			return 200;
		
		case 78:
			return 200;
		
		case 79:
			return 200;
		
		case 80:
			return 200;
		
		case 81:
			return 200;
		
		case 82:
			return 200;
		
		case 83:
			return 200;
		
		case 84:
			return 200;
		
		case 85:
			return 200;
		
		case 86:
			return 200;
		
		case 87:
			return 200;
		
		case 88:
			return 200;
		
		case 89:
			return 200;
		
		case 90:
			return 200;
		
		case 91:
			return 200;
		
		case 92:
			return 200;
		
		case 93:
			return 200;
		
		case 94:
			return 200;
		
		case 95:
			return 200;
		
		case 96:
			return 400;
		
		case 97:
			return 400;
		
		case 98:
			return 400;
		
		case 99:
			return 400;
		
		case 100:
			return 400;
		
		case 101:
			return 400;
		
		case 102:
			return 400;
		
		case 103:
			return 400;
		
		case 104:
			return 400;
		
		case 105:
			return 400;
		
		case 106:
			return 400;
		
		case 107:
			return 400;
		
		case 108:
			return 400;
		
		case 109:
			return 400;
		
		case 110:
			return 400;
		
		case 111:
			return 400;
		
		case 112:
			return 400;
		
		case 113:
			return 400;
		
		case 114:
			return 400;
		
		case 115:
			return 400;
		
		case 116:
			return 600;
		
		case 117:
			return 600;
		
		case 118:
			return 600;
		
		case 119:
			return 600;
		
		case 120:
			return 600;
		
		case 121:
			return 600;
		
		case 122:
			return 600;
		
		case 123:
			return 600;
		
		case 124:
			return 600;
		
		case 125:
			return 600;
		
		case 126:
			return 600;
		
		case 127:
			return 600;
		
		case 128:
			return 600;
		
		case 129:
			return 600;
		
		case 130:
			return 600;
		
		case 131:
			return 600;
		
		case 132:
			return 600;
		
		case 133:
			return 600;
		
		case 134:
			return 600;
		
		case 135:
			return 600;
		
		default:
	}
	switch (iParam0)
	{
		case 161:
			return 75;
		
		case 162:
			return 50;
		
		case 163:
			return 100;
		
		case 164:
			return 600;
		
		case 165:
			return 400;
		
		case 166:
			return 100;
		
		case 167:
			return 75;
		
		case 168:
			return 50;
		
		case 169:
			return 100;
		
		case 170:
			return 600;
		
		case 171:
			return 400;
		
		case 172:
			return 100;
		
		case 173:
			return 75;
		
		case 174:
			return 50;
		
		case 175:
			return 100;
		
		case 176:
			return 600;
		
		case 177:
			return 400;
		
		case 178:
			return 100;
		
		case 179:
			return 75;
		
		case 180:
			return 50;
		
		case 181:
			return 100;
		
		case 182:
			return 600;
		
		case 183:
			return 400;
		
		case 184:
			return 100;
		
		default:
	}
	switch (iParam0)
	{
		case 185:
			return 75;
		
		case 186:
			return 50;
		
		case 187:
			return 100;
		
		case 188:
			return 600;
		
		case 189:
			return 400;
		
		case 190:
			return 100;
		
		case 191:
			return 200;
		
		case 192:
			return 200;
		
		case 193:
			return 200;
		
		case 194:
			return 200;
		
		case 195:
			return 75;
		
		case 196:
			return 50;
		
		case 197:
			return 100;
		
		case 198:
			return 600;
		
		case 199:
			return 400;
		
		case 200:
			return 100;
		
		case 201:
			return 200;
		
		case 202:
			return 75;
		
		case 203:
			return 50;
		
		case 204:
			return 100;
		
		case 205:
			return 600;
		
		case 206:
			return 400;
		
		case 207:
			return 100;
		
		case 208:
			return 200;
		
		case 209:
			return 75;
		
		case 210:
			return 50;
		
		case 211:
			return 100;
		
		case 212:
			return 600;
		
		case 213:
			return 400;
		
		case 214:
			return 100;
		
		case 215:
			return 200;
		
		case 224:
			return 75;
		
		case 225:
			return 50;
		
		case 226:
			return 100;
		
		case 227:
			return 600;
		
		case 228:
			return 400;
		
		case 229:
			return 100;
		
		case 230:
			return 200;
		
		case 231:
			return 75;
		
		case 232:
			return 50;
		
		case 233:
			return 100;
		
		case 234:
			return 600;
		
		case 235:
			return 400;
		
		case 236:
			return 100;
		
		case 237:
			return 200;
		
		default:
	}
	switch (iParam0)
	{
		case 266:
			return 75;
		
		case 267:
			return 50;
		
		case 268:
			return 100;
		
		case 269:
			return 600;
		
		case 270:
			return 400;
		
		case 271:
			return 100;
		
		case 272:
			return 200;
		
		case 273:
			return 75;
		
		case 274:
			return 50;
		
		case 275:
			return 100;
		
		case 276:
			return 600;
		
		case 277:
			return 400;
		
		case 278:
			return 100;
		
		case 279:
			return 200;
		
		case 280:
			return 75;
		
		case 281:
			return 50;
		
		case 282:
			return 100;
		
		case 283:
			return 600;
		
		case 284:
			return 400;
		
		case 285:
			return 100;
		
		case 286:
			return 200;
		
		case 324:
			return 75;
		
		case 325:
			return 50;
		
		case 326:
			return 100;
		
		case 327:
			return 600;
		
		case 328:
			return 400;
		
		case 329:
			return 100;
		
		case 330:
			return 200;
		
		case 331:
			return 75;
		
		case 332:
			return 50;
		
		case 333:
			return 100;
		
		case 334:
			return 600;
		
		case 335:
			return 400;
		
		case 336:
			return 100;
		
		case 337:
			return 200;
		
		case 338:
			return 75;
		
		case 339:
			return 50;
		
		case 340:
			return 100;
		
		case 341:
			return 600;
		
		case 342:
			return 400;
		
		case 343:
			return 100;
		
		case 344:
			return 200;
		
		case 372:
			return 11;
		
		case 373:
			return 11;
		
		case 374:
			return 11;
		
		case 375:
			return 11;
		
		case 376:
			return 11;
		
		default:
	}
	switch (iParam0)
	{
		case 1184:
			return 11;
			break;
		
		case 1185:
			return 11;
			break;
		
		case 1234:
			return 11;
			break;
		
		case 1235:
			return 11;
			break;
		
		case 1236:
			return 11;
			break;
		
		case 1253:
			return 11;
			break;
	}
	return 0;
}

int func_619(int iParam0, bool bParam1)//Position - 0x2FC70
{
	if (bParam1)
	{
	}
	return func_218(iParam0);
}

int func_620(char* sParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x2FC83
{
	if (func_111())
	{
		if (func_625(uParam1, iParam2, bParam3))
		{
		}
		else if (uParam1->f_376 == 2)
		{
			NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_113(func_112()));
			if (!bParam3)
			{
				func_624(iParam2);
				StringCopy(sParam0, func_622(func_623(iParam2)), 64);
			}
			else
			{
				func_621();
				StringCopy(sParam0, "CAS_LW_ALS", 64);
			}
			func_107(func_112());
			return 1;
		}
	}
	else
	{
		if (!bParam3)
		{
			func_624(iParam2);
			StringCopy(sParam0, func_622(func_623(iParam2)), 64);
		}
		else
		{
			func_621();
			StringCopy(sParam0, "CAS_LW_ALS", 64);
		}
		return 1;
	}
	return 0;
}

void func_621()//Position - 0x2FD1E
{
	int iVar0;
	
	if (func_21(1276, -1, 0) < 30)
	{
		iVar0 = (20 - func_21(1276, -1, 0));
	}
	func_219(1276, iVar0, -1);
	func_185(16, 1, -1);
	func_591(1, -251807494, 1359863693, iVar0, -84733279, -1095556500, 0, -472400371, 0);
	if (func_21(1277, -1, 0) < 15)
	{
		iVar0 = (15 - func_21(1277, -1, 0));
	}
	func_219(1277, iVar0, -1);
	func_185(15, 1, -1);
	func_591(1, 1199442189, 1359863693, iVar0, -84733279, -1095556500, 0, -472400371, 0);
	if (func_21(1278, -1, 0) < 5)
	{
		iVar0 = (5 - func_21(1278, -1, 0));
	}
	func_185(14, 1, -1);
	func_219(1278, iVar0, -1);
	func_591(1, 1486811039, 1359863693, iVar0, -84733279, -1095556500, 0, -472400371, 0);
	if (func_21(1098, -1, 0) < 20)
	{
		iVar0 = (20 - func_21(1098, -1, 0));
	}
	func_219(1098, iVar0, -1);
	func_591(1, -181862273, 1359863693, iVar0, -84733279, -1095556500, 0, -472400371, 0);
	if (func_21(62, -1, 0) < 10)
	{
		iVar0 = (10 - func_21(62, -1, 0));
	}
	func_219(62, iVar0, -1);
	func_591(1, -39155154, 1359863693, iVar0, -84733279, -1095556500, 0, -472400371, 0);
	if (func_21(63, -1, 0) < 10)
	{
		iVar0 = (10 - func_21(63, -1, 0));
	}
	func_219(63, iVar0, -1);
	func_591(1, -1600998734, 1359863693, iVar0, -84733279, -1095556500, 0, -472400371, 0);
}

char* func_622(int iParam0)//Position - 0x2FEE4
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "CAS_LW_S1";
		
		case 1:
			return "CAS_LW_S2";
		
		case 2:
			return "CAS_LW_S3";
		
		case 4:
			return "CAS_LW_S4";
		
		case 0:
			return "CAS_LW_S5";
		
		case 5:
			return "CAS_LW_S6";
		
		default:
	}
	return "INVALID";
}

int func_623(int iParam0)//Position - 0x2FF49
{
	switch (iParam0)
	{
		case 8:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		default:
	}
	return -1;
}

void func_624(int iParam0)//Position - 0x2FF95
{
	int iVar0;
	
	switch (func_623(iParam0))
	{
		case 3:
			if (func_21(1276, -1, 0) < 30)
			{
				iVar0 = (20 - func_21(1276, -1, 0));
			}
			func_219(1276, iVar0, -1);
			func_185(16, 1, -1);
			func_591(1, -251807494, 1359863693, iVar0, -84733279, -1095556500, 0, -472400371, 0);
			break;
		
		case 1:
			if (func_21(1277, -1, 0) < 15)
			{
				iVar0 = (15 - func_21(1277, -1, 0));
			}
			func_219(1277, iVar0, -1);
			func_185(15, 1, -1);
			func_591(1, 1199442189, 1359863693, iVar0, -84733279, -1095556500, 0, -472400371, 0);
			break;
		
		case 2:
			if (func_21(1278, -1, 0) < 5)
			{
				iVar0 = (5 - func_21(1278, -1, 0));
			}
			func_185(14, 1, -1);
			func_219(1278, iVar0, -1);
			func_591(1, 1486811039, 1359863693, iVar0, -84733279, -1095556500, 0, -472400371, 0);
			break;
		
		case 4:
			if (func_21(1098, -1, 0) < 20)
			{
				iVar0 = (20 - func_21(1098, -1, 0));
			}
			func_219(1098, iVar0, -1);
			func_591(1, -181862273, 1359863693, iVar0, -84733279, -1095556500, 0, -472400371, 0);
			break;
		
		case 0:
			if (func_21(62, -1, 0) < 10)
			{
				iVar0 = (10 - func_21(62, -1, 0));
			}
			func_219(62, iVar0, -1);
			func_591(1, -39155154, 1359863693, iVar0, -84733279, -1095556500, 0, -472400371, 0);
			break;
		
		case 5:
			if (func_21(63, -1, 0) < 10)
			{
				iVar0 = (10 - func_21(63, -1, 0));
			}
			func_219(63, iVar0, -1);
			func_591(1, -1600998734, 1359863693, iVar0, -84733279, -1095556500, 0, -472400371, 0);
			break;
	}
}

int func_625(var uParam0, int iParam1, bool bParam2)//Position - 0x3019F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char[] cVar4[8];
	char* sVar5;
	
	bVar0 = false;
	switch (uParam0->f_382)
	{
		case 0:
			iVar1 = 0;
			iVar2 = 0;
			iVar3 = 0;
			if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
			{
				if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar3)
				{
					iVar2 = iVar3;
				}
				else
				{
					iVar2 = (iVar3 - (iVar3 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
				}
				iVar3 = (iVar3 - iVar2);
			}
			if (iVar3 > 0)
			{
				if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
				{
					if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar3)
					{
						iVar1 = iVar3;
					}
					else
					{
						iVar1 = (iVar3 - (iVar3 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
					}
					iVar3 = (iVar3 - iVar1);
				}
			}
			cVar4 = func_627(func_623(iParam1));
			func_626(&sVar5, cVar4, 3);
			if (bParam2)
			{
				cVar4 = func_627(3);
				func_626(&sVar5, cVar4, 3);
				if (func_147(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_627(1);
				func_626(&sVar5, cVar4, 3);
				if (func_147(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_627(2);
				func_626(&sVar5, cVar4, 3);
				if (func_147(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_627(4);
				func_626(&sVar5, cVar4, 3);
				if (func_147(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_627(0);
				func_626(&sVar5, cVar4, 3);
				if (func_147(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				cVar4 = func_627(5);
				func_626(&sVar5, cVar4, 3);
				if (func_147(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					if (func_142())
					{
						HUD::USE_FAKE_MP_CASH(true);
						HUD::CHANGE_FAKE_MP_CASH(-iVar1, -iVar2);
						uParam0->f_382 = 1;
					}
					else
					{
						uParam0->f_382 = 3;
					}
				}
			}
			else if (func_147(78225582, -1303831698, MISC::GET_HASH_KEY(&sVar5), 537254313, 1, 0, 1, 8, 0, 3))
			{
				if (func_142())
				{
					HUD::USE_FAKE_MP_CASH(true);
					HUD::CHANGE_FAKE_MP_CASH(-iVar1, -iVar2);
					uParam0->f_382 = 1;
				}
				else
				{
					uParam0->f_382 = 3;
				}
			}
			else
			{
				uParam0->f_382 = 3;
			}
			break;
		
		case 1:
			if (func_141(func_112()))
			{
				if (func_140(func_112()) == 2)
				{
					uParam0->f_382 = 2;
				}
				else
				{
					uParam0->f_382 = 3;
				}
			}
			break;
		
		case 2:
			uParam0->f_382 = 0;
			HUD::USE_FAKE_MP_CASH(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			uParam0->f_376 = 2;
			return 0;
			break;
		
		case 3:
			func_107(func_112());
			uParam0->f_382 = 0;
			HUD::USE_FAKE_MP_CASH(false);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			uParam0->f_376 = 0;
			return 0;
			break;
	}
	return 1;
	uParam0->f_382 = 0;
	uParam0->f_376 = -1;
	return 0;
}

void func_626(char* sParam0, char* sParam1, int iParam2)//Position - 0x30491
{
	StringCopy(sParam0, "MT_", 64);
	StringConCat(sParam0, sParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

char* func_627(int iParam0)//Position - 0x304B5
{
	int iVar0;
	
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 3:
			return "SNK_ITEM1";
		
		case 1:
			return "SNK_ITEM2";
		
		case 2:
			return "SNK_ITEM3";
		
		case 4:
			return "SNK_ITEM4";
		
		case 0:
			return "SNK_ITEM5";
		
		case 5:
			return "SNK_ITEM6";
		
		case 6:
			return "SNK_ITEM7";
		
		default:
	}
	return "";
}

int func_628(char* sParam0, int iParam1, var uParam2, struct<5> Param3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165, var uParam166, var uParam167, var uParam168, var uParam169, var uParam170, var uParam171, var uParam172, var uParam173, var uParam174, var uParam175, var uParam176, var uParam177, var uParam178, var uParam179, var uParam180, var uParam181, var uParam182, var uParam183, var uParam184, var uParam185, var uParam186, var uParam187, var uParam188, var uParam189, var uParam190, var uParam191, var uParam192, var uParam193, var uParam194, var uParam195, var uParam196, var uParam197, var uParam198, var uParam199, var uParam200, var uParam201, var uParam202, var uParam203, var uParam204, var uParam205, var uParam206, var uParam207, var uParam208, var uParam209, var uParam210, var uParam211, var uParam212, var uParam213, var uParam214, var uParam215, var uParam216, var uParam217, var uParam218, var uParam219, var uParam220, var uParam221, var uParam222, var uParam223, var uParam224, var uParam225, var uParam226, var uParam227, var uParam228, var uParam229, var uParam230, var uParam231, var uParam232, var uParam233, var uParam234, var uParam235, var uParam236, var uParam237, var uParam238, var uParam239, var uParam240, var uParam241, var uParam242, var uParam243, var uParam244)//Position - 0x30526
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iParam1)
	{
		case 4:
			if (BitTest(Param3.f_4, 1))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_PISTOL"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_PISTOL"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		
		case 7:
			if (BitTest(Param3.f_4, 2))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SMG"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_microsmg"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SMG"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		
		case 5:
			if (BitTest(Param3.f_4, 3))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_RIFLE"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_RIFLE"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		
		case 3:
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_131, 4))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MG"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_mg"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MG"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		
		case 6:
			if (BitTest(Param3.f_4, 4))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SHOTGUN"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_pumpshotgun"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SHOTGUN"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		
		case 2:
			if (BitTest(Param3.f_4, 5))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_SNIPER"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		
		case 0:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_minigun"), false))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MINIGUN"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_minigun"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_MINIGUN"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
		
		case 1:
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenadelauncher"), false) || func_629(joaat("weapon_grenade"), -1, 0))
			{
				iVar0 = WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_GRENADELAUNCHER"));
				WEAPON::GET_MAX_AMMO(PLAYER::PLAYER_PED_ID(), joaat("weapon_grenadelauncher"), &iVar1);
				if (iVar1 > iVar0)
				{
					iVar2 = (iVar1 - iVar0);
				}
				WEAPON::SET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), joaat("AMMO_GRENADELAUNCHER"), (iVar0 + iVar2));
				StringCopy(sParam0, func_634(iParam1), 64);
				return 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(uParam2->f_380), 0);
			}
			break;
	}
	return 0;
}

int func_629(int iParam0, int iParam1, int iParam2)//Position - 0x308C3
{
	var uVar0;
	int iVar1;
	
	if (iParam2 == 0)
	{
	}
	if (func_603())
	{
		return 0;
	}
	uVar0 = func_632(iParam0, iParam1);
	iVar1 = func_630(iParam0);
	return BitTest(uVar0, func_597(iVar1));
}

int func_630(int iParam0)//Position - 0x308F7
{
	return func_631(iParam0);
}

int func_631(int iParam0)//Position - 0x30905
{
	switch (iParam0)
	{
		case joaat("weapon_unarmed"):
			return 0;
			break;
		
		case joaat("weapon_pistol"):
			return 1;
			break;
		
		case joaat("weapon_combatpistol"):
			return 2;
			break;
		
		case joaat("weapon_appistol"):
			return 3;
			break;
		
		case joaat("weapon_pistol50"):
			return 4;
			break;
		
		case joaat("weapon_smg"):
			return 5;
			break;
		
		case joaat("weapon_assaultsmg"):
			return 6;
			break;
		
		case joaat("weapon_microsmg"):
			return 7;
			break;
		
		case joaat("weapon_assaultrifle"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle"):
			return 9;
			break;
		
		case joaat("weapon_advancedrifle"):
			return 11;
			break;
		
		case joaat("weapon_mg"):
			return 12;
			break;
		
		case joaat("weapon_combatmg"):
			return 13;
			break;
		
		case -572349828:
			return 14;
			break;
		
		case joaat("weapon_stickybomb"):
			return 15;
			break;
		
		case joaat("weapon_grenade"):
			return 16;
			break;
		
		case joaat("weapon_smokegrenade"):
			return 17;
			break;
		
		case joaat("weapon_remotesniper"):
			return 18;
			break;
		
		case 392730790:
			return 19;
			break;
		
		case joaat("weapon_sniperrifle"):
			return 20;
			break;
		
		case joaat("weapon_heavysniper"):
			return 21;
			break;
		
		case joaat("weapon_pumpshotgun"):
			return 22;
			break;
		
		case joaat("weapon_bullpupshotgun"):
			return 23;
			break;
		
		case joaat("weapon_assaultshotgun"):
			return 24;
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			return 25;
			break;
		
		case joaat("weapon_grenadelauncher"):
			return 26;
			break;
		
		case joaat("weapon_rpg"):
			return 27;
			break;
		
		case joaat("weapon_minigun"):
			return 28;
			break;
		
		case -344484024:
			return 29;
			break;
		
		case -1887867191:
			return 30;
			break;
		
		case joaat("weapon_stungun"):
			return 31;
			break;
		
		case -837150131:
			return 32;
			break;
		
		case joaat("gadget_parachute"):
			return 33;
			break;
		
		case joaat("weapon_knife"):
			return 34;
			break;
		
		case joaat("weapon_nightstick"):
			return 35;
			break;
		
		case joaat("weapon_hammer"):
			return 36;
			break;
		
		case joaat("weapon_bat"):
			return 37;
			break;
		
		case joaat("weapon_crowbar"):
			return 38;
			break;
		
		case joaat("weapon_golfclub"):
			return 39;
			break;
		
		case joaat("weapon_grenadelauncher_smoke"):
			return 40;
			break;
		
		case joaat("weapon_molotov"):
			return 41;
			break;
		
		case joaat("weapon_fireextinguisher"):
			return 42;
			break;
		
		case joaat("weapon_petrolcan"):
			return 43;
			break;
		
		case joaat("weapon_digiscanner"):
			return 44;
			break;
		
		case joaat("weapon_bottle"):
			return 45;
			break;
		
		case joaat("weapon_specialcarbine"):
			return 46;
			break;
		
		case joaat("weapon_snspistol"):
			return 47;
			break;
		
		case joaat("weapon_heavypistol"):
			return 49;
			break;
		
		case joaat("weapon_bullpuprifle"):
			return 48;
			break;
		
		case joaat("weapon_gusenberg"):
			return 50;
			break;
		
		case joaat("weapon_dagger"):
			return 51;
			break;
		
		case joaat("weapon_vintagepistol"):
			return 52;
			break;
		
		case joaat("weapon_flaregun"):
			return 57;
			break;
		
		case joaat("weapon_musket"):
			return 53;
			break;
		
		case joaat("weapon_firework"):
			return 54;
			break;
		
		case joaat("weapon_marksmanrifle"):
			return 56;
			break;
		
		case joaat("weapon_heavyshotgun"):
			return 55;
			break;
		
		case joaat("weapon_proxmine"):
			return 60;
			break;
		
		case joaat("weapon_hominglauncher"):
			return 61;
			break;
		
		case joaat("weapon_hatchet"):
			return 58;
			break;
		
		case joaat("weapon_railgun"):
			return 59;
			break;
		
		case joaat("weapon_combatpdw"):
			return 64;
			break;
		
		case joaat("weapon_knuckle"):
			return 62;
			break;
		
		case joaat("weapon_marksmanpistol"):
			return 63;
			break;
		
		case joaat("weapon_machete"):
			return 65;
			break;
		
		case joaat("weapon_machinepistol"):
			return 68;
			break;
		
		case joaat("weapon_dbshotgun"):
			return 66;
			break;
		
		case joaat("weapon_compactrifle"):
			return 67;
			break;
		
		case joaat("weapon_flashlight"):
			return 69;
			break;
		
		case joaat("weapon_revolver"):
			return 70;
			break;
		
		case joaat("weapon_switchblade"):
			return 71;
			break;
		
		case joaat("weapon_autoshotgun"):
			return 72;
			break;
		
		case joaat("weapon_minismg"):
			return 73;
			break;
		
		case joaat("weapon_compactlauncher"):
			return 74;
			break;
		
		case joaat("weapon_battleaxe"):
			return 75;
			break;
		
		case joaat("weapon_pipebomb"):
			return 76;
			break;
		
		case joaat("weapon_poolcue"):
			return 77;
			break;
		
		case joaat("weapon_wrench"):
			return 78;
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			return 8;
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			return 9;
			break;
		
		case joaat("weapon_combatmg_mk2"):
			return 13;
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			return 21;
			break;
		
		case joaat("weapon_pistol_mk2"):
			return 1;
			break;
		
		case joaat("weapon_smg_mk2"):
			return 5;
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			return 22;
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			return 46;
			break;
		
		case joaat("weapon_snspistol_mk2"):
			return 47;
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			return 56;
			break;
		
		case joaat("weapon_revolver_mk2"):
			return 70;
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			return 48;
			break;
		
		case joaat("weapon_doubleaction"):
			return 79;
			break;
		
		case joaat("weapon_stone_hatchet"):
			return 80;
			break;
		
		case joaat("weapon_raypistol"):
			return 81;
			break;
		
		case joaat("weapon_raycarbine"):
			return 82;
			break;
		
		case joaat("weapon_rayminigun"):
			return 83;
			break;
		
		case joaat("weapon_navyrevolver"):
			return 84;
			break;
		
		case joaat("weapon_ceramicpistol"):
			return 85;
			break;
		
		case joaat("weapon_combatshotgun"):
			return 86;
			break;
		
		case joaat("weapon_militaryrifle"):
			return 88;
			break;
		
		case joaat("weapon_gadgetpistol"):
			return 87;
			break;
		
		case joaat("weapon_heavyrifle"):
			return 10;
			break;
		
		case joaat("weapon_emplauncher"):
			return 89;
			break;
		
		case joaat("weapon_fertilizercan"):
			return 90;
			break;
		
		case joaat("weapon_stungun_mp"):
			return 91;
			break;
		
		case joaat("WEAPON_METALDETECTOR"):
			return 92;
			break;
		
		case joaat("WEAPON_TACTICALRIFLE"):
			return 93;
			break;
		
		case joaat("WEAPON_PRECISIONRIFLE"):
			return 94;
			break;
	}
	return 0;
}

int func_632(int iParam0, int iParam1)//Position - 0x30EE5
{
	int iVar0;
	
	iVar0 = func_21(func_633(iParam0), iParam1, 0);
	return iVar0;
}

int func_633(int iParam0)//Position - 0x30EFE
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_630(iParam0);
	iVar1 = func_602(iVar0);
	if ((func_601() == 0 || func_600() == 0) || (func_601() == 999 && func_600() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 680;
				break;
			
			case 1:
				return 681;
				break;
			
			case 2:
				return 2429;
				break;
			
			case 3:
				return 10279;
				break;
		}
	}
	return 13122;
}

char* func_634(int iParam0)//Position - 0x30F8F
{
	switch (iParam0)
	{
		case 0:
			return "CAS_LW_AM1";
		
		case 1:
			return "CAS_LW_AM2";
		
		case 2:
			return "CAS_LW_AM3";
		
		case 3:
			return "CAS_LW_AM4";
		
		case 4:
			return "CAS_LW_AM5";
		
		case 5:
			return "CAS_LW_AM6";
		
		case 6:
			return "CAS_LW_AM7";
		
		case 7:
			return "CAS_LW_AM8";
		
		default:
	}
	return "INVALID";
}

int func_635()//Position - 0x3100A
{
	int iVar0[16];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 16)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_636(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 16)
	{
		if (iVar3 <= func_636(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_636(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_636(int iParam0)//Position - 0x3108C
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26852;
		
		case 1:
			return Global_262145.f_26852;
		
		case 2:
			return Global_262145.f_26852;
		
		case 3:
			return Global_262145.f_26852;
		
		case 4:
			return Global_262145.f_26852;
		
		case 5:
			return Global_262145.f_26852;
		
		case 6:
			return Global_262145.f_26852;
		
		case 7:
			return Global_262145.f_26852;
		
		case 8:
			return Global_262145.f_26852;
		
		case 9:
			return Global_262145.f_26852;
		
		case 10:
			return Global_262145.f_26852;
		
		case 11:
			return Global_262145.f_26852;
		
		case 12:
			return Global_262145.f_26852;
		
		case 13:
			return Global_262145.f_26852;
		
		case 14:
			return Global_262145.f_26852;
		
		case 15:
			return Global_262145.f_26852;
		
		default:
	}
	return 0;
}

int func_637(char* sParam0, int* iParam1, var uParam2)//Position - 0x3119C
{
	int iVar0;
	
	if (!BitTest(uParam2->f_380, 0))
	{
		uParam2->f_384 = func_711(func_712());
		MISC::SET_BIT(&(uParam2->f_380), 0);
	}
	else if (!func_710(uParam2->f_384) || (func_363(uParam2->f_384) && !func_543(uParam2->f_384, -1)))
	{
		if (func_363(uParam2->f_384) && !func_543(uParam2->f_384, -1))
		{
		}
		iVar0 = func_709(uParam2->f_384);
		func_641(iVar0, &(uParam2->f_376), &(uParam2->f_383));
		if (uParam2->f_383 == 0)
		{
			StringCopy(sParam0, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(uParam2->f_384), 64);
			return 1;
		}
	}
	else if (func_638(iParam1, uParam2->f_384))
	{
		return func_189(sParam0, iParam1, uParam2, -1, 1);
	}
	return 0;
}

int func_638(int* iParam0, int iParam1)//Position - 0x3126B
{
	if (iParam1 != 0)
	{
		if (func_640(iParam1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, 947.0432f, 116.779f, 79.4955f, 318.573f, false, false, false);
				if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) > 0)
				{
					VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
				}
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
				VEHICLE::_0xAB04325045427AAE(*iParam0, false);
				VEHICLE::SET_VEHICLE_FULLBEAM(*iParam0, false);
				VEHICLE::SET_VEHICLE_LIGHTS(*iParam0, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 2);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1000, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1000f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1000f);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, 0f);
				VEHICLE::_0xDBC631F109350B8C(*iParam0, true);
				VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(*iParam0, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(*iParam0, false);
				AUDIO::SET_VEHICLE_RADIO_ENABLED(*iParam0, false);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(*iParam0, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
			}
			else if (func_127(*iParam0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(*iParam0, iParam1))
				{
					return 1;
				}
				else if (func_639(*iParam0, &uLocal_64))
				{
					VEHICLE::DELETE_VEHICLE(iParam0);
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_639(int iParam0, var uParam1)//Position - 0x3138E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_640(int iParam0)//Position - 0x313ED
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_641(int iParam0, var uParam1, var uParam2)//Position - 0x3140B
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	
	*uParam2 = -1;
	iVar0 = func_662(iParam0, 0);
	if (iVar0 == -1)
	{
		*uParam2 = 1;
		*uParam1 = 3;
		return 1;
	}
	if (func_659(iVar0))
	{
		*uParam2 = 2;
		*uParam1 = 3;
		return 1;
	}
	if (!func_111())
	{
		func_656(iVar0);
		func_655();
		*uParam2 = 0;
		*uParam1 = 2;
		return 1;
	}
	func_642(&sVar1, iParam0, 0, -1, 0);
	switch (*uParam1)
	{
		case 0:
			if (!func_147(78225582, -1843039992, MISC::GET_HASH_KEY(&sVar1), 537254313, 1, 0, 1, 4, 0, 3))
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_107(func_112());
				return 1;
			}
			sVar2 = "PO_COUPON_CAR_XMAS2017";
			if (!func_147(78225582, -1843039992, MISC::GET_HASH_KEY(sVar2), 537254313, 1, 0, 1, 4, MISC::GET_HASH_KEY(&sVar1), 3))
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_107(func_112());
				return 1;
			}
			if (func_142())
			{
				*uParam1 = 1;
			}
			else
			{
				*uParam2 = 3;
				*uParam1 = 3;
				func_107(func_112());
				return 1;
			}
			break;
		
		case 1:
			if (func_141(func_112()))
			{
				if (func_140(func_112()) == 2)
				{
					*uParam2 = 0;
					*uParam1 = 2;
					func_107(func_112());
					func_656(iVar0);
					func_655();
					return 1;
				}
				else
				{
					*uParam2 = 3;
					*uParam1 = 3;
					func_107(func_112());
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_642(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x31575
{
	int iVar0;
	struct<4> Var1;
	int iVar2;
	
	iVar0 = func_662(iParam1, iParam2);
	if (iVar0 == -1)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	if (iParam1 == 245)
	{
		StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
		return;
	}
	if (iParam1 == 323)
	{
		StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 324)
	{
		StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
		return;
	}
	if (iParam1 == 357)
	{
		StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
		return;
	}
	if (iParam1 == 402)
	{
		StringCopy(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
		return;
	}
	if (iParam1 == 518)
	{
		StringCopy(sParam0, "VE_KOSATKA_t0_v0", 64);
		return;
	}
	if (iParam1 == 449)
	{
		StringCopy(sParam0, "VE_RC_BANDITO_t0_v0", 64);
		return;
	}
	StringCopy(&Var1, func_654(iParam1), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1) || MISC::GET_HASH_KEY(&Var1) == -515263000)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	iVar2 = func_653(iParam1, -1);
	if (iVar2 == 0)
	{
		IntToString(sParam0, 0, 64);
		return;
	}
	func_397(sParam0, Var1, iVar2, 4, 1, iParam2, -1, -1, 1, bParam4);
	if ((((func_652(iParam1) || func_651(iParam1)) || func_650(func_653(iParam1, -1)) != -1) || func_649(func_653(iParam1, -1)) != -1) || func_648(func_653(iParam1, -1)) != -1)
	{
		if (iParam1 == 200)
		{
			if (Global_262145.f_20267)
			{
				if ((func_652(iParam1) && func_647()) || (func_651(iParam1) && !func_643(iParam1)))
				{
					func_397(sParam0, Var1, iVar2, 4, 1, iParam2, 1, -1, 1, bParam4);
				}
			}
		}
		else if (iParam2 != 0)
		{
			func_397(sParam0, Var1, iVar2, 4, 1, (iParam2 - 1), 1, -1, 1, bParam4);
		}
	}
	else if (iParam1 == 413)
	{
		func_397(sParam0, Var1, iVar2, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
	else if ((((iParam1 == 414 || iParam1 == 527) || iParam1 == 531) || iParam1 == 533) || iParam1 == 525)
	{
		func_397(sParam0, Var1, iVar2, 4, 1, iParam2, iParam3, -1, 1, bParam4);
	}
}

int func_643(int iParam0)//Position - 0x317A3
{
	int iVar0;
	
	if (!Global_78319)
	{
		return 0;
	}
	iVar0 = 0;
	switch (iParam0)
	{
		case 187:
			iVar0 = 16;
			break;
		
		case 177:
			iVar0 = 12;
			break;
		
		case 185:
			iVar0 = 14;
			break;
		
		case 174:
			iVar0 = 9;
			break;
		
		case 171:
			iVar0 = 20;
			break;
		
		case 172:
			iVar0 = 7;
			break;
		
		case 173:
			iVar0 = 8;
			break;
		
		case 175:
			iVar0 = 10;
			break;
		
		case 176:
			iVar0 = 11;
			break;
		
		case 178:
			iVar0 = 5;
			break;
		
		case 179:
			iVar0 = 6;
			break;
		
		case 183:
			iVar0 = 21;
			break;
		
		case 180:
			iVar0 = 18;
			break;
		
		case 181:
			iVar0 = 22;
			break;
		
		case 182:
			iVar0 = 19;
			break;
		
		case 184:
			iVar0 = 13;
			break;
		
		case 186:
			iVar0 = 15;
			break;
		
		case 188:
			iVar0 = 17;
			break;
	}
	return func_644(iVar0);
}

int func_644(int iParam0)//Position - 0x318AE
{
	var uVar0;
	int iVar1;
	
	if (func_603())
	{
		return 0;
	}
	uVar0 = func_645(iParam0);
	iVar1 = iParam0;
	return BitTest(uVar0, func_597(iVar1));
}

int func_645(var uParam0)//Position - 0x318D6
{
	int iVar0;
	
	iVar0 = func_21(func_646(uParam0), -1, 0);
	return iVar0;
}

int func_646(var uParam0)//Position - 0x318EE
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	iVar1 = func_602(iVar0);
	if ((func_601() == 0 || func_600() == 0) || (func_601() == 999 && func_600() == 999))
	{
		switch (iVar1)
		{
			case 0:
				return 739;
				break;
			
			case 1:
				return 740;
				break;
		}
	}
	return 13122;
}

int func_647()//Position - 0x3195D
{
	int iVar0;
	
	if (Global_152259 == 2)
	{
		return 1;
	}
	else if (Global_152259 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
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

int func_648(int iParam0)//Position - 0x31A15
{
	switch (iParam0)
	{
		case joaat("vetir"):
			return 0;
			break;
		
		case joaat("winky"):
			return 1;
			break;
		
		case joaat("longfin"):
			return 2;
			break;
		
		case joaat("annihilator2"):
			return 3;
			break;
		
		case joaat("alkonost"):
			return 4;
			break;
		
		case joaat("patrolboat"):
			return 5;
			break;
		
		case joaat("brioso2"):
			return 6;
			break;
		
		case joaat("weevil"):
			return 7;
			break;
		
		case joaat("italirsx"):
			return 8;
			break;
	}
	return -1;
}

int func_649(int iParam0)//Position - 0x31A9B
{
	switch (iParam0)
	{
		case joaat("penumbra2"):
			return 0;
			break;
		
		case joaat("seminole2"):
			return 1;
			break;
		
		case joaat("landstalker2"):
			return 2;
			break;
		
		case joaat("wolfsbane"):
			return 3;
			break;
		
		case joaat("club"):
			return 4;
			break;
		
		case joaat("dukes3"):
			return 5;
			break;
	}
	return -1;
}

int func_650(int iParam0)//Position - 0x31AF9
{
	switch (iParam0)
	{
		case joaat("firetruk"):
			return 0;
			break;
		
		case joaat("burrito2"):
			return 1;
			break;
		
		case joaat("boxville"):
			return 2;
			break;
		
		case joaat("stockade"):
			return 3;
			break;
		
		case joaat("asbo"):
			return 4;
			break;
		
		case joaat("kanjo"):
			return 5;
			break;
		
		case joaat("everon"):
			return 6;
			break;
		
		case joaat("retinue2"):
			return 7;
			break;
		
		case joaat("yosemite2"):
			return 8;
			break;
		
		case joaat("sugoi"):
			return 9;
			break;
		
		case joaat("sultan2"):
			return 10;
			break;
		
		case joaat("outlaw"):
			return 11;
			break;
		
		case joaat("vagrant"):
			return 12;
			break;
		
		case joaat("komoda"):
			return 13;
			break;
		
		case joaat("stryder"):
			return 14;
			break;
		
		case joaat("furia"):
			return 15;
			break;
		
		case joaat("zhaba"):
			return 16;
			break;
		
		case joaat("jugular"):
			return 17;
			break;
		
		case joaat("sentinel3"):
			return 18;
			break;
		
		case joaat("gauntlet3"):
			return 19;
			break;
		
		case joaat("ellie"):
			return 20;
			break;
		
		case joaat("defiler"):
			return 21;
			break;
		
		case joaat("manchez"):
			return 22;
			break;
	}
	return -1;
}

int func_651(int iParam0)//Position - 0x31C43
{
	if (((((((((((((((iParam0 == 171 || iParam0 == 172) || iParam0 == 173) || iParam0 == 175) || iParam0 == 177) || iParam0 == 178) || iParam0 == 179) || iParam0 == 180) || iParam0 == 181) || iParam0 == 182) || iParam0 == 183) || iParam0 == 184) || iParam0 == 185) || iParam0 == 186) || iParam0 == 187) || iParam0 == 188)
	{
		return 1;
	}
	return 0;
}

int func_652(int iParam0)//Position - 0x31CFD
{
	if ((((((iParam0 == 199 || iParam0 == 200) || iParam0 == 201) || iParam0 == 202) || iParam0 == 203) || iParam0 == 204) || iParam0 == 205)
	{
		return 1;
	}
	return 0;
}

int func_653(int iParam0, int iParam1)//Position - 0x31D54
{
	switch (iParam0)
	{
		case 0:
			return joaat("ztype");
		
		case 1:
			return joaat("stinger");
		
		case 2:
			return joaat("jb700");
		
		case 3:
			return joaat("cheetah");
		
		case 4:
			return joaat("entityxf");
		
		case 5:
			return joaat("adder");
		
		case 6:
			return joaat("monroe");
		
		case 7:
			return joaat("cogcabrio");
		
		case 10:
			return joaat("shamal");
		
		case 11:
			return joaat("stunt");
		
		case 12:
			return joaat("cuban800");
		
		case 13:
			return joaat("duster");
		
		case 14:
			return joaat("luxor");
		
		case 15:
			return joaat("frogger");
		
		case 16:
			return joaat("maverick");
		
		case 17:
			return joaat("rhino");
		
		case 18:
			return joaat("titan");
		
		case 19:
			return joaat("cargobob");
		
		case 20:
			return joaat("buzzard");
		
		case 21:
			return joaat("crusader");
		
		case 22:
			return joaat("barracks");
		
		case 24:
			return joaat("marquis");
		
		case 25:
			return joaat("jetmax");
		
		case 27:
			return joaat("squalo");
		
		case 29:
			return joaat("tropic");
		
		case 30:
			return joaat("seashark");
		
		case 31:
			return joaat("submersible");
		
		case 32:
			return joaat("suntrap");
		
		case 258:
			return joaat("tug");
		
		case 33:
			return joaat("bmx");
		
		case 34:
			return joaat("scorcher");
		
		case 35:
			return joaat("tribike");
		
		case 36:
			return joaat("tribike2");
		
		case 37:
			return joaat("tribike3");
		
		case 38:
			return joaat("cruiser");
		
		case 39:
			return joaat("schwarzer");
		
		case 40:
			return joaat("zion");
		
		case 41:
			return joaat("gauntlet");
		
		case 42:
			return joaat("vigero");
		
		case 43:
			return joaat("issi2");
		
		case 44:
			return joaat("infernus");
		
		case 45:
			return joaat("surano");
		
		case 46:
			return joaat("vacca");
		
		case 47:
			return joaat("ninef");
		
		case 48:
			return joaat("comet2");
		
		case 49:
			return joaat("banshee");
		
		case 50:
			return joaat("feltzer2");
		
		case 51:
			return joaat("bfinjection");
		
		case 52:
			return joaat("sandking");
		
		case 53:
			return joaat("fugitive");
		
		case 54:
			return joaat("dilettante");
		
		case 55:
			return joaat("superd");
		
		case 56:
			return joaat("exemplar");
		
		case 57:
			return joaat("baller2");
		
		case 58:
			return joaat("cavalcade");
		
		case 59:
			return joaat("rocoto");
		
		case 60:
			return joaat("felon");
		
		case 61:
			return joaat("oracle2");
		
		case 62:
			return joaat("bati");
		
		case 63:
			return joaat("akuma");
		
		case 64:
			return joaat("ruffian");
		
		case 65:
			return joaat("vader");
		
		case 66:
			return joaat("blazer");
		
		case 67:
			return joaat("pcj");
		
		case 68:
			return joaat("sanchez");
		
		case 69:
			return joaat("faggio2");
		
		case 70:
			return joaat("bullet");
		
		case 71:
			return joaat("carbonizzare");
		
		case 72:
			return joaat("coquette");
		
		case 73:
			return joaat("ninef2");
		
		case 74:
			return joaat("rapidgt");
		
		case 75:
			return joaat("rapidgt2");
		
		case 76:
			return joaat("stingergt");
		
		case 77:
			return joaat("voltic");
		
		case 78:
			return joaat("annihilator");
		
		case 79:
			return joaat("mammatus");
		
		case 80:
			return joaat("velum");
		
		case 81:
			return joaat("dump");
		
		case 82:
			return joaat("airbus");
		
		case 83:
			return joaat("bus");
		
		case 84:
			return joaat("coach");
		
		case 85:
			return joaat("journey");
		
		case 86:
			return joaat("mule");
		
		case 87:
			return joaat("rentalbus");
		
		case 88:
			return joaat("stretch");
		
		case 89:
			return joaat("bison");
		
		case 90:
			return joaat("double");
		
		case 91:
			return joaat("felon2");
		
		case 92:
			return joaat("hexer");
		
		case 93:
			return joaat("zion2");
		
		case 94:
			return joaat("bati2");
		
		case 95:
			return joaat("elegy2");
		
		case 96:
			return joaat("khamelion");
		
		case 97:
			return joaat("hotknife");
		
		case 98:
			return joaat("carbonrs");
		
		default:
	}
	switch (iParam0)
	{
		case 99:
			return joaat("bifta");
		
		case 100:
			return joaat("kalahari");
		
		case 101:
			return joaat("paradise");
		
		case 102:
			return joaat("speeder");
		
		case 103:
			return joaat("bodhi2");
		
		case 104:
			return joaat("dune");
		
		case 105:
			return joaat("rebel");
		
		case 106:
			return joaat("sadler");
		
		case 107:
			return joaat("sanchez2");
		
		case 108:
			return joaat("sandking2");
		
		case 109:
			return joaat("btype");
		
		case 111:
			return joaat("jester");
		
		case 114:
			return joaat("massacro");
		
		case 112:
			return joaat("turismor");
		
		case 115:
			return joaat("zentorno");
		
		case 116:
			return joaat("huntley");
		
		case 110:
			return joaat("alpha");
		
		case 113:
			return joaat("vestra");
		
		case 117:
			return joaat("coquette");
		
		case 118:
			return joaat("banshee");
		
		case 119:
			return joaat("stinger");
		
		case 120:
			return joaat("voltic");
		
		case 121:
			return joaat("thrust");
		
		case 128:
			return joaat("asea");
		
		case 129:
			return joaat("asterope");
		
		case 130:
			return joaat("bobcatxl");
		
		case 131:
			return joaat("cavalcade2");
		
		case 132:
			return joaat("granger");
		
		case 133:
			return joaat("ingot");
		
		case 134:
			return joaat("intruder");
		
		case 135:
			return joaat("minivan");
		
		case 136:
			return joaat("premier");
		
		case 137:
			return joaat("radi");
		
		case 138:
			return joaat("rancherxl");
		
		case 139:
			return joaat("ratloader");
		
		case 140:
			return joaat("stanier");
		
		case 141:
			return joaat("stratum");
		
		case 142:
			return joaat("washington");
		
		case 122:
			return joaat("dominator");
		
		case 123:
			return joaat("f620");
		
		case 124:
			return joaat("fusilade");
		
		case 125:
			return joaat("penumbra");
		
		case 126:
			return joaat("sentinel");
		
		case 127:
			return joaat("sentinel2");
		
		default:
	}
	switch (iParam0)
	{
		case 143:
			return joaat("blade");
		
		case 144:
			return joaat("warrener");
		
		case 145:
			return joaat("glendale");
		
		case 146:
			return joaat("rhapsody");
		
		case 147:
			return joaat("panto");
		
		case 148:
			return joaat("dubsta3");
		
		case 149:
			return joaat("pigalle");
		
		case 150:
			return joaat("picador");
		
		case 151:
			return joaat("regina");
		
		case 152:
			return joaat("surfer");
		
		case 153:
			return joaat("youga");
		
		case 154:
			return joaat("blazer3");
		
		case 155:
			return joaat("rebel2");
		
		case 156:
			return joaat("primo");
		
		case 157:
			return joaat("buffalo");
		
		case 158:
			return joaat("buffalo2");
		
		case 159:
			return joaat("tailgater");
		
		case 160:
			return joaat("monster");
		
		case 161:
			return joaat("sovereign");
		
		case 162:
			return joaat("miljet");
		
		case 163:
			return joaat("besra");
		
		case 164:
			return joaat("swift");
		
		case 165:
			return joaat("coquette2");
		
		case 166:
			return joaat("coquette2");
		
		case 167:
			return joaat("innovation");
		
		case 168:
			return joaat("hakuchou");
		
		case 169:
			return joaat("furoregt");
		
		case 170:
			return joaat("kalahari");
		
		case 187:
			return joaat("valkyrie");
		
		case 177:
			return joaat("hydra");
		
		case 185:
			return joaat("savage");
		
		case 174:
			return joaat("enduro");
		
		case 171:
			return joaat("boxville4");
		
		case 172:
			return joaat("casco");
		
		case 173:
			return joaat("dinghy3");
		
		case 175:
			return joaat("gburrito2");
		
		case 176:
			return joaat("guardian");
		
		case 178:
			return joaat("insurgent");
		
		case 179:
			return joaat("insurgent2");
		
		case 183:
			return joaat("mule3");
		
		case 180:
			return joaat("kuruma");
		
		case 181:
			return joaat("kuruma2");
		
		case 182:
			return joaat("lectro");
		
		case 184:
			return joaat("pbus");
		
		case 186:
			return joaat("technical");
		
		case 188:
			return joaat("velum2");
		
		case 189:
			return joaat("gresley");
		
		case 190:
			return joaat("jackal");
		
		case 191:
			return joaat("landstalker");
		
		case 192:
			return joaat("mesa3");
		
		case 193:
			return joaat("nemesis");
		
		case 194:
			return joaat("oracle");
		
		case 195:
			return joaat("rumpo");
		
		case 196:
			return joaat("schafter2");
		
		case 197:
			return joaat("seminole");
		
		case 198:
			return joaat("surge");
		
		case 199:
			return joaat("dodo");
		
		case 200:
			return joaat("marshall");
		
		case 201:
			return joaat("submersible2");
		
		case 202:
			return joaat("blista2");
		
		case 203:
			return joaat("stalion");
		
		case 204:
			return joaat("dukes");
		
		case 205:
			return joaat("dukes2");
		
		case 206:
			return joaat("stalion2");
		
		case 207:
			return joaat("dominator2");
		
		case 208:
			return joaat("gauntlet2");
		
		case 209:
			return joaat("buffalo3");
		
		case 210:
			return joaat("slamvan");
		
		case 211:
			return joaat("ratloader2");
		
		case 212:
			return joaat("jester2");
		
		case 213:
			return joaat("massacro2");
		
		case 214:
			return joaat("feltzer3");
		
		case 215:
			return joaat("luxor2");
		
		case 216:
			return joaat("osiris");
		
		case 217:
			return joaat("swift2");
		
		case 218:
			return joaat("virgo");
		
		case 219:
			return joaat("windsor");
		
		case 220:
			return joaat("brawler");
		
		case 221:
			return joaat("chino");
		
		case 222:
			return joaat("coquette3");
		
		case 223:
			return joaat("t20");
		
		case 224:
			return joaat("toro");
		
		case 225:
			return joaat("vindicator");
		
		case 229:
			return joaat("primo");
		
		case 228:
			return joaat("moonbeam");
		
		case 227:
			return joaat("faction");
		
		case 226:
			return joaat("buccaneer");
		
		case 230:
			return joaat("voodoo2");
		
		case 263:
			if (iParam1 == 0)
			{
				return joaat("xls");
			}
			else if (iParam1 == 1)
			{
				return joaat("xls2");
			}
			else
			{
				return joaat("xls");
			}
			break;
		
		case 264:
			return joaat("seven70");
		
		case 259:
			return joaat("windsor2");
		
		case 260:
			return joaat("prototipo");
		
		case 261:
			return joaat("fmj");
		
		case 262:
			return joaat("bestiagts");
		
		case 265:
			return joaat("pfister811");
		
		case 266:
			return joaat("reaper");
		
		case 231:
			return joaat("btype2");
		
		case 232:
			return joaat("lurcher");
		
		case 233:
			if (iParam1 == 0)
			{
				return joaat("baller3");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller5");
			}
			else
			{
				return joaat("baller3");
			}
			break;
		
		case 234:
			if (iParam1 == 0)
			{
				return joaat("baller4");
			}
			else if (iParam1 == 1)
			{
				return joaat("baller6");
			}
			else
			{
				return joaat("baller4");
			}
			break;
		
		case 235:
			if (iParam1 == 0)
			{
				return joaat("cog55");
			}
			else if (iParam1 == 1)
			{
				return joaat("cog552");
			}
			else
			{
				return joaat("cog55");
			}
			break;
		
		case 236:
			if (iParam1 == 0)
			{
				return joaat("cognoscenti");
			}
			else if (iParam1 == 1)
			{
				return joaat("cognoscenti2");
			}
			else
			{
				return joaat("cognoscenti");
			}
			break;
		
		case 237:
			return joaat("limo2");
		
		case 238:
			return joaat("mamba");
		
		case 239:
			return joaat("nightshade");
		
		case 240:
			if (iParam1 == 0)
			{
				return joaat("schafter3");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter5");
			}
			else
			{
				return joaat("schafter3");
			}
			break;
		
		case 241:
			if (iParam1 == 0)
			{
				return joaat("schafter4");
			}
			else if (iParam1 == 1)
			{
				return joaat("schafter6");
			}
			else
			{
				return joaat("schafter4");
			}
			break;
		
		case 242:
			return joaat("verlierer2");
		
		case 243:
			return joaat("supervolito");
		
		case 244:
			return joaat("supervolito2");
		
		case 245:
			return Global_75446;
		
		case 251:
			return joaat("virgo3");
		
		case 250:
			return joaat("tornado");
		
		case 249:
			return joaat("sabregt");
		
		case 252:
			return joaat("faction");
		
		case 246:
			return joaat("tampa");
		
		case 247:
			return joaat("sultan");
		
		case 49:
			return joaat("banshee");
		
		case 248:
			return joaat("btype3");
		
		case 253:
			return joaat("volatus");
		
		case 254:
			return joaat("cargobob2");
		
		case 255:
			return joaat("rumpo3");
		
		case 256:
			return joaat("brickade");
		
		case 257:
			return joaat("nimbus");
		
		case 267:
			return joaat("le7b");
		
		case 268:
			return joaat("omnis");
		
		case 269:
			return joaat("tropos");
		
		case 270:
			return joaat("brioso");
		
		case 271:
			return joaat("trophytruck");
		
		case 272:
			return joaat("trophytruck2");
		
		case 273:
			return joaat("contender");
		
		case 274:
			return joaat("cliffhanger");
		
		case 275:
			return joaat("bf400");
		
		case 279:
			return joaat("tyrus");
		
		case 280:
			return joaat("lynx");
		
		case 281:
			return joaat("sheava");
		
		case 276:
			return joaat("rallytruck");
		
		case 277:
			return joaat("tampa2");
		
		case 278:
			return joaat("gargoyle");
		
		case 282:
			return joaat("bagger");
		
		case 283:
			return joaat("esskey");
		
		case 284:
			return joaat("nightblade");
		
		case 285:
			return joaat("defiler");
		
		case 286:
			return joaat("avarus");
		
		case 287:
			return joaat("zombiea");
		
		case 288:
			return joaat("zombieb");
		
		case 289:
			return joaat("chimera");
		
		case 290:
			return joaat("daemon2");
		
		case 291:
			return joaat("ratbike");
		
		case 292:
			return joaat("shotaro");
		
		case 293:
			return joaat("raptor");
		
		case 294:
			return joaat("hakuchou2");
		
		case 296:
			return joaat("blazer4");
		
		case 297:
			return joaat("sanctus");
		
		case 295:
			return joaat("vortex");
		
		case 298:
			return joaat("manchez");
		
		case 299:
			return joaat("tornado6");
		
		case 300:
			return joaat("youga2");
		
		case 301:
			return joaat("wolfsbane");
		
		case 302:
			return joaat("faggio3");
		
		case 303:
			return joaat("faggio");
		
		case 304:
			return joaat("dune5");
		
		case 305:
			return joaat("phantom2");
		
		case 306:
			return joaat("technical2");
		
		case 307:
			return joaat("blazer5");
		
		case 308:
			return joaat("boxville5");
		
		case 309:
			return joaat("wastelander");
		
		case 310:
			return joaat("ruiner2");
		
		case 311:
			return joaat("voltic2");
		
		case 312:
			return joaat("penetrator");
		
		case 313:
			return joaat("tempesta");
		
		case 314:
			return joaat("italigtb");
		
		case 315:
			return joaat("nero");
		
		case 316:
			return joaat("diablous");
		
		case 317:
			return joaat("fcr");
		
		case 318:
			return joaat("specter");
		
		case 319:
			return joaat("gp1");
		
		case 320:
			return joaat("infernus2");
		
		case 321:
			return joaat("ruston");
		
		case 322:
			return joaat("turismo2");
	}
	switch (iParam0)
	{
		case 323:
			return Global_75447;
		
		case 324:
			return Global_75448;
		
		case 325:
			return joaat("cheetah2");
		
		case 326:
			return joaat("torero");
		
		case 327:
			return joaat("vagner");
		
		case 328:
			return joaat("xa21");
		
		case 329:
			return joaat("apc");
		
		case 330:
			return joaat("dune3");
		
		case 331:
			return joaat("halftrack");
		
		case 332:
			return joaat("oppressor");
		
		case 333:
			return joaat("tampa3");
		
		case 334:
			return joaat("trailersmall2");
		
		case 335:
			return joaat("ardent");
		
		case 336:
			return joaat("nightshark");
		
		case 337:
			return joaat("lazer");
		
		case 338:
			return joaat("microlight");
		
		case 339:
			return joaat("mogul");
		
		case 340:
			return joaat("rogue");
		
		case 341:
			return joaat("starling");
		
		case 342:
			return joaat("seabreeze");
		
		case 343:
			return joaat("tula");
		
		case 344:
			return joaat("pyro");
		
		case 345:
			return joaat("molotok");
		
		case 346:
			return joaat("nokota");
		
		case 347:
			return joaat("bombushka");
		
		case 348:
			return joaat("hunter");
		
		case 349:
			return joaat("havok");
		
		case 350:
			return joaat("howard");
		
		case 351:
			return joaat("alphaz1");
		
		case 352:
			return joaat("cyclone");
		
		case 353:
			return joaat("visione");
		
		case 354:
			return joaat("retinue");
		
		case 355:
			return joaat("rapidgt3");
		
		case 356:
			return joaat("vigilante");
		
		case 357:
			return Global_75449;
		
		case 358:
			return joaat("deluxo");
		
		case 359:
			return joaat("stromberg");
		
		case 360:
			return joaat("riot2");
		
		case 361:
			return joaat("chernobog");
		
		case 362:
			return joaat("khanjali");
		
		case 363:
			return joaat("akula");
		
		case 364:
			return joaat("thruster");
		
		case 365:
			return joaat("barrage");
		
		case 366:
			return joaat("volatol");
		
		case 367:
			return joaat("comet4");
		
		case 368:
			return joaat("neon");
		
		case 369:
			return joaat("streiter");
		
		case 370:
			return joaat("sentinel3");
		
		case 371:
			return joaat("yosemite");
		
		case 372:
			return joaat("sc1");
		
		case 373:
			return joaat("autarch");
		
		case 374:
			return joaat("gt500");
		
		case 375:
			return joaat("hustler");
		
		case 376:
			return joaat("revolter");
		
		case 377:
			return joaat("pariah");
		
		case 378:
			return joaat("raiden");
		
		case 379:
			return joaat("savestra");
		
		case 380:
			return joaat("riata");
		
		case 381:
			return joaat("hermes");
		
		case 382:
			return joaat("comet5");
		
		case 383:
			return joaat("z190");
		
		case 384:
			return joaat("viseris");
		
		case 385:
			return joaat("kamacho");
		
		case 386:
			return joaat("gb200");
		
		case 387:
			return joaat("fagaloa");
		
		case 388:
			return joaat("ellie");
		
		case 389:
			return joaat("issi3");
		
		case 390:
			return joaat("michelli");
		
		case 391:
			return joaat("flashgt");
		
		case 392:
			return joaat("hotring");
		
		case 393:
			return joaat("tezeract");
		
		case 394:
			return joaat("tyrant");
		
		case 395:
			return joaat("dominator3");
		
		case 396:
			return joaat("taipan");
		
		case 397:
			return joaat("entity2");
		
		case 398:
			return joaat("jester3");
		
		case 399:
			return joaat("cheburek");
		
		case 400:
			return joaat("caracara");
		
		case 401:
			return joaat("seasparrow");
		
		case 402:
			return Global_75450;
		
		case 403:
			return joaat("mule4");
		
		case 404:
			return joaat("pounder2");
		
		case 405:
			return joaat("swinger");
		
		case 406:
			return joaat("menacer");
		
		case 407:
			return joaat("scramjet");
		
		case 408:
			return joaat("strikeforce");
		
		case 409:
			return joaat("oppressor2");
		
		case 410:
			return joaat("patriot2");
		
		case 411:
			return joaat("stafford");
		
		case 412:
			return joaat("freecrawler");
		
		case 415:
			return joaat("futo");
		
		case 416:
			return joaat("ruiner");
		
		case 417:
			return joaat("romero");
		
		case 418:
			return joaat("prairie");
		
		case 419:
			return joaat("baller");
		
		case 420:
			return joaat("serrano");
		
		case 421:
			return joaat("bjxl");
		
		case 422:
			return joaat("habanero");
		
		case 423:
			return joaat("fq2");
		
		case 424:
			return joaat("patriot");
		
		case 413:
			return joaat("blimp3");
		
		case 414:
			return joaat("pbus2");
		
		case 425:
			return joaat("cerberus");
		
		case 426:
			return joaat("cerberus2");
		
		case 427:
			return joaat("cerberus3");
		
		case 428:
			return joaat("brutus");
		
		case 429:
			return joaat("brutus2");
		
		case 430:
			return joaat("brutus3");
		
		case 431:
			return joaat("scarab");
		
		case 432:
			return joaat("scarab2");
		
		case 433:
			return joaat("scarab3");
		
		case 434:
			return joaat("imperator");
		
		case 435:
			return joaat("imperator2");
		
		case 436:
			return joaat("imperator3");
		
		case 437:
			return joaat("zr380");
		
		case 438:
			return joaat("zr3802");
		
		case 439:
			return joaat("zr3803");
		
		case 440:
			return joaat("impaler");
		
		case 450:
			return joaat("taxi");
		
		case 451:
			return joaat("bulldozer");
		
		case 452:
			return joaat("speedo2");
		
		case 453:
			return joaat("trash2");
		
		case 454:
			return joaat("barracks2");
		
		case 455:
			return joaat("mixer");
		
		case 456:
			return joaat("dune2");
		
		case 457:
			return joaat("tractor");
		
		case 458:
			return joaat("blista3");
		
		case 441:
			return joaat("vamos");
		
		case 442:
			return joaat("tulip");
		
		case 443:
			return joaat("deveste");
		
		case 444:
			return joaat("schlagen");
		
		case 445:
			return joaat("toros");
		
		case 446:
			return joaat("deviant");
		
		case 447:
			return joaat("clique");
		
		case 448:
			return joaat("italigto");
		
		case 449:
			return joaat("rcbandito");
		
		case 459:
			return joaat("thrax");
		
		case 460:
			return joaat("drafter");
		
		case 461:
			return joaat("locust");
		
		case 462:
			return joaat("novak");
		
		case 463:
			return joaat("zorrusso");
		
		case 464:
			return joaat("gauntlet3");
		
		case 465:
			return joaat("issi7");
		
		case 466:
			return joaat("zion3");
		
		case 467:
			return joaat("nebula");
		
		case 468:
			return joaat("hellion");
		
		case 469:
			return joaat("dynasty");
		
		case 470:
			return joaat("rrocket");
		
		case 471:
			return joaat("peyote2");
		
		case 472:
			return joaat("gauntlet4");
		
		case 473:
			return joaat("caracara2");
		
		case 474:
			return joaat("jugular");
		
		case 475:
			return joaat("s80");
		
		case 476:
			return joaat("krieger");
		
		case 477:
			return joaat("emerus");
		
		case 478:
			return joaat("neo");
		
		case 479:
			return joaat("paragon");
		
		case 480:
			return joaat("firetruk");
		
		case 481:
			return joaat("burrito2");
		
		case 482:
			return joaat("boxville");
		
		case 483:
			return joaat("stockade");
		
		case 484:
			return joaat("lguard");
		
		case 485:
			return joaat("blazer2");
		
		case 486:
			return joaat("zhaba");
		
		case 487:
			return joaat("minitank");
		
		case 488:
			return joaat("jb7002");
		
		case 489:
			return joaat("stryder");
		
		case 490:
			return joaat("vstr");
		
		case 491:
			return joaat("formula");
		
		case 492:
			return joaat("imorgon");
		
		case 493:
			return joaat("formula2");
		
		case 494:
			return joaat("furia");
		
		case 495:
			return joaat("rebla");
		
		case 496:
			return joaat("vagrant");
		
		case 497:
			return joaat("retinue2");
		
		case 498:
			return joaat("yosemite2");
		
		case 499:
			return joaat("komoda");
		
		case 500:
			return joaat("sultan2");
		
		case 501:
			return joaat("sugoi");
		
		case 502:
			return joaat("everon");
		
		case 503:
			return joaat("asbo");
		
		case 504:
			return joaat("kanjo");
		
		case 505:
			return joaat("outlaw");
		
		default:
	}
	switch (iParam0)
	{
		case 506:
			return joaat("club");
		
		case 507:
			return joaat("dukes3");
		
		case 508:
			return joaat("yosemite3");
		
		case 509:
			return joaat("penumbra2");
		
		case 510:
			return joaat("landstalker2");
		
		case 511:
			return joaat("seminole2");
		
		case 512:
			return joaat("tigon");
		
		case 513:
			return joaat("openwheel1");
		
		case 514:
			return joaat("openwheel2");
		
		case 515:
			return joaat("coquette4");
		
		case 516:
			return joaat("manana");
		
		case 517:
			return joaat("peyote");
		
		case 518:
			return func_398();
		
		case 519:
			return joaat("italirsx");
		
		case 520:
			return joaat("slamtruck");
		
		case 521:
			return joaat("brioso2");
		
		case 522:
			return joaat("weevil");
		
		case 523:
			return joaat("alkonost");
		
		case 524:
			return joaat("annihilator2");
		
		case 525:
			return joaat("dinghy5");
		
		case 526:
			return joaat("manchez2");
		
		case 527:
			return joaat("patrolboat");
		
		case 528:
			return joaat("squaddie");
		
		case 529:
			return joaat("toreador");
		
		case 530:
			return joaat("verus");
		
		case 531:
			return joaat("vetir");
		
		case 532:
			return joaat("winky");
		
		case 533:
			return joaat("longfin");
		
		case 534:
			return joaat("veto");
		
		case 535:
			return joaat("veto2");
		
		case 543:
			return joaat("zr350");
		
		case 537:
			return joaat("comet6");
		
		case 540:
			return joaat("jester4");
		
		case 542:
			return joaat("vectre");
		
		case 538:
			return joaat("cypher");
		
		case 548:
			return joaat("tailgater2");
		
		case 550:
			return joaat("euros");
		
		case 551:
			return joaat("growler");
		
		case 536:
			return joaat("calico");
		
		case 541:
			return joaat("remus");
		
		case 539:
			return joaat("dominator7");
		
		case 546:
			return joaat("futo2");
		
		case 545:
			return joaat("rt3000");
		
		case 544:
			return joaat("warrener2");
		
		case 547:
			return joaat("sultan3");
		
		case 549:
			return joaat("dominator8");
		
		case 552:
			return joaat("previon");
		
		case 554:
			return joaat("comet7");
		
		case 555:
			return joaat("shinobi");
		
		case 556:
			return joaat("reever");
		
		case 557:
			return joaat("baller7");
		
		case 558:
			return joaat("cinquemila");
		
		case 559:
			return joaat("jubilee");
		
		case 560:
			return joaat("astron");
		
		case 561:
			return joaat("deity");
		
		case 562:
			return joaat("zeno");
		
		case 563:
			return joaat("champion");
		
		case 564:
			return joaat("ignus");
		
		case 565:
			return joaat("buffalo4");
		
		case 566:
			return joaat("granger2");
		
		case 567:
			return joaat("iwagen");
		
		case 568:
			return joaat("patriot3");
		
		case 553:
			return joaat("supervolito2");
		
		case 569:
			return joaat("TENF");
		
		case 570:
			return joaat("SM722");
		
		case 571:
			return joaat("TORERO2");
		
		case 572:
			return joaat("CORSITA");
		
		case 573:
			return joaat("LM87");
		
		case 574:
			return joaat("OMNISEGT");
		
		case 575:
			return joaat("RHINEHART");
		
		case 576:
			return joaat("POSTLUDE");
		
		case 577:
			return joaat("KANJOSJ");
		
		case 578:
			return joaat("VIGERO2");
		
		case 579:
			return joaat("RUINER4");
		
		case 580:
			return joaat("DRAUGUR");
		
		case 581:
			return joaat("GREENWOOD");
		
		case 582:
			return joaat("CONADA");
		
		default:
	}
	return 0;
}

char* func_654(int iParam0)//Position - 0x33E23
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return "";
	}
	if (iParam0 == 8)
	{
		return "";
	}
	iVar0 = func_653(iParam0, -1);
	if (iVar0 == 0)
	{
		return "";
	}
	switch (iParam0)
	{
		case 31:
			return "SUBMERSIBLE";
		
		case 68:
			return "SANCHEZ";
		
		case 105:
			return "REBEL";
		
		case 107:
			return "SANCHEZ2";
		
		case 117:
			return "COQUETTE_TLESS";
		
		case 118:
			return "BANSHEE_TLESS";
		
		case 119:
			return "STINGER_TLESS";
		
		case 120:
			return "VOLTIC_HTOP";
		
		case 154:
			return "BLAZER3";
		
		case 155:
			return "REBEL2";
		
		case 158:
			return "BUFFALO2";
		
		case 159:
			return "TAILGATER";
		
		case 166:
			return "COQUETTE2_TLESS";
		
		case 170:
			return "KALAHARI_TLESS";
		
		case 171:
			return "BOXVILLE4";
		
		case 173:
			return "DINGHY3";
		
		case 183:
			return "MULE3";
		
		case 191:
			return "LANDSTALKER";
		
		case 192:
			return "MESA3";
		
		case 194:
			return "ORACLE1";
		
		case 196:
			return "SCHAFTER2";
		
		case 207:
			return "DOMINATOR2";
		
		case 245:
			return "BIG_YACHT";
		
		case 254:
			return "CARGOBOB2";
		
		case 323:
			return "BIG_TRUCK";
		
		case 324:
			return "BALLISTIC";
		
		case 357:
			return "BIG_PLANE";
		
		case 402:
			return "HACKER_TRUCK";
		
		case 510:
			return "LANDSTLKR2";
		
		default:
	}
	return VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iVar0);
}

void func_655()//Position - 0x33FDF
{
	if (!Global_2815059.f_5195.f_338)
	{
		Global_2815059.f_5195.f_338 = 1;
	}
}

void func_656(int iParam0)//Position - 0x34000
{
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&(Global_2359296[func_184() /*5567*/].f_1[(iParam0 / 32)]), (iParam0 % 32));
		Global_2359296[func_184() /*5567*/] = NETWORK::GET_CLOUD_TIME_AS_INT();
		func_658();
		func_657();
	}
}

void func_657()//Position - 0x34042
{
}

void func_658()//Position - 0x3404A
{
	func_24(1725, Global_2359296[func_184() /*5567*/], -1, 1, 0);
	func_24(1726, Global_2359296[func_184() /*5567*/].f_1[0], -1, 1, 0);
	func_24(1727, Global_2359296[func_184() /*5567*/].f_1[1], -1, 1, 0);
	func_24(1728, Global_2359296[func_184() /*5567*/].f_1[2], -1, 1, 0);
	func_24(1729, Global_2359296[func_184() /*5567*/].f_1[3], -1, 1, 0);
	func_24(1730, Global_2359296[func_184() /*5567*/].f_1[4], -1, 1, 0);
}

int func_659(int iParam0)//Position - 0x340E9
{
	int iVar0;
	int iVar1;
	
	if (func_111())
	{
		if (iParam0 == func_662(245, 0) && func_21(3171, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_662(323, 0) && func_21(5396, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_662(324, 0) && func_506(9461, -1))
		{
			return 1;
		}
		if (iParam0 == func_662(357, 0) && func_21(6159, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_662(402, 0) && func_21(7210, -1, 0) != 0)
		{
			return 1;
		}
		if (iParam0 == func_662(518, 0) && func_21(9517, -1, 0) != 0)
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 <= 7)
		{
			iVar1 = -1;
			switch (iVar0)
			{
				case 0:
					iVar1 = 450;
					break;
				
				case 1:
					iVar1 = 451;
					break;
				
				case 2:
					iVar1 = 452;
					break;
				
				case 3:
					iVar1 = 453;
					break;
				
				case 4:
					iVar1 = 454;
					break;
				
				case 5:
					iVar1 = 455;
					break;
				
				case 6:
					iVar1 = 456;
					break;
				
				case 7:
					iVar1 = 457;
					break;
			}
			if (iParam0 == func_662(iVar1, 0) && func_660(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	if (iParam0 != -1)
	{
		if (BitTest(Global_2359296[func_184() /*5567*/].f_1[(iParam0 / 32)], (iParam0 % 32)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_660(int iParam0)//Position - 0x34290
{
	return func_506(func_661(iParam0), -1);
}

int func_661(int iParam0)//Position - 0x342A3
{
	switch (iParam0)
	{
		case 8:
			return 24963;
			break;
		
		case 9:
			return 24964;
			break;
		
		case 10:
			return 24966;
			break;
		
		case 11:
			return 24965;
			break;
		
		case 12:
			return 24968;
			break;
		
		case 13:
			return 25101;
			break;
		
		case 14:
			return 24967;
			break;
		
		case 15:
			return 25105;
			break;
		
		case 16:
			return 25106;
			break;
		
		case 20:
			return 25102;
			break;
		
		case 21:
			return 25103;
			break;
		
		case 22:
			return 25104;
			break;
		
		case 102:
			return 24969;
			break;
		
		case 17:
			return 25107;
			break;
		
		case 18:
			return 25108;
			break;
		
		case 19:
			return 25109;
			break;
		
		case 103:
			return 24972;
			break;
		
		case 104:
			return 24973;
			break;
		
		case 105:
			return 24974;
			break;
		
		case 106:
			return 24975;
			break;
		
		case 107:
			return 24976;
			break;
		
		case 108:
			return 24978;
			break;
		
		case 109:
			return 24980;
			break;
		
		case 110:
			return 24981;
			break;
		
		case 111:
			return 24982;
			break;
		
		case 112:
			return 24983;
			break;
		
		case 113:
			return 24984;
			break;
		
		case 114:
			return 24985;
			break;
		
		case 115:
			return 24986;
			break;
		
		case 116:
			return 24987;
			break;
		
		case 117:
			return 24988;
			break;
		
		case 118:
			return 24989;
			break;
		
		case 119:
			return 24990;
			break;
		
		case 120:
			return 24991;
			break;
		
		case 0:
			return 24992;
			break;
		
		case 1:
			return 24993;
			break;
		
		case 2:
			return 24994;
			break;
		
		case 3:
			return 24995;
			break;
		
		case 4:
			return 24996;
			break;
		
		case 5:
			return 24997;
			break;
		
		case 6:
			return 24998;
			break;
		
		case 7:
			return 24999;
			break;
		
		case 127:
			return 25117;
			break;
		
		case 128:
			return 25118;
			break;
		
		case 23:
			return 25119;
			break;
		
		case 139:
			return 25125;
			break;
		
		case 140:
			return 25127;
			break;
		
		case 141:
			return 25128;
			break;
		
		case 27:
			return 25129;
			break;
		
		case 160:
			return 25136;
			break;
		
		case 161:
			return 25139;
			break;
		
		case 162:
			return 25140;
			break;
		
		case 31:
			return 25141;
			break;
		
		case 181:
			return 25148;
			break;
		
		case 182:
			return 25151;
			break;
		
		case 183:
			return 25152;
			break;
		
		case 35:
			return 25153;
			break;
		
		case 193:
			return 25160;
			break;
		
		case 194:
			return 25161;
			break;
		
		case 39:
			return 25162;
			break;
		
		case 206:
			return 25168;
			break;
		
		case 207:
			return 25169;
			break;
		
		case 208:
			return 25170;
			break;
		
		case 209:
			return 25173;
			break;
		
		case 210:
			return 25174;
			break;
		
		case 43:
			return 25175;
			break;
		
		case 234:
			return 25179;
			break;
		
		case 235:
			return 25183;
			break;
		
		case 236:
			return 25184;
			break;
		
		case 47:
			return 25185;
			break;
		
		case 248:
			return 25188;
			break;
		
		case 249:
			return 25191;
			break;
		
		case 250:
			return 25192;
			break;
		
		case 51:
			return 25193;
			break;
		
		case 259:
			return 25198;
			break;
		
		case 260:
			return 25202;
			break;
		
		case 261:
			return 25203;
			break;
		
		case 55:
			return 25204;
			break;
		
		case 274:
			return 25209;
			break;
		
		case 275:
			return 25212;
			break;
		
		case 276:
			return 25213;
			break;
		
		case 59:
			return 25214;
			break;
		
		case 284:
			return 25217;
			break;
		
		case 285:
			return 25221;
			break;
		
		case 286:
			return 25222;
			break;
		
		case 63:
			return 25223;
			break;
		
		case 307:
			return 25228;
			break;
		
		case 308:
			return 24979;
			break;
		
		case 309:
			return 25229;
			break;
		
		case 310:
			return 25111;
			break;
		
		case 67:
			return 25230;
			break;
		
		case 68:
			return 25112;
			break;
		
		case 72:
			return 25231;
			break;
		
		case 73:
			return 25233;
			break;
		
		case 74:
			return 25234;
			break;
		
		case 75:
			return 25235;
			break;
		
		case 76:
			return 25236;
			break;
		
		case 77:
			return 25394;
			break;
		
		case 121:
			return 25395;
			break;
		
		case 122:
			return 25396;
			break;
		
		case 123:
			return 25397;
			break;
		
		case 124:
			return 25398;
			break;
		
		case 125:
			return 25399;
			break;
		
		case 126:
			return 25400;
			break;
	}
	switch (iParam0)
	{
		case 78:
			return 25244;
			break;
		
		case 79:
			return 25245;
			break;
		
		case 80:
			return 25246;
			break;
		
		case 81:
			return 25247;
			break;
		
		case 82:
			return 25248;
			break;
		
		case 83:
			return 25249;
			break;
		
		case 84:
			return 25250;
			break;
		
		case 85:
			return 25000;
			break;
		
		case 86:
			return 25251;
			break;
		
		case 87:
			return 25252;
			break;
		
		case 88:
			return 25253;
			break;
		
		case 89:
			return 25254;
			break;
		
		case 90:
			return 25255;
			break;
		
		case 91:
			return 25256;
			break;
		
		case 92:
			return 25257;
			break;
		
		case 93:
			return 25258;
			break;
		
		case 94:
			return 25259;
			break;
		
		case 95:
			return 25260;
			break;
		
		case 96:
			return 25261;
			break;
		
		case 97:
			return 25262;
			break;
		
		case 98:
			return 25263;
			break;
		
		case 99:
			return 25264;
			break;
		
		case 100:
			return 25225;
			break;
		
		case 101:
			return 25178;
			break;
		
		case 311:
			return 25265;
			break;
		
		case 312:
			return 25266;
			break;
		
		case 313:
			return 25267;
			break;
		
		case 314:
			return 25268;
			break;
		
		case 315:
			return 24977;
			break;
		
		case 316:
			return 25269;
			break;
		
		case 317:
			return 25270;
			break;
		
		case 318:
			return 25271;
			break;
		
		case 319:
			return 25272;
			break;
		
		case 320:
			return 25273;
			break;
		
		case 321:
			return 25274;
			break;
		
		case 322:
			return 25275;
			break;
		
		case 323:
			return 25276;
			break;
		
		case 324:
			return 25277;
			break;
		
		case 325:
			return 25278;
			break;
		
		case 326:
			return 25279;
			break;
		
		case 327:
			return 25280;
			break;
		
		case 328:
			return 25281;
			break;
		
		case 329:
			return 25282;
			break;
		
		case 330:
			return 25283;
			break;
		
		case 331:
			return 25284;
			break;
		
		case 332:
			return 25285;
			break;
		
		case 333:
			return 25286;
			break;
		
		case 334:
			return 25287;
			break;
		
		case 335:
			return 25288;
			break;
		
		case 336:
			return 25289;
			break;
		
		case 337:
			return 25290;
			break;
		
		case 338:
			return 25291;
			break;
		
		case 339:
			return 25292;
			break;
		
		case 340:
			return 25293;
			break;
		
		case 341:
			return 25294;
			break;
		
		case 342:
			return 25295;
			break;
		
		case 343:
			return 25296;
			break;
		
		case 344:
			return 25297;
			break;
		
		case 345:
			return 25298;
			break;
		
		case 346:
			return 25299;
			break;
		
		case 347:
			return 25300;
			break;
		
		case 348:
			return 25301;
			break;
		
		case 349:
			return 25302;
			break;
		
		case 350:
			return 25303;
			break;
		
		case 351:
			return 25304;
			break;
		
		case 352:
			return 25305;
			break;
		
		case 353:
			return 25306;
			break;
		
		case 354:
			return 25307;
			break;
		
		case 355:
			return 25308;
			break;
		
		case 356:
			return 25309;
			break;
		
		case 357:
			return 25310;
			break;
		
		case 358:
			return 25311;
			break;
		
		case 359:
			return 25312;
			break;
		
		case 360:
			return 25313;
			break;
		
		case 361:
			return 25314;
			break;
		
		case 362:
			return 25315;
			break;
		
		case 363:
			return 25316;
			break;
		
		case 364:
			return 25317;
			break;
		
		case 365:
			return 25318;
			break;
		
		case 366:
			return 25319;
			break;
		
		case 367:
			return 25320;
			break;
		
		case 368:
			return 25321;
			break;
		
		case 369:
			return 25322;
			break;
		
		case 370:
			return 25323;
			break;
		
		case 371:
			return 25324;
			break;
		
		case 372:
			return 25325;
			break;
		
		case 373:
			return 25326;
			break;
		
		case 374:
			return 25327;
			break;
		
		case 375:
			return 25328;
			break;
		
		case 376:
			return 25329;
			break;
		
		case 377:
			return 25330;
			break;
		
		case 378:
			return 25331;
			break;
		
		case 379:
			return 25332;
			break;
		
		case 380:
			return 25333;
			break;
		
		case 381:
			return 25334;
			break;
		
		case 382:
			return 25335;
			break;
		
		case 383:
			return 25336;
			break;
		
		case 384:
			return 25337;
			break;
		
		case 385:
			return 25338;
			break;
		
		case 386:
			return 25339;
			break;
		
		case 387:
			return 25340;
			break;
		
		case 388:
			return 25341;
			break;
		
		case 389:
			return 25342;
			break;
		
		case 390:
			return 25343;
			break;
		
		case 391:
			return 25344;
			break;
		
		case 392:
			return 25345;
			break;
		
		case 393:
			return 25346;
			break;
		
		case 394:
			return 25347;
			break;
		
		case 395:
			return 24970;
			break;
		
		case 396:
			return 25348;
			break;
		
		case 397:
			return 25349;
			break;
		
		case 398:
			return 25350;
			break;
		
		case 399:
			return 25351;
			break;
		
		case 400:
			return 25352;
			break;
		
		case 401:
			return 25353;
			break;
		
		case 402:
			return 25354;
			break;
		
		case 403:
			return 25355;
			break;
		
		case 404:
			return 25356;
			break;
		
		case 405:
			return 25357;
			break;
		
		case 406:
			return 25358;
			break;
		
		case 407:
			return 25359;
			break;
		
		case 408:
			return 25360;
			break;
		
		case 409:
			return 25361;
			break;
		
		case 410:
			return 25362;
			break;
		
		case 411:
			return 25363;
			break;
		
		case 412:
			return 25364;
			break;
		
		case 413:
			return 25365;
			break;
		
		case 414:
			return 25366;
			break;
		
		case 415:
			return 25367;
			break;
		
		case 416:
			return 25368;
			break;
		
		case 417:
			return 25369;
			break;
		
		case 418:
			return 25370;
			break;
		
		case 419:
			return 25371;
			break;
		
		case 420:
			return 25373;
			break;
		
		case 421:
			return 25374;
			break;
		
		case 422:
			return 25375;
			break;
		
		case 423:
			return 25377;
			break;
		
		case 424:
			return 25378;
			break;
		
		case 425:
			return 25379;
			break;
		
		case 426:
			return 25382;
			break;
		
		case 427:
			return 25383;
			break;
		
		case 428:
			return 25386;
			break;
		
		case 429:
			return 25390;
			break;
		
		case 430:
			return 25391;
			break;
		
		case 431:
			return 25392;
			break;
		
		case 432:
			return 25393;
			break;
	}
	switch (iParam0)
	{
		case 24:
			return 24971;
			break;
		
		case 25:
			return 25113;
			break;
		
		case 26:
			return 25114;
			break;
		
		case 28:
			return 25115;
			break;
		
		case 29:
			return 25116;
			break;
		
		case 30:
			return 25120;
			break;
		
		case 32:
			return 25121;
			break;
		
		case 33:
			return 25122;
			break;
		
		case 34:
			return 25123;
			break;
		
		case 36:
			return 25124;
			break;
		
		case 37:
			return 25126;
			break;
		
		case 38:
			return 25130;
			break;
		
		case 40:
			return 25131;
			break;
		
		case 41:
			return 25132;
			break;
		
		case 42:
			return 25133;
			break;
		
		case 44:
			return 25134;
			break;
		
		case 45:
			return 25137;
			break;
		
		case 46:
			return 25138;
			break;
		
		case 48:
			return 25142;
			break;
		
		case 49:
			return 25143;
			break;
		
		case 50:
			return 25144;
			break;
		
		case 52:
			return 25145;
			break;
		
		case 53:
			return 25146;
			break;
		
		case 54:
			return 25147;
			break;
		
		case 56:
			return 25149;
			break;
		
		case 57:
			return 25150;
			break;
		
		case 58:
			return 25154;
			break;
		
		case 60:
			return 25155;
			break;
		
		case 61:
			return 25156;
			break;
		
		case 62:
			return 25157;
			break;
		
		case 64:
			return 25158;
			break;
		
		case 65:
			return 25159;
			break;
		
		case 66:
			return 25163;
			break;
		
		case 69:
			return 25164;
			break;
		
		case 70:
			return 25165;
			break;
		
		case 71:
			return 25166;
			break;
		
		case 129:
			return 25167;
			break;
		
		case 130:
			return 25171;
			break;
		
		case 131:
			return 25172;
			break;
		
		case 132:
			return 25176;
			break;
		
		case 133:
			return 25177;
			break;
		
		case 134:
			return 25181;
			break;
		
		case 135:
			return 25182;
			break;
		
		case 136:
			return 25186;
			break;
		
		case 137:
			return 25187;
			break;
		
		case 138:
			return 25189;
			break;
		
		case 142:
			return 25190;
			break;
		
		case 143:
			return 25194;
			break;
		
		case 144:
			return 25195;
			break;
		
		case 145:
			return 25196;
			break;
		
		case 146:
			return 25197;
			break;
		
		case 147:
			return 25199;
			break;
		
		case 148:
			return 25200;
			break;
		
		case 149:
			return 25201;
			break;
		
		case 150:
			return 25205;
			break;
		
		case 151:
			return 25206;
			break;
		
		case 152:
			return 25207;
			break;
		
		case 153:
			return 25208;
			break;
		
		case 154:
			return 25210;
			break;
		
		case 155:
			return 25211;
			break;
		
		case 156:
			return 25215;
			break;
		
		case 157:
			return 25216;
			break;
		
		case 158:
			return 25218;
			break;
		
		case 159:
			return 25219;
			break;
		
		case 163:
			return 25220;
			break;
		
		case 164:
			return 25224;
			break;
		
		case 165:
			return 25226;
			break;
		
		case 166:
			return 25227;
			break;
		
		case 167:
			return 25232;
			break;
		
		case 168:
			return 25372;
			break;
		
		case 169:
			return 25376;
			break;
		
		case 170:
			return 25380;
			break;
		
		case 171:
			return 25381;
			break;
		
		case 172:
			return 25384;
			break;
		
		case 173:
			return 25385;
			break;
		
		case 174:
			return 25387;
			break;
		
		case 175:
			return 25388;
			break;
		
		case 176:
			return 25389;
			break;
		
		case 177:
			return 25407;
			break;
		
		case 178:
			return 25408;
			break;
		
		case 179:
			return 25409;
			break;
		
		case 180:
			return 25410;
			break;
		
		case 184:
			return 25411;
			break;
		
		case 185:
			return 25412;
			break;
		
		case 186:
			return 25413;
			break;
		
		case 187:
			return 25414;
			break;
		
		case 188:
			return 25415;
			break;
		
		case 189:
			return 25416;
			break;
		
		case 190:
			return 25417;
			break;
		
		case 191:
			return 25418;
			break;
		
		case 192:
			return 25419;
			break;
		
		case 195:
			return 25420;
			break;
		
		case 196:
			return 25421;
			break;
		
		case 197:
			return 25422;
			break;
		
		case 198:
			return 25423;
			break;
		
		case 199:
			return 25424;
			break;
		
		case 200:
			return 25425;
			break;
		
		case 201:
			return 25426;
			break;
		
		case 202:
			return 25427;
			break;
		
		case 203:
			return 25428;
			break;
		
		case 204:
			return 25429;
			break;
		
		case 205:
			return 25430;
			break;
		
		case 211:
			return 25431;
			break;
		
		case 212:
			return 25432;
			break;
		
		case 213:
			return 25433;
			break;
		
		case 214:
			return 25434;
			break;
		
		case 215:
			return 25435;
			break;
		
		case 216:
			return 25436;
			break;
		
		case 217:
			return 25437;
			break;
		
		case 218:
			return 25438;
			break;
		
		case 219:
			return 25439;
			break;
		
		case 220:
			return 25440;
			break;
		
		case 221:
			return 25441;
			break;
		
		case 222:
			return 25442;
			break;
		
		case 223:
			return 25443;
			break;
		
		case 224:
			return 25444;
			break;
		
		case 225:
			return 25445;
			break;
		
		case 226:
			return 25446;
			break;
		
		case 227:
			return 25447;
			break;
		
		case 228:
			return 25448;
			break;
		
		case 229:
			return 25449;
			break;
		
		case 230:
			return 25450;
			break;
		
		case 231:
			return 25451;
			break;
		
		case 232:
			return 25452;
			break;
		
		case 233:
			return 25453;
			break;
		
		case 237:
			return 25454;
			break;
		
		case 238:
			return 25455;
			break;
		
		case 239:
			return 25456;
			break;
		
		case 240:
			return 25457;
			break;
		
		case 241:
			return 25458;
			break;
		
		case 242:
			return 25459;
			break;
		
		case 243:
			return 25460;
			break;
		
		case 244:
			return 25461;
			break;
		
		case 245:
			return 25462;
			break;
		
		case 246:
			return 25463;
			break;
		
		case 247:
			return 25464;
			break;
		
		case 251:
			return 25465;
			break;
		
		case 252:
			return 25466;
			break;
		
		case 253:
			return 25467;
			break;
		
		case 254:
			return 25468;
			break;
		
		case 255:
			return 25469;
			break;
		
		case 256:
			return 25470;
			break;
		
		case 257:
			return 25471;
			break;
		
		case 258:
			return 25472;
			break;
		
		case 262:
			return 25473;
			break;
		
		case 263:
			return 25474;
			break;
		
		case 264:
			return 25475;
			break;
		
		case 265:
			return 25476;
			break;
		
		case 266:
			return 25477;
			break;
		
		case 267:
			return 25478;
			break;
		
		case 268:
			return 25479;
			break;
		
		case 269:
			return 25480;
			break;
		
		case 270:
			return 25481;
			break;
		
		case 271:
			return 25482;
			break;
		
		case 272:
			return 25483;
			break;
		
		case 273:
			return 25484;
			break;
		
		case 277:
			return 25485;
			break;
		
		case 278:
			return 25486;
			break;
		
		case 279:
			return 25487;
			break;
		
		case 280:
			return 25488;
			break;
		
		case 281:
			return 25489;
			break;
		
		case 282:
			return 25490;
			break;
		
		case 283:
			return 25491;
			break;
		
		case 287:
			return 25492;
			break;
		
		case 288:
			return 25493;
			break;
		
		case 289:
			return 25494;
			break;
		
		case 290:
			return 25495;
			break;
		
		case 291:
			return 25496;
			break;
		
		case 292:
			return 25497;
			break;
		
		case 293:
			return 25498;
			break;
		
		case 294:
			return 25499;
			break;
		
		case 295:
			return 25500;
			break;
		
		case 296:
			return 25501;
			break;
		
		case 297:
			return 25502;
			break;
		
		case 298:
			return 25503;
			break;
		
		case 299:
			return 25504;
			break;
		
		case 300:
			return 25505;
			break;
		
		case 301:
			return 25506;
			break;
		
		case 302:
			return 25507;
			break;
		
		case 303:
			return 25508;
			break;
		
		case 304:
			return 25509;
			break;
		
		case 305:
			return 25510;
			break;
		
		case 306:
			return 25511;
			break;
	}
	return 0;
}

int func_662(int iParam0, int iParam1)//Position - 0x35C20
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 17:
			return 0;
		
		case 9:
			return 1;
		
		case 10:
			return 2;
		
		case 11:
			return 3;
		
		case 12:
			return 4;
		
		case 13:
			return 5;
		
		case 14:
			return 6;
		
		case 15:
			return 7;
		
		case 16:
			return 8;
		
		case 19:
			return 9;
		
		case 22:
			return 10;
		
		case 23:
			return 11;
		
		case 24:
			return 12;
		
		case 25:
			return 13;
		
		case 27:
			return 14;
		
		case 28:
			return 15;
		
		case 29:
			return 16;
		
		case 30:
			return 17;
		
		case 31:
			return 18;
		
		case 20:
			return 19;
		
		case 32:
			return 20;
		
		case 21:
			return 21;
		
		case 78:
			return 22;
		
		case 79:
			return 23;
		
		case 80:
			return 24;
		
		case 18:
			return 25;
		
		case 81:
			return 26;
		
		case 82:
			return 27;
		
		case 83:
			return 28;
		
		case 84:
			return 29;
		
		case 85:
			return 30;
		
		case 86:
			return 31;
		
		case 87:
			return 32;
		
		case 88:
			return 33;
		
		case 102:
			return 34;
		
		case 113:
			return 35;
		
		case 160:
			return 36;
		
		case 163:
			return 37;
		
		case 162:
			return 38;
		
		case 164:
			if (func_663(iParam0, 11, iParam1))
			{
				return 40;
			}
			return 39;
		
		case 199:
			return 41;
		
		case 201:
			return 42;
		
		case 200:
			switch (iParam1)
			{
				case 1:
					return 43;
				
				case 2:
					return 44;
				
				case 3:
					return 45;
				
				case 4:
					return 46;
				
				case 5:
					return 47;
				
				case 6:
					return 48;
				
				case 7:
					return 49;
				
				case 8:
					return 50;
				
				case 9:
					return 51;
				
				case 10:
					return 52;
				
				case 11:
					return 53;
				
				case 12:
					return 54;
				
				case 13:
					return 55;
				
				case 14:
					return 56;
				
				case 15:
					return 57;
				
				case 16:
					return 58;
				
				case 17:
					return 59;
				
				case 18:
					return 60;
				
				case 19:
					return 61;
				
				case 20:
					return 62;
				
				case 21:
					return 63;
				
				case 22:
					return 64;
				
				case 23:
					return 65;
				
				case 24:
					return 66;
				
				case 25:
					return 67;
				
				default:
			}
			return 43;
		
		case 171:
			return 68;
		
		case 187:
			return 69;
		
		case 177:
			return 70;
		
		case 183:
			return 71;
		
		case 185:
			return 72;
		
		case 184:
			return 73;
		
		case 188:
			return 74;
		
		case 173:
			return 75;
		
		case 178:
			return 76;
		
		case 186:
			return 77;
		
		case 215:
			return 78;
		
		case 217:
			return 79;
		
		case 224:
			return 80;
		
		case 237:
			return 81;
		
		case 243:
			return 82;
		
		case 244:
			return 83;
		
		case 245:
			return 84;
		
		case 253:
			return 85;
		
		case 254:
			return 86;
		
		case 256:
			return 87;
		
		case 257:
			return 88;
		
		case 258:
			return 89;
		
		case 276:
			if (func_663(iParam0, 16, iParam1))
			{
				return 91;
			}
			return 90;
		
		case 323:
			return 92;
		
		case 324:
			return 93;
		
		case 337:
			return 94;
		
		case 357:
			return 95;
		
		case 402:
			return 96;
		
		case 413:
			switch (iParam1)
			{
				case 1:
					return 97;
				
				case 2:
					return 98;
				
				case 3:
					return 99;
				
				case 4:
					return 100;
				
				case 5:
					return 101;
				
				case 6:
					return 102;
				
				case 7:
					return 103;
				
				case 8:
					return 104;
				
				default:
			}
			return 97;
		
		case 414:
			switch (iParam1)
			{
				case 1:
					return 105;
				
				case 2:
					return 106;
				
				case 3:
					return 107;
				
				case 4:
					return 108;
				
				case 5:
					return 109;
				
				case 6:
					return 110;
				
				case 7:
					return 111;
				
				case 8:
					return 112;
				
				case 9:
					return 113;
				
				case 10:
					return 114;
				
				default:
			}
			return 105;
		
		case 450:
			return 115;
		
		case 451:
			return 116;
		
		case 452:
			return 117;
		
		case 453:
			return 118;
		
		case 454:
			return 119;
		
		case 455:
			return 120;
		
		case 456:
			return 121;
		
		case 457:
			return 122;
		
		case 480:
			return 123;
		
		case 482:
			return 124;
		
		case 483:
			return 125;
		
		case 518:
			return 126;
			break;
		
		case 531:
			return 127;
			break;
		
		case 533:
			return 128;
			break;
		
		case 527:
			return 129;
			break;
		
		case 525:
			return 130;
	}
	return -1;
}

int func_663(int iParam0, int iParam1, int iParam2)//Position - 0x36223
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar0 = func_653(iParam0, -1);
	if (iParam0 == 164)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 276)
	{
		if (iParam2 == 2)
		{
			return 1;
		}
		return 0;
	}
	if (iParam0 == 95)
	{
		if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			return 1;
		}
		return 0;
	}
	else if ((iParam0 == 96 || iParam0 == 97) || iParam0 == 98)
	{
		if (func_647() && func_708())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 206 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == 207 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 208 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == 209 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (func_647())
		{
			return 1;
		}
		return 0;
	}
	if ((((iParam0 == 170 || iParam0 == 120) || iParam0 == 119) || iParam0 == 117) || iParam0 == 166)
	{
		return 1;
	}
	if (iParam0 == 221 || iParam0 == 135)
	{
		if (iParam1 == 26)
		{
			return 1;
		}
		return 0;
	}
	if (func_707(iParam0))
	{
		if (Global_77052)
		{
			return 1;
		}
		return 0;
	}
	iVar1 = func_481(iVar0);
	if (iVar1 != -1)
	{
		if (func_705(func_706(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	if (func_652(iParam0))
	{
		if (func_647())
		{
			if ((iParam0 == 205 && Global_262145.f_20268) || (iParam0 != 205 && Global_262145.f_20267))
			{
				return 1;
			}
			return 0;
		}
		return 0;
	}
	if (func_651(iParam0))
	{
		if (func_643(iParam0))
		{
			return 0;
		}
		return 1;
	}
	iVar2 = func_704(iVar0);
	if (iVar2 != -1)
	{
		if (func_702(func_703(iVar0)))
		{
			return 1;
		}
		return 0;
	}
	iVar3 = func_701(iVar0);
	if (iVar3 > 0)
	{
		if (func_699(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar4 = func_698(iVar0);
	if (iVar4 != -1)
	{
		if (func_696(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar5 = func_695(iVar0);
	if (iVar5 != -1)
	{
		if (func_693(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar6 = func_692(iVar0);
	if (iVar6 != -1)
	{
		if (func_690(iVar0))
		{
			return 1;
		}
		return 0;
	}
	if ((iVar0 == joaat("firetruk") || iVar0 == joaat("boxville")) || iVar0 == joaat("stockade"))
	{
		if (func_689(iVar0))
		{
			return 0;
		}
		return 1;
	}
	iVar7 = func_650(iVar0);
	if (iVar7 != -1)
	{
		if (func_689(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar8 = func_648(iVar0);
	if (iVar8 != -1)
	{
		if (func_680(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar9 = func_679(iVar0);
	if (iVar9 != -1)
	{
		if (func_677(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar10 = func_676(iVar0);
	if (iVar10 != -1)
	{
		if (func_668(iVar0))
		{
			return 1;
		}
		return 0;
	}
	iVar11 = func_667(iVar0);
	if (iVar11 != -1)
	{
		if (func_664(iVar0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_664(int iParam0)//Position - 0x36573
{
	if (!Global_78319)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("KANJOSJ"):
			return func_506(34373, -1);
		
		case joaat("POSTLUDE"):
			return func_506(34374, -1);
		
		case joaat("GREENWOOD"):
			return func_665(0);
		
		case joaat("DRAUGUR"):
			return func_506(32366, -1);
		
		case joaat("CONADA"):
			return func_665(5);
		
		default:
	}
	return 0;
}

var func_665(int iParam0)//Position - 0x365E0
{
	return BitTest(func_21(10393, -1, 0), func_666(iParam0, 1));
}

int func_666(int iParam0, bool bParam1)//Position - 0x365F9
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			
			case 1:
				return 1;
			
			case 2:
				return 2;
			
			case 3:
				return 3;
			
			case 4:
				return 4;
			
			case 5:
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 7;
			
			case 1:
				return 8;
			
			case 2:
				return 9;
			
			case 3:
				return 10;
			
			case 4:
				return 11;
			
			case 5:
				return 12;
			}
		
		default:
	}
	return -1;
}

int func_667(int iParam0)//Position - 0x36695
{
	switch (iParam0)
	{
		case joaat("KANJOSJ"):
			return 0;
		
		case joaat("POSTLUDE"):
			return 1;
		
		case joaat("GREENWOOD"):
			return 2;
		
		case joaat("DRAUGUR"):
			return 3;
		
		case joaat("CONADA"):
			return 4;
		
		default:
	}
	return -1;
}

int func_668(int iParam0)//Position - 0x366D7
{
	if (!Global_78319)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("buffalo4"):
			return func_675();
		
		case joaat("granger2"):
			return func_673(1) >= 5;
		
		case joaat("deity"):
			return func_673(1) >= 10;
		
		case joaat("patriot3"):
			return func_673(1) >= 15;
		
		case joaat("jubilee"):
			return func_673(1) >= 20;
		
		case joaat("champion"):
			return (func_671(11, 1) || func_669(1));
		
		case joaat("baller7"):
			return func_669(1);
		
		default:
	}
	return 0;
}

int func_669(bool bParam0)//Position - 0x3676C
{
	if (bParam0)
	{
		return BitTest(func_21(9905, -1, 0), 2);
	}
	return func_670(PLAYER::PLAYER_ID());
}

int func_670(int iParam0)//Position - 0x3678F
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27, 2);
	}
	return 0;
}

int func_671(int iParam0, bool bParam1)//Position - 0x367AD
{
	if (bParam1)
	{
		return BitTest(func_21(9907, -1, 0), iParam0);
	}
	return func_672(PLAYER::PLAYER_ID(), iParam0);
}

int func_672(int iParam0, var uParam1)//Position - 0x367D3
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1977138[iParam0 /*57*/].f_27.f_3, uParam1);
	}
	return 0;
}

int func_673(bool bParam0)//Position - 0x367F4
{
	if (bParam0)
	{
		return func_21(9910, -1, 0);
	}
	return func_674(PLAYER::PLAYER_ID());
}

int func_674(int iParam0)//Position - 0x36815
{
	if (iParam0 != -1)
	{
		return Global_1977138[iParam0 /*57*/].f_27.f_8;
	}
	return 0;
}

bool func_675()//Position - 0x36833
{
	return func_21(9903, func_22(-1), 0) != 0;
}

int func_676(int iParam0)//Position - 0x3684A
{
	switch (iParam0)
	{
		case joaat("baller7"):
			return 0;
		
		case joaat("buffalo4"):
			return 1;
		
		case joaat("champion"):
			return 2;
		
		case joaat("deity"):
			return 3;
		
		case joaat("granger2"):
			return 4;
		
		case joaat("jubilee"):
			return 5;
		
		case joaat("mule5"):
			return 6;
		
		case joaat("patriot3"):
			return 7;
		
		case joaat("youga4"):
			return 8;
		
		default:
	}
	return -1;
}

int func_677(int iParam0)//Position - 0x368B5
{
	if (!Global_78319)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("euros"):
			return func_678(PLAYER::PLAYER_ID());
		
		case joaat("tailgater2"):
			return func_501(PLAYER::PLAYER_ID());
		
		case joaat("zr350"):
			return func_506(31810, -1);
		
		case joaat("comet6"):
			return func_506(31811, -1);
		
		case joaat("jester4"):
			return func_506(31812, -1);
		
		case joaat("vectre"):
			return func_506(31813, -1);
		
		case joaat("cypher"):
			return func_506(31814, -1);
		
		case joaat("growler"):
			return func_506(31815, -1);
		
		case joaat("calico"):
			return func_506(31816, -1);
		
		case joaat("remus"):
			return func_506(31817, -1);
		
		case joaat("dominator7"):
			return func_506(31818, -1);
		
		case joaat("futo2"):
			return func_506(31819, -1);
		
		case joaat("rt3000"):
			return func_506(31820, -1);
		
		case joaat("warrener2"):
			return func_506(31821, -1);
		
		case joaat("sultan3"):
			return func_506(31822, -1);
		
		case joaat("dominator8"):
			return func_506(31823, -1);
		
		case joaat("previon"):
			return func_506(31824, -1);
		
		case joaat("KANJOSJ"):
			return func_506(34373, -1);
		
		case joaat("POSTLUDE"):
			return func_506(34374, -1);
		
		default:
	}
	return 0;
}

int func_678(int iParam0)//Position - 0x36A16
{
	if (iParam0 != func_8())
	{
		if (BitTest(Global_1853348[iParam0 /*834*/].f_267.f_465.f_2, 17))
		{
			return 1;
		}
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return func_21(9631, -1, 0) != 0;
		}
	}
	return 0;
}

int func_679(int iParam0)//Position - 0x36A5A
{
	switch (iParam0)
	{
		case joaat("zr350"):
			return 0;
		
		case joaat("comet6"):
			return 1;
		
		case joaat("jester4"):
			return 2;
		
		case joaat("vectre"):
			return 3;
		
		case joaat("cypher"):
			return 4;
		
		case joaat("tailgater2"):
			return 5;
		
		case joaat("euros"):
			return 6;
		
		case joaat("growler"):
			return 7;
		
		case joaat("calico"):
			return 8;
		
		case joaat("remus"):
			return 9;
		
		case joaat("dominator7"):
			return 10;
		
		case joaat("futo2"):
			return 11;
		
		case joaat("rt3000"):
			return 12;
		
		case joaat("warrener2"):
			return 13;
		
		case joaat("sultan3"):
			return 14;
		
		case joaat("dominator8"):
			return 15;
		
		case joaat("previon"):
			return 16;
		
		default:
	}
	return -1;
}

int func_680(int iParam0)//Position - 0x36B1D
{
	if (!Global_78319)
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("winky"):
			if (func_686(PLAYER::PLAYER_ID(), 0) || func_685(0))
			{
				return 1;
			}
			break;
		
		case joaat("brioso2"):
			if (func_684(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
		
		case joaat("vetir"):
			if (func_683(281, -1))
			{
				return 1;
			}
			break;
		
		case joaat("longfin"):
			if (func_683(282, -1))
			{
				return 1;
			}
			break;
		
		case joaat("annihilator2"):
			if (func_683(283, -1))
			{
				return 1;
			}
			break;
		
		case joaat("alkonost"):
			if (func_683(284, -1))
			{
				return 1;
			}
			break;
		
		case joaat("patrolboat"):
			if (func_683(285, -1))
			{
				return 1;
			}
			break;
		
		case joaat("weevil"):
			if ((func_681(0, 1) && func_681(1, 1)) && func_681(2, 1))
			{
				return 1;
			}
			break;
		
		case joaat("italirsx"):
			if (func_681(3, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_681(int iParam0, bool bParam1)//Position - 0x36C2F
{
	if (bParam1)
	{
		return BitTest(func_21(9586, -1, 0), iParam0);
	}
	return func_682(PLAYER::PLAYER_ID(), iParam0);
}

int func_682(int iParam0, var uParam1)//Position - 0x36C55
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_3, uParam1);
	}
	return 0;
}

int func_683(int iParam0, int iParam1)//Position - 0x36C74
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2866852[iParam0 /*3*/][func_22(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_684(int iParam0)//Position - 0x36CA0
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_1, 1);
	}
	return 0;
}

int func_685(bool bParam0)//Position - 0x36CBE
{
	if (bParam0)
	{
		return BitTest(func_21(9511, -1, 0), 1);
	}
	return func_684(PLAYER::PLAYER_ID());
}

int func_686(int iParam0, int iParam1)//Position - 0x36CE1
{
	if (iParam0 != -1)
	{
		return func_687(iParam0, func_688(iParam1));
	}
	return 0;
}

int func_687(int iParam0, var uParam1)//Position - 0x36CFF
{
	if (iParam0 != -1)
	{
		return BitTest(Global_1975224[iParam0 /*53*/].f_2, uParam1);
	}
	return 0;
}

int func_688(int iParam0)//Position - 0x36D1E
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 7:
			return 1;
		
		case 1:
			return 2;
		
		case 5:
			return 3;
		
		case 2:
			return 4;
		
		case 3:
			return 5;
		
		case 4:
			return 6;
		
		case 6:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 10;
		
		case 12:
			return 11;
		
		case 13:
			return 12;
		
		case 14:
			return 13;
		
		case 15:
			return 14;
		
		case 16:
			return 15;
		
		default:
	}
	return -1;
}

int func_689(int iParam0)//Position - 0x36DE1
{
	int iVar0;
	
	if (!Global_78319)
	{
		return 0;
	}
	iVar0 = func_21(8837, -1, 0);
	switch (iParam0)
	{
		case joaat("firetruk"):
			if (BitTest(iVar0, 0) || Global_262145.f_28576)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("burrito2"):
			if (BitTest(iVar0, 1) || Global_262145.f_28577)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("boxville"):
			if (BitTest(iVar0, 2) || Global_262145.f_28578)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("stockade"):
			if (BitTest(iVar0, 3) || Global_262145.f_28579)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("asbo"):
			if (BitTest(iVar0, 4) || Global_262145.f_28580)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("kanjo"):
			if (BitTest(iVar0, 5) || Global_262145.f_28581)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("everon"):
			if (BitTest(iVar0, 6) || Global_262145.f_28582)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("retinue2"):
			if (BitTest(iVar0, 7) || Global_262145.f_28583)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("yosemite2"):
			if (BitTest(iVar0, 8) || Global_262145.f_28584)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sugoi"):
			if (BitTest(iVar0, 9) || Global_262145.f_28585)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sultan2"):
			if (BitTest(iVar0, 10) || Global_262145.f_28586)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("outlaw"):
			if (BitTest(iVar0, 11) || Global_262145.f_28587)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("vagrant"):
			if (BitTest(iVar0, 12) || Global_262145.f_28588)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("komoda"):
			if (BitTest(iVar0, 13) || Global_262145.f_28589)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("stryder"):
			if (BitTest(iVar0, 14) || Global_262145.f_28590)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("furia"):
			if (BitTest(iVar0, 15) || Global_262145.f_28591)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("zhaba"):
			if (BitTest(iVar0, 16) || Global_262145.f_28592)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("jugular"):
			if (BitTest(iVar0, 17) || Global_262145.f_28593)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("sentinel3"):
			if (BitTest(iVar0, 18) || Global_262145.f_28594)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("gauntlet3"):
			if (BitTest(iVar0, 19) || Global_262145.f_28595)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("ellie"):
			if (BitTest(iVar0, 20) || Global_262145.f_28596)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("defiler"):
			if (BitTest(iVar0, 21) || Global_262145.f_28597)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("manchez"):
			if (BitTest(iVar0, 22) || Global_262145.f_28598)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_690(int iParam0)//Position - 0x371AF
{
	if (!Global_78319)
	{
		return 0;
	}
	if (iParam0 == joaat("cognoscenti") || iParam0 == joaat("cognoscenti2"))
	{
		return 0;
	}
	if (func_692(iParam0) != -1)
	{
		if (func_660(func_691(iParam0)))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_691(int iParam0)//Position - 0x37203
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 8;
			break;
		
		case joaat("cerberus2"):
			return 9;
			break;
		
		case joaat("cerberus3"):
			return 10;
			break;
		
		case joaat("brutus"):
			return 11;
			break;
		
		case joaat("brutus2"):
			return 12;
			break;
		
		case joaat("brutus3"):
			return 13;
			break;
		
		case joaat("zr380"):
			return 14;
			break;
		
		case joaat("zr3802"):
			return 15;
			break;
		
		case joaat("zr3803"):
			return 16;
			break;
		
		case joaat("scarab"):
			return 20;
			break;
		
		case joaat("scarab2"):
			return 21;
			break;
		
		case joaat("scarab3"):
			return 22;
			break;
		
		case joaat("imperator"):
			return 17;
			break;
		
		case joaat("imperator2"):
			return 18;
			break;
		
		case joaat("imperator3"):
			return 19;
			break;
		
		case joaat("impaler"):
			return 102;
			break;
		
		case joaat("ratloader2"):
			return 103;
			break;
		
		case joaat("glendale"):
			return 104;
			break;
		
		case joaat("slamvan"):
			return 105;
			break;
		
		case joaat("dominator"):
			return 106;
			break;
		
		case joaat("issi3"):
			return 107;
			break;
		
		case joaat("gargoyle"):
			return 108;
			break;
	}
	return -1;
}

int func_692(int iParam0)//Position - 0x37347
{
	switch (iParam0)
	{
		case joaat("cerberus"):
			return 0;
		
		case joaat("cerberus2"):
			return 1;
		
		case joaat("cerberus3"):
			return 2;
		
		case joaat("brutus"):
			return 3;
		
		case joaat("brutus2"):
			return 4;
		
		case joaat("brutus3"):
			return 5;
		
		case joaat("scarab"):
			return 6;
		
		case joaat("scarab2"):
			return 7;
		
		case joaat("scarab3"):
			return 8;
		
		case joaat("imperator"):
			return 9;
		
		case joaat("imperator2"):
			return 10;
		
		case joaat("imperator3"):
			return 11;
		
		case joaat("zr380"):
			return 12;
		
		case joaat("zr3802"):
			return 13;
		
		case joaat("zr3803"):
			return 14;
		
		case joaat("ratloader2"):
			return 15;
		
		case joaat("glendale"):
			return 16;
		
		case joaat("slamvan"):
			return 17;
		
		case joaat("dominator"):
			return 18;
		
		case joaat("impaler"):
			return 19;
		
		case joaat("issi3"):
			return 20;
		
		case joaat("gargoyle"):
			return 21;
		
		default:
	}
	return -1;
}

int func_693(int iParam0)//Position - 0x37441
{
	switch (iParam0)
	{
		case joaat("mule4"):
			if (func_21(7233, -1, 0) >= func_694(iParam0) || Global_262145.f_24711)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pounder2"):
			if (func_21(7233, -1, 0) >= func_694(iParam0) || Global_262145.f_24712)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("oppressor2"):
			if (func_67(22050, -1) >= func_694(iParam0) || Global_262145.f_24713)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("pbus2"):
			if (BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_295.f_7, 1) || Global_262145.f_24715)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("patriot2"):
			if (func_21(7231, -1, 0) >= func_694(iParam0) || Global_262145.f_24716)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case joaat("blimp3"):
			if (func_21(7231, -1, 0) >= func_694(iParam0) || Global_262145.f_24717)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
	}
	return 0;
}

int func_694(int iParam0)//Position - 0x3758D
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return Global_262145.f_24718;
			break;
		
		case joaat("pounder2"):
			return Global_262145.f_24719;
			break;
		
		case joaat("oppressor2"):
			return Global_262145.f_24720;
			break;
		
		case joaat("patriot2"):
			return Global_262145.f_24721;
			break;
		
		case joaat("blimp3"):
			return Global_262145.f_24722;
			break;
	}
	return 0;
}

int func_695(int iParam0)//Position - 0x375FC
{
	switch (iParam0)
	{
		case joaat("mule4"):
			return 0;
			break;
		
		case joaat("pounder2"):
			return 1;
			break;
		
		case joaat("oppressor2"):
			return 2;
			break;
		
		case joaat("pbus2"):
			return 3;
			break;
		
		case joaat("patriot2"):
			return 4;
			break;
		
		case joaat("blimp3"):
			return 5;
			break;
	}
	return -1;
}

int func_696(int iParam0)//Position - 0x3765A
{
	int iVar0;
	
	if (!Global_78319)
	{
		return 0;
	}
	iVar0 = func_21(5664, -1, 0);
	switch (iParam0)
	{
		case joaat("deluxo"):
			return BitTest(iVar0, func_697(1));
		
		case joaat("akula"):
			return BitTest(iVar0, func_697(2));
		
		case joaat("riot2"):
			return BitTest(iVar0, func_697(6));
		
		case joaat("stromberg"):
			return BitTest(iVar0, func_697(7));
		
		case joaat("chernobog"):
			return BitTest(iVar0, func_697(10));
		
		case joaat("barrage"):
			return BitTest(iVar0, func_697(11));
		
		case joaat("khanjali"):
			return BitTest(iVar0, func_697(12));
		
		case joaat("volatol"):
			return BitTest(iVar0, func_697(13));
		
		case joaat("thruster"):
			return BitTest(iVar0, func_697(15));
		
		default:
	}
	return 0;
}

int func_697(int iParam0)//Position - 0x3771F
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 1:
			return 1;
		
		case 2:
			return 2;
		
		case 3:
			return 3;
		
		case 4:
			return 4;
		
		case 5:
			return 5;
		
		case 6:
			return 6;
		
		case 7:
			return 7;
		
		case 8:
			return 8;
		
		case 9:
			return 9;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		case 13:
			return 13;
		
		case 14:
			return 14;
		
		case 15:
			return 15;
		
		default:
	}
	return -1;
}

int func_698(int iParam0)//Position - 0x377D7
{
	switch (iParam0)
	{
		case joaat("deluxo"):
			return 0;
			break;
		
		case joaat("akula"):
			return 1;
			break;
		
		case joaat("riot2"):
			return 2;
			break;
		
		case joaat("stromberg"):
			return 3;
			break;
		
		case joaat("chernobog"):
			return 4;
			break;
		
		case joaat("barrage"):
			return 5;
			break;
		
		case joaat("khanjali"):
			return 6;
			break;
		
		case joaat("volatol"):
			return 7;
			break;
		
		case joaat("thruster"):
			return 8;
			break;
	}
	return -1;
}

int func_699(int iParam0)//Position - 0x3785D
{
	int iVar0;
	int iVar1;
	
	if (!Global_78319)
	{
		return 0;
	}
	iVar0 = func_701(iParam0);
	iVar1 = func_700();
	if (iVar1 >= iVar0)
	{
		return 1;
	}
	return 0;
}

int func_700()//Position - 0x3788B
{
	return func_21(6116, -1, 0);
}

int func_701(int iParam0)//Position - 0x3789C
{
	switch (iParam0)
	{
		case joaat("microlight"):
			return Global_262145.f_22740;
		
		case joaat("rogue"):
			return Global_262145.f_22741;
		
		case joaat("alphaz1"):
			return Global_262145.f_22742;
		
		case joaat("havok"):
			return Global_262145.f_22743;
		
		case joaat("starling"):
			return Global_262145.f_22744;
		
		case joaat("molotok"):
			return Global_262145.f_22745;
		
		case joaat("tula"):
			return Global_262145.f_22746;
		
		case joaat("bombushka"):
			return Global_262145.f_22747;
		
		case joaat("howard"):
			return Global_262145.f_22748;
		
		case joaat("mogul"):
			return Global_262145.f_22749;
		
		case joaat("pyro"):
			return Global_262145.f_22750;
		
		case joaat("seabreeze"):
			return Global_262145.f_22751;
		
		case joaat("nokota"):
			return Global_262145.f_22752;
		
		case joaat("hunter"):
			return Global_262145.f_22753;
		
		default:
	}
	return 0;
}

int func_702(var uParam0)//Position - 0x3798C
{
	if (!Global_78319)
	{
		return 0;
	}
	return BitTest(func_21(5466, -1, 0), uParam0);
}

int func_703(int iParam0)//Position - 0x379AC
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
		
		case joaat("halftrack"):
			return 1;
		
		case joaat("trailersmall2"):
			return 2;
		
		case joaat("apc"):
			return 3;
		
		case joaat("tampa3"):
			return 5;
		
		case joaat("oppressor"):
			return 7;
		
		default:
	}
	return 3;
}

int func_704(int iParam0)//Position - 0x379F8
{
	switch (iParam0)
	{
		case joaat("dune3"):
			return 0;
			break;
		
		case joaat("halftrack"):
			return 1;
			break;
		
		case joaat("trailersmall2"):
			return 2;
			break;
		
		case joaat("apc"):
			return 3;
			break;
		
		case joaat("tampa3"):
			return 4;
			break;
		
		case joaat("oppressor"):
			return 5;
			break;
	}
	return -1;
}

int func_705(var uParam0)//Position - 0x37A56
{
	if (!Global_78319)
	{
		return 0;
	}
	return BitTest(func_21(5329, -1, 0), uParam0);
}

int func_706(int iParam0)//Position - 0x37A76
{
	switch (iParam0)
	{
		case joaat("dune4"):
			return 0;
		
		case joaat("dune5"):
			return 0;
		
		case joaat("wastelander"):
			return 1;
		
		case joaat("blazer5"):
			return 2;
		
		case joaat("phantom2"):
			return 3;
		
		case joaat("voltic2"):
			return 4;
		
		case joaat("technical2"):
			return 5;
		
		case joaat("boxville5"):
			return 6;
		
		case joaat("ruiner2"):
			return 7;
		
		default:
	}
	return 0;
}

int func_707(int iParam0)//Position - 0x37AE0
{
	if ((((((iParam0 == 233 || iParam0 == 234) || iParam0 == 235) || iParam0 == 236) || iParam0 == 240) || iParam0 == 241) || iParam0 == 263)
	{
		return 1;
	}
	return 0;
}

int func_708()//Position - 0x37B38
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (BitTest(Global_25, 5))
	{
		if (BitTest(Global_25, 1) || BitTest(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1))
	{
		if (BitTest(uVar0, 5))
		{
			if (BitTest(uVar0, 1) || BitTest(uVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152261.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &uVar1, -1))
			{
				if (BitTest(uVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (BitTest(iVar3, 1) || BitTest(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_25())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_709(int iParam0)//Position - 0x37C71
{
	switch (iParam0)
	{
		case joaat("ztype"):
			return 0;
		
		case joaat("stinger"):
			return 1;
		
		case joaat("jb700"):
			return 2;
		
		case joaat("cheetah"):
			return 3;
		
		case joaat("entityxf"):
			return 4;
		
		case joaat("adder"):
			return 5;
		
		case joaat("monroe"):
			return 6;
		
		case joaat("cogcabrio"):
			return 7;
		
		case joaat("shamal"):
			return 10;
		
		case joaat("stunt"):
			return 11;
		
		case joaat("cuban800"):
			return 12;
		
		case joaat("duster"):
			return 13;
		
		case joaat("luxor"):
			return 14;
		
		case joaat("frogger"):
			return 15;
		
		case joaat("maverick"):
			return 16;
		
		case joaat("rhino"):
			return 17;
		
		case joaat("titan"):
			return 18;
		
		case joaat("cargobob"):
			return 19;
		
		case joaat("buzzard"):
			return 20;
		
		case joaat("crusader"):
			return 21;
		
		case joaat("barracks"):
			return 22;
		
		case joaat("marquis"):
			return 24;
		
		case joaat("jetmax"):
			return 25;
		
		case joaat("squalo"):
			return 27;
		
		case joaat("tropic"):
			return 29;
		
		case joaat("seashark"):
			return 30;
		
		case joaat("submersible"):
			return 31;
		
		case joaat("suntrap"):
			return 32;
		
		case joaat("tug"):
			return 258;
		
		case joaat("bmx"):
			return 33;
		
		case joaat("scorcher"):
			return 34;
		
		case joaat("tribike"):
			return 35;
		
		case joaat("tribike2"):
			return 36;
		
		case joaat("tribike3"):
			return 37;
		
		case joaat("cruiser"):
			return 38;
		
		case joaat("schwarzer"):
			return 39;
		
		case joaat("zion"):
			return 40;
		
		case joaat("gauntlet"):
			return 41;
		
		case joaat("vigero"):
			return 42;
		
		case joaat("issi2"):
			return 43;
		
		case joaat("infernus"):
			return 44;
		
		case joaat("surano"):
			return 45;
		
		case joaat("vacca"):
			return 46;
		
		case joaat("ninef"):
			return 47;
		
		case joaat("comet2"):
			return 48;
		
		case joaat("banshee"):
			return 49;
		
		case joaat("feltzer2"):
			return 50;
		
		case joaat("bfinjection"):
			return 51;
		
		case joaat("sandking"):
			return 52;
		
		case joaat("fugitive"):
			return 53;
		
		case joaat("dilettante"):
			return 54;
		
		case joaat("superd"):
			return 55;
		
		case joaat("exemplar"):
			return 56;
		
		case joaat("baller2"):
			return 57;
		
		case joaat("cavalcade"):
			return 58;
		
		case joaat("rocoto"):
			return 59;
		
		case joaat("felon"):
			return 60;
		
		case joaat("oracle2"):
			return 61;
		
		case joaat("bati"):
			return 62;
		
		case joaat("akuma"):
			return 63;
		
		case joaat("ruffian"):
			return 64;
		
		case joaat("vader"):
			return 65;
		
		case joaat("blazer"):
			return 66;
		
		case joaat("pcj"):
			return 67;
		
		case joaat("sanchez"):
			return 68;
		
		case joaat("faggio2"):
			return 69;
		
		case joaat("airbus"):
			return 82;
		
		case joaat("annihilator"):
			return 78;
		
		case joaat("bati2"):
			return 94;
		
		case joaat("bison"):
			return 89;
		
		case joaat("bullet"):
			return 70;
		
		case joaat("bus"):
			return 83;
		
		case joaat("carbonizzare"):
			return 71;
		
		case joaat("coach"):
			return 84;
		
		case joaat("coquette"):
			return 72;
		
		case joaat("double"):
			return 90;
		
		case joaat("dump"):
			return 81;
		
		case joaat("felon2"):
			return 91;
		
		case joaat("hexer"):
			return 92;
		
		case joaat("journey"):
			return 85;
		
		case joaat("mammatus"):
			return 79;
		
		case joaat("mule"):
			return 86;
		
		case joaat("ninef2"):
			return 73;
		
		case joaat("rapidgt"):
			return 74;
		
		case joaat("rapidgt2"):
			return 75;
		
		case joaat("rentalbus"):
			return 87;
		
		case joaat("stingergt"):
			return 76;
		
		case joaat("stretch"):
			return 88;
		
		case joaat("velum"):
			return 80;
		
		case joaat("voltic"):
			return 77;
		
		case joaat("zion2"):
			return 93;
		
		case joaat("elegy2"):
			return 95;
		
		case joaat("khamelion"):
			return 96;
		
		case joaat("hotknife"):
			return 97;
		
		case joaat("carbonrs"):
			return 98;
		
		case joaat("bodhi2"):
			return 103;
		
		case joaat("dune"):
			return 104;
		
		case joaat("rebel"):
			return 105;
		
		case joaat("sadler"):
			return 106;
		
		case joaat("sanchez2"):
			return 107;
		
		case joaat("sandking2"):
			return 108;
		
		case joaat("asea"):
			return 128;
		
		case joaat("asterope"):
			return 129;
		
		case joaat("bobcatxl"):
			return 130;
		
		case joaat("cavalcade2"):
			return 131;
		
		case joaat("granger"):
			return 132;
		
		case joaat("ingot"):
			return 133;
		
		case joaat("intruder"):
			return 134;
		
		case joaat("minivan"):
			return 135;
		
		case joaat("premier"):
			return 136;
		
		case joaat("radi"):
			return 137;
		
		case joaat("rancherxl"):
			return 138;
		
		case joaat("ratloader"):
			return 139;
		
		case joaat("stanier"):
			return 140;
		
		case joaat("stratum"):
			return 141;
		
		case joaat("washington"):
			return 142;
		
		case joaat("dominator"):
			return 122;
		
		case joaat("f620"):
			return 123;
		
		case joaat("fusilade"):
			return 124;
		
		case joaat("penumbra"):
			return 125;
		
		case joaat("sentinel"):
			return 126;
		
		case joaat("sentinel2"):
			return 127;
		
		case joaat("picador"):
			return 150;
		
		case joaat("regina"):
			return 151;
		
		case joaat("surfer"):
			return 152;
		
		case joaat("youga"):
			return 153;
		
		case joaat("blazer3"):
			return 154;
		
		case joaat("rebel2"):
			return 155;
		
		case joaat("primo"):
			return 156;
		
		case joaat("buffalo"):
			return 157;
		
		case joaat("buffalo2"):
			return 158;
		
		case joaat("tailgater"):
			return 159;
		
		default:
	}
	if (iParam0 == joaat("bifta"))
	{
		return 99;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 100;
	}
	else if (iParam0 == joaat("paradise"))
	{
		return 101;
	}
	else if (iParam0 == joaat("speeder"))
	{
		return 102;
	}
	else if (iParam0 == joaat("ROOSEVELT") || iParam0 == joaat("btype"))
	{
		return 109;
	}
	else if (iParam0 == joaat("jester"))
	{
		return 111;
	}
	else if (iParam0 == joaat("massacro"))
	{
		return 114;
	}
	else if (iParam0 == joaat("turismor"))
	{
		return 112;
	}
	else if (iParam0 == joaat("zentorno"))
	{
		return 115;
	}
	else if (iParam0 == joaat("huntley"))
	{
		return 116;
	}
	else if (iParam0 == joaat("alpha"))
	{
		return 110;
	}
	else if (iParam0 == joaat("vestra"))
	{
		return 113;
	}
	else if (iParam0 == joaat("coquette"))
	{
		return 117;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 118;
	}
	else if (iParam0 == joaat("stinger"))
	{
		return 119;
	}
	else if (iParam0 == joaat("voltic"))
	{
		return 120;
	}
	else if (iParam0 == joaat("thrust"))
	{
		return 121;
	}
	else if (iParam0 == joaat("blade"))
	{
		return 143;
	}
	else if (iParam0 == joaat("warrener"))
	{
		return 144;
	}
	else if (iParam0 == joaat("glendale"))
	{
		return 145;
	}
	else if (iParam0 == joaat("rhapsody"))
	{
		return 146;
	}
	else if (iParam0 == joaat("panto"))
	{
		return 147;
	}
	else if (iParam0 == joaat("dubsta3"))
	{
		return 148;
	}
	else if (iParam0 == joaat("pigalle"))
	{
		return 149;
	}
	else if (iParam0 == joaat("monster"))
	{
		return 160;
	}
	else if (iParam0 == joaat("sovereign"))
	{
		return 161;
	}
	else if (iParam0 == joaat("miljet"))
	{
		return 162;
	}
	else if (iParam0 == joaat("besra"))
	{
		return 163;
	}
	else if (iParam0 == joaat("swift"))
	{
		return 164;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 165;
	}
	else if (iParam0 == joaat("coquette2"))
	{
		return 166;
	}
	else if (iParam0 == joaat("innovation"))
	{
		return 167;
	}
	else if (iParam0 == joaat("hakuchou"))
	{
		return 168;
	}
	else if (iParam0 == joaat("furoregt"))
	{
		return 169;
	}
	else if (iParam0 == joaat("kalahari"))
	{
		return 170;
	}
	else if (iParam0 == joaat("valkyrie"))
	{
		return 187;
	}
	else if (iParam0 == joaat("hydra"))
	{
		return 177;
	}
	else if (iParam0 == joaat("savage"))
	{
		return 185;
	}
	else if (iParam0 == joaat("enduro"))
	{
		return 174;
	}
	else if (iParam0 == joaat("boxville4"))
	{
		return 171;
	}
	else if (iParam0 == joaat("casco"))
	{
		return 172;
	}
	else if (iParam0 == joaat("dinghy3"))
	{
		return 173;
	}
	else if (iParam0 == joaat("gburrito2"))
	{
		return 175;
	}
	else if (iParam0 == joaat("guardian"))
	{
		return 176;
	}
	else if (iParam0 == joaat("insurgent"))
	{
		return 178;
	}
	else if (iParam0 == joaat("mule3"))
	{
		return 183;
	}
	else if (iParam0 == joaat("insurgent2"))
	{
		return 179;
	}
	else if (iParam0 == joaat("lectro"))
	{
		return 182;
	}
	else if (iParam0 == joaat("pbus"))
	{
		return 184;
	}
	else if (iParam0 == joaat("technical"))
	{
		return 186;
	}
	else if (iParam0 == joaat("velum2"))
	{
		return 188;
	}
	else if (iParam0 == joaat("gresley"))
	{
		return 189;
	}
	else if (iParam0 == joaat("jackal"))
	{
		return 190;
	}
	else if (iParam0 == joaat("kuruma"))
	{
		return 180;
	}
	else if (iParam0 == joaat("kuruma2"))
	{
		return 181;
	}
	else if (iParam0 == joaat("landstalker"))
	{
		return 191;
	}
	else if (iParam0 == joaat("mesa3"))
	{
		return 192;
	}
	else if (iParam0 == joaat("nemesis"))
	{
		return 193;
	}
	else if (iParam0 == joaat("oracle"))
	{
		return 194;
	}
	else if (iParam0 == joaat("rumpo"))
	{
		return 195;
	}
	else if (iParam0 == joaat("schafter2"))
	{
		return 196;
	}
	else if (iParam0 == joaat("seminole"))
	{
		return 197;
	}
	else if (iParam0 == joaat("surge"))
	{
		return 198;
	}
	else if (iParam0 == joaat("dodo"))
	{
		return 199;
	}
	else if (iParam0 == joaat("marshall"))
	{
		return 200;
	}
	else if (iParam0 == joaat("submersible2"))
	{
		return 201;
	}
	else if (iParam0 == joaat("blista2"))
	{
		return 202;
	}
	else if (iParam0 == joaat("stalion"))
	{
		return 203;
	}
	else if (iParam0 == joaat("dukes"))
	{
		return 204;
	}
	else if (iParam0 == joaat("dukes2"))
	{
		return 205;
	}
	else if (iParam0 == joaat("stalion2"))
	{
		return 206;
	}
	else if (iParam0 == joaat("dominator2"))
	{
		return 207;
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		return 208;
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		return 209;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("ratloader2"))
	{
		return 211;
	}
	else if (iParam0 == joaat("jester2"))
	{
		return 212;
	}
	else if (iParam0 == joaat("massacro2"))
	{
		return 213;
	}
	else if (iParam0 == joaat("feltzer3"))
	{
		return 214;
	}
	else if (iParam0 == joaat("luxor2"))
	{
		return 215;
	}
	else if (iParam0 == joaat("osiris"))
	{
		return 216;
	}
	else if (iParam0 == joaat("swift2"))
	{
		return 217;
	}
	else if (iParam0 == joaat("virgo"))
	{
		return 218;
	}
	else if (iParam0 == joaat("windsor"))
	{
		return 219;
	}
	else if (iParam0 == joaat("brawler"))
	{
		return 220;
	}
	else if (iParam0 == joaat("chino"))
	{
		return 221;
	}
	else if (iParam0 == joaat("coquette3"))
	{
		return 222;
	}
	else if (iParam0 == joaat("t20"))
	{
		return 223;
	}
	else if (iParam0 == joaat("toro"))
	{
		return 224;
	}
	else if (iParam0 == joaat("vindicator"))
	{
		return 225;
	}
	else if (iParam0 == joaat("primo"))
	{
		return 229;
	}
	else if (iParam0 == joaat("moonbeam"))
	{
		return 228;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 227;
	}
	else if (iParam0 == joaat("buccaneer"))
	{
		return 226;
	}
	else if (iParam0 == joaat("voodoo2"))
	{
		return 230;
	}
	else if (iParam0 == joaat("btype2"))
	{
		return 231;
	}
	else if (iParam0 == joaat("lurcher"))
	{
		return 232;
	}
	else if (iParam0 == joaat("minivan"))
	{
		return 135;
	}
	else if (iParam0 == joaat("virgo3"))
	{
		return 251;
	}
	else if (iParam0 == joaat("tornado"))
	{
		return 250;
	}
	else if (iParam0 == joaat("sabregt"))
	{
		return 249;
	}
	else if (iParam0 == joaat("slamvan"))
	{
		return 210;
	}
	else if (iParam0 == joaat("faction"))
	{
		return 252;
	}
	else if (iParam0 == joaat("baller3") || iParam0 == joaat("baller5"))
	{
		return 233;
	}
	else if (iParam0 == joaat("baller4") || iParam0 == joaat("baller6"))
	{
		return 234;
	}
	else if (iParam0 == joaat("cog55"))
	{
		return 235;
	}
	else if (iParam0 == joaat("cognoscenti"))
	{
		return 236;
	}
	else if (iParam0 == joaat("limo2"))
	{
		return 237;
	}
	else if (iParam0 == joaat("mamba"))
	{
		return 238;
	}
	else if (iParam0 == joaat("nightshade"))
	{
		return 239;
	}
	else if (iParam0 == joaat("schafter3") || iParam0 == joaat("schafter5"))
	{
		return 240;
	}
	else if (iParam0 == joaat("schafter4") || iParam0 == joaat("schafter6"))
	{
		return 241;
	}
	else if (iParam0 == joaat("verlierer2"))
	{
		return 242;
	}
	else if (iParam0 == joaat("supervolito"))
	{
		return 243;
	}
	else if (iParam0 == joaat("supervolito2"))
	{
		return 244;
	}
	else if (iParam0 == Global_75446)
	{
		return 245;
	}
	else if (iParam0 == joaat("tampa"))
	{
		return 246;
	}
	else if (iParam0 == joaat("sultan"))
	{
		return 247;
	}
	else if (iParam0 == joaat("banshee"))
	{
		return 49;
	}
	else if (iParam0 == joaat("ROOSEVELT2") || iParam0 == joaat("btype3"))
	{
		return 248;
	}
	else if (iParam0 == joaat("volatus"))
	{
		return 253;
	}
	else if (iParam0 == joaat("cargobob2"))
	{
		return 254;
	}
	else if (iParam0 == joaat("rumpo3"))
	{
		return 255;
	}
	else if (iParam0 == joaat("brickade"))
	{
		return 256;
	}
	else if (iParam0 == joaat("nimbus"))
	{
		return 257;
	}
	else if (iParam0 == joaat("windsor2"))
	{
		return 259;
	}
	else if (iParam0 == joaat("prototipo"))
	{
		return 260;
	}
	else if (iParam0 == joaat("fmj"))
	{
		return 261;
	}
	else if (iParam0 == joaat("bestiagts"))
	{
		return 262;
	}
	else if (iParam0 == joaat("xls") || iParam0 == joaat("xls2"))
	{
		return 263;
	}
	else if (iParam0 == joaat("seven70"))
	{
		return 264;
	}
	else if (iParam0 == joaat("pfister811"))
	{
		return 265;
	}
	else if (iParam0 == joaat("reaper"))
	{
		return 266;
	}
	else if (iParam0 == joaat("le7b"))
	{
		return 267;
	}
	else if (iParam0 == joaat("omnis"))
	{
		return 268;
	}
	else if (iParam0 == joaat("tropos"))
	{
		return 269;
	}
	else if (iParam0 == joaat("brioso"))
	{
		return 270;
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		return 271;
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		return 272;
	}
	else if (iParam0 == joaat("contender"))
	{
		return 273;
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		return 274;
	}
	else if (iParam0 == joaat("bf400"))
	{
		return 275;
	}
	else if (iParam0 == joaat("tyrus"))
	{
		return 279;
	}
	else if (iParam0 == joaat("lynx"))
	{
		return 280;
	}
	else if (iParam0 == joaat("sheava"))
	{
		return 281;
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		return 276;
	}
	else if (iParam0 == joaat("tampa2"))
	{
		return 277;
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		return 278;
	}
	else if (iParam0 == joaat("bagger"))
	{
		return 282;
	}
	else if (iParam0 == joaat("esskey"))
	{
		return 283;
	}
	else if (iParam0 == joaat("nightblade"))
	{
		return 284;
	}
	else if (iParam0 == joaat("defiler"))
	{
		return 285;
	}
	else if (iParam0 == joaat("avarus"))
	{
		return 286;
	}
	else if (iParam0 == joaat("zombiea"))
	{
		return 287;
	}
	else if (iParam0 == joaat("zombieb"))
	{
		return 288;
	}
	else if (iParam0 == joaat("chimera"))
	{
		return 289;
	}
	else if (iParam0 == joaat("daemon2"))
	{
		return 290;
	}
	else if (iParam0 == joaat("ratbike"))
	{
		return 291;
	}
	else if (iParam0 == joaat("shotaro"))
	{
		return 292;
	}
	else if (iParam0 == joaat("raptor"))
	{
		return 293;
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		return 294;
	}
	else if (iParam0 == joaat("blazer4"))
	{
		return 296;
	}
	else if (iParam0 == joaat("sanctus"))
	{
		return 297;
	}
	else if (iParam0 == joaat("vortex"))
	{
		return 295;
	}
	else if (iParam0 == joaat("manchez"))
	{
		return 298;
	}
	else if (iParam0 == joaat("tornado6"))
	{
		return 299;
	}
	else if (iParam0 == joaat("youga2"))
	{
		return 300;
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		return 301;
	}
	else if (iParam0 == joaat("faggio3"))
	{
		return 302;
	}
	else if (iParam0 == joaat("faggio"))
	{
		return 303;
	}
	else if (iParam0 == joaat("dune5"))
	{
		return 304;
	}
	else if (iParam0 == joaat("phantom2"))
	{
		return 305;
	}
	else if (iParam0 == joaat("technical2"))
	{
		return 306;
	}
	else if (iParam0 == joaat("blazer5"))
	{
		return 307;
	}
	else if (iParam0 == joaat("boxville5"))
	{
		return 308;
	}
	else if (iParam0 == joaat("wastelander"))
	{
		return 309;
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		return 310;
	}
	else if (iParam0 == joaat("voltic2"))
	{
		return 311;
	}
	else if (iParam0 == joaat("penetrator"))
	{
		return 312;
	}
	else if (iParam0 == joaat("tempesta"))
	{
		return 313;
	}
	else if (iParam0 == joaat("italigtb"))
	{
		return 314;
	}
	else if (iParam0 == joaat("nero"))
	{
		return 315;
	}
	else if (iParam0 == joaat("diablous"))
	{
		return 316;
	}
	else if (iParam0 == joaat("fcr"))
	{
		return 317;
	}
	else if (iParam0 == joaat("specter"))
	{
		return 318;
	}
	else if (iParam0 == joaat("gp1"))
	{
		return 319;
	}
	else if (iParam0 == joaat("infernus2"))
	{
		return 320;
	}
	else if (iParam0 == joaat("ruston"))
	{
		return 321;
	}
	else if (iParam0 == joaat("turismo2"))
	{
		return 322;
	}
	else if (iParam0 == Global_75446)
	{
		return 245;
	}
	else if (iParam0 == Global_75448)
	{
		return 324;
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		return 325;
	}
	else if (iParam0 == joaat("torero"))
	{
		return 326;
	}
	else if (iParam0 == joaat("vagner"))
	{
		return 327;
	}
	else if (iParam0 == joaat("xa21"))
	{
		return 328;
	}
	else if (iParam0 == joaat("apc"))
	{
		return 329;
	}
	else if (iParam0 == joaat("dune3"))
	{
		return 330;
	}
	else if (iParam0 == joaat("halftrack"))
	{
		return 331;
	}
	else if (iParam0 == joaat("oppressor"))
	{
		return 332;
	}
	else if (iParam0 == joaat("tampa3"))
	{
		return 333;
	}
	else if (iParam0 == joaat("trailersmall2"))
	{
		return 334;
	}
	else if (iParam0 == joaat("ardent"))
	{
		return 335;
	}
	else if (iParam0 == joaat("nightshark"))
	{
		return 336;
	}
	else if (iParam0 == joaat("lazer"))
	{
		return 337;
	}
	else if (iParam0 == joaat("microlight"))
	{
		return 338;
	}
	else if (iParam0 == joaat("mogul"))
	{
		return 339;
	}
	else if (iParam0 == joaat("rogue"))
	{
		return 340;
	}
	else if (iParam0 == joaat("starling"))
	{
		return 341;
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		return 342;
	}
	else if (iParam0 == joaat("tula"))
	{
		return 343;
	}
	else if (iParam0 == joaat("pyro"))
	{
		return 344;
	}
	else if (iParam0 == joaat("molotok"))
	{
		return 345;
	}
	else if (iParam0 == joaat("nokota"))
	{
		return 346;
	}
	else if (iParam0 == joaat("bombushka"))
	{
		return 347;
	}
	else if (iParam0 == joaat("hunter"))
	{
		return 348;
	}
	else if (iParam0 == joaat("havok"))
	{
		return 349;
	}
	else if (iParam0 == joaat("howard"))
	{
		return 350;
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		return 351;
	}
	else if (iParam0 == joaat("cyclone"))
	{
		return 352;
	}
	else if (iParam0 == joaat("visione"))
	{
		return 353;
	}
	else if (iParam0 == joaat("retinue"))
	{
		return 354;
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		return 355;
	}
	else if (iParam0 == joaat("vigilante"))
	{
		return 356;
	}
	else if (iParam0 == joaat("deluxo"))
	{
		return 358;
	}
	else if (iParam0 == joaat("stromberg"))
	{
		return 359;
	}
	else if (iParam0 == joaat("riot2"))
	{
		return 360;
	}
	else if (iParam0 == joaat("chernobog"))
	{
		return 361;
	}
	else if (iParam0 == joaat("khanjali"))
	{
		return 362;
	}
	else if (iParam0 == joaat("akula"))
	{
		return 363;
	}
	else if (iParam0 == joaat("thruster"))
	{
		return 364;
	}
	else if (iParam0 == joaat("barrage"))
	{
		return 365;
	}
	else if (iParam0 == joaat("volatol"))
	{
		return 366;
	}
	else if (iParam0 == joaat("comet4"))
	{
		return 367;
	}
	else if (iParam0 == joaat("neon"))
	{
		return 368;
	}
	else if (iParam0 == joaat("streiter"))
	{
		return 369;
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		return 370;
	}
	else if (iParam0 == joaat("yosemite"))
	{
		return 371;
	}
	else if (iParam0 == joaat("sc1"))
	{
		return 372;
	}
	else if (iParam0 == joaat("autarch"))
	{
		return 373;
	}
	else if (iParam0 == joaat("gt500"))
	{
		return 374;
	}
	else if (iParam0 == joaat("hustler"))
	{
		return 375;
	}
	else if (iParam0 == joaat("revolter"))
	{
		return 376;
	}
	else if (iParam0 == joaat("pariah"))
	{
		return 377;
	}
	else if (iParam0 == joaat("raiden"))
	{
		return 378;
	}
	else if (iParam0 == joaat("savestra"))
	{
		return 379;
	}
	else if (iParam0 == joaat("riata"))
	{
		return 380;
	}
	else if (iParam0 == joaat("hermes"))
	{
		return 381;
	}
	else if (iParam0 == joaat("comet5"))
	{
		return 382;
	}
	else if (iParam0 == joaat("z190"))
	{
		return 383;
	}
	else if (iParam0 == joaat("viseris"))
	{
		return 384;
	}
	else if (iParam0 == joaat("kamacho"))
	{
		return 385;
	}
	else if (iParam0 == joaat("gb200"))
	{
		return 386;
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		return 387;
	}
	else if (iParam0 == joaat("ellie"))
	{
		return 388;
	}
	else if (iParam0 == joaat("issi3"))
	{
		return 389;
	}
	else if (iParam0 == joaat("michelli"))
	{
		return 390;
	}
	else if (iParam0 == joaat("flashgt"))
	{
		return 391;
	}
	else if (iParam0 == joaat("hotring"))
	{
		return 392;
	}
	else if (iParam0 == joaat("tezeract"))
	{
		return 393;
	}
	else if (iParam0 == joaat("tyrant"))
	{
		return 394;
	}
	else if (iParam0 == joaat("dominator3"))
	{
		return 395;
	}
	else if (iParam0 == joaat("taipan"))
	{
		return 396;
	}
	else if (iParam0 == joaat("entity2"))
	{
		return 397;
	}
	else if (iParam0 == joaat("jester3"))
	{
		return 398;
	}
	else if (iParam0 == joaat("cheburek"))
	{
		return 399;
	}
	else if (iParam0 == joaat("caracara"))
	{
		return 400;
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		return 401;
	}
	else if (iParam0 == joaat("mule4"))
	{
		return 403;
	}
	else if (iParam0 == joaat("pounder2"))
	{
		return 404;
	}
	else if (iParam0 == joaat("swinger"))
	{
		return 405;
	}
	else if (iParam0 == joaat("menacer"))
	{
		return 406;
	}
	else if (iParam0 == joaat("scramjet"))
	{
		return 407;
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		return 408;
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		return 409;
	}
	else if (iParam0 == joaat("patriot2"))
	{
		return 410;
	}
	else if (iParam0 == joaat("stafford"))
	{
		return 411;
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		return 412;
	}
	else if (iParam0 == joaat("futo"))
	{
		return 415;
	}
	else if (iParam0 == joaat("ruiner"))
	{
		return 416;
	}
	else if (iParam0 == joaat("romero"))
	{
		return 417;
	}
	else if (iParam0 == joaat("prairie"))
	{
		return 418;
	}
	else if (iParam0 == joaat("baller"))
	{
		return 419;
	}
	else if (iParam0 == joaat("serrano"))
	{
		return 420;
	}
	else if (iParam0 == joaat("bjxl"))
	{
		return 421;
	}
	else if (iParam0 == joaat("habanero"))
	{
		return 422;
	}
	else if (iParam0 == joaat("fq2"))
	{
		return 423;
	}
	else if (iParam0 == joaat("patriot"))
	{
		return 424;
	}
	else if (iParam0 == joaat("blimp3"))
	{
		return 413;
	}
	else if (iParam0 == joaat("pbus2"))
	{
		return 414;
	}
	else if (iParam0 == joaat("cerberus"))
	{
		return 425;
	}
	else if (iParam0 == joaat("cerberus2"))
	{
		return 426;
	}
	else if (iParam0 == joaat("cerberus3"))
	{
		return 427;
	}
	else if (iParam0 == joaat("brutus"))
	{
		return 428;
	}
	else if (iParam0 == joaat("brutus2"))
	{
		return 429;
	}
	else if (iParam0 == joaat("brutus3"))
	{
		return 430;
	}
	else if (iParam0 == joaat("scarab"))
	{
		return 431;
	}
	else if (iParam0 == joaat("scarab2"))
	{
		return 432;
	}
	else if (iParam0 == joaat("scarab3"))
	{
		return 433;
	}
	else if (iParam0 == joaat("imperator"))
	{
		return 434;
	}
	else if (iParam0 == joaat("imperator2"))
	{
		return 435;
	}
	else if (iParam0 == joaat("imperator3"))
	{
		return 436;
	}
	else if (iParam0 == joaat("zr380"))
	{
		return 437;
	}
	else if (iParam0 == joaat("zr3802"))
	{
		return 438;
	}
	else if (iParam0 == joaat("zr3803"))
	{
		return 439;
	}
	else if (iParam0 == joaat("impaler"))
	{
		return 440;
	}
	else if (iParam0 == joaat("taxi"))
	{
		return 450;
	}
	else if (iParam0 == joaat("bulldozer"))
	{
		return 451;
	}
	else if (iParam0 == joaat("speedo2"))
	{
		return 452;
	}
	else if (iParam0 == joaat("trash2"))
	{
		return 453;
	}
	else if (iParam0 == joaat("barracks2"))
	{
		return 454;
	}
	else if (iParam0 == joaat("mixer"))
	{
		return 455;
	}
	else if (iParam0 == joaat("dune2"))
	{
		return 456;
	}
	else if (iParam0 == joaat("tractor"))
	{
		return 457;
	}
	else if (iParam0 == joaat("blista3"))
	{
		return 458;
	}
	else if (iParam0 == joaat("vamos"))
	{
		return 441;
	}
	else if (iParam0 == joaat("tulip"))
	{
		return 442;
	}
	else if (iParam0 == joaat("deveste"))
	{
		return 443;
	}
	else if (iParam0 == joaat("schlagen"))
	{
		return 444;
	}
	else if (iParam0 == joaat("toros"))
	{
		return 445;
	}
	else if (iParam0 == joaat("deviant"))
	{
		return 446;
	}
	else if (iParam0 == joaat("clique"))
	{
		return 447;
	}
	else if (iParam0 == joaat("italigto"))
	{
		return 448;
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		return 449;
	}
	else if (iParam0 == joaat("thrax"))
	{
		return 459;
	}
	else if (iParam0 == joaat("drafter"))
	{
		return 460;
	}
	else if (iParam0 == joaat("locust"))
	{
		return 461;
	}
	else if (iParam0 == joaat("novak"))
	{
		return 462;
	}
	else if (iParam0 == joaat("zorrusso"))
	{
		return 463;
	}
	else if (iParam0 == joaat("gauntlet3"))
	{
		return 464;
	}
	else if (iParam0 == joaat("issi7"))
	{
		return 465;
	}
	else if (iParam0 == joaat("zion3"))
	{
		return 466;
	}
	else if (iParam0 == joaat("nebula"))
	{
		return 467;
	}
	else if (iParam0 == joaat("hellion"))
	{
		return 468;
	}
	else if (iParam0 == joaat("dynasty"))
	{
		return 469;
	}
	else if (iParam0 == joaat("rrocket"))
	{
		return 470;
	}
	else if (iParam0 == joaat("peyote2"))
	{
		return 471;
	}
	else if (iParam0 == joaat("gauntlet4"))
	{
		return 472;
	}
	else if (iParam0 == joaat("caracara2"))
	{
		return 473;
	}
	else if (iParam0 == joaat("jugular"))
	{
		return 474;
	}
	else if (iParam0 == joaat("s80"))
	{
		return 475;
	}
	else if (iParam0 == joaat("krieger"))
	{
		return 476;
	}
	else if (iParam0 == joaat("emerus"))
	{
		return 477;
	}
	else if (iParam0 == joaat("neo"))
	{
		return 478;
	}
	else if (iParam0 == joaat("paragon"))
	{
		return 479;
	}
	else if (iParam0 == joaat("firetruk"))
	{
		return 480;
	}
	else if (iParam0 == joaat("burrito2"))
	{
		return 481;
	}
	else if (iParam0 == joaat("boxville"))
	{
		return 482;
	}
	else if (iParam0 == joaat("stockade"))
	{
		return 483;
	}
	else if (iParam0 == joaat("lguard"))
	{
		return 484;
	}
	else if (iParam0 == joaat("blazer2"))
	{
		return 485;
	}
	else if (iParam0 == joaat("jb7002"))
	{
		return 488;
	}
	else if (iParam0 == joaat("zhaba"))
	{
		return 486;
	}
	else if (iParam0 == joaat("minitank"))
	{
		return 487;
	}
	else if (iParam0 == joaat("stryder"))
	{
		return 489;
	}
	else if (iParam0 == joaat("vstr"))
	{
		return 490;
	}
	else if (iParam0 == joaat("formula"))
	{
		return 491;
	}
	else if (iParam0 == joaat("imorgon"))
	{
		return 492;
	}
	else if (iParam0 == joaat("formula2"))
	{
		return 493;
	}
	else if (iParam0 == joaat("furia"))
	{
		return 494;
	}
	else if (iParam0 == joaat("rebla"))
	{
		return 495;
	}
	else if (iParam0 == joaat("vagrant"))
	{
		return 496;
	}
	else if (iParam0 == joaat("retinue2"))
	{
		return 497;
	}
	else if (iParam0 == joaat("yosemite2"))
	{
		return 498;
	}
	else if (iParam0 == joaat("komoda"))
	{
		return 499;
	}
	else if (iParam0 == joaat("sultan2"))
	{
		return 500;
	}
	else if (iParam0 == joaat("sugoi"))
	{
		return 501;
	}
	else if (iParam0 == joaat("everon"))
	{
		return 502;
	}
	else if (iParam0 == joaat("asbo"))
	{
		return 503;
	}
	else if (iParam0 == joaat("kanjo"))
	{
		return 504;
	}
	else if (iParam0 == joaat("outlaw"))
	{
		return 505;
	}
	else if (iParam0 == joaat("club"))
	{
		return 506;
	}
	else if (iParam0 == joaat("dukes3"))
	{
		return 507;
	}
	else if (iParam0 == joaat("yosemite3"))
	{
		return 508;
	}
	else if (iParam0 == joaat("penumbra2"))
	{
		return 509;
	}
	else if (iParam0 == joaat("landstalker2"))
	{
		return 510;
	}
	else if (iParam0 == joaat("seminole2"))
	{
		return 511;
	}
	else if (iParam0 == joaat("tigon"))
	{
		return 512;
	}
	else if (iParam0 == joaat("openwheel1"))
	{
		return 513;
	}
	else if (iParam0 == joaat("openwheel2"))
	{
		return 514;
	}
	else if (iParam0 == joaat("coquette4"))
	{
		return 515;
	}
	else if (iParam0 == joaat("peyote"))
	{
		return 517;
	}
	else if (iParam0 == joaat("manana"))
	{
		return 516;
	}
	else if (iParam0 == func_398())
	{
		return 518;
	}
	else if (iParam0 == joaat("italirsx"))
	{
		return 519;
	}
	else if (iParam0 == joaat("slamtruck"))
	{
		return 520;
	}
	else if (iParam0 == joaat("brioso2"))
	{
		return 521;
	}
	else if (iParam0 == joaat("weevil"))
	{
		return 522;
	}
	else if (iParam0 == joaat("alkonost"))
	{
		return 523;
	}
	else if (iParam0 == joaat("annihilator2"))
	{
		return 524;
	}
	else if (iParam0 == joaat("dinghy5"))
	{
		return 525;
	}
	else if (iParam0 == joaat("manchez2"))
	{
		return 526;
	}
	else if (iParam0 == joaat("patrolboat"))
	{
		return 527;
	}
	else if (iParam0 == joaat("squaddie"))
	{
		return 528;
	}
	else if (iParam0 == joaat("toreador"))
	{
		return 529;
	}
	else if (iParam0 == joaat("verus"))
	{
		return 530;
	}
	else if (iParam0 == joaat("vetir"))
	{
		return 531;
	}
	else if (iParam0 == joaat("winky"))
	{
		return 532;
	}
	else if (iParam0 == joaat("longfin"))
	{
		return 533;
	}
	else if (iParam0 == joaat("veto"))
	{
		return 534;
	}
	else if (iParam0 == joaat("veto2"))
	{
		return 535;
	}
	else if (iParam0 == joaat("calico"))
	{
		return 536;
	}
	else if (iParam0 == joaat("comet6"))
	{
		return 537;
	}
	else if (iParam0 == joaat("cypher"))
	{
		return 538;
	}
	else if (iParam0 == joaat("dominator7"))
	{
		return 539;
	}
	else if (iParam0 == joaat("jester4"))
	{
		return 540;
	}
	else if (iParam0 == joaat("remus"))
	{
		return 541;
	}
	else if (iParam0 == joaat("vectre"))
	{
		return 542;
	}
	else if (iParam0 == joaat("zr350"))
	{
		return 543;
	}
	else if (iParam0 == joaat("warrener2"))
	{
		return 544;
	}
	else if (iParam0 == joaat("rt3000"))
	{
		return 545;
	}
	else if (iParam0 == joaat("futo2"))
	{
		return 546;
	}
	else if (iParam0 == joaat("sultan3"))
	{
		return 547;
	}
	else if (iParam0 == joaat("tailgater2"))
	{
		return 548;
	}
	else if (iParam0 == joaat("dominator8"))
	{
		return 549;
	}
	else if (iParam0 == joaat("euros"))
	{
		return 550;
	}
	else if (iParam0 == joaat("growler"))
	{
		return 551;
	}
	else if (iParam0 == joaat("previon"))
	{
		return 552;
	}
	else if (iParam0 == joaat("comet7"))
	{
		return 554;
	}
	else if (iParam0 == joaat("shinobi"))
	{
		return 555;
	}
	else if (iParam0 == joaat("reever"))
	{
		return 556;
	}
	else if (iParam0 == joaat("baller7"))
	{
		return 557;
	}
	else if (iParam0 == joaat("cinquemila"))
	{
		return 558;
	}
	else if (iParam0 == joaat("jubilee"))
	{
		return 559;
	}
	else if (iParam0 == joaat("astron"))
	{
		return 560;
	}
	else if (iParam0 == joaat("deity"))
	{
		return 561;
	}
	else if (iParam0 == joaat("zeno"))
	{
		return 562;
	}
	else if (iParam0 == joaat("champion"))
	{
		return 563;
	}
	else if (iParam0 == joaat("ignus"))
	{
		return 564;
	}
	else if (iParam0 == joaat("buffalo4"))
	{
		return 565;
	}
	else if (iParam0 == joaat("granger2"))
	{
		return 566;
	}
	else if (iParam0 == joaat("iwagen"))
	{
		return 567;
	}
	else if (iParam0 == joaat("patriot3"))
	{
		return 568;
	}
	else if (iParam0 == joaat("TENF"))
	{
		return 569;
	}
	return -1;
}

int func_710(int iParam0)//Position - 0x3A22C
{
	if (func_363(iParam0))
	{
		return 1;
	}
	if ((((((((((((((((((((iParam0 == joaat("blazer5") || iParam0 == joaat("boxville5")) || iParam0 == joaat("dune5")) || iParam0 == joaat("phantom2")) || iParam0 == joaat("ruiner2")) || iParam0 == joaat("technical2")) || iParam0 == joaat("voltic2")) || iParam0 == joaat("wastelander")) || iParam0 == joaat("trailersmall2")) || iParam0 == joaat("technical3")) || iParam0 == joaat("insurgent3")) || iParam0 == joaat("khanjali")) || iParam0 == joaat("chernobog")) || iParam0 == joaat("riot2")) || iParam0 == joaat("thruster")) || iParam0 == joaat("stromberg")) || iParam0 == joaat("deluxo")) || iParam0 == joaat("speedo4")) || iParam0 == joaat("mule4")) || iParam0 == joaat("pounder2")) || iParam0 == joaat("oppressor2"))
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("airbus"):
		case joaat("airtug"):
		case joaat("ambulance"):
		case joaat("annihilator"):
		case joaat("armytanker"):
		case joaat("armytrailer"):
		case joaat("asea2"):
		case joaat("baletrailer"):
		case joaat("barracks"):
		case joaat("barracks2"):
		case joaat("barracks3"):
		case joaat("benson"):
		case joaat("besra"):
		case joaat("biff"):
		case joaat("blimp"):
		case joaat("blimp2"):
		case joaat("boattrailer"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("boxville4"):
		case joaat("bulldozer"):
		case joaat("burrito"):
		case joaat("burrito3"):
		case joaat("burrito4"):
		case joaat("burrito5"):
		case joaat("bus"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("caddy"):
		case joaat("caddy2"):
		case joaat("camper"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("cargobob3"):
		case joaat("cargoplane"):
		case joaat("coach"):
		case joaat("crusader"):
		case joaat("cuban800"):
		case joaat("cutter"):
		case joaat("dilettante2"):
		case joaat("dinghy"):
		case joaat("dinghy2"):
		case joaat("dinghy3"):
		case joaat("docktrailer"):
		case joaat("docktug"):
		case joaat("dodo"):
		case joaat("dump"):
		case joaat("dune2"):
		case joaat("duster"):
		case joaat("emperor3"):
		case joaat("fbi"):
		case joaat("fbi2"):
		case joaat("firetruk"):
		case joaat("fixter"):
		case joaat("flatbed"):
		case joaat("forklift"):
		case joaat("freight"):
		case joaat("freightcar"):
		case joaat("freightcont1"):
		case joaat("freightcont2"):
		case joaat("freightgrain"):
		case joaat("frogger"):
		case joaat("frogger2"):
		case joaat("gburrito"):
		case joaat("graintrailer"):
		case joaat("handler"):
		case joaat("hauler"):
		case joaat("hydra"):
		case joaat("insurgent"):
		case joaat("jet"):
		case joaat("jetmax"):
		case joaat("journey"):
		case joaat("lazer"):
		case joaat("limo2"):
		case joaat("luxor"):
		case joaat("luxor2"):
		case joaat("mammatus"):
		case joaat("marshall"):
		case joaat("marquis"):
		case joaat("maverick"):
		case joaat("mesa2"):
		case joaat("metrotrain"):
		case joaat("monster"):
		case joaat("miljet"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("mower"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("mule3"):
		case joaat("packer"):
		case joaat("pbus"):
		case joaat("phantom"):
		case joaat("police"):
		case joaat("policeb"):
		case joaat("policet"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("polmav"):
		case joaat("pony"):
		case joaat("pony2"):
		case joaat("pounder"):
		case joaat("pranger"):
		case joaat("predator"):
		case joaat("proptrailer"):
		case joaat("raketrailer"):
		case joaat("rancherxl2"):
		case joaat("rentalbus"):
		case joaat("rhino"):
		case joaat("riot"):
		case joaat("ripley"):
		case joaat("rubble"):
		case joaat("rumpo2"):
		case joaat("sadler2"):
		case joaat("savage"):
		case joaat("scrap"):
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("shamal"):
		case joaat("sheriff"):
		case joaat("sheriff2"):
		case joaat("skylift"):
		case joaat("speeder"):
		case joaat("speedo2"):
		case joaat("squalo"):
		case joaat("stockade"):
		case joaat("stockade3"):
		case joaat("stretch"):
		case joaat("stunt"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("suntrap"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("taco"):
		case joaat("tanker"):
		case joaat("tanker2"):
		case joaat("tankercar"):
		case joaat("taxi"):
		case joaat("technical"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("tiptruck"):
		case joaat("tiptruck2"):
		case joaat("titan"):
		case joaat("toro"):
		case joaat("tourbus"):
		case joaat("tr2"):
		case joaat("tr3"):
		case joaat("tr4"):
		case joaat("tractor"):
		case joaat("tractor2"):
		case joaat("tractor3"):
		case joaat("trailerlogs"):
		case joaat("trailers"):
		case joaat("trailers2"):
		case joaat("trailers3"):
		case joaat("trailersmall"):
		case joaat("trash"):
		case joaat("trash2"):
		case joaat("trflat"):
		case joaat("tropic"):
		case joaat("tvtrailer"):
		case joaat("utillitruck"):
		case joaat("utillitruck2"):
		case joaat("utillitruck3"):
		case joaat("valkyrie"):
		case joaat("velum"):
		case joaat("velum2"):
		case joaat("vestra"):
		case joaat("cargobob4"):
		case joaat("dinghy4"):
		case joaat("seashark3"):
		case joaat("speeder2"):
		case joaat("toro2"):
		case joaat("tropic2"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("valkyrie2"):
		case joaat("dune4"):
		case joaat("ruiner3"):
		case joaat("brickade"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("youga4"):
		case joaat("vetir"):
		case joaat("longfin"):
		case joaat("patrolboat"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("mule5"):
			return 0;
		
		default:
	}
	if (((!VEHICLE::IS_THIS_MODEL_A_CAR(iParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_QUADBIKE(iParam0)) && !VEHICLE::IS_THIS_MODEL_A_BICYCLE(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_711(int iParam0)//Position - 0x3A83A
{
	switch (iParam0)
	{
		case 0:
			return joaat("dodo");
		
		case 1:
			return joaat("turismor");
		
		case 2:
			return joaat("toros");
		
		case 3:
			return joaat("monroe");
		
		case 4:
			return joaat("velum");
		
		case 5:
			return joaat("furoregt");
		
		case 6:
			return joaat("infernus");
		
		case 7:
			return joaat("infernus2");
		
		case 8:
			return joaat("ruston");
		
		case 9:
			return joaat("marquis");
		
		case 10:
			return joaat("defiler");
		
		case 11:
			return joaat("pigalle");
		
		case 12:
			return joaat("massacro2");
		
		case 13:
			return joaat("tornado6");
		
		case 14:
			return joaat("tampa");
		
		case 15:
			return joaat("issi3");
		
		case 16:
			return joaat("jb700");
		
		case 17:
			return joaat("jester2");
		
		case 18:
			return joaat("kamacho");
		
		case 19:
			return joaat("fagaloa");
		
		case 20:
			return joaat("impaler");
		
		case 21:
			return joaat("dominator2");
		
		case 22:
			return joaat("mammatus");
		
		case 23:
			return joaat("jetmax");
		
		case 24:
			return joaat("stalion2");
		
		case 25:
			return joaat("massacro");
		
		case 26:
			return joaat("esskey");
		
		case 27:
			return joaat("cognoscenti");
		
		case 28:
			return joaat("xls");
		
		case 29:
			return joaat("superd");
		
		case 30:
			return joaat("stunt");
		
		case 31:
			return joaat("cuban800");
		
		case 32:
			return joaat("vacca");
		
		case 33:
			return joaat("jester");
		
		case 34:
			return joaat("gauntlet2");
		
		case 35:
			return joaat("exemplar");
		
		case 36:
			return joaat("slamvan2");
		
		case 37:
			return joaat("glendale");
		
		case 38:
			return joaat("squalo");
		
		case 39:
			return joaat("carbonizzare");
		
		case 40:
			return joaat("virgo");
		
		case 41:
			return joaat("cogcabrio");
		
		case 42:
			return joaat("dinghy3");
		
		case 43:
			return joaat("blade");
		
		case 44:
			return joaat("bullet");
		
		case 45:
			return joaat("brioso");
		
		case 46:
			return joaat("voltic");
		
		case 47:
			return joaat("voltic2");
		
		case 48:
			return joaat("alpha");
		
		case 49:
			return joaat("feltzer2");
		
		case 50:
			return joaat("cheburek");
		
		case 51:
			return joaat("rapidgt2");
		
		case 52:
			return joaat("rhapsody");
		
		case 53:
			return joaat("coquette");
		
		case 54:
			return joaat("coquette2");
		
		case 55:
			return joaat("rapidgt");
		
		case 56:
			return joaat("ninef2");
		
		case 57:
			return joaat("kuruma");
		
		case 58:
			return joaat("ninef");
		
		case 59:
			return joaat("schafter3");
		
		case 60:
			return joaat("surano");
		
		case 61:
			return joaat("banshee");
		
		case 62:
			return joaat("khamelion");
		
		case 63:
			return joaat("nightblade");
		
		case 64:
			return joaat("chino");
		
		case 65:
			return joaat("diablous");
		
		case 66:
			return joaat("virgo3");
		
		case 67:
			return joaat("fcr");
		
		case 68:
			return joaat("comet2");
		
		case 69:
			return joaat("zombiea");
		
		case 70:
			return joaat("felon2");
		
		case 71:
			return joaat("bf400");
		
		case 72:
			return joaat("felon");
		
		case 73:
			return joaat("baller2");
		
		case 74:
			return joaat("hotknife");
		
		case 75:
			return joaat("mesa3");
		
		case 76:
			return joaat("panto");
		
		case 77:
			return joaat("hakuchou");
		
		case 78:
			return joaat("blazer4");
		
		case 79:
			return joaat("f620");
		
		case 80:
			return joaat("oracle2");
		
		case 81:
			return joaat("bifta");
		
		case 82:
			return joaat("stalion");
		
		case 83:
			return joaat("blazer3");
		
		case 84:
			return joaat("manchez");
		
		case 85:
			return joaat("schafter2");
		
		case 86:
			return joaat("zion2");
		
		case 87:
			return joaat("dukes");
		
		case 88:
			return joaat("jackal");
		
		case 89:
			return joaat("serrano");
		
		case 90:
			return joaat("patriot");
		
		case 91:
			return joaat("fq2");
		
		case 92:
			return joaat("slamvan");
		
		case 93:
			return joaat("enduro");
		
		case 94:
			return joaat("faggio");
		
		case 95:
			return joaat("blista2");
		
		case 96:
			return joaat("carbonrs");
		
		case 97:
			return joaat("kalahari");
		
		case 98:
			return joaat("ratloader2");
		
		case 99:
			return joaat("faction");
		
		case 100:
			return joaat("buffalo");
		
		case 101:
			return joaat("dominator");
		
		case 102:
			return joaat("moonbeam");
		
		case 103:
			return joaat("gauntlet");
		
		case 104:
			return joaat("tornado");
		
		case 105:
			return joaat("buccaneer");
		
		case 106:
			return joaat("prairie");
		
		case 107:
			return joaat("penumbra");
		
		case 108:
			return joaat("fugitive");
		
		case 109:
			return joaat("issi2");
		
		case 110:
			return joaat("seashark");
		
		case 111:
			return joaat("intruder");
		
		case 112:
			return joaat("bagger");
		
		case 113:
			return joaat("bfinjection");
		
		case 114:
			return joaat("hexer");
		
		case 115:
			return joaat("washington");
		
		case 116:
			return joaat("bati");
		
		case 117:
			return joaat("bati2");
		
		case 118:
			return joaat("sabregt");
		
		case 119:
			return joaat("sultan");
		
		case 120:
			return joaat("nemesis");
		
		case 121:
			return joaat("double");
		
		case 122:
			return joaat("tribike");
		
		case 123:
			return joaat("tribike2");
		
		case 124:
			return joaat("tribike3");
		
		case 125:
			return joaat("ruffian");
		
		case 126:
			return joaat("ruiner");
		
		case 127:
			return joaat("picador");
		
		case 128:
			return joaat("akuma");
		
		case 129:
			return joaat("pcj");
		
		case 130:
			return joaat("primo");
		
		case 131:
			return joaat("futo");
		
		case 132:
			return joaat("blazer");
		
		case 133:
			return joaat("sanchez2");
		
		case 134:
			return joaat("sanchez");
		
		case 135:
			return joaat("voodoo2");
		
		case 136:
			return joaat("faggio2");
		
		case 137:
			return joaat("scorcher");
		
		case 138:
			return joaat("cruiser");
		
		case 139:
			return joaat("bmx");
		
		case 140:
			return joaat("minivan");
		
		default:
	}
	return 0;
}

int func_712()//Position - 0x3AFFE
{
	int iVar0[141];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 141)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_713(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 141)
	{
		if (iVar3 <= func_713(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_713(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_713(int iParam0)//Position - 0x3B080
{
	switch (iParam0)
	{
		case 0:
			if (func_714(joaat("dodo"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851;
			}
			break;
		
		case 1:
		case 2:
		case 3:
			return Global_262145.f_26851;
			break;
		
		case 4:
			if (func_714(joaat("velum"), 0))
			{
				return 0;
			}
			break;
		
		case 5:
		case 6:
		case 7:
		case 8:
			return Global_262145.f_26851;
			break;
		
		case 9:
			if (func_714(joaat("marquis"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851;
			}
			break;
		
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return Global_262145.f_26851;
			break;
		
		case 22:
			if (func_714(joaat("mammatus"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851;
			}
			break;
		
		case 23:
			if (func_714(joaat("jetmax"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851;
			}
			break;
		
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
			return Global_262145.f_26851;
			break;
		
		case 30:
			if (func_714(joaat("stunt"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851;
			}
			break;
		
		case 31:
			if (func_714(joaat("cuban800"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851;
			}
			break;
		
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
			return Global_262145.f_26851;
			break;
		
		case 37:
			return Global_262145.f_26852;
			break;
		
		case 38:
			if (func_714(joaat("squalo"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26852;
			}
			break;
		
		case 39:
		case 40:
		case 41:
			return Global_262145.f_26852;
			break;
		
		case 42:
			if (func_714(joaat("squalo"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26852;
			}
			break;
		
		case 43:
		case 44:
		case 45:
			return Global_262145.f_26852;
			break;
		
		case 46:
			return Global_262145.f_26853;
			break;
		
		case 47:
			if (func_543(joaat("voltic2"), -1))
			{
				return Global_262145.f_26853;
			}
			else
			{
				return 0;
			}
			break;
		
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
			return Global_262145.f_26852;
			break;
		
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
			return Global_262145.f_26853;
			break;
		
		case 110:
			if (func_714(joaat("seashark"), 0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26853;
			}
			break;
		
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
		case 119:
		case 120:
		case 121:
			return Global_262145.f_26853;
			break;
		
		case 122:
			if (func_543(joaat("tribike"), -1))
			{
				return Global_262145.f_26853;
			}
			else
			{
				return 0;
			}
			break;
		
		case 123:
			if (func_543(joaat("tribike2"), -1))
			{
				return Global_262145.f_26853;
			}
			else
			{
				return 0;
			}
			break;
		
		case 124:
			if (func_543(joaat("tribike3"), -1))
			{
				return Global_262145.f_26853;
			}
			else
			{
				return 0;
			}
			break;
		
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
			return Global_262145.f_26853;
			break;
		
		case 137:
			if (func_543(joaat("scorcher"), -1))
			{
				return Global_262145.f_26853;
			}
			else
			{
				return 0;
			}
			break;
		
		case 138:
			if (func_543(joaat("cruiser"), -1))
			{
				return Global_262145.f_26853;
			}
			else
			{
				return 0;
			}
			break;
		
		case 139:
			if (func_543(joaat("bmx"), -1))
			{
				return Global_262145.f_26853;
			}
			else
			{
				return 0;
			}
			break;
		
		case 140:
			return Global_262145.f_26853;
			break;
	}
	return 0;
}

int func_714(int iParam0, int iParam1)//Position - 0x3B6B8
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_709(iParam0);
	iVar1 = func_662(iVar0, iParam1);
	if (iVar1 != -1)
	{
		return func_659(iVar1);
	}
	return 0;
}

int func_715()//Position - 0x3B6E2
{
	int iVar0[7];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_716(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 7)
	{
		if (iVar3 <= func_716(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_716(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_716(int iParam0)//Position - 0x3B761
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26844;
		
		case 1:
			return Global_262145.f_26845;
		
		case 2:
			return Global_262145.f_26846;
		
		case 3:
			return Global_262145.f_26847;
		
		case 4:
			return Global_262145.f_26848;
		
		case 5:
			return Global_262145.f_26849;
		
		case 6:
			return Global_262145.f_26850;
		
		default:
	}
	return 0;
}

int func_717(var uParam0, char* sParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x3B7E1
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (iParam3 != -1 && bParam4)
	{
	}
	if (iParam3 != -1 && !bParam4)
	{
		iVar0 = func_746(iParam3);
	}
	else if (iParam3 == -1)
	{
		iVar1 = func_744();
		iVar0 = func_743(iVar1);
	}
	if (iVar0 > 0)
	{
		if (bParam4)
		{
			StringCopy(sParam1, func_742(), 64);
		}
		if (func_718(iVar0, 3, uParam2, 4, -1))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

int func_718(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4)//Position - 0x3B859
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<7> Var5;
	
	if (iParam0 <= 0)
	{
	}
	else if (!func_741(iParam1))
	{
	}
	else
	{
		iVar0 = func_160();
		iVar1 = (Global_262145.f_27174 - iVar0);
		iVar2 = 0;
		if (iParam1 == 0)
		{
			iVar3 = func_739();
			if (iVar1 > iVar3)
			{
				iVar1 = iVar3;
			}
		}
		if (iParam0 > iVar1)
		{
			iVar2 = (iVar1 + iVar0);
		}
		else
		{
			iVar2 = (iParam0 + iVar0);
		}
		if (func_738(uParam2, iParam1, (iVar2 - iVar0)))
		{
			iVar4 = (func_160() - Global_1966106);
			func_737(iVar4, 1);
			func_735();
			func_733();
			Global_1966106 = (Global_1966106 + iVar4);
			if (iParam1 == 0)
			{
				func_727(iVar4);
				Global_2725354 = 1;
			}
			else if (iParam1 == 3)
			{
				func_722(iVar4);
				if (iVar4 >= Global_262145.f_27182)
				{
					Global_2725353 = 1;
				}
				else if (iVar4 >= Global_262145.f_27181)
				{
					Global_2725354 = 1;
				}
			}
			Var5.f_0 = func_721(iParam1);
			Var5.f_1 = func_720(iParam1, iParam3, iParam4);
			if (func_719(iParam1))
			{
				Var5.f_2 = iVar4;
			}
			else
			{
				Var5.f_2 = 0;
			}
			Var5.f_3 = iVar4;
			Var5.f_4 = iParam1;
			Var5.f_5 = (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) + MONEY::NETWORK_GET_VC_BANK_BALANCE());
			Var5.f_6 = Global_1966106;
			STATS::_PLAYSTATS_CASINO_CHIP(&Var5);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_719(int iParam0)//Position - 0x3B992
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 10:
			return 1;
			break;
	}
	return 0;
}

int func_720(int iParam0, int iParam1, int iParam2)//Position - 0x3B9BB
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 0:
				if (iParam2 > -1)
				{
					iVar0 = (19 + iParam2);
				}
				else
				{
					iVar0 = 19;
				}
				break;
			
			case 1:
				iVar0 = 21;
				break;
			
			case 4:
				iVar0 = 22;
				break;
			
			case 5:
				iVar0 = 23;
				break;
			
			case 6:
				iVar0 = 24;
				break;
			
			case 7:
				iVar0 = 25;
				break;
			
			case 9:
				iVar0 = 26;
				break;
			
			case 10:
				if (iParam2 > -1)
				{
					iVar0 = (27 + iParam2);
				}
				else
				{
					iVar0 = 27;
				}
				break;
			
			case 11:
				iVar0 = 29;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				if (iParam0 == 2)
				{
					iVar0 = 1;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 2;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 3;
				}
				break;
			
			case 1:
				if (iParam0 == 2)
				{
					iVar0 = 4;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 5;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 6;
				}
				break;
			
			case 2:
				if (iParam0 == 2)
				{
					iVar0 = 7;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 8;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 9;
				}
				break;
			
			case 3:
				if (iParam0 == 2)
				{
					iVar0 = 10;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 11;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 12;
				}
				break;
			
			case 4:
				if (iParam0 == 2)
				{
					iVar0 = 13;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 14;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 15;
				}
				break;
			
			case 5:
				if (iParam0 == 2)
				{
					iVar0 = 16;
				}
				else if (iParam0 == 3)
				{
					iVar0 = 17;
				}
				else if (iParam0 == 8)
				{
					iVar0 = 18;
				}
				break;
			}
	}
	return iVar0;
}

int func_721(int iParam0)//Position - 0x3BB7E
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -2043662707;
			break;
		
		case 1:
			iVar0 = -1612659516;
			break;
		
		case 2:
			iVar0 = -1304782539;
			break;
		
		case 3:
			iVar0 = 1196301501;
			break;
		
		case 4:
			iVar0 = -1964607937;
			break;
		
		case 5:
			iVar0 = -2125268726;
			break;
		
		case 6:
			iVar0 = 1138851024;
			break;
		
		case 11:
			iVar0 = 1138851024;
			break;
		
		case 7:
			iVar0 = 1848798713;
			break;
		
		case 8:
			iVar0 = 1196301501;
			break;
		
		case 9:
			iVar0 = -1297103179;
			break;
		
		case 10:
			iVar0 = 1754365518;
			break;
	}
	return iVar0;
}

void func_722(int iParam0)//Position - 0x3BC52
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_726();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_725();
	if (iVar0 == 0)
	{
		func_724();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27176)
	{
		func_723();
		iVar2 = 0;
	}
	if ((iParam0 + iVar2) >= Global_262145.f_27178)
	{
		func_138(joaat("mpply_casino_chips_won_gd"), Global_262145.f_27178);
		func_723();
		Global_2725354 = 1;
	}
	else
	{
		func_138(joaat("mpply_casino_chips_won_gd"), (iVar2 + iParam0));
	}
}

void func_723()//Position - 0x3BCCB
{
	func_724();
}

void func_724()//Position - 0x3BCD7
{
	func_138(joaat("mpply_casino_chips_wontim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_725()//Position - 0x3BCEC
{
	return func_25(joaat("mpply_casino_chips_won_gd"));
}

int func_726()//Position - 0x3BCFD
{
	return func_25(joaat("mpply_casino_chips_wontim"));
}

void func_727(int iParam0)//Position - 0x3BD0E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_732();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = func_731();
	if (iVar0 == 0)
	{
		func_730();
	}
	else if ((iVar0 - iVar1) >= Global_262145.f_27175)
	{
		func_729();
		iVar2 = 0;
	}
	if (iParam0 + iVar2) > func_728()
	{
		func_138(joaat("mpply_casino_chips_pur_gd"), func_728());
		func_729();
	}
	else
	{
		func_138(joaat("mpply_casino_chips_pur_gd"), (iVar2 + iParam0));
	}
}

int func_728()//Position - 0x3BD7C
{
	if (func_166(PLAYER::PLAYER_ID()))
	{
		return Global_262145.f_26970;
	}
	return Global_262145.f_26969;
}

void func_729()//Position - 0x3BDA0
{
	func_730();
}

void func_730()//Position - 0x3BDAC
{
	func_138(joaat("mpply_casino_chips_purtim"), NETWORK::GET_CLOUD_TIME_AS_INT());
}

int func_731()//Position - 0x3BDC1
{
	return func_25(joaat("mpply_casino_chips_pur_gd"));
}

int func_732()//Position - 0x3BDD2
{
	return func_25(joaat("mpply_casino_chips_purtim"));
}

void func_733()//Position - 0x3BDE3
{
	if (BitTest(Global_1966179, 6))
	{
		MISC::SET_BIT(&Global_1966179, 9);
		func_734(&Global_1966182, 0, 0);
	}
}

void func_734(var uParam0, bool bParam1, bool bParam2)//Position - 0x3BE0B
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_735()//Position - 0x3BE48
{
	if (func_736())
	{
		MISC::SET_BIT(&Global_1966179, 1);
	}
}

bool func_736()//Position - 0x3BE63
{
	return (BitTest(Global_1966179, 6) || BitTest(Global_1966179, 5));
}

void func_737(int iParam0, int iParam1)//Position - 0x3BE7D
{
	if (iParam0 < 0)
	{
		return;
	}
	MISC::SET_BIT(&Global_1966179, 6);
	Global_1966180 = iParam0;
	Global_1966181 = iParam1;
}

bool func_738(var uParam0, int iParam1, int iParam2)//Position - 0x3BEA3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = iParam2;
	iVar1 = 1;
	bVar2 = func_719(iParam1);
	if (!bVar2)
	{
		iVar0 = 0;
		iVar1 = 0;
	}
	if (*uParam0 == 3 || *uParam0 == 2)
	{
		*uParam0 = 0;
	}
	if (func_111())
	{
		if (*uParam0 == 0)
		{
			if (func_112() != -1)
			{
				return 0;
			}
			iVar3 = 657241867;
			iVar4 = func_721(iParam1);
			iVar5 = -22148635;
			if (func_741(iParam1))
			{
				iVar5 = -126744038;
			}
			if (func_147(78225582, 1950528552, iVar3, iVar5, iParam2, iVar1, 0, 4, 0, 3))
			{
				if (func_147(78225582, 1845931212, iVar4, iVar5, 1, 0, 0, 4, 0, 3))
				{
					if (func_142())
					{
						*uParam0 = 1;
					}
					else
					{
						*uParam0 = 3;
					}
				}
				else
				{
					*uParam0 = 3;
				}
			}
			else
			{
				*uParam0 = 3;
			}
		}
		else if (*uParam0 == 1)
		{
			if (func_141(func_112()))
			{
				if (func_140(func_112()) == 2)
				{
					NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_113(func_112()));
					if (func_741(iParam1))
					{
						MONEY::_NETWORK_CASINO_PURCHASE_CHIPS(iVar0, iParam2);
					}
					else
					{
						MONEY::_NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
					}
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
				func_107(func_112());
			}
		}
	}
	else if (iVar0 > 0 || MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
	{
		if (func_741(iParam1))
		{
			MONEY::_NETWORK_CASINO_PURCHASE_CHIPS(iVar0, iParam2);
		}
		else
		{
			MONEY::_NETWORK_CASINO_SELL_CHIPS(iVar0, iParam2);
		}
		*uParam0 = 2;
	}
	else
	{
		*uParam0 = 3;
	}
	return *uParam0 != 1;
}

int func_739()//Position - 0x3C024
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = (func_728() - func_731());
	iVar1 = (Global_262145.f_27174 - func_160());
	iVar2 = func_740();
	if (iVar0 > iVar1)
	{
		iVar0 = iVar1;
	}
	if (iVar0 > iVar2)
	{
		iVar0 = iVar2;
	}
	return iVar0;
}

int func_740()//Position - 0x3C063
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_728();
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (MONEY::_NETWORK_CASINO_CAN_PURCHASE_CHIPS_WITH_PVC_2())
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar1 = (MONEY::NETWORK_GET_VC_BANK_BALANCE() + MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1));
		}
	}
	else if (MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 1))
	{
		iVar1 = iVar0;
	}
	else
	{
		iVar1 = MONEY::NETWORK_GET_EVC_BALANCE();
	}
	return iVar1;
}

int func_741(int iParam0)//Position - 0x3C0C3
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 10)
	{
		return 0;
	}
	return 1;
}

char* func_742()//Position - 0x3C0EC
{
	return "CAS_LW_MCI1";
}

int func_743(int iParam0)//Position - 0x3C0F8
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_27196;
		
		case 1:
			return Global_262145.f_27197;
		
		case 2:
			return Global_262145.f_27194;
		
		case 3:
			return Global_262145.f_27195;
		
		case 4:
			return Global_262145.f_27192;
		
		case 5:
			return Global_262145.f_27193;
		
		default:
	}
	return 0;
}

int func_744()//Position - 0x3C168
{
	int iVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_745(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar3 <= func_745(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_745(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_745(int iParam0)//Position - 0x3C1E7
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26853;
		
		case 1:
			return Global_262145.f_26853;
		
		case 2:
			return Global_262145.f_26852;
		
		case 3:
			return Global_262145.f_26852;
		
		case 4:
			return Global_262145.f_26851;
		
		case 5:
			return Global_262145.f_26851;
		
		default:
	}
	return 0;
}

int func_746(int iParam0)//Position - 0x3C257
{
	switch (iParam0)
	{
		case 13:
			return 10000;
		
		case 14:
			return 15000;
		
		case 15:
			return 20000;
		
		case 16:
			return 25000;
		
		default:
	}
	return 0;
}

int func_747(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x3C297
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_759(iParam2);
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_757();
		iVar0 = func_756(iVar1);
	}
	if (iVar0 > 0)
	{
		if (func_111())
		{
			func_752(1261538664, iVar0, &uVar2, 0, 0, 0);
			if (bParam3)
			{
				StringCopy(sParam1, func_751(), 64);
			}
			*uParam0 = iVar0;
			return 1;
		}
		else
		{
			func_748(iVar0, 0);
			MONEY::_NETWORK_EARN_FROM_CASINO_AWARD(iVar0, 707098906);
			if (bParam3)
			{
				StringCopy(sParam1, func_751(), 64);
			}
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

void func_748(int iParam0, int iParam1)//Position - 0x3C340
{
	func_750(iParam0, 1, 1, 0);
	if (iParam1 == 1)
	{
		func_749(iParam0, 0);
	}
}

void func_749(int iParam0, bool bParam1)//Position - 0x3C35E
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

void func_750(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0x3C36F
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_4 = iVar1;
	Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_3 = (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_205.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_749(iVar1, 0);
	}
}

char* func_751()//Position - 0x3C3F2
{
	return "CAS_LW_MC1";
}

void func_752(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x3C3FE
{
	int iVar0;
	
	if (!func_111())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_753(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_753(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
		case -168319378:
		case 1637817605:
		case 830018386:
		case 1051883823:
		case -2013760296:
		case -1033889004:
			if (iParam1 > 0 || Global_262145.f_28363)
			{
				func_753(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
		case -1029672338:
		case -1503749970:
		case -1843409092:
		case 1669058563:
		case 2102747615:
		case 2030771998:
		case 1708747007:
		case 645293860:
		case -818859193:
		case 300796227:
		case -1999832346:
		case 1058055395:
		case -321151125:
		case 2078731875:
		case 1280785534:
		case -1878824774:
		case 247992227:
		case -229237358:
		case -1123183389:
		case 1814197076:
		case 713955548:
		case -2026544524:
		case -719580138:
		case -163417439:
		case -550417574:
		case 208223429:
		case -1433071892:
		case 761999406:
		case -1101941763:
		case 1748245957:
		case 1036772696:
		case -1384648535:
		case -800037808:
		case -695852120:
		case 77355315:
		case 2097889166:
		case 1707592130:
		case 1628412596:
			func_753(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_753(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x3CC0F
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_111())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_18()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4535607 = 1;
			return 0;
		}
		if (Global_2726699)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4535608 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4534105[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_150(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4534105[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4534105[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4535592 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4535606 = 1;
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4535609 = iParam4;
			Global_4535611 = iParam3;
			Global_4535612 = 1;
			Global_4535610 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_755(1, iParam4);
			Global_4535606 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_754(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_754(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3CDBC
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_124.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_107(iParam0);
	}
}

void func_755(int iParam0, int iParam1)//Position - 0x3CDF4
{
	Global_2727893 = iParam1;
	Global_2727892 = iParam0;
}

int func_756(int iParam0)//Position - 0x3CE08
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_27203;
		
		case 1:
			return Global_262145.f_27204;
		
		case 2:
			return Global_262145.f_27205;
		
		case 3:
			return Global_262145.f_27200;
		
		case 4:
			return Global_262145.f_27201;
		
		case 5:
			return Global_262145.f_27202;
		
		case 6:
			return Global_262145.f_27198;
		
		case 7:
			return Global_262145.f_27199;
		
		default:
	}
	return 0;
}

int func_757()//Position - 0x3CE98
{
	int iVar0[8];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_758(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (iVar3 <= func_758(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_758(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_758(int iParam0)//Position - 0x3CF1A
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26853;
		
		case 1:
			return Global_262145.f_26853;
		
		case 2:
			return Global_262145.f_26853;
		
		case 3:
			return Global_262145.f_26852;
		
		case 4:
			return Global_262145.f_26852;
		
		case 5:
			return Global_262145.f_26852;
		
		case 6:
			return Global_262145.f_26851;
		
		case 7:
			return Global_262145.f_26851;
		
		default:
	}
	return 0;
}

int func_759(int iParam0)//Position - 0x3CFAA
{
	switch (iParam0)
	{
		case 9:
			return 20000;
		
		case 10:
			return 30000;
		
		case 11:
			return 40000;
		
		case 12:
			return 50000;
		
		default:
	}
	return 0;
}

int func_760(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x3CFEC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_767(iParam2);
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_765();
		iVar0 = func_764(iVar1);
	}
	if (iVar0 > 0)
	{
		if (bParam3)
		{
			StringCopy(sParam1, func_763(), 64);
		}
		*uParam0 = iVar0;
		func_762();
		func_190(0, PLAYER::PLAYER_PED_ID(), func_761(iParam2), -1827353931, 1223799452, iVar0, 1, -1, 0, 0, 0);
		return 1;
	}
	return 0;
}

char* func_761(int iParam0)//Position - 0x3D078
{
	switch (iParam0)
	{
		case 4:
			return "LUCKY WHEEL RP2500";
		
		case 5:
			return "LUCKY WHEEL RP5000";
		
		case 6:
			return "LUCKY WHEEL RP7500";
		
		case 7:
			return "LUCKY WHEEL RP10K";
		
		case 8:
			return "LUCKY WHEEL RP15K";
		
		default:
	}
	return "UNKNOWN";
}

void func_762()//Position - 0x3D0CC
{
	Global_2727090 = 1;
}

char* func_763()//Position - 0x3D0D9
{
	return "CAS_LW_MRP1";
}

int func_764(int iParam0)//Position - 0x3D0E5
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_27190;
		
		case 1:
			return Global_262145.f_27191;
		
		case 2:
			return Global_262145.f_27188;
		
		case 3:
			return Global_262145.f_27189;
		
		case 4:
			return Global_262145.f_27186;
		
		case 5:
			return Global_262145.f_27187;
		
		default:
	}
	return 0;
}

int func_765()//Position - 0x3D155
{
	int iVar0[6];
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		iVar0[iVar2] = iVar2;
		iVar1 = (iVar1 + func_766(iVar0[iVar2]));
		iVar2++;
	}
	iVar3 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (iVar3 <= func_766(iVar0[iVar2]))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar3 = (iVar3 - func_766(iVar0[iVar2]));
		}
		iVar2++;
	}
	return -1;
}

int func_766(int iParam0)//Position - 0x3D1D4
{
	switch (iParam0)
	{
		case 0:
			return Global_262145.f_26853;
		
		case 1:
			return Global_262145.f_26853;
		
		case 2:
			return Global_262145.f_26852;
		
		case 3:
			return Global_262145.f_26852;
		
		case 4:
			return Global_262145.f_26851;
		
		case 5:
			return Global_262145.f_26851;
		
		default:
	}
	return 0;
}

int func_767(int iParam0)//Position - 0x3D244
{
	switch (iParam0)
	{
		case 4:
			return 2500;
		
		case 5:
			return 5000;
		
		case 6:
			return 7500;
		
		case 7:
			return 10000;
		
		case 8:
			return 15000;
		
		default:
	}
	return 0;
}

int func_768(char* sParam0, int* iParam1, int iParam2, bool bParam3)//Position - 0x3D290
{
	int iVar0;
	int iVar1;
	
	if (iParam2 != -1 && bParam3)
	{
	}
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_773(bParam3);
		if (iVar0 != -1)
		{
			if (func_772())
			{
				func_185(func_770(MISC::GET_HASH_KEY(func_771(iVar0))), 1, -1);
				StringCopy(sParam0, func_771(iVar0), 64);
				return 1;
			}
			else if (!func_769(iVar0))
			{
				func_185(func_770(MISC::GET_HASH_KEY(func_771(iVar0))), 1, -1);
				StringCopy(sParam0, func_771(iVar0), 64);
				return 1;
			}
		}
	}
	else if (iParam2 == -1)
	{
		iVar1 = func_773(bParam3);
		if (iVar1 != -1)
		{
			if (func_772())
			{
				MISC::CLEAR_BIT(iParam1, 19);
				StringCopy(sParam0, func_771(iVar1), 64);
				return 0;
			}
			else if (!func_769(iVar1))
			{
				func_185(func_770(MISC::GET_HASH_KEY(func_771(iVar1))), 1, -1);
				StringCopy(sParam0, func_771(iVar1), 64);
				return 1;
			}
		}
	}
	return 0;
}

bool func_769(int iParam0)//Position - 0x3D385
{
	return func_506(func_770(MISC::GET_HASH_KEY(func_771(iParam0))), -1);
}

int func_770(int iParam0)//Position - 0x3D3A0
{
	switch (iParam0)
	{
		case joaat("CLO_H2F_O_S_16"):
			return 26970;
		
		case joaat("CLO_ARF_O_12"):
			return 26971;
		
		case joaat("CLO_IEF_O_2"):
			return 26972;
		
		case joaat("CLO_H2F_S_6_0"):
			return 26973;
		
		case joaat("CLO_BIF_O_11"):
			return 26974;
		
		case joaat("CLO_STF_O_5"):
			return 26975;
		
		case joaat("CLO_SMF_O_1"):
			return 26976;
		
		case joaat("CLO_STF_O_E_1"):
			return 26977;
		
		case joaat("CLO_STF_O_8"):
			return 26978;
		
		case joaat("CLO_HSTF_O_20"):
			return 26979;
		
		case joaat("CLO_HSTM_O_20"):
			return 26979;
		
		case joaat("CLO_H2F_S_4_0"):
			return 26980;
		
		case joaat("CLO_H2F_O_G_21"):
			return 26981;
		
		case joaat("CLO_GRF_O_1"):
			return 26982;
		
		case joaat("CLO_LXF_U_3_8"):
			return 26983;
		
		case joaat("CLO_H2F_S_9_0"):
			return 26984;
		
		case joaat("CLO_H2F_S_9_5"):
			return 26985;
		
		case joaat("CLO_HSTF_S_1_1"):
			return 26986;
		
		case joaat("CLO_IEF_O_11"):
			return 26987;
		
		case joaat("CLO_BIF_U_23_1"):
			return 26988;
		
		case joaat("CLO_BHF_U_11_17"):
			return 26989;
		
		case joaat("CLO_EXF_OB_14"):
			return 26990;
		
		case joaat("CLO_H2F_U_3_25"):
			return 26991;
		
		case joaat("CLO_BHF_U_6_1"):
			return 26992;
		
		case joaat("CLO_L2F_U_7_15"):
			return 26993;
		
		case joaat("CLO_BHF_U_14_1"):
			return 26994;
		
		case joaat("CLO_L2F_U_7_12"):
			return 26995;
		
		case joaat("CLO_L2F_U_7_11"):
			return 26996;
		
		case joaat("CLO_STF_U_7_4"):
			return 26997;
		
		case joaat("CLO_IEF_U_3_7"):
			return 26998;
		
		case joaat("CLO_L2F_U_7_1"):
			return 26999;
		
		case joaat("CLO_EXF_OA_0"):
			return 27000;
		
		case joaat("CLO_HSTM_O_G_3"):
			return 27001;
		
		case joaat("CLO_HSTF_O_G_3"):
			return 27001;
		
		case joaat("CLO_BHF_U_5_18"):
			return 27002;
		
		case joaat("CLO_BHF_U_5_20"):
			return 27003;
		
		case joaat("CLO_BHF_U_2_14"):
			return 27004;
		
		case joaat("CLO_STF_U_5_9"):
			return 27005;
		
		case joaat("CLO_BHF_U_5_3"):
			return 27006;
		
		case joaat("CLO_BHF_U_13_0"):
			return 27007;
		
		case joaat("CLO_STF_U_5_1"):
			return 27008;
		
		case joaat("CLO_BHF_U_4_2"):
			return 27009;
		
		case joaat("CLO_HSTF_O_J_2"):
			return 27010;
		
		case joaat("CLO_HSTM_O_J_2"):
			return 27010;
		
		case joaat("CLO_STF_U_5_6"):
			return 27011;
		
		case joaat("CLO_GRF_U_21_12"):
			return 27012;
		
		case joaat("CLO_BHF_U_4_5"):
			return 27013;
		
		case joaat("CLO_GRF_U_21_20"):
			return 27014;
		
		case joaat("CLO_BHF_U_7_1"):
			return 27015;
		
		case joaat("CLO_SMF_U_2_15"):
			return 27016;
		
		case joaat("CLO_IEF_U_14_4"):
			return 27017;
		
		case joaat("CLO_IEF_U_14_21"):
			return 27018;
		
		case joaat("CLO_IEF_U_14_9"):
			return 27019;
		
		case joaat("CLO_BHF_U_7_14"):
			return 27020;
		
		case joaat("CLO_BIF_U_31_1"):
			return 27021;
		
		case joaat("CLO_SMF_U_2_7"):
			return 27022;
		
		case joaat("CLO_BHF_U_7_7"):
			return 27023;
		
		case joaat("CLO_SMF_U_2_23"):
			return 27024;
		
		case joaat("CLO_STF_U_5_12"):
			return 27025;
		
		case joaat("CLO_SMF_U_2_19"):
			return 27026;
		
		case joaat("CLO_STF_U_6_18"):
			return 27027;
		
		case joaat("CLO_IEF_U_14_0"):
			return 27028;
		
		case joaat("CLO_EXF_EU_5_0"):
			return 27029;
		
		case joaat("CLO_IEF_U_14_7"):
			return 27030;
		
		case joaat("CLO_BHF_U_4_18"):
			return 27031;
		
		case joaat("CLO_BHF_U_0_17"):
			return 27032;
		
		case joaat("CLO_LXF_U_5_0"):
			return 27033;
		
		case joaat("CLO_IEF_U_4_8"):
			return 27034;
		
		case joaat("CLO_HSTF_O_L_0"):
			return 27035;
		
		case joaat("CLO_HSTM_O_L_0"):
			return 27035;
		
		case joaat("CLO_HSTF_S_0_0"):
			return 27036;
		
		case joaat("CLO_GRF_U_20_15"):
			return 27037;
		
		case joaat("CLO_BHF_U_0_2"):
			return 27038;
		
		case joaat("CLO_IEF_U_1_9"):
			return 27039;
		
		case joaat("CLO_LTSFU_0_0"):
			return 27040;
		
		case joaat("CLO_S2F_U_3_12"):
			return 27041;
		
		case joaat("CLO_IEF_U_4_5"):
			return 27042;
		
		case joaat("CLO_GRF_U_20_24"):
			return 27043;
		
		case joaat("CLO_SMF_U_3_8"):
			return 27044;
		
		case joaat("CLO_IEF_U_4_22"):
			return 27045;
		
		case joaat("CLO_GRF_U_19_16"):
			return 27046;
		
		case joaat("CLO_HSTF_U_0_3"):
			return 27047;
		
		case joaat("CLO_HSTF_U_16_5"):
			return 27048;
		
		case joaat("CLO_SMF_U_3_5"):
			return 27049;
		
		case joaat("CLO_SMF_U_3_6"):
			return 27050;
		
		case joaat("CLO_LXF_U_6_3"):
			return 27051;
		
		case joaat("CLO_S2F_D_7"):
			return 27052;
		
		case joaat("CLO_GRF_U_19_23"):
			return 27053;
		
		case joaat("CLO_GRF_U_0_13"):
			return 27054;
		
		case joaat("CLO_S2F_D_18"):
			return 27055;
		
		case joaat("CLO_EXF_EU_4_2"):
			return 27056;
		
		case joaat("CLO_HP_F_D_10"):
			return 27057;
		
		case joaat("CLO_LXF_U_6_18"):
			return 27058;
		
		case joaat("CLO_IEF_U_7_5"):
			return 27059;
		
		case joaat("CLO_BIF_DECL_67"):
			return 27060;
		
		case joaat("CLO_BHF_U_16_1"):
			return 27061;
		
		case joaat("CLO_S1F_U_3_1"):
			return 27062;
		
		case joaat("CLO_IEF_U_7_14"):
			return 27063;
		
		case joaat("CLO_GRF_U_15_10"):
			return 27064;
		
		case joaat("CLO_GRF_U_2_6"):
			return 27065;
		
		case joaat("CLO_IEF_U_7_12"):
			return 27066;
		
		case joaat("CLO_SMF_DECL_16"):
			return 27067;
		
		case joaat("CLO_S1F_DEC_23"):
			return 27068;
		
		case joaat("CLO_SMF_DECL_15"):
			return 27069;
		
		case joaat("CLO_BIF_DECL_2"):
			return 27070;
		
		case joaat("CLO_SMF_DECL_7"):
			return 27071;
		
		case joaat("CLO_HP_F_D_9"):
			return 27072;
		
		case joaat("CLO_EXF_EU_9_5"):
			return 27073;
		
		case joaat("CLO_S2F_D_23"):
			return 27074;
		
		case joaat("CLO_SMF_DECL_5"):
			return 27075;
		
		case joaat("CLO_BIF_DECL_63"):
			return 27076;
		
		case joaat("CLO_AWF_DECL_23"):
			return 27077;
		
		case joaat("CLO_BIF_DECL_49"):
			return 27078;
		
		case joaat("CLO_HALF_D_10"):
			return 27079;
		
		case joaat("CLO_GRF_DECL_27"):
			return 27080;
		
		case joaat("CLO_LXF_DEC_35"):
			return 27081;
		
		case joaat("CLO_HST_F_A_0"):
			return 27082;
		
		case joaat("CLO_HST_F_A_9"):
			return 27083;
		
		case joaat("CLO_BHF_DECL_19"):
			return 27084;
		
		case joaat("CLO_INDF_HT_6_2"):
			return 27085;
		
		case joaat("CLO_EXF_DECL_3"):
			return 27086;
		
		case joaat("CLO_X4F_B_7_0"):
			return 27087;
		
		case joaat("CLO_X2F_B_2_0"):
			return 27088;
		
		case joaat("CLO_VWF_U_13_0"):
			return 27120;
		
		case joaat("CLO_VWF_U_13_1"):
			return 27121;
		
		case joaat("CLO_VWF_U_13_2"):
			return 27122;
		
		case joaat("CLO_VWF_U_13_3"):
			return 27123;
		
		case joaat("CLO_VWF_U_13_4"):
			return 27124;
		
		case joaat("CLO_VWF_U_13_5"):
			return 27125;
		
		case joaat("CLO_VWF_U_13_6"):
			return 27126;
		
		case joaat("CLO_VWF_U_18_5"):
			return 27127;
		
		case joaat("CLO_VWF_PH_0_0"):
			return 27128;
		
		case joaat("CLO_VWF_PH_0_1"):
			return 27129;
		
		case joaat("CLO_VWF_PH_0_2"):
			return 27130;
		
		case joaat("CLO_VWF_PH_0_3"):
			return 27131;
		
		case joaat("CLO_VWF_PH_0_4"):
			return 27132;
		
		case joaat("CLO_VWF_PH_0_5"):
			return 27133;
		
		case joaat("CLO_VWF_PH_0_6"):
			return 27134;
		
		case joaat("CLO_VWF_PH_0_7"):
			return 27135;
		
		case joaat("CLO_VWF_PH_0_8"):
			return 27136;
		
		case joaat("CLO_VWF_PH_0_9"):
			return 27137;
		
		case joaat("CLO_VWF_PH_0_10"):
			return 27138;
		
		case joaat("CLO_VWF_DECL_0"):
			return 27139;
		
		case joaat("CLO_VWF_DECL_1"):
			return 27140;
		
		case joaat("CLO_VWF_DECL_3"):
			return 27141;
		
		case joaat("CLO_VWF_DECL_5"):
			return 27142;
		
		case joaat("CLO_VWF_DECL_7"):
			return 27143;
		
		case joaat("CLO_VWF_DECL_8"):
			return 27144;
		
		case joaat("CLO_VWF_DECL_9"):
			return 27145;
		
		default:
	}
	switch (iParam0)
	{
		case joaat("CLO_H2M_O_S_16"):
			return 26970;
		
		case joaat("CLO_ARM_O_12"):
			return 26971;
		
		case joaat("CLO_IEM_O_1"):
			return 26972;
		
		case joaat("CLO_H2M_S_6_0"):
			return 26973;
		
		case joaat("CLO_BIM_O_11"):
			return 26974;
		
		case joaat("CLO_STM_O_5"):
			return 26975;
		
		case joaat("CLO_SMM_O_1"):
			return 26976;
		
		case joaat("CLO_STM_O_E_1"):
			return 26977;
		
		case joaat("CLO_STM_O_8"):
			return 26978;
		
		case joaat("CLO_H2M_S_4_0"):
			return 26980;
		
		case joaat("CLO_H2M_O_G_21"):
			return 26981;
		
		case joaat("CLO_GRM_O_1"):
			return 26982;
		
		case joaat("CLO_H2M_S_9_0"):
			return 26983;
		
		case joaat("CLO_LXM_U_0_7"):
			return 26984;
		
		case joaat("CLO_H2M_S_9_5"):
			return 26985;
		
		case joaat("CLO_HSTM_S_1_1"):
			return 26986;
		
		case joaat("CLO_IEM_O_11"):
			return 26987;
		
		case joaat("CLO_BIM_U_18_1"):
			return 26988;
		
		case joaat("CLO_BHM_U_11_17"):
			return 26989;
		
		case joaat("CLO_H2M_U_3_25"):
			return 26990;
		
		case joaat("CLO_BHM_U_6_1"):
			return 26991;
		
		case joaat("CLO_L2M_U_6_15"):
			return 26992;
		
		case joaat("CLO_BHM_U_14_1"):
			return 26993;
		
		case joaat("CLO_L2M_U_6_12"):
			return 26994;
		
		case joaat("CLO_L2M_U_6_11"):
			return 26995;
		
		case joaat("CLO_EXM_OB_14"):
			return 26997;
		
		case joaat("CLO_STM_U_7_4"):
			return 26998;
		
		case joaat("CLO_IEM_U_3_7"):
			return 26999;
		
		case joaat("CLO_L2M_U_6_1"):
			return 27000;
		
		case joaat("CLO_EXM_OA_0"):
			return 27014;
		
		case joaat("CLO_BHM_U_5_18"):
			return 27002;
		
		case joaat("CLO_BHM_U_5_20"):
			return 27003;
		
		case joaat("CLO_BHM_U_2_14"):
			return 27004;
		
		case joaat("CLO_STM_U_5_9"):
			return 27005;
		
		case joaat("CLO_BHM_U_5_3"):
			return 27006;
		
		case joaat("CLO_BHM_U_13_0"):
			return 27007;
		
		case joaat("CLO_STM_U_5_1"):
			return 27008;
		
		case joaat("CLO_BHM_U_4_2"):
			return 27009;
		
		case joaat("CLO_STM_U_5_6"):
			return 26996;
		
		case joaat("CLO_GRM_U_15_12"):
			return 27011;
		
		case joaat("CLO_BHM_U_4_5"):
			return 27012;
		
		case joaat("CLO_GRM_U_15_20"):
			return 27013;
		
		case joaat("CLO_BHM_U_7_1"):
			return 27015;
		
		case joaat("CLO_SMM_U_2_15"):
			return 27017;
		
		case joaat("CLO_IEM_U_17_4"):
			return 27018;
		
		case joaat("CLO_IEM_U_17_21"):
			return 27019;
		
		case joaat("CLO_IEM_U_17_9"):
			return 27020;
		
		case joaat("CLO_BHM_U_7_14"):
			return 27021;
		
		case joaat("CLO_BIM_U_26_1"):
			return 27022;
		
		case joaat("CLO_SMM_U_2_7"):
			return 27023;
		
		case joaat("CLO_BHM_U_7_7"):
			return 27024;
		
		case joaat("CLO_SMM_U_2_23"):
			return 27025;
		
		case joaat("CLO_STM_U_5_12"):
			return 27026;
		
		case joaat("CLO_SMM_U_2_19"):
			return 27027;
		
		case joaat("CLO_STM_U_6_18"):
			return 27028;
		
		case joaat("CLO_IEM_U_17_0"):
			return 27029;
		
		case joaat("CLO_EXM_EU_6_0"):
			return 27030;
		
		case joaat("CLO_IEM_U_17_7"):
			return 27031;
		
		case joaat("CLO_HSTM_S_0_0"):
			return 27032;
		
		case joaat("CLO_BHM_U_4_18"):
			return 27033;
		
		case joaat("CLO_BHM_U_0_17"):
			return 27034;
		
		case joaat("CLO_LXM_U_1_0"):
			return 27016;
		
		case joaat("CLO_IEM_U_4_8"):
			return 27036;
		
		case joaat("CLO_HSTM_U_15_5"):
			return 27037;
		
		case joaat("CLO_GRM_U_14_15"):
			return 27038;
		
		case joaat("CLO_BHM_U_0_2"):
			return 27039;
		
		case joaat("CLO_LTSMU_0_0"):
			return 27040;
		
		case joaat("CLO_IEM_U_18_9"):
			return 27041;
		
		case joaat("CLO_S2M_U_5_10"):
			return 27042;
		
		case joaat("CLO_IEM_U_4_5"):
			return 27043;
		
		case joaat("CLO_GRM_U_14_24"):
			return 27044;
		
		case joaat("CLO_SMM_U_3_8"):
			return 27045;
		
		case joaat("CLO_IEM_U_4_22"):
			return 27046;
		
		case joaat("CLO_GRM_U_13_16"):
			return 27047;
		
		case joaat("CLO_HSTM_U_0_3"):
			return 27048;
		
		case joaat("CLO_SMM_U_3_5"):
			return 27049;
		
		case joaat("CLO_SMM_U_3_6"):
			return 27050;
		
		case joaat("CLO_LXM_U_5_3"):
			return 27051;
		
		case joaat("CLO_S2M_D_16"):
			return 27052;
		
		case joaat("CLO_GRM_U_13_23"):
			return 27053;
		
		case joaat("CLO_GRM_U_0_13"):
			return 27054;
		
		case joaat("CLO_S2M_D_27"):
			return 27055;
		
		case joaat("CLO_EXM_EU_5_2"):
			return 27056;
		
		case joaat("CLO_HP_D_10"):
			return 27057;
		
		case joaat("CLO_LXM_U_5_17"):
			return 27058;
		
		case joaat("CLO_IEM_U_7_5"):
			return 27059;
		
		case joaat("CLO_IEM_U_7_23"):
			return 27060;
		
		case joaat("CLO_BIM_DECL_67"):
			return 27061;
		
		case joaat("CLO_BHM_U_16_1"):
			return 27062;
		
		case joaat("CLO_S1M_U_3_1"):
			return 27063;
		
		case joaat("CLO_SMM_U_7_10"):
			return 27064;
		
		case joaat("CLO_GRM_U_2_6"):
			return 27065;
		
		case joaat("CLO_IEM_U_7_19"):
			return 27066;
		
		case joaat("CLO_SMM_DECL_16"):
			return 27067;
		
		case joaat("CLO_S1M_DEC_25"):
			return 27068;
		
		case joaat("CLO_SMM_DECL_15"):
			return 27069;
		
		case joaat("CLO_BIM_DECL_2"):
			return 27070;
		
		case joaat("CLO_SMM_DECL_7"):
			return 27071;
		
		case joaat("CLO_HP_D_9"):
			return 27072;
		
		case joaat("CLO_EXM_EU_10_5"):
			return 27073;
		
		case joaat("CLO_S2M_D_4"):
			return 27074;
		
		case joaat("CLO_SMM_DECL_5"):
			return 27075;
		
		case joaat("CLO_BIM_DECL_63"):
			return 27076;
		
		case joaat("CLO_AWM_DECL_23"):
			return 27077;
		
		case joaat("CLO_BIM_DECL_49"):
			return 27078;
		
		case joaat("CLO_HALM_D_10"):
			return 27079;
		
		case joaat("CLO_GRM_DECL_27"):
			return 27080;
		
		case joaat("CLO_LXM_DEC_35"):
			return 27081;
		
		case joaat("CLO_HST_A_0"):
			return 27082;
		
		case joaat("CLO_EXM_DECL_3"):
			return 27083;
		
		case joaat("CLO_HST_A_9"):
			return 27084;
		
		case joaat("CLO_BHM_DECL_19"):
			return 27085;
		
		case joaat("CLO_INDM_HT_6_2"):
			return 27086;
		
		case joaat("CLO_X4M_B_7_0"):
			return 27087;
		
		case joaat("CLO_X2M_B_2_0"):
			return 27088;
		
		case joaat("CLO_VWM_U_15_0"):
			return 27120;
		
		case joaat("CLO_VWM_U_15_1"):
			return 27121;
		
		case joaat("CLO_VWM_U_15_2"):
			return 27122;
		
		case joaat("CLO_VWM_U_15_3"):
			return 27123;
		
		case joaat("CLO_VWM_U_15_4"):
			return 27124;
		
		case joaat("CLO_VWM_U_15_5"):
			return 27125;
		
		case joaat("CLO_VWM_U_15_6"):
			return 27126;
		
		case joaat("CLO_VWM_U_20_5"):
			return 27127;
		
		case joaat("CLO_VWM_PH_0_0"):
			return 27128;
		
		case joaat("CLO_VWM_PH_0_1"):
			return 27129;
		
		case joaat("CLO_VWM_PH_0_2"):
			return 27130;
		
		case joaat("CLO_VWM_PH_0_3"):
			return 27131;
		
		case joaat("CLO_VWM_PH_0_4"):
			return 27132;
		
		case joaat("CLO_VWM_PH_0_5"):
			return 27133;
		
		case joaat("CLO_VWM_PH_0_6"):
			return 27134;
		
		case joaat("CLO_VWM_PH_0_7"):
			return 27135;
		
		case joaat("CLO_VWM_PH_0_8"):
			return 27136;
		
		case joaat("CLO_VWM_PH_0_9"):
			return 27137;
		
		case joaat("CLO_VWM_PH_0_10"):
			return 27138;
		
		case joaat("CLO_VWM_DECL_0"):
			return 27139;
		
		case joaat("CLO_VWM_DECL_1"):
			return 27140;
		
		case joaat("CLO_VWM_DECL_3"):
			return 27141;
		
		case joaat("CLO_VWM_DECL_5"):
			return 27142;
		
		case joaat("CLO_VWM_DECL_7"):
			return 27143;
		
		case joaat("CLO_VWM_DECL_8"):
			return 27144;
		
		case joaat("CLO_VWM_DECL_9"):
			return 27145;
		
		default:
	}
	return 0;
}

char* func_771(int iParam0)//Position - 0x3E14F
{
	switch (iParam0)
	{
		case 0:
			return "CLO_H2F_O_S_16";
		
		case 1:
			return "CLO_ARF_O_12";
		
		case 2:
			return "CLO_IEF_O_2";
		
		case 3:
			return "CLO_H2F_S_6_0";
		
		case 4:
			return "CLO_BIF_O_11";
		
		case 5:
			return "CLO_STF_O_5";
		
		case 6:
			return "CLO_SMF_O_1";
		
		case 7:
			return "CLO_STF_O_E_1";
		
		case 8:
			return "CLO_STF_O_8";
		
		case 9:
			return "CLO_HSTF_O_20";
		
		case 10:
			return "CLO_H2F_S_4_0";
		
		case 11:
			return "CLO_H2F_O_G_21";
		
		case 12:
			return "CLO_GRF_O_1";
		
		case 13:
			return "CLO_LXF_U_3_8";
		
		case 14:
			return "CLO_H2F_S_9_0";
		
		case 15:
			return "CLO_H2F_S_9_5";
		
		case 16:
			return "CLO_HSTF_S_1_1";
		
		case 17:
			return "CLO_IEF_O_11";
		
		case 18:
			return "CLO_BIF_U_23_1";
		
		case 19:
			return "CLO_BHF_U_11_17";
		
		case 20:
			return "CLO_EXF_OB_14";
		
		case 21:
			return "CLO_H2F_U_3_25";
		
		case 22:
			return "CLO_BHF_U_6_1";
		
		case 23:
			return "CLO_L2F_U_7_15";
		
		case 24:
			return "CLO_BHF_U_14_1";
		
		case 25:
			return "CLO_L2F_U_7_12";
		
		case 26:
			return "CLO_L2F_U_7_11";
		
		case 27:
			return "CLO_STF_U_7_4";
		
		case 28:
			return "CLO_IEF_U_3_7";
		
		case 29:
			return "CLO_L2F_U_7_1";
		
		case 30:
			return "CLO_EXF_OA_0";
		
		case 31:
			return "CLO_HSTF_O_G_3";
		
		case 32:
			return "CLO_BHF_U_5_18";
		
		case 33:
			return "CLO_BHF_U_5_20";
		
		case 34:
			return "CLO_BHF_U_2_14";
		
		case 35:
			return "CLO_STF_U_5_9";
		
		case 36:
			return "CLO_BHF_U_5_3";
		
		case 37:
			return "CLO_BHF_U_13_0";
		
		case 38:
			return "CLO_STF_U_5_1";
		
		case 39:
			return "CLO_BHF_U_4_2";
		
		case 40:
			return "CLO_HSTF_O_J_2";
		
		case 41:
			return "CLO_STF_U_5_6";
		
		case 42:
			return "CLO_GRF_U_21_12";
		
		case 43:
			return "CLO_BHF_U_4_5";
		
		case 44:
			return "CLO_GRF_U_21_20";
		
		case 45:
			return "CLO_BHF_U_7_1";
		
		case 46:
			return "CLO_SMF_U_2_15";
		
		case 47:
			return "CLO_IEF_U_14_4";
		
		case 48:
			return "CLO_IEF_U_14_21";
		
		case 49:
			return "CLO_IEF_U_14_9";
		
		case 50:
			return "CLO_BHF_U_7_14";
		
		case 51:
			return "CLO_BIF_U_31_1";
		
		case 52:
			return "CLO_SMF_U_2_7";
		
		case 53:
			return "CLO_BHF_U_7_7";
		
		case 54:
			return "CLO_SMF_U_2_23";
		
		case 55:
			return "CLO_STF_U_5_12";
		
		case 56:
			return "CLO_SMF_U_2_19";
		
		case 57:
			return "CLO_STF_U_6_18";
		
		case 58:
			return "CLO_IEF_U_14_0";
		
		case 59:
			return "CLO_EXF_EU_5_0";
		
		case 60:
			return "CLO_IEF_U_14_7";
		
		case 61:
			return "CLO_BHF_U_4_18";
		
		case 62:
			return "CLO_BHF_U_0_17";
		
		case 63:
			return "CLO_LXF_U_5_0";
		
		case 64:
			return "CLO_IEF_U_4_8";
		
		case 65:
			return "CLO_HSTM_O_L_0";
		
		case 66:
			return "CLO_HSTF_S_0_0";
		
		case 67:
			return "CLO_GRF_U_20_15";
		
		case 68:
			return "CLO_BHF_U_0_2";
		
		case 69:
			return "CLO_IEF_U_1_9";
		
		case 70:
			return "CLO_LTSFU_0_0";
		
		case 71:
			return "CLO_S2F_U_3_12";
		
		case 72:
			return "CLO_IEF_U_4_5";
		
		case 73:
			return "CLO_GRF_U_20_24";
		
		case 74:
			return "CLO_SMF_U_3_8";
		
		case 75:
			return "CLO_IEF_U_4_22";
		
		case 76:
			return "CLO_GRF_U_19_16";
		
		case 77:
			return "CLO_HSTF_U_0_3";
		
		case 78:
			return "CLO_HSTF_U_16_5";
		
		case 79:
			return "CLO_SMF_U_3_5";
		
		case 80:
			return "CLO_SMF_U_3_6";
		
		case 81:
			return "CLO_LXF_U_6_3";
		
		case 82:
			return "CLO_S2F_D_7";
		
		case 83:
			return "CLO_GRF_U_19_23";
		
		case 84:
			return "CLO_GRF_U_0_13";
		
		case 85:
			return "CLO_S2F_D_18";
		
		case 86:
			return "CLO_EXF_EU_4_2";
		
		case 87:
			return "CLO_HP_F_D_10";
		
		case 88:
			return "CLO_LXF_U_6_18";
		
		case 89:
			return "CLO_IEF_U_7_5";
		
		case 90:
			return "CLO_BIF_DECL_67";
		
		case 91:
			return "CLO_BHF_U_16_1";
		
		case 92:
			return "CLO_S1F_U_3_1";
		
		case 93:
			return "CLO_IEF_U_7_14";
		
		case 94:
			return "CLO_GRF_U_15_10";
		
		case 95:
			return "CLO_GRF_U_2_6";
		
		case 96:
			return "CLO_IEF_U_7_12";
		
		case 97:
			return "CLO_SMF_DECL_16";
		
		case 98:
			return "CLO_S1F_DEC_23";
		
		case 99:
			return "CLO_SMF_DECL_15";
		
		case 100:
			return "CLO_BIF_DECL_2";
		
		case 101:
			return "CLO_SMF_DECL_7";
		
		case 102:
			return "CLO_HP_F_D_9";
		
		case 103:
			return "CLO_EXF_EU_9_5";
		
		case 104:
			return "CLO_S2F_D_23";
		
		case 105:
			return "CLO_SMF_DECL_5";
		
		case 106:
			return "CLO_BIF_DECL_63";
		
		case 107:
			return "CLO_AWF_DECL_23";
		
		case 108:
			return "CLO_BIF_DECL_49";
		
		case 109:
			return "CLO_HALF_D_10";
		
		case 110:
			return "CLO_GRF_DECL_27";
		
		case 111:
			return "CLO_LXF_DEC_35";
		
		case 112:
			return "CLO_HST_F_A_0";
		
		case 113:
			return "CLO_HST_F_A_9";
		
		case 114:
			return "CLO_BHF_DECL_19";
		
		case 115:
			return "CLO_INDF_HT_6_2";
		
		case 116:
			return "CLO_EXF_DECL_3";
		
		case 117:
			return "CLO_X4F_B_7_0";
		
		case 118:
			return "CLO_X2F_B_2_0";
		
		case 119:
			return "CLO_VWF_U_13_0";
		
		case 120:
			return "CLO_VWF_U_13_1";
		
		case 121:
			return "CLO_VWF_U_13_2";
		
		case 122:
			return "CLO_VWF_U_13_3";
		
		case 123:
			return "CLO_VWF_U_13_4";
		
		case 124:
			return "CLO_VWF_U_13_5";
		
		case 125:
			return "CLO_VWF_U_13_6";
		
		case 126:
			return "CLO_VWF_U_18_5";
		
		case 127:
			return "CLO_VWF_PH_0_0";
		
		case 128:
			return "CLO_VWF_PH_0_1";
		
		case 129:
			return "CLO_VWF_PH_0_2";
		
		case 130:
			return "CLO_VWF_PH_0_3";
		
		case 131:
			return "CLO_VWF_PH_0_4";
		
		case 132:
			return "CLO_VWF_PH_0_5";
		
		case 133:
			return "CLO_VWF_PH_0_6";
		
		case 134:
			return "CLO_VWF_PH_0_7";
		
		case 135:
			return "CLO_VWF_PH_0_8";
		
		case 136:
			return "CLO_VWF_PH_0_9";
		
		case 137:
			return "CLO_VWF_PH_0_10";
		
		case 138:
			return "CLO_VWF_DECL_0";
		
		case 139:
			return "CLO_VWF_DECL_1";
		
		case 140:
			return "CLO_VWF_DECL_3";
		
		case 141:
			return "CLO_VWF_DECL_5";
		
		case 142:
			return "CLO_VWF_DECL_7";
		
		case 143:
			return "CLO_VWF_DECL_8";
		
		case 144:
			return "CLO_VWF_DECL_9";
		
		default:
	}
	switch (iParam0)
	{
		case 145:
			return "CLO_H2M_O_S_16";
		
		case 146:
			return "CLO_ARM_O_12";
		
		case 147:
			return "CLO_IEM_O_1";
		
		case 148:
			return "CLO_H2M_S_6_0";
		
		case 149:
			return "CLO_BIM_O_11";
		
		case 150:
			return "CLO_STM_O_5";
		
		case 151:
			return "CLO_SMM_O_1";
		
		case 152:
			return "CLO_STM_O_E_1";
		
		case 153:
			return "CLO_STM_O_8";
		
		case 154:
			return "CLO_HSTM_O_20";
		
		case 155:
			return "CLO_H2M_S_4_0";
		
		case 156:
			return "CLO_H2M_O_G_21";
		
		case 157:
			return "CLO_GRM_O_1";
		
		case 158:
			return "CLO_H2M_S_9_0";
		
		case 159:
			return "CLO_LXM_U_0_7";
		
		case 160:
			return "CLO_H2M_S_9_5";
		
		case 161:
			return "CLO_HSTM_S_1_1";
		
		case 162:
			return "CLO_IEM_O_11";
		
		case 163:
			return "CLO_BIM_U_18_1";
		
		case 164:
			return "CLO_BHM_U_11_17";
		
		case 165:
			return "CLO_H2M_U_3_25";
		
		case 166:
			return "CLO_BHM_U_6_1";
		
		case 167:
			return "CLO_L2M_U_6_15";
		
		case 168:
			return "CLO_BHM_U_14_1";
		
		case 169:
			return "CLO_L2M_U_6_12";
		
		case 170:
			return "CLO_L2M_U_6_11";
		
		case 171:
			return "CLO_HSTM_O_J_2";
		
		case 172:
			return "CLO_EXM_OB_14";
		
		case 173:
			return "CLO_STM_U_7_4";
		
		case 174:
			return "CLO_IEM_U_3_7";
		
		case 175:
			return "CLO_L2M_U_6_1";
		
		case 176:
			return "CLO_EXM_OA_0";
		
		case 177:
			return "CLO_BHM_U_5_18";
		
		case 178:
			return "CLO_BHM_U_5_20";
		
		case 179:
			return "CLO_BHM_U_2_14";
		
		case 180:
			return "CLO_STM_U_5_9";
		
		case 181:
			return "CLO_BHM_U_5_3";
		
		case 182:
			return "CLO_BHM_U_13_0";
		
		case 183:
			return "CLO_STM_U_5_1";
		
		case 184:
			return "CLO_BHM_U_4_2";
		
		case 185:
			return "CLO_STM_U_5_6";
		
		case 186:
			return "CLO_GRM_U_15_12";
		
		case 187:
			return "CLO_BHM_U_4_5";
		
		case 188:
			return "CLO_GRM_U_15_20";
		
		case 189:
			return "CLO_HSTM_O_G_3";
		
		case 190:
			return "CLO_BHM_U_7_1";
		
		case 191:
			return "CLO_HSTM_O_L_0";
		
		case 192:
			return "CLO_SMM_U_2_15";
		
		case 193:
			return "CLO_IEM_U_17_4";
		
		case 194:
			return "CLO_IEM_U_17_21";
		
		case 195:
			return "CLO_IEM_U_17_9";
		
		case 196:
			return "CLO_BHM_U_7_14";
		
		case 197:
			return "CLO_BIM_U_26_1";
		
		case 198:
			return "CLO_SMM_U_2_7";
		
		case 199:
			return "CLO_BHM_U_7_7";
		
		case 200:
			return "CLO_SMM_U_2_23";
		
		case 201:
			return "CLO_STM_U_5_12";
		
		case 202:
			return "CLO_SMM_U_2_19";
		
		case 203:
			return "CLO_STM_U_6_18";
		
		case 204:
			return "CLO_IEM_U_17_0";
		
		case 205:
			return "CLO_EXM_EU_6_0";
		
		case 206:
			return "CLO_IEM_U_17_7";
		
		case 207:
			return "CLO_HSTM_S_0_0";
		
		case 208:
			return "CLO_BHM_U_4_18";
		
		case 209:
			return "CLO_BHM_U_0_17";
		
		case 210:
			return "CLO_LXM_U_1_0";
		
		case 211:
			return "CLO_IEM_U_4_8";
		
		case 212:
			return "CLO_HSTM_U_15_5";
		
		case 213:
			return "CLO_GRM_U_14_15";
		
		case 214:
			return "CLO_BHM_U_0_2";
		
		case 215:
			return "CLO_LTSMU_0_0";
		
		case 216:
			return "CLO_IEM_U_18_9";
		
		case 217:
			return "CLO_S2M_U_5_10";
		
		case 218:
			return "CLO_IEM_U_4_5";
		
		case 219:
			return "CLO_GRM_U_14_24";
		
		case 220:
			return "CLO_SMM_U_3_8";
		
		case 221:
			return "CLO_IEM_U_4_22";
		
		case 222:
			return "CLO_GRM_U_13_16";
		
		case 223:
			return "CLO_HSTM_U_0_3";
		
		case 224:
			return "CLO_SMM_U_3_5";
		
		case 225:
			return "CLO_SMM_U_3_6";
		
		case 226:
			return "CLO_LXM_U_5_3";
		
		case 227:
			return "CLO_S2M_D_16";
		
		case 228:
			return "CLO_GRM_U_13_23";
		
		case 229:
			return "CLO_GRM_U_0_13";
		
		case 230:
			return "CLO_S2M_D_27";
		
		case 231:
			return "CLO_EXM_EU_5_2";
		
		case 232:
			return "CLO_HP_D_10";
		
		case 233:
			return "CLO_LXM_U_5_17";
		
		case 234:
			return "CLO_IEM_U_7_5";
		
		case 235:
			return "CLO_IEM_U_7_23";
		
		case 236:
			return "CLO_BIM_DECL_67";
		
		case 237:
			return "CLO_BHM_U_16_1";
		
		case 238:
			return "CLO_S1M_U_3_1";
		
		case 239:
			return "CLO_SMM_U_7_10";
		
		case 240:
			return "CLO_GRM_U_2_6";
		
		case 241:
			return "CLO_IEM_U_7_19";
		
		case 242:
			return "CLO_SMM_DECL_16";
		
		case 243:
			return "CLO_S1M_DEC_25";
		
		case 244:
			return "CLO_SMM_DECL_15";
		
		case 245:
			return "CLO_BIM_DECL_2";
		
		case 246:
			return "CLO_SMM_DECL_7";
		
		case 247:
			return "CLO_HP_D_9";
		
		case 248:
			return "CLO_EXM_EU_10_5";
		
		case 249:
			return "CLO_S2M_D_4";
		
		case 250:
			return "CLO_SMM_DECL_5";
		
		case 251:
			return "CLO_BIM_DECL_63";
		
		case 252:
			return "CLO_AWM_DECL_23";
		
		case 253:
			return "CLO_BIM_DECL_49";
		
		case 254:
			return "CLO_HALM_D_10";
		
		case 255:
			return "CLO_GRM_DECL_27";
		
		case 256:
			return "CLO_LXM_DEC_35";
		
		case 257:
			return "CLO_HST_A_0";
		
		case 258:
			return "CLO_EXM_DECL_3";
		
		case 259:
			return "CLO_HST_A_9";
		
		case 260:
			return "CLO_BHM_DECL_19";
		
		case 261:
			return "CLO_INDM_HT_6_2";
		
		case 262:
			return "CLO_X4M_B_7_0";
		
		case 263:
			return "CLO_X2M_B_2_0";
		
		case 264:
			return "CLO_VWM_U_15_0";
		
		case 265:
			return "CLO_VWM_U_15_1";
		
		case 266:
			return "CLO_VWM_U_15_2";
		
		case 267:
			return "CLO_VWM_U_15_3";
		
		case 268:
			return "CLO_VWM_U_15_4";
		
		case 269:
			return "CLO_VWM_U_15_5";
		
		case 270:
			return "CLO_VWM_U_15_6";
		
		case 271:
			return "CLO_VWM_U_20_5";
		
		case 272:
			return "CLO_VWM_PH_0_0";
		
		case 273:
			return "CLO_VWM_PH_0_1";
		
		case 274:
			return "CLO_VWM_PH_0_2";
		
		case 275:
			return "CLO_VWM_PH_0_3";
		
		case 276:
			return "CLO_VWM_PH_0_4";
		
		case 277:
			return "CLO_VWM_PH_0_5";
		
		case 278:
			return "CLO_VWM_PH_0_6";
		
		case 279:
			return "CLO_VWM_PH_0_7";
		
		case 280:
			return "CLO_VWM_PH_0_8";
		
		case 281:
			return "CLO_VWM_PH_0_9";
		
		case 282:
			return "CLO_VWM_PH_0_10";
		
		case 283:
			return "CLO_VWM_DECL_0";
		
		case 284:
			return "CLO_VWM_DECL_1";
		
		case 285:
			return "CLO_VWM_DECL_3";
		
		case 286:
			return "CLO_VWM_DECL_5";
		
		case 287:
			return "CLO_VWM_DECL_7";
		
		case 288:
			return "CLO_VWM_DECL_8";
		
		case 289:
			return "CLO_VWM_DECL_9";
		
		default:
	}
	return "LRCLOTHES_INVALID";
}

int func_772()//Position - 0x3F023
{
	int iVar0;
	
	iVar0 = 26970;
	while (iVar0 <= 27088)
	{
		if (!func_506(iVar0, -1))
		{
			return 0;
		}
		iVar0++;
	}
	iVar0 = 27120;
	while (iVar0 <= 27145)
	{
		if (!func_506(iVar0, -1))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_773(bool bParam0)//Position - 0x3F076
{
	int iVar0[145];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 145)
	{
		if (func_80(PLAYER::PLAYER_PED_ID()))
		{
			iVar3 = iVar2;
		}
		else
		{
			iVar3 = iVar2 + 145;
		}
		iVar0[iVar2] = iVar3;
		iVar1 = (iVar1 + func_774(iVar0[iVar2], bParam0));
		iVar2++;
	}
	iVar4 = MISC::_GET_RANDOM_INT_IN_RANGE_2(0, iVar1);
	iVar2 = 0;
	while (iVar2 < 145)
	{
		if (iVar4 <= func_774(iVar0[iVar2], bParam0))
		{
			return iVar0[iVar2];
		}
		else
		{
			iVar4 = (iVar4 - func_774(iVar0[iVar2], bParam0));
		}
		iVar2++;
	}
	return -1;
}

int func_774(int iParam0, bool bParam1)//Position - 0x3F116
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 14:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851;
			}
			break;
		
		case 13:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
			if (func_769(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26852;
			}
			else
			{
				return Global_262145.f_26853;
			}
			break;
		
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
		case 103:
		case 104:
		case 105:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26853;
			}
			break;
		
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
		case 113:
		case 114:
		case 115:
		case 116:
		case 117:
		case 118:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851;
			}
			break;
		
		case 119:
		case 120:
		case 121:
		case 122:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return Global_262145.f_26851;
			break;
	}
	switch (iParam0)
	{
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
		case 158:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851;
			}
			break;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
		case 172:
		case 173:
		case 174:
		case 175:
		case 176:
		case 177:
		case 178:
		case 179:
		case 180:
		case 181:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 187:
		case 188:
		case 189:
		case 190:
			if (func_769(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26852;
			}
			else
			{
				return Global_262145.f_26853;
			}
			break;
		
		case 191:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26853;
			}
			break;
		
		case 192:
		case 193:
		case 194:
		case 195:
		case 196:
		case 197:
		case 198:
		case 199:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 205:
		case 206:
			if (func_769(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26852;
			}
			else
			{
				return Global_262145.f_26853;
			}
			break;
		
		case 207:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26853;
			}
			break;
		
		case 208:
			if (func_769(iParam0))
			{
				return 0;
			}
			else if (!bParam1)
			{
				return Global_262145.f_26852;
			}
			else
			{
				return Global_262145.f_26853;
			}
			break;
		
		case 209:
		case 210:
		case 211:
		case 212:
		case 213:
		case 214:
		case 215:
		case 216:
		case 217:
		case 218:
		case 219:
		case 220:
		case 221:
		case 222:
		case 223:
		case 224:
		case 225:
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
		case 231:
		case 232:
		case 233:
		case 234:
		case 235:
		case 236:
		case 237:
		case 238:
		case 239:
		case 240:
		case 241:
		case 242:
		case 243:
		case 244:
		case 245:
		case 246:
		case 247:
		case 248:
		case 249:
		case 250:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26853;
			}
			break;
		
		case 251:
		case 252:
		case 253:
		case 254:
		case 255:
		case 256:
		case 257:
		case 258:
		case 259:
		case 260:
		case 261:
		case 262:
		case 263:
			if (func_769(iParam0))
			{
				return 0;
			}
			else
			{
				return Global_262145.f_26851;
			}
			break;
		
		case 264:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 271:
		case 272:
		case 273:
		case 274:
		case 275:
		case 276:
		case 277:
		case 278:
		case 279:
		case 280:
		case 281:
		case 282:
		case 283:
		case 284:
		case 285:
		case 286:
		case 287:
		case 288:
		case 289:
			return Global_262145.f_26851;
			break;
	}
	return 0;
}

int func_775(int iParam0)//Position - 0x3F9BB
{
	switch (iParam0)
	{
		case 0:
			return 0;
		
		case 8:
			return 1;
		
		case 12:
			return 2;
		
		case 16:
			return 3;
		
		case 1:
			return 4;
		
		case 5:
			return 5;
		
		case 9:
			return 6;
		
		case 13:
			return 7;
		
		case 17:
			return 8;
		
		case 2:
			return 9;
		
		case 6:
			return 10;
		
		case 14:
			return 11;
		
		case 19:
			return 12;
		
		case 3:
			return 13;
		
		case 7:
			return 14;
		
		case 10:
			return 15;
		
		case 15:
			return 16;
		
		case 11:
			return 17;
		
		case 18:
			return 18;
		
		case 4:
			return 19;
		
		default:
	}
	return -1;
}

void func_776()//Position - 0x3FA9F
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(func_777(PLAYER::PLAYER_ID())))
	{
		PED::DETACH_SYNCHRONIZED_SCENE(func_777(PLAYER::PLAYER_ID()));
		NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(func_777(PLAYER::PLAYER_ID()));
		func_99(-1);
	}
}

int func_777(int iParam0)//Position - 0x3FAD3
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_111[iParam0 /*5*/].f_2;
}

int func_778()//Position - 0x3FAF0
{
	if (((SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 128f)) != 0 || SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 128f)) != 0) || SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 128f)) != 0) || SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 128f)) != 0)
	{
		return 1;
	}
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 33) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 32))
		{
			return 1;
		}
	}
	return 0;
}

int func_779()//Position - 0x3FB81
{
	int iVar0;
	int iVar1;
	
	iVar0 = 12;
	iVar1 = func_807(PLAYER::PLAYER_ID());
	switch (iVar1)
	{
		case 10:
		case 15:
		case 14:
		case 19:
			iVar0 = 12;
			break;
		
		case 18:
			iVar0 = 13;
			break;
		
		default:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_780(bool bParam0)//Position - 0x3FBD3
{
	func_791(bParam0);
	func_782(bParam0);
	func_781();
}

void func_781()//Position - 0x3FBEB
{
	if (Local_112.f_45 != 10)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_72))
		{
			ENTITY::SET_ENTITY_ROTATION(Local_112.f_72, 0f, Local_112.f_18, 0f, 2, true);
		}
	}
}

void func_782(bool bParam0)//Position - 0x3FC1B
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (!func_42(3))
	{
		Local_112.f_25 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), Local_112.f_16);
		Local_112.f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), func_790(&(Local_112.f_16), bParam0));
		func_41(3);
	}
	iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_112.f_25));
	fVar1 = (1f - ((SYSTEM::TO_FLOAT(iVar0) / IntToFloat(Local_112.f_16)) * 1f));
	if (fVar1 < 0f)
	{
		fVar1 = 0f;
	}
	else if (fVar1 > 1f)
	{
		fVar1 = 1f;
	}
	fVar2 = SYSTEM::POW((1f - fVar1), 3f);
	fVar3 = (1f - fVar2);
	Local_112.f_18 = func_789(Local_112.f_19, Local_112.f_20, fVar3);
	Local_112.f_21 = func_789(Local_112.f_19, Local_112.f_20, fVar3);
	if (Local_112.f_18 > IntToFloat((360 * Local_112.f_9)))
	{
		Local_112.f_9++;
	}
	if (Local_112.f_21 > (IntToFloat(Local_112.f_13 + 1) * SYSTEM::TO_FLOAT(18)))
	{
		Local_112.f_13++;
	}
	Local_112.f_14 = (Local_112.f_13 % 20);
	if (!func_42(17) && PLAYER::PLAYER_ID() == Local_110.f_0)
	{
		if (!NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_112.f_26))
		{
			func_809(func_779(), 0, 0, 1, 0);
			func_41(17);
		}
	}
	if (!NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_112.f_25))
	{
		func_788();
		Local_112.f_17 = 0;
		func_86();
		if (PLAYER::PLAYER_ID() == Local_110.f_0)
		{
			func_783();
			func_78(10);
		}
		else
		{
			func_78(17);
		}
	}
}

void func_783()//Position - 0x3FD97
{
	char* sVar0;
	float fVar1;
	
	func_787(&sVar0, &fVar1);
	func_786(fVar1);
	func_784(func_162(&sVar0));
}

void func_784(char* sParam0)//Position - 0x3FDB7
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_112.f_483))
	{
		Local_112.f_483 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(Local_112.f_483, sParam0, func_785(), "dlc_vw_casino_lucky_wheel_sounds", true, 0, false);
	}
}

Vector3 func_785()//Position - 0x3FDED
{
	return 1111.052f, 229.8579f, -49.133f;
}

void func_786(float fParam0)//Position - 0x3FE04
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_112.f_482))
	{
		Local_112.f_482 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(Local_112.f_482, "Win", func_785(), "dlc_vw_casino_lucky_wheel_sounds", true, 0, false);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_112.f_482, "winSize", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_112.f_482, "winSize", fParam0);
	}
}

void func_787(char* sParam0, var uParam1)//Position - 0x3FE5F
{
	int iVar0;
	
	iVar0 = func_807(PLAYER::PLAYER_ID());
	switch (iVar0)
	{
		case 1:
		case 17:
		case 5:
		case 9:
		case 13:
			StringCopy(sParam0, "Win_RP", 16);
			*uParam1 = 0f;
			break;
		
		case 2:
		case 6:
		case 14:
		case 4:
			StringCopy(sParam0, "Win_Cash", 16);
			*uParam1 = 0f;
			break;
		
		case 19:
			StringCopy(sParam0, "Win_Cash", 16);
			*uParam1 = 1f;
			break;
		
		case 3:
		case 7:
		case 10:
			StringCopy(sParam0, "Win_Chips", 16);
			*uParam1 = 0f;
			break;
		
		case 15:
			StringCopy(sParam0, "Win_Chips", 16);
			*uParam1 = 1f;
			break;
		
		case 11:
			StringCopy(sParam0, "Win_Mystery", 16);
			*uParam1 = 0f;
			break;
		
		case 18:
			StringCopy(sParam0, "Win_Car", 16);
			*uParam1 = 1f;
			break;
		
		default:
			StringCopy(sParam0, "Win_Clothes", 16);
			*uParam1 = 0f;
			break;
	}
}

void func_788()//Position - 0x3FF50
{
	Local_112.f_18 = Local_112.f_20;
	Local_112.f_19 = Local_112.f_18;
	Local_112.f_10 = func_807(PLAYER::PLAYER_ID());
	func_821(Local_112.f_10, 0);
	Local_112.f_14 = func_807(PLAYER::PLAYER_ID());
	Local_112.f_7 = Local_112.f_14;
	func_77(3);
	Local_112.f_13 = Local_112.f_12;
}

float func_789(float fParam0, float fParam1, float fParam2)//Position - 0x3FFA9
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_790(var uParam0, bool bParam1)//Position - 0x3FFBE
{
	int iVar0;
	int iVar1;
	
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		iVar1 = Local_110.f_0;
	}
	switch (func_819(iVar1))
	{
		case 0:
			iVar0 = (*uParam0 - 2400);
			break;
		
		case 1:
			iVar0 = (*uParam0 - 2300);
			break;
		
		case 2:
			iVar0 = (*uParam0 - 2000);
			break;
	}
	if (iVar0 < 0)
	{
		iVar0 = *uParam0;
	}
	return iVar0;
}

void func_791(bool bParam0)//Position - 0x40025
{
	int iVar0;
	
	if (func_42(2))
	{
		return;
	}
	iVar0 = func_797();
	Local_112.f_12 = (iVar0 + Local_112.f_8 * 20);
	Local_112.f_12 = (Local_112.f_12 + func_796(bParam0));
	Local_112.f_13 = Local_112.f_14;
	Local_112.f_20 = func_792(bParam0);
	Local_112.f_16 = (Local_112.f_15 * Local_112.f_12);
	func_41(2);
}

float func_792(bool bParam0)//Position - 0x40088
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	
	fVar0 = (IntToFloat(Local_112.f_12) * SYSTEM::TO_FLOAT(18));
	if (fVar0 < 180f)
	{
		fVar0 = (fVar0 + 360f);
		Local_112.f_12 += 20;
	}
	iVar1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_112.f_72, "Base_pivot");
	Var2 = { ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(Local_112.f_72, iVar1) };
	fVar3 = func_794(Var2.f_1);
	iVar4 = SYSTEM::FLOOR((fVar3 / 18f));
	fVar5 = SYSTEM::TO_FLOAT(iVar4 * 18);
	fVar6 = (360f - fVar5);
	fVar7 = MISC::ABSF((fVar3 - fVar5));
	fVar0 = ((fVar0 - fVar6) - fVar7);
	iVar8 = func_819(PLAYER::PLAYER_ID());
	if (bParam0)
	{
		iVar8 = func_819(Local_110.f_0);
	}
	iVar9 = SYSTEM::ROUND((fVar0 / 18f));
	fVar0 = ((SYSTEM::TO_FLOAT(iVar9 * 18) + func_793(iVar8)) + IntToFloat(Local_112.f_10 * 18));
	fVar10 = (fVar0 * -1f);
	return fVar10;
}

float func_793(int iParam0)//Position - 0x40166
{
	if (func_80(PLAYER::PLAYER_PED_ID()))
	{
		switch (iParam0)
		{
			case 0:
				return 0.4746f;
			
			case 1:
				return ((SYSTEM::TO_FLOAT(18) * 2f) - 3.4757f);
			
			case 2:
				return (SYSTEM::TO_FLOAT(4) + 1.9002f);
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return (SYSTEM::TO_FLOAT(4) + 1.3709f);
			
			case 1:
				return (SYSTEM::TO_FLOAT(4) + 3.5184f);
			
			case 2:
				return (SYSTEM::TO_FLOAT(18) + 14.2192f);
			}
		
		default:
	}
	return 0f;
}

float func_794(float fParam0)//Position - 0x40201
{
	fParam0 = func_795(fParam0);
	if (fParam0 < 0f)
	{
		return (360f + fParam0);
	}
	return fParam0;
}

float func_795(float fParam0)//Position - 0x40225
{
	while (fParam0 > 180f)
	{
		fParam0 = (fParam0 - 360f);
	}
	while (fParam0 < -180f)
	{
		fParam0 = (fParam0 + 360f);
	}
	return fParam0;
}

int func_796(bool bParam0)//Position - 0x4025F
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		iVar0 = Local_110.f_0;
	}
	switch (func_819(iVar0))
	{
		case 1:
			if (Local_112.f_12 <= 30)
			{
				return 20;
			}
			break;
	}
	return 0;
}

int func_797()//Position - 0x4029A
{
	int iVar0;
	int iVar1;
	
	if (Local_112.f_14 > func_807(PLAYER::PLAYER_ID()))
	{
		iVar1 = (20 - Local_112.f_14);
		iVar0 = (iVar1 + func_807(PLAYER::PLAYER_ID()));
	}
	else
	{
		iVar0 = (func_807(PLAYER::PLAYER_ID()) - Local_112.f_14);
	}
	return iVar0;
}

int func_798(bool bParam0)//Position - 0x402DE
{
	char* sVar0;
	char* sVar1;
	float fVar2;
	float fVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_112.f_72))
	{
		if (!bParam0)
		{
			sVar0 = func_154(func_819(PLAYER::PLAYER_ID()));
		}
		else
		{
			sVar0 = func_154(func_819(Local_110.f_0));
		}
		sVar1 = func_79();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_112.f_72, sVar1, sVar0, 3))
			{
				fVar2 = 1f;
				fVar3 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_112.f_72, sVar1, sVar0);
				if (fVar3 == fVar2)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_799(int iParam0)//Position - 0x40361
{
	switch (iParam0)
	{
		case 0:
			return 8;
		
		case 1:
			return 9;
		
		case 2:
			return 10;
		
		default:
	}
	return -1;
}

int func_800(int iParam0, bool bParam1, bool bParam2)//Position - 0x40392
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	float fVar4;
	int iVar5;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		iVar0 = PLAYER::GET_PLAYER_PED(Local_110.f_0);
		iVar1 = Local_110.f_0;
	}
	if (func_127(iVar0))
	{
		sVar2 = func_802(iParam0);
		sVar3 = func_79();
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, sVar3, sVar2, 3))
			{
				fVar4 = func_801(iParam0);
				iVar5 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(func_777(iVar1));
				if (((!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar5) || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar5) >= fVar4) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("BLEND_OUT"))) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, MISC::GET_HASH_KEY("EARLY_OUT")))
				{
					if (bParam2)
					{
						func_776();
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

float func_801(int iParam0)//Position - 0x40455
{
	float fVar0;
	
	fVar0 = 0.96f;
	switch (iParam0)
	{
		case 2:
			if (func_80(PLAYER::PLAYER_PED_ID()))
			{
				fVar0 = 0.7f;
			}
			break;
	}
	return fVar0;
}

char* func_802(int iParam0)//Position - 0x40488
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Enter_to_ArmRaisedIDLE";
			break;
		
		case 1:
			sVar0 = "ArmRaisedIDLE";
			break;
		
		case 2:
			sVar0 = "ArmRaisedIDLE_to_SpinReadyIDLE";
			break;
		
		case 3:
			sVar0 = "SpinReadyIDLE";
			break;
		
		case 4:
			sVar0 = "SpinStart_ArmRaisedIDLE_to_BaseIDLE";
			break;
		
		case 5:
			if (func_42(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_low";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_Low";
			}
			break;
		
		case 6:
			if (func_42(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_med";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_Med";
			}
			break;
		
		case 7:
			if (func_42(16))
			{
				sVar0 = "spinreadyidle_to_spinningidle_high";
			}
			else
			{
				sVar0 = "ArmRaisedIDLE_to_SpinningIDLE_High";
			}
			break;
		
		case 8:
			sVar0 = "SpinningIDLE_Low";
			break;
		
		case 9:
			sVar0 = "SpinningIDLE_Medium";
			break;
		
		case 10:
			sVar0 = "SpinningIDLE_High";
			break;
		
		case 11:
			sVar0 = "Win";
			break;
		
		case 12:
			sVar0 = "Win_Big";
			break;
		
		case 13:
			sVar0 = "Win_Huge";
			break;
		
		case 14:
			sVar0 = "Exit_to_Standing";
			break;
		
		case 15:
			sVar0 = "SpinReadyIDLE_to_ArmRaisedIDLE";
			break;
	}
	return sVar0;
}

void func_803(float fParam0)//Position - 0x405BF
{
	bool bVar0;
	
	if (func_42(27))
	{
		if (Local_112.f_481 == -1 && AUDIO::HAS_SOUND_FINISHED(Local_112.f_481))
		{
			Local_112.f_481 = AUDIO::GET_SOUND_ID();
			bVar0 = true;
			if (fParam0 > 0.5f)
			{
				bVar0 = false;
			}
			AUDIO::PLAY_SOUND_FROM_COORD(Local_112.f_481, "Spin_Single_Ticks", func_785(), "dlc_vw_casino_lucky_wheel_sounds", bVar0, 0, false);
			AUDIO::SET_VARIABLE_ON_SOUND(Local_112.f_481, "spinSpeed", fParam0);
		}
		else
		{
			AUDIO::STOP_SOUND(Local_112.f_481);
			AUDIO::RELEASE_SOUND_ID(Local_112.f_481);
			Local_112.f_481 = -1;
			func_803(fParam0);
		}
	}
}

void func_804(float fParam0)//Position - 0x40653
{
	if (AUDIO::HAS_SOUND_FINISHED(Local_112.f_480) && Local_112.f_480 == -1)
	{
		Local_112.f_480 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FROM_COORD(Local_112.f_480, "Spin_Start", func_785(), "dlc_vw_casino_lucky_wheel_sounds", true, 0, false);
		AUDIO::SET_VARIABLE_ON_SOUND(Local_112.f_480, "spinSpeed", fParam0);
	}
	else
	{
		AUDIO::SET_VARIABLE_ON_SOUND(Local_112.f_480, "spinSpeed", fParam0);
	}
}

void func_805()//Position - 0x406BB
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	
	iVar0 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(Local_112.f_72, "Base_pivot");
	Var1 = { ENTITY::_GET_ENTITY_BONE_ROTATION_LOCAL(Local_112.f_72, iVar0) };
	fVar2 = func_794(Var1.f_1);
	Var3 = { ENTITY::GET_ENTITY_ROTATION(Local_112.f_72, 2) };
	fVar4 = func_794(Var3.f_1);
	if (!func_798(0))
	{
		fVar5 = fVar2;
	}
	else if (fVar4 == 0f && fVar2 != 0f)
	{
		fVar5 = fVar2;
	}
	else
	{
		fVar5 = fVar4;
	}
	if (!func_42(26))
	{
		Local_112.f_479 = fVar5;
		func_41(26);
	}
	fVar6 = MISC::ABSF((fVar5 - Local_112.f_479));
	if (fVar6 > 100f)
	{
		fVar6 = MISC::ABSF((fVar5 - (360f + Local_112.f_479)));
	}
	iVar7 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_112.f_25));
	fVar8 = (SYSTEM::TO_FLOAT(iVar7) / IntToFloat(Local_112.f_16));
	if (fVar8 < 0f)
	{
		fVar8 = 0f;
	}
	else if (fVar8 > 1f)
	{
		fVar8 = 1f;
	}
	if (func_806() == 0)
	{
		fVar8 = (fVar8 / 2f);
	}
	Local_112.f_478 = fVar8;
	if (fVar6 >= 18f)
	{
		func_41(27);
		Local_112.f_479 = fVar5;
	}
	else
	{
		func_77(27);
	}
	Local_112.f_478 = fVar8;
}

int func_806()//Position - 0x407EE
{
	if (func_157(PLAYER::PLAYER_ID()) > 3000)
	{
		return 2;
	}
	else if (func_157(PLAYER::PLAYER_ID()) > 1500)
	{
		return 1;
	}
	return 0;
}

int func_807(int iParam0)//Position - 0x4081E
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return Local_111[iParam0 /*5*/];
}

void func_808(int iParam0)//Position - 0x40839
{
	int iVar0;
	
	if (Global_262145.f_9035)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2359296[func_184() /*5567*/].f_681.f_4241[iVar0 /*3*/] == iParam0)
		{
			if (Global_1574742.f_1[iVar0] == -1)
			{
				Global_1574742.f_1[iVar0] = iParam0;
				Global_1574742 = 1;
				return;
			}
		}
		iVar0++;
	}
}

void func_809(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x4089C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	int iVar4;
	char cVar5[64];
	char* sVar6;
	
	if (bParam3)
	{
	}
	Local_112.f_22 = func_802(iParam0);
	Var0 = { func_816(bParam1) };
	Var1 = { 0f, 0f, func_811(bParam1) };
	fVar2 = 2f;
	fVar3 = -2f;
	if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 7)
	{
		fVar2 = 8f;
		fVar3 = -1.5f;
	}
	if ((iParam0 == 8 || iParam0 == 9) || iParam0 == 10)
	{
		fVar2 = 1.5f;
	}
	if (func_80(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 3)
		{
			fVar2 = 4f;
			fVar3 = -4f;
		}
	}
	if (iParam0 == 2 || iParam0 == 1)
	{
		fVar2 = 4f;
		fVar3 = -4f;
	}
	if (iParam0 == 14)
	{
		fVar2 = 4f;
		fVar3 = -4f;
	}
	iVar4 = 5;
	if (bParam2)
	{
		iVar4 = 69;
	}
	func_99(NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Var0, Var1, 2, bParam4, bParam2, 1f, 0f, 1f));
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), func_777(PLAYER::PLAYER_ID()), Local_112.f_23, Local_112.f_22, fVar2, fVar3, iVar4, 0, 1000f, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(func_777(PLAYER::PLAYER_ID()));
	StringCopy(&cVar5, Local_112.f_22, 64);
	StringConCat(&cVar5, "_Facial", 64);
	PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), &cVar5, Local_112.f_23);
	if (func_810(Local_112.f_22))
	{
		sVar6 = func_154(func_819(PLAYER::PLAYER_ID()));
		ENTITY::SET_ENTITY_ROTATION(Local_112.f_72, 0f, 0f, 0f, 2, true);
		ENTITY::PLAY_ENTITY_ANIM(Local_112.f_72, sVar6, Local_112.f_23, 1000f, false, true, false, 0f, 2);
		ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_112.f_72);
	}
}

int func_810(char* sParam0)//Position - 0x40A34
{
	if ((MISC::ARE_STRINGS_EQUAL(sParam0, func_802(7)) || MISC::ARE_STRINGS_EQUAL(sParam0, func_802(6))) || MISC::ARE_STRINGS_EQUAL(sParam0, func_802(5)))
	{
		return 1;
	}
	return 0;
}

float func_811(bool bParam0)//Position - 0x40A71
{
	if (bParam0)
	{
		return func_813();
	}
	else
	{
		return func_812();
	}
	return 0f;
}

float func_812()//Position - 0x40A90
{
	return 0f;
}

var func_813()//Position - 0x40A99
{
	struct<3> Var0;
	
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(Local_112.f_23, Local_112.f_22, func_814(Local_112.f_22), 0f, 0f, 0f, 0f, 2) };
	return Var0.f_2;
}

Vector3 func_814(char* sParam0)//Position - 0x40AC5
{
	struct<3> Var0;
	int iVar1;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	iVar1 = func_815(sParam0);
	if (iVar1 == 0)
	{
		Var0 = { func_785() };
	}
	return Var0;
}

int func_815(char* sParam0)//Position - 0x40AF4
{
	int iVar0;
	
	iVar0 = -1;
	if (MISC::ARE_STRINGS_EQUAL(sParam0, "Enter_to_ArmRaisedIDLE"))
	{
		iVar0 = 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE"))
	{
		iVar0 = 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinReadyIDLE"))
	{
		iVar0 = 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinReadyIDLE"))
	{
		iVar0 = 3;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinStart_ArmRaisedIDLE_to_BaseIDLE"))
	{
		iVar0 = 4;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "spinreadyidle_to_spinningidle_low") || MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_Low"))
	{
		iVar0 = 5;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "spinreadyidle_to_spinningidle_med") || MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_Med"))
	{
		iVar0 = 6;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "spinreadyidle_to_spinningidle_high") || MISC::ARE_STRINGS_EQUAL(sParam0, "ArmRaisedIDLE_to_SpinningIDLE_High"))
	{
		iVar0 = 7;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinningIDLE_Low"))
	{
		iVar0 = 8;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinningIDLE_Med"))
	{
		iVar0 = 9;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinningIDLE_High"))
	{
		iVar0 = 10;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Win"))
	{
		iVar0 = 11;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Win_Big"))
	{
		iVar0 = 12;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Win_Huge"))
	{
		iVar0 = 13;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "Exit_to_Standing"))
	{
		iVar0 = 14;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "SpinReadyIDLE_to_ArmRaisedIDLE"))
	{
		iVar0 = 15;
	}
	return iVar0;
}

Vector3 func_816(bool bParam0)//Position - 0x40C66
{
	if (bParam0)
	{
		return func_817();
	}
	else
	{
		return func_55();
	}
	return 0f, 0f, 0f;
}

Vector3 func_817()//Position - 0x40C87
{
	return PED::GET_ANIM_INITIAL_OFFSET_POSITION(Local_112.f_23, Local_112.f_22, func_55(), 0f, 0f, 0f, 0f, 2);
}

int func_818(int iParam0)//Position - 0x40CA6
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		default:
	}
	return -1;
}

int func_819(int iParam0)//Position - 0x40CD4
{
	if (iParam0 == func_8())
	{
		return -1;
	}
	return Local_111[iParam0 /*5*/].f_4;
}

void func_820(bool bParam0)//Position - 0x40CF1
{
	if (PLAYER::PLAYER_ID() != func_8())
	{
		if (bParam0)
		{
			if (!BitTest(Local_111[PLAYER::PLAYER_ID() /*5*/].f_1, 0))
			{
				MISC::SET_BIT(&(Local_111[PLAYER::PLAYER_ID() /*5*/].f_1), 0);
			}
		}
		else if (BitTest(Local_111[PLAYER::PLAYER_ID() /*5*/].f_1, 0))
		{
			MISC::CLEAR_BIT(&(Local_111[PLAYER::PLAYER_ID() /*5*/].f_1), 0);
		}
	}
}

void func_821(var uParam0, int iParam1)//Position - 0x40D49
{
	struct<4> Var0;
	int iVar1;
	
	Var0.f_0 = 2057463666;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	Var0.f_3 = iParam1;
	iVar1 = func_243(1, 1);
	if (iVar1 != -1)
	{
		SCRIPT::_TRIGGER_SCRIPT_EVENT_2(1, &Var0, 4, iVar1);
	}
}

int func_822(int iParam0)//Position - 0x40D87
{
	if (iParam0 == func_8())
	{
		return 0;
	}
	return BitTest(Local_111[iParam0 /*5*/].f_1, 0);
}

void func_823()//Position - 0x40DA6
{
	if (!func_42(5))
	{
		Local_112.f_2 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_112.f_24));
		if (func_42(15))
		{
			func_77(15);
			func_826();
			func_41(5);
		}
		if (!NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Local_112.f_24) || func_825())
		{
			Local_112.f_2 = 0;
			if (func_824(3))
			{
			}