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
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0[122];
	int iVar123;
	int iVar124;
	int iVar125;
	bool bVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	int iVar131;
	int iVar132;
	bool bVar133;
	bool bVar134;
	bool bVar135;
	int iVar136;
	bool bVar137;
	bool bVar138;
	int iVar139;
	
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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
	{
		func_70();
	}
	func_69();
	func_68();
	Global_45130 = 0;
	iVar123 = func_61();
	iVar124 = func_61();
	iVar125 = 2000;
	Global_45132 = 1;
	bVar126 = true;
	while (true)
	{
		iVar127 = 0;
		if (bVar126)
		{
			if (BitTest(Global_114370.f_24989, (4 - 1)))
			{
				func_60(26);
				bVar126 = false;
			}
		}
		if (!Global_45131 && MISC::GET_GAME_TIMER() > Global_44473)
		{
			iVar127 = 0;
			while (iVar127 < 122)
			{
				if ((Global_48466[iVar127 /*46*/] && !Global_48466[iVar127 /*46*/].f_1) && !Global_48466[iVar127 /*46*/].f_45)
				{
					iVar0[iVar127] = (iVar0[iVar127] + iVar125);
					if (iVar0[iVar127] > Global_48466[iVar127 /*46*/].f_43)
					{
						if (func_34(7, 144, 2, -1, 0))
						{
							func_32(iVar127, 0);
							iVar0[iVar127] = 0;
							Global_45132 = 1;
						}
					}
				}
				SYSTEM::WAIT(0);
				iVar127++;
			}
			iVar123 = func_61();
			iVar128 = 0;
			iVar129 = 0;
			iVar130 = 0;
			func_20(iVar123, iVar124, &iVar129, &iVar129, &iVar128, &iVar129, &iVar129, &iVar129);
			if (iVar128 < 0)
			{
				iVar128 = (iVar128 * -1);
			}
			if (iVar128 > 0 && Global_20813.f_1 == 3)
			{
				iVar124 = iVar123;
				if (Global_55863 > 0)
				{
					iVar131 = Global_55863;
					iVar132 = 0;
					while (iVar131 != 0)
					{
						if ((Global_55864[iVar132 /*53*/].f_52 != 0 && iVar132 < 8) && Global_55864[iVar132 /*53*/].f_4)
						{
							Global_55864[iVar132 /*53*/].f_2 = (Global_55864[iVar132 /*53*/].f_2 - iVar128);
							bVar133 = false;
							bVar134 = false;
							bVar135 = false;
							iVar136 = 0;
							while (!bVar135)
							{
								if (Global_54441[iVar136 /*203*/].f_1 != Global_55864[iVar132 /*53*/].f_52)
								{
									iVar136++;
								}
								else
								{
									bVar134 = true;
									bVar135 = true;
								}
								if (iVar136 == 7)
								{
									bVar135 = true;
									Global_55864[iVar132 /*53*/].f_52 = 0;
									bVar133 = true;
								}
							}
							if (!bVar134)
							{
								bVar133 = true;
								Global_55864[iVar132 /*53*/].f_4 = 0;
							}
							else if (Global_55864[iVar132 /*53*/].f_2 < 1)
							{
								if (func_34(7, 145, 2, -1, 0))
								{
									bVar137 = false;
									if (Global_55864[iVar132 /*53*/].f_5 || Global_55864[iVar132 /*53*/].f_10 > 0)
									{
										bVar137 = true;
									}
									if (func_17(Global_55864[iVar132 /*53*/], Global_55864[iVar132 /*53*/].f_1, bVar137))
									{
										bVar138 = true;
										if (Global_55864[iVar132 /*53*/].f_10 > 0)
										{
											bVar138 = false;
										}
										if (Global_55864[iVar132 /*53*/].f_5)
										{
											func_16(Global_55864[iVar132 /*53*/], &(Global_55864[iVar132 /*53*/].f_6), bVar138);
										}
										if (Global_55864[iVar132 /*53*/].f_10 > 0)
										{
											iVar130 = 0;
											iVar130 = 0;
											while (iVar130 < Global_55864[iVar132 /*53*/].f_10)
											{
												func_15(Global_55864[iVar132 /*53*/], &(Global_55864[iVar132 /*53*/].f_11[iVar130 /*4*/]));
												iVar130++;
											}
										}
										if (bVar137 && !bVar138)
										{
											func_1(Global_55864[iVar132 /*53*/]);
										}
										func_60(Global_55864[iVar132 /*53*/]);
									}
									Global_55864[iVar132 /*53*/].f_52 = 0;
									Global_55864[iVar132 /*53*/].f_5 = 0;
									Global_55864[iVar132 /*53*/].f_2 = 0;
									bVar133 = true;
									Global_55864[iVar132 /*53*/].f_4 = 0;
								}
							}
							if (bVar133)
							{
								Global_55863 = (Global_55863 - 1);
							}
							iVar131 = (iVar131 - 1);
						}
						iVar132++;
						if (iVar132 == 8)
						{
							iVar131 = 0;
						}
						SYSTEM::WAIT(0);
					}
				}
			}
		}
		SYSTEM::WAIT(iVar125);
		Global_45133 = 0;
		Global_45134 = 0;
		Global_45135 = 0;
		iVar139 = Global_54079[0 /*120*/];
		if (iVar139 > 16)
		{
			iVar139 = 16;
		}
		iVar127 = 0;
		while (iVar127 < iVar139)
		{
			if (!Global_54079[0 /*120*/].f_69[iVar127])
			{
				Global_45133++;
			}
			iVar127++;
		}
		iVar139 = Global_54079[1 /*120*/];
		if (iVar139 > 16)
		{
			iVar139 = 16;
		}
		iVar127 = 0;
		while (iVar127 < iVar139)
		{
			if (!Global_54079[1 /*120*/].f_69[iVar127])
			{
				Global_45134++;
			}
			iVar127++;
		}
		iVar139 = Global_54079[2 /*120*/];
		if (iVar139 > 16)
		{
			iVar139 = 16;
		}
		iVar127 = 0;
		while (iVar127 < iVar139)
		{
			if (!Global_54079[2 /*120*/].f_69[iVar127])
			{
				Global_45135++;
			}
			iVar127++;
		}
		SYSTEM::WAIT(iVar125);
	}
}

void func_1(int iParam0)//Position - 0x439
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_14(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_54441[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_54441[iVar0 /*203*/].f_9 - 1);
	if (!Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_13(Global_45141[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1" /* GXT: You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented... */;
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3" /* GXT: Hello Franklin,~n~The Southern San Andreas Tourist Board Young Amateur Wildlife Photographer of the Year Competition is over.~n~Some of our photographers fell off cli... */;
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2" /* GXT: Dear contestant,~n~Thank you for your recent photographic submission. Our image licensing department is already maximizing its profit-making potential. And you're a step clos... */;
				break;
		}
		func_2(1, Global_45141[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_45141[iVar1 /*12*/].f_3)
		{
			case 0:
				func_2(0, Global_45141[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_2(1, Global_45141[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_2(2, Global_45141[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_54441[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_2(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)//Position - 0x7A5
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_6();
	bVar1 = false;
	StringCopy(&cVar2, func_5(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1" /* GXT: Dear Mr. De Santa, please find below your weekly income from owned properties:~n~ */);
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3" /* GXT: Dear Mr. Clinton, please find below your weekly income from owned properties:~n~ */);
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2" /* GXT: Dear Mr. Philips, please find below your weekly income from owned properties:~n~ */);
				break;
			
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_3(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_4(iParam1)), 0));
		}
		else
		{
			func_3(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_4(iParam1)), 0));
		}
		switch (Global_20813)
		{
			case 0:
				StringCopy(&Global_20802, "Phone_SoundSet_Michael", 24);
				Global_45133++;
				if (Global_45133 > 16)
				{
					Global_45133 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_20802, "Phone_SoundSet_Trevor", 24);
				Global_45135++;
				if (Global_45135 > 16)
				{
					Global_45135 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_20802, "Phone_SoundSet_Franklin", 24);
				Global_45134++;
				if (Global_45134 > 16)
				{
					Global_45134 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_20802, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20802, true);
	}
}

void func_3(int iParam0)//Position - 0x983
{
	Global_45136[Global_45140] = iParam0;
	Global_23224 = 1;
	Global_23223 = iParam0;
	Global_45140++;
	if (Global_45140 == 3)
	{
		Global_45140 = 0;
	}
}

char* func_4(int iParam0)//Position - 0x9B1
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0" /* GXT: Mike */;
		
		case 3:
			return "EMSTR_3" /* GXT: Jimmy */;
		
		case 1:
			return "EMSTR_6" /* GXT: Franklin */;
		
		case 2:
			return "EMSTR_9" /* GXT: Trevor */;
		
		case 4:
			return "EMSTR_12" /* GXT: Marnie */;
		
		case 5:
			return "EMSTR_29" /* GXT: Epsilon Store */;
		
		case 6:
			return "EMSTR_36" /* GXT: Maude */;
		
		case 7:
			return "EMSTR_39" /* GXT: Lester */;
		
		case 8:
			return "EMSTR_52" /* GXT: Maze Bank */;
		
		case 9:
			return "EMSTR_55" /* GXT: Fleeca */;
		
		case 10:
			return "EMSTR_58" /* GXT: Bank of Liberty */;
		
		case 11:
			return "EMSTR_78" /* GXT: Legendary Motorsport Sales */;
		
		case 12:
			return "EMSTR_81" /* GXT: Elitas Sales */;
		
		case 13:
			return "EMSTR_84" /* GXT: Cache & Carry */;
		
		case 14:
			return "EMSTR_87" /* GXT: DockTease */;
		
		case 15:
			return "EMSTR_106" /* GXT: LSC */;
		
		case 16:
			return "EMSTR_114" /* GXT: AMMU-NATION */;
		
		case 17:
			return "EMSTR_142" /* GXT: Christian Feltz */;
		
		case 18:
			return "EMSTR_145" /* GXT: Paige Harris */;
		
		case 19:
			return "EMSTR_152" /* GXT: Los Santos Tourist Info */;
		
		case 20:
			return "EMSTR_157" /* GXT: Rickie Luckens */;
		
		case 21:
			return "EMSTR_163" /* GXT: Minotaur Property Management */;
		
		case 22:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
		
		case 23:
			return "EMSTR_187" /* GXT: Vanilla Unicorn */;
		
		case 24:
			return "EMSTR_190" /* GXT: Dr Isiah Friedlander */;
		
		case 25:
			return "EMSTR_206" /* GXT: TRACEYHEARTSTEALER */;
		
		case 26:
			return "EMSTR_219" /* GXT: Dave Norton */;
		
		case 27:
			return "EMSTR_226" /* GXT: Amanda De Santa */;
		
		case 28:
			return "EMSTR_233" /* GXT: Donald Percival */;
		
		case 29:
			return "EMSTR_242" /* GXT: Ron */;
		
		case 30:
			return "EMSTR_249" /* GXT: Tanisha Marks */;
		
		case 31:
			return "EMSTR_262" /* GXT: Denise */;
		
		case 32:
			return "EMSTR_269" /* GXT: Lamar Davis */;
		
		case 33:
			return "EMSTR_319" /* GXT: Brad */;
		
		case 34:
			return "EMSTR_340" /* GXT: Patricia Madrazo */;
		
		case 35:
			return "EMSTR_348" /* GXT: Eileen Haworth */;
		
		case 36:
			return "EMSTR_182" /* GXT: Saeeda Kadam */;
		
		case 37:
			return "EMSTR_357" /* GXT: Gray Nicholson */;
		
		case 38:
			return "EMSTR_360" /* GXT: Nigel */;
		
		case 39:
			return "EMSTR_369" /* GXT: Hookies */;
		
		case 40:
			return "EMSTR_376" /* GXT: Towing Impound */;
		
		case 41:
			return "EMSTR_379" /* GXT: Downtown Cab Co, */;
		
		case 42:
			return "EMSTR_382" /* GXT: McKenzie Field Hangar */;
		
		case 43:
			return "EMSTR_384" /* GXT: Sonar Collections Dock */;
		
		case 44:
			return "EMSTR_387" /* GXT: Los Santos Customs */;
		
		case 45:
			return "EMSTR_390" /* GXT: Cinema Doppler */;
		
		case 46:
			return "EMSTR_393" /* GXT: Ten Cent Theater */;
		
		case 47:
			return "EMSTR_396" /* GXT: Tivoli Cinema */;
		
		case 48:
			return "EMSTR_399" /* GXT: Los Santos Golf Club */;
		
		case 49:
			return "EMSTR_402" /* GXT: Car Scrap Yard */;
		
		case 50:
			return "EMSTR_405" /* GXT: Smoke on the Water */;
		
		case 51:
			return "EMSTR_408" /* GXT: Tequi-la-la */;
		
		case 52:
			return "EMSTR_411" /* GXT: Pitchers */;
		
		case 53:
			return "EMSTR_414" /* GXT: The Hen House */;
		
		case 54:
			return "EMSTR_465" /* GXT: Pedal & Metal Sales */;
		
		case 55:
			return "EMSTR_468" /* GXT: SSA Super Autos Sales */;
		
		case 56:
			return "EMSTR_489" /* GXT: Hush Smush */;
		
		case 57:
			return "EMSTR_492" /* GXT: foxymama21 */;
		
		case 58:
			return "EMSTR_495" /* GXT: Altarego12 */;
		
		case 59:
			return "EMSTR_498" /* GXT: BadKitty11 */;
		
		case 60:
			return "EMSTR_501" /* GXT: 7yearbitch */;
		
		case 61:
			return "EMSTR_504" /* GXT: Froggy69 */;
		
		case 62:
			return "EMSTR_507" /* GXT: Misscuddles */;
		
		case 63:
			return "EMSTR_640" /* GXT: Off-Road Events */;
		
		case 64:
			return "EMSTR_643" /* GXT: DockTease */;
		
		case 65:
			return "EMSTR_652" /* GXT: Brother Adrian */;
		
		default:
	}
	return "NULL";
}

char* func_5(int iParam0, int iParam1)//Position - 0xD17
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[0 /*29*/].f_7));
		
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[1 /*29*/].f_7));
		
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[2 /*29*/].f_7));
		
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[12 /*29*/].f_7));
		
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[60 /*29*/].f_7));
		
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[62 /*29*/].f_7));
		
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[14 /*29*/].f_7));
		
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[97 /*29*/].f_7));
		
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[99 /*29*/].f_7));
		
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[15 /*29*/].f_7));
		
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[30 /*29*/].f_7));
		
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[17 /*29*/].f_7));
		
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[20 /*29*/].f_7));
		
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[43 /*29*/].f_7));
		
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[44 /*29*/].f_7));
		
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[19 /*29*/].f_7));
		
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[40 /*29*/].f_7));
		
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381" /* GXT: CHAR_SAEEDA */);
		
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[122 /*29*/].f_7));
		
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[125 /*29*/].f_7));
		
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[113 /*29*/].f_7));
		
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[126 /*29*/].f_7));
		
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[127 /*29*/].f_7));
		
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[124 /*29*/].f_7));
		
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[114 /*29*/].f_7));
		
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[115 /*29*/].f_7));
		
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[116 /*29*/].f_7));
		
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[123 /*29*/].f_7));
		
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[117 /*29*/].f_7));
		
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[118 /*29*/].f_7));
		
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[119 /*29*/].f_7));
		
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[120 /*29*/].f_7));
		
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2139[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

int func_6()//Position - 0x10E2
{
	func_7();
	return Global_114370.f_2366.f_539.f_4321;
}

void func_7()//Position - 0x10FB
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_11(Global_114370.f_2366.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_10(PLAYER::PLAYER_PED_ID());
			if (func_9(iVar0) && (!func_8(14) || Global_113320))
			{
				if (Global_114370.f_2366.f_539.f_4321 != iVar0 && func_9(Global_114370.f_2366.f_539.f_4321))
				{
					Global_114370.f_2366.f_539.f_4322 = Global_114370.f_2366.f_539.f_4321;
				}
				Global_114370.f_2366.f_539.f_4323 = iVar0;
				Global_114370.f_2366.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114370.f_2366.f_539.f_4321 != 145)
			{
				Global_114370.f_2366.f_539.f_4323 = Global_114370.f_2366.f_539.f_4321;
			}
			return;
		}
	}
	Global_114370.f_2366.f_539.f_4321 = 145;
}

bool func_8(int iParam0)//Position - 0x11F8
{
	return Global_43922 == iParam0;
}

bool func_9(int iParam0)//Position - 0x1206
{
	return iParam0 < 3;
}

int func_10(int iParam0)//Position - 0x1212
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_11(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_11(int iParam0)//Position - 0x124F
{
	if (func_9(iParam0))
	{
		return func_12(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_12(int iParam0)//Position - 0x1274
{
	return Global_2139[iParam0 /*29*/];
}

struct<16> func_13(int iParam0)//Position - 0x1283
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_14(int iParam0)//Position - 0x12B4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_54441[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_54441[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_54441[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_15(int iParam0, char* sParam1)//Position - 0x1318
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_14(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_54441[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

void func_16(int iParam0, char* sParam1, bool bParam2)//Position - 0x13CD
{
	int iVar0;
	
	iVar0 = func_14(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_54441[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_54441[iVar0 /*203*/].f_10[(Global_54441[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_1(iParam0);
	}
}

int func_17(int iParam0, int iParam1, bool bParam2)//Position - 0x14F4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_19(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_54441[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_54441[iVar0 /*203*/].f_2 = iParam0;
	Global_54441[iVar0 /*203*/].f_10[Global_54441[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_54441[iVar0 /*203*/].f_10[Global_54441[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_54441[iVar0 /*203*/].f_10[Global_54441[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_54441[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_54441[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_54441[iVar0 /*203*/].f_4[iVar1] == Global_45141[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_54441[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_54441[iVar0 /*203*/].f_4[Global_54441[iVar0 /*203*/].f_3] = Global_45141[iParam1 /*12*/].f_3;
			Global_54441[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_54441[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_54441[iVar0 /*203*/].f_4[iVar1] == Global_45141[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_54441[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_54441[iVar0 /*203*/].f_4[Global_54441[iVar0 /*203*/].f_3] = Global_45141[iParam1 /*12*/].f_2;
			Global_54441[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_54441[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_54441[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_18(Global_54441[iVar0 /*203*/].f_4[iVar1], Global_54441[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_18(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x16F0
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_48466[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_48466[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_13(Global_45141[iVar20 /*12*/].f_1) };
		if (Global_45141[iVar20 /*12*/].f_2 == iParam0 && !Global_45141[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_45141[iVar20 /*12*/].f_2;
		iVar0 = Global_54079[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_54079[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_45133 = (Global_45133 - 1);
						if (Global_45133 < 0)
						{
							Global_45133 = 0;
						}
						break;
					
					case 1:
						Global_45134 = (Global_45134 - 1);
						if (Global_45134 < 0)
						{
							Global_45134 = 0;
						}
						break;
					
					case 2:
						Global_45135 = (Global_45135 - 1);
						if (Global_45135 < 0)
						{
							Global_45135 = 0;
						}
						break;
					}
				}
		}
		Global_54079[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_54079[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_54079[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_54079[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_54079[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_54079[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_54079[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_54079[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_45133 = (Global_45133 - 1);
						if (Global_45133 < 0)
						{
							Global_45133 = 0;
						}
						break;
					
					case 1:
						Global_45134 = (Global_45134 - 1);
						if (Global_45134 < 0)
						{
							Global_45134 = 0;
						}
						break;
					
					case 2:
						Global_45135 = (Global_45135 - 1);
						if (Global_45135 < 0)
						{
							Global_45135 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_54441[iVar24 /*203*/].f_1 == iParam1 && Global_54441[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_54079[iParam0 /*120*/].f_18[iVar0] = Global_54441[iVar23 /*203*/].f_1;
		Global_54079[iParam0 /*120*/].f_1[iVar0] = (Global_54441[iVar23 /*203*/].f_9 - 1);
		Global_54079[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_54079[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_54079[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_54079[iParam0 /*120*/]++;
		iVar25 = Global_54079[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_54441[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_45141[iVar26 /*12*/].f_2;
		if (Global_54441[iVar23 /*203*/].f_10[(Global_54441[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_54441[iVar23 /*203*/].f_10[(Global_54441[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_13(Global_45141[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_54079[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_2(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_2(1, iVar1, iVar2, "PW_FEED_EM_1" /* GXT: You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented... */, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_2(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_2(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_19(int iParam0, bool bParam1)//Position - 0x1AC3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_14(iParam0);
	if (iVar0 > -1)
	{
		if (Global_54441[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_54441[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_54441[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_54441[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_54441[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_54441[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_54441[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_54441[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_54079[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_54079[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_54079[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_54079[iVar6 /*120*/].f_18[iVar8] == Global_54441[iVar4 /*203*/].f_1)
							{
								if (Global_54079[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_45133 = (Global_45133 - 1);
											break;
										
										case 1:
											Global_45134 = (Global_45134 - 1);
											break;
										
										case 2:
											Global_45135 = (Global_45135 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_54441[iVar4 /*203*/].f_2 = iParam0;
	Global_54441[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_54441[iVar4 /*203*/] = 1;
	}
	Global_114370.f_21040.f_310++;
	if (Global_114370.f_21040.f_310 == 0)
	{
		Global_114370.f_21040.f_310 = 1;
	}
	Global_54441[iVar4 /*203*/].f_1 = Global_114370.f_21040.f_310;
	Global_54441[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x1CDB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_30(iParam0, iParam1))
	{
		iVar0 = func_29(iParam1);
		iVar1 = func_27(iParam0);
		iVar2 = (func_27(iParam0) - func_27(iParam1));
		iVar3 = (func_29(iParam0) - func_29(iParam1));
		iVar4 = (func_26(iParam0) - func_26(iParam1));
		iVar5 = (func_25(iParam0) - func_25(iParam1));
		iVar6 = (func_24(iParam0) - func_24(iParam1));
		iVar7 = (func_23(iParam0) - func_23(iParam1));
	}
	else
	{
		iVar0 = func_29(iParam0);
		iVar1 = func_27(iParam1);
		iVar2 = (func_27(iParam1) - func_27(iParam0));
		iVar3 = (func_29(iParam1) - func_29(iParam0));
		iVar4 = (func_26(iParam1) - func_26(iParam0));
		iVar5 = (func_25(iParam1) - func_25(iParam0));
		iVar6 = (func_24(iParam1) - func_24(iParam0));
		iVar7 = (func_23(iParam1) - func_23(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_22(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_21(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

float func_21(float fParam0, float fParam1, float fParam2)//Position - 0x1EDC
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_22(int iParam0, int iParam1)//Position - 0x1F1E
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_23(int iParam0)//Position - 0x1FC0
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_24(int iParam0)//Position - 0x1FD3
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_25(int iParam0)//Position - 0x1FE6
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_26(int iParam0)//Position - 0x1FF9
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_27(int iParam0)//Position - 0x200B
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_28(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_28(bool bParam0, int iParam1, int iParam2)//Position - 0x202D
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_29(int iParam0)//Position - 0x2044
{
	return iParam0 & 15;
}

int func_30(int iParam0, int iParam1)//Position - 0x2051
{
	int iVar0;
	int iVar1;
	
	if (!func_31(iParam1) || !func_31(iParam0))
	{
		return 1;
	}
	iVar0 = func_27(iParam0);
	iVar1 = func_27(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_29(iParam0);
	iVar1 = func_29(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_26(iParam0);
	iVar1 = func_26(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_25(iParam0);
	iVar1 = func_25(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_24(iParam0);
	iVar1 = func_24(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	iVar1 = func_23(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_31(int iParam0)//Position - 0x215D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_23(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_24(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_25(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_27(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_29(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_26(iParam0);
	if (iVar5 < 1 || iVar5 > func_22(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_32(int iParam0, bool bParam1)//Position - 0x2239
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_48466[iParam0 /*46*/] && !Global_48466[iParam0 /*46*/].f_1)
	{
		return;
	}
	if (Global_48466[iParam0 /*46*/].f_31 == Global_48466[iParam0 /*46*/].f_30)
	{
		iVar0 = (Global_48466[iParam0 /*46*/].f_42 - 1);
		if (iVar0 < 0)
		{
			return;
		}
		if (Global_45141[Global_48466[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4 == 0)
		{
			Global_48466[iParam0 /*46*/].f_1 = 1;
		}
		return;
	}
	if (Global_48466[iParam0 /*46*/].f_1)
	{
		return;
	}
	iVar1 = Global_48466[iParam0 /*46*/].f_8[Global_48466[iParam0 /*46*/].f_31];
	Global_48466[iParam0 /*46*/].f_31++;
	func_33(iParam0, iVar1);
	Global_48466[iParam0 /*46*/].f_45 = Global_45141[iVar1 /*12*/].f_10;
	Global_48466[iParam0 /*46*/].f_43 = Global_45141[iVar1 /*12*/].f_11;
	iVar2 = Global_48466[iParam0 /*46*/].f_2;
	func_18(Global_45141[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		if (Global_48466[iParam0 /*46*/].f_3[iVar3] != Global_45141[iVar1 /*12*/].f_2 && Global_48466[iParam0 /*46*/].f_3[iVar3] != Global_45141[iVar1 /*12*/].f_3)
		{
			func_18(Global_48466[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
		}
		iVar3++;
	}
	if (Global_48466[iParam0 /*46*/].f_31 == Global_48466[iParam0 /*46*/].f_30)
	{
		if (Global_45141[Global_48466[iParam0 /*46*/].f_32[(Global_48466[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4 == 0)
		{
			Global_48466[iParam0 /*46*/].f_1 = 1;
			return;
		}
	}
}

int func_33(int iParam0, var uParam1)//Position - 0x23D5
{
	if (Global_48466[iParam0 /*46*/].f_42 >= 9)
	{
		return 0;
	}
	Global_48466[iParam0 /*46*/].f_32[Global_48466[iParam0 /*46*/].f_42] = uParam1;
	Global_48466[iParam0 /*46*/].f_42++;
	return 1;
}

int func_34(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x241A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5[16];
	int iVar22[2];
	int iVar25;
	int iVar26;
	int iVar27;
	
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_59())
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 0;
	}
	if (func_58() && iParam2 < 4)
	{
		return 0;
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_56(PLAYER::PLAYER_PED_ID()))
		{
			if (BitTest(iParam0, func_55()) && !BitTest(iParam4, 19))
			{
				return 0;
			}
		}
	}
	if (Global_79246)
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (Global_76369)
	{
		return 0;
	}
	if (Global_97379)
	{
		return 0;
	}
	if ((func_54() || (Global_23572.f_4 && Global_23572.f_104 == 4)) || func_53())
	{
		return 0;
	}
	if (BitTest(iParam4, 18))
	{
		if (!BitTest(iParam0, func_55()))
		{
			return 0;
		}
	}
	iVar0 = 1;
	if (((Global_101392 == 13 || Global_101392 == 10) || Global_101392 == 11) || Global_101392 == 12)
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	else if (iParam2 != 5)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
		{
			return 0;
		}
		if (MISC::IS_AUTO_SAVE_IN_PROGRESS())
		{
			return 0;
		}
		if (Global_98300)
		{
			return 0;
		}
		if (func_46(50f, 1) != -1)
		{
			return 0;
		}
		if (((((iParam1 == 17 || iParam1 == 19) || iParam1 == 14) || iParam1 == 0) || iParam1 == 1) || iParam1 == 2)
		{
			if (BitTest(iParam0, func_55()))
			{
				iVar1 = func_43(func_6());
				iVar2 = func_43(iParam1);
				iVar3 = func_42(iVar1, iVar2);
				if (iVar3 < 9)
				{
					if (Global_114370.f_18106.f_175[iVar3 /*19*/].f_8 == 1 || Global_114370.f_18106.f_175[iVar3 /*19*/].f_8 == 2)
					{
						if (func_41(&(Global_114370.f_18106.f_175[iVar3 /*19*/].f_5)))
						{
							if (func_38(&(Global_114370.f_18106.f_175[iVar3 /*19*/].f_5)) < 30f)
							{
								return 0;
							}
						}
					}
				}
			}
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 2)
	{
		return 0;
	}
	if (func_37())
	{
		return 0;
	}
	if (BitTest(iParam4, 3))
	{
		if (Global_113417)
		{
			return 0;
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				return 0;
			}
		}
		if (Global_113079.f_19 != 0)
		{
			return 0;
		}
		if (Global_43922 == 5)
		{
			return 0;
		}
	}
	if (iParam3 != -1)
	{
		if (func_36(PLAYER::PLAYER_PED_ID(), iParam3, 0))
		{
			return 0;
		}
	}
	iVar4 = func_6();
	if (func_9(iVar4))
	{
		PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar5, -1);
		switch (iParam1)
		{
			case 4:
				switch (iVar4)
				{
					case 0:
						iVar22[0] = func_11(1);
						iVar22[1] = func_11(2);
						break;
					
					case 1:
						iVar22[0] = func_11(0);
						iVar22[1] = func_11(2);
						break;
					
					case 2:
						iVar22[0] = func_11(0);
						iVar22[1] = func_11(1);
						break;
				}
				break;
			
			case 5:
				iVar22[0] = func_11(1);
				iVar22[1] = func_11(2);
				break;
			
			case 6:
				iVar22[0] = func_35(12);
				iVar22[1] = func_11(1);
				break;
			
			case 7:
				iVar22[0] = func_35(12);
				iVar22[1] = func_11(0);
				break;
			
			case 8:
				iVar22[0] = func_11(0);
				iVar22[1] = func_11(1);
				break;
			
			case 9:
				iVar22[0] = func_11(0);
				iVar22[1] = func_11(2);
				break;
			
			case 10:
				iVar22[0] = func_35(23);
				iVar22[1] = func_11(0);
				break;
			
			case 11:
				iVar22[0] = func_35(23);
				iVar22[1] = func_11(0);
				break;
			
			default:
				if (func_9(iParam1))
				{
					iVar22[0] = func_11(iParam1);
				}
				else
				{
					iVar22[0] = func_35(iParam1);
				}
				iVar22[1] = 0;
				break;
		}
		iVar25 = 0;
		while (iVar25 < 2)
		{
			if (iVar22[iVar25] != 0)
			{
				iVar26 = 0;
				while (iVar26 < 16)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uVar5[iVar26]))
					{
						if (ENTITY::GET_ENTITY_MODEL(uVar5[iVar26]) == iVar22[iVar25])
						{
							if (!ENTITY::IS_ENTITY_DEAD(uVar5[iVar26], false))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar5[iVar26], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
									{
										return 0;
									}
								}
							}
							else
							{
								return 0;
							}
						}
					}
					iVar26++;
				}
				iVar27 = 0;
				switch (iVar22[iVar25])
				{
					case joaat("Player_Zero"):
						iVar27 = Global_98850[0];
						break;
					
					case joaat("Player_One"):
						iVar27 = Global_98850[1];
						break;
					
					case joaat("Player_Two"):
						iVar27 = Global_98850[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar27))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar27, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
						{
							return 0;
						}
					}
				}
				switch (iVar22[iVar25])
				{
					case joaat("Player_Zero"):
						iVar27 = Global_101317[0];
						break;
					
					case joaat("Player_One"):
						iVar27 = Global_101317[1];
						break;
					
					case joaat("Player_Two"):
						iVar27 = Global_101317[2];
						break;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar27))
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar27, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 6400f)
						{
							return 0;
						}
					}
				}
			}
			iVar25++;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_35(int iParam0)//Position - 0x2A06
{
	if (!func_9(iParam0))
	{
		return func_12(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0, int iParam1, float fParam2)//Position - 0x2A2C
{
	struct<5> Var0;
	float fVar5;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { Global_43923[iParam1 /*5*/] };
		fVar5 = Var0.f_3;
		if (fParam2 > 0f)
		{
			fVar5 = fParam2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), Var0, true) < fVar5)
		{
			return 1;
		}
		else if (Var0.f_4 != -1)
		{
			return func_36(iParam0, Var0.f_4, fParam2);
		}
	}
	return 0;
}

int func_37()//Position - 0x2A92
{
	if (Global_79509)
	{
		return 1;
	}
	else if (Global_64032 && !Global_64038)
	{
		return 1;
	}
	return 0;
}

float func_38(var uParam0)//Position - 0x2ABC
{
	if (func_41(uParam0))
	{
		if (func_40(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_39(BitTest(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_39(bool bParam0)//Position - 0x2AF8
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_40(var uParam0)//Position - 0x2B50
{
	return BitTest(*uParam0, 2);
}

bool func_41(var uParam0)//Position - 0x2B5D
{
	return BitTest(*uParam0, 1);
}

int func_42(int iParam0, int iParam1)//Position - 0x2B6A
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_43(int iParam0)//Position - 0x2CF4
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < func_45())
	{
		return func_44(iParam0);
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == func_45())
	{
		return 6;
	}
	if (iParam0 == 202)
	{
		return 6;
	}
	return 6;
}

var func_44(int iParam0)//Position - 0x2D4C
{
	return Global_2139[iParam0 /*29*/].f_11;
}

int func_45()//Position - 0x2D5D
{
	if (Global_32828 == 0 || Global_32828 == 2)
	{
		return 201;
	}
	return 161;
}

int func_46(float fParam0, bool bParam1)//Position - 0x2D7F
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		iVar36 = func_52();
		iVar37 = 0;
		iVar37 = 0;
		while (iVar37 < 63)
		{
			iVar32 = iVar37;
			if (BitTest(Global_114370.f_18577[iVar32 /*6*/], 2) && !BitTest(Global_114370.f_18577[iVar32 /*6*/], 3))
			{
				func_47(iVar32, &Var0);
				fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
				if (fVar35 < fVar34)
				{
					bVar38 = true;
					if (bParam1)
					{
						if (iVar36 != Var0.f_26)
						{
							bVar38 = false;
						}
					}
					if (bVar38)
					{
						iVar33 = iVar32;
						fVar34 = fVar35;
					}
				}
			}
			iVar37++;
		}
	}
	return iVar33;
}

void func_47(int iParam0, var uParam1)//Position - 0x2E25
{
	switch (iParam0)
	{
		case 0:
			func_48(uParam1, "Abigail1", func_50(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 1:
			func_48(uParam1, "Abigail2", func_50(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 2:
			func_48(uParam1, "Barry1", func_50(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 3:
			func_48(uParam1, "Barry2", func_50(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 4:
			func_48(uParam1, "Barry3", func_50(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 5:
			func_48(uParam1, "Barry3A", func_50(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH" /* GXT: Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry. */, 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 6:
			func_48(uParam1, "Barry3C", func_50(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 7:
			func_48(uParam1, "Barry4", func_50(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_49(iParam0), 0, 0);
			break;
		
		case 8:
			func_48(uParam1, "Dreyfuss1", func_50(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT" /* GXT: The killer's identity and location have been revealed. */, 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 9:
			func_48(uParam1, "Epsilon1", func_50(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 10:
			func_48(uParam1, "Epsilon2", func_50(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 11:
			func_48(uParam1, "Epsilon3", func_50(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 12:
			func_48(uParam1, "Epsilon4", func_50(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 13:
			func_48(uParam1, "Epsilon5", func_50(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 14:
			func_48(uParam1, "Epsilon6", func_50(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 15:
			func_48(uParam1, "Epsilon7", func_50(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 16:
			func_48(uParam1, "Epsilon8", func_50(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 17:
			func_48(uParam1, "Extreme1", func_50(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 18:
			func_48(uParam1, "Extreme2", func_50(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 19:
			func_48(uParam1, "Extreme3", func_50(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 20:
			func_48(uParam1, "Extreme4", func_50(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 21:
			func_48(uParam1, "Fanatic1", func_50(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_49(iParam0), 1, 0);
			break;
		
		case 22:
			func_48(uParam1, "Fanatic2", func_50(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_49(iParam0), 1, 0);
			break;
		
		case 23:
			func_48(uParam1, "Fanatic3", func_50(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_49(iParam0), 0, 1);
			break;
		
		case 24:
			func_48(uParam1, "Hao1", func_50(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_49(iParam0), 0, 1);
			break;
		
		case 25:
			func_48(uParam1, "Hunting1", func_50(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 26:
			func_48(uParam1, "Hunting2", func_50(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 27:
			func_48(uParam1, "Josh1", func_50(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 28:
			func_48(uParam1, "Josh2", func_50(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 29:
			func_48(uParam1, "Josh3", func_50(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 30:
			func_48(uParam1, "Josh4", func_50(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 31:
			func_48(uParam1, "Maude1", func_50(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 32:
			func_48(uParam1, "Minute1", func_50(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 33:
			func_48(uParam1, "Minute2", func_50(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 34:
			func_48(uParam1, "Minute3", func_50(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 35:
			func_48(uParam1, "MrsPhilips1", func_50(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 36:
			func_48(uParam1, "MrsPhilips2", func_50(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 37:
			func_48(uParam1, "Nigel1", func_50(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 38:
			func_48(uParam1, "Nigel1A", func_50(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS" /* GXT: Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill. */, 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 39:
			func_48(uParam1, "Nigel1B", func_50(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
		
		case 40:
			func_48(uParam1, "Nigel1C", func_50(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
		
		case 41:
			func_48(uParam1, "Nigel1D", func_50(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_49(iParam0), 1, 1);
			break;
		
		case 42:
			func_48(uParam1, "Nigel2", func_50(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 43:
			func_48(uParam1, "Nigel3", func_50(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 1);
			break;
		
		case 44:
			func_48(uParam1, "Omega1", func_50(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 45:
			func_48(uParam1, "Omega2", func_50(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 46:
			func_48(uParam1, "Paparazzo1", func_50(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 47:
			func_48(uParam1, "Paparazzo2", func_50(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 48:
			func_48(uParam1, "Paparazzo3", func_50(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 49:
			func_48(uParam1, "Paparazzo3A", func_50(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO" /* GXT: Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly. */, 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 50:
			func_48(uParam1, "Paparazzo3B", func_50(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 51:
			func_48(uParam1, "Paparazzo4", func_50(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 52:
			func_48(uParam1, "Rampage1", func_50(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 54:
			func_48(uParam1, "Rampage3", func_50(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 55:
			func_48(uParam1, "Rampage4", func_50(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 56:
			func_48(uParam1, "Rampage5", func_50(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_49(iParam0), 0, 0);
			break;
		
		case 53:
			func_48(uParam1, "Rampage2", func_50(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_49(iParam0), 1, 0);
			break;
		
		case 57:
			func_48(uParam1, "TheLastOne", func_50(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 58:
			func_48(uParam1, "Tonya1", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS" /* GXT: Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~ */, -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 59:
			func_48(uParam1, "Tonya2", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 60:
			func_48(uParam1, "Tonya3", func_50(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 61:
			func_48(uParam1, "Tonya4", func_50(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		case 62:
			func_48(uParam1, "Tonya5", func_50(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_49(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_48(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x406E
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_49(int iParam0)//Position - 0x40FF
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_50(int iParam0)//Position - 0x4445
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_51(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_51(int iParam0)//Position - 0x447D
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_52()//Position - 0x48CA
{
	func_7();
	switch (Global_114370.f_2366.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_53()//Position - 0x4910
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_54()//Position - 0x492A
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_98850.f_44 == 1;
	}
	return 0;
}

bool func_55()//Position - 0x4946
{
	func_7();
	return Global_114370.f_2366.f_539.f_4321;
}

int func_56(int iParam0)//Position - 0x495F
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (func_57(iParam0) == -1)
	{
		return 0;
	}
	return 1;
}

int func_57(int iParam0)//Position - 0x4980
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
		if (!Global_44908[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_44908[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_58()//Position - 0x49C9
{
	if (Global_43922 == 15)
	{
		return 0;
	}
	return 1;
}

int func_59()//Position - 0x49DE
{
	if (Global_20813.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_60(int iParam0)//Position - 0x49F7
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!BitTest(Global_114370.f_24989, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_14(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_54441[iVar0 /*203*/] = 0;
}

var func_61()//Position - 0x4A31
{
	var uVar0;
	
	func_67(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_66(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_65(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_64(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_63(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_62(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_62(var uParam0, int iParam1)//Position - 0x4A77
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_63(var uParam0, int iParam1)//Position - 0x4AFD
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_64(var uParam0, int iParam1)//Position - 0x4B30
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_29(*uParam0);
	iVar1 = func_27(*uParam0);
	if (iParam1 < 1 || iParam1 > func_22(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_65(var uParam0, int iParam1)//Position - 0x4B81
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_66(var uParam0, int iParam1)//Position - 0x4BBB
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_67(var uParam0, int iParam1)//Position - 0x4BF6
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_68()//Position - 0x4C32
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_54079[iVar0 /*120*/] = Global_114370.f_21040[iVar0 /*103*/];
		iVar1 = 0;
		while (iVar1 < 16)
		{
			Global_54079[iVar0 /*120*/].f_1[iVar1] = Global_114370.f_21040[iVar0 /*103*/].f_1[iVar1];
			Global_54079[iVar0 /*120*/].f_18[iVar1] = Global_114370.f_21040[iVar0 /*103*/].f_18[iVar1];
			Global_54079[iVar0 /*120*/].f_35[iVar1] = Global_114370.f_21040[iVar0 /*103*/].f_35[iVar1];
			Global_54079[iVar0 /*120*/].f_52[iVar1] = Global_114370.f_21040[iVar0 /*103*/].f_52[iVar1];
			Global_54079[iVar0 /*120*/].f_69[iVar1] = Global_114370.f_21040[iVar0 /*103*/].f_69[iVar1];
			Global_54079[iVar0 /*120*/].f_86[iVar1] = Global_114370.f_21040[iVar0 /*103*/].f_86[iVar1];
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_54441[iVar0 /*203*/].f_2 = Global_114370.f_21040.f_311[iVar0 /*203*/];
		Global_54441[iVar0 /*203*/] = Global_114370.f_21040.f_311[iVar0 /*203*/].f_2;
		Global_54441[iVar0 /*203*/].f_3 = Global_114370.f_21040.f_311[iVar0 /*203*/].f_3;
		Global_54441[iVar0 /*203*/].f_1 = Global_114370.f_21040.f_311[iVar0 /*203*/].f_1;
		Global_54441[iVar0 /*203*/].f_9 = Global_114370.f_21040.f_311[iVar0 /*203*/].f_9;
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_54441[iVar0 /*203*/].f_4[iVar1] = Global_114370.f_21040.f_311[iVar0 /*203*/].f_4[iVar1];
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_54441[iVar0 /*203*/].f_10[iVar1 /*48*/] = Global_114370.f_21040.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/];
			Global_54441[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1 = Global_114370.f_21040.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_1;
			Global_54441[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 = { Global_114370.f_21040.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_2 };
			Global_54441[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6 = Global_114370.f_21040.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_6;
			iVar2 = 0;
			while (iVar2 < 10)
			{
				Global_54441[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] = { Global_114370.f_21040.f_311[iVar0 /*203*/].f_10[iVar1 /*48*/].f_7[iVar2 /*4*/] };
				iVar2++;
			}
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 122)
	{
		Global_48466[iVar0 /*46*/] = Global_114370.f_21040.f_1733[iVar0 /*14*/];
		Global_48466[iVar0 /*46*/].f_1 = Global_114370.f_21040.f_1733[iVar0 /*14*/].f_1;
		Global_48466[iVar0 /*46*/].f_45 = Global_114370.f_21040.f_1733[iVar0 /*14*/].f_2;
		Global_48466[iVar0 /*46*/].f_31 = Global_114370.f_21040.f_1733[iVar0 /*14*/].f_3;
		iVar1 = 0;
		while (iVar1 < 9)
		{
			if (Global_114370.f_21040.f_1733[iVar0 /*14*/].f_4[iVar1] > 0)
			{
				Global_48466[iVar0 /*46*/].f_32[iVar1] = (Global_114370.f_21040.f_1733[iVar0 /*14*/].f_4[iVar1] - 1);
				Global_48466[iVar0 /*46*/].f_42++;
			}
			iVar1++;
		}
		iVar0++;
	}
	Global_55863 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Global_55864[iVar0 /*53*/] = Global_114370.f_21040.f_3442[iVar0 /*53*/];
		Global_55864[iVar0 /*53*/].f_1 = Global_114370.f_21040.f_3442[iVar0 /*53*/].f_1;
		Global_55864[iVar0 /*53*/].f_2 = Global_114370.f_21040.f_3442[iVar0 /*53*/].f_2;
		Global_55864[iVar0 /*53*/].f_5 = Global_114370.f_21040.f_3442[iVar0 /*53*/].f_5;
		Global_55864[iVar0 /*53*/].f_6 = { Global_114370.f_21040.f_3442[iVar0 /*53*/].f_6 };
		Global_55864[iVar0 /*53*/].f_10 = Global_114370.f_21040.f_3442[iVar0 /*53*/].f_10;
		iVar1 = 0;
		while (iVar1 < 10)
		{
			Global_55864[iVar0 /*53*/].f_11[iVar1 /*4*/] = { Global_114370.f_21040.f_3442[iVar0 /*53*/].f_11[iVar1 /*4*/] };
			iVar1++;
		}
		Global_55864[iVar0 /*53*/].f_52 = Global_114370.f_21040.f_3442[iVar0 /*53*/].f_52;
		if (Global_55864[iVar0 /*53*/].f_52 != 0)
		{
			Global_55863++;
		}
		iVar0++;
	}
}

void func_69()//Position - 0x50B5
{
	Global_45141[0 /*12*/] = 15;
	Global_45141[0 /*12*/].f_1 = 16;
	Global_45141[0 /*12*/].f_2 = 4;
	Global_45141[0 /*12*/].f_3 = 0;
	Global_45141[0 /*12*/].f_10 = 1;
	Global_45141[0 /*12*/].f_11 = 0;
	Global_45141[0 /*12*/].f_4 = 0;
	Global_45141[1 /*12*/] = 17;
	Global_45141[1 /*12*/].f_1 = 16;
	Global_45141[1 /*12*/].f_2 = 4;
	Global_45141[1 /*12*/].f_3 = 0;
	Global_45141[1 /*12*/].f_10 = 1;
	Global_45141[1 /*12*/].f_11 = 0;
	Global_45141[1 /*12*/].f_4 = 0;
	Global_45141[2 /*12*/] = 18;
	Global_45141[2 /*12*/].f_1 = 16;
	Global_45141[2 /*12*/].f_2 = 4;
	Global_45141[2 /*12*/].f_3 = 0;
	Global_45141[2 /*12*/].f_10 = 1;
	Global_45141[2 /*12*/].f_11 = 0;
	Global_45141[2 /*12*/].f_4 = 0;
	Global_45141[3 /*12*/] = 19;
	Global_45141[3 /*12*/].f_1 = 16;
	Global_45141[3 /*12*/].f_2 = 4;
	Global_45141[3 /*12*/].f_3 = 0;
	Global_45141[3 /*12*/].f_10 = 1;
	Global_45141[3 /*12*/].f_11 = 0;
	Global_45141[3 /*12*/].f_4 = 0;
	Global_45141[4 /*12*/] = 20;
	Global_45141[4 /*12*/].f_1 = 16;
	Global_45141[4 /*12*/].f_2 = 4;
	Global_45141[4 /*12*/].f_3 = 0;
	Global_45141[4 /*12*/].f_10 = 1;
	Global_45141[4 /*12*/].f_11 = 0;
	Global_45141[4 /*12*/].f_4 = 0;
	Global_45141[5 /*12*/] = 21;
	Global_45141[5 /*12*/].f_1 = 16;
	Global_45141[5 /*12*/].f_2 = 4;
	Global_45141[5 /*12*/].f_3 = 0;
	Global_45141[5 /*12*/].f_10 = 1;
	Global_45141[5 /*12*/].f_11 = 0;
	Global_45141[5 /*12*/].f_4 = 0;
	Global_45141[6 /*12*/] = 22;
	Global_45141[6 /*12*/].f_1 = 16;
	Global_45141[6 /*12*/].f_2 = 4;
	Global_45141[6 /*12*/].f_3 = 0;
	Global_45141[6 /*12*/].f_10 = 0;
	Global_45141[6 /*12*/].f_11 = 0;
	Global_45141[6 /*12*/].f_4 = 0;
	Global_45141[7 /*12*/] = 23;
	Global_45141[7 /*12*/].f_1 = 24;
	Global_45141[7 /*12*/].f_2 = 4;
	Global_45141[7 /*12*/].f_3 = 0;
	Global_45141[7 /*12*/].f_10 = 0;
	Global_45141[7 /*12*/].f_11 = 0;
	Global_45141[7 /*12*/].f_4 = 0;
	Global_45141[8 /*12*/] = 25;
	Global_45141[8 /*12*/].f_1 = 26;
	Global_45141[8 /*12*/].f_2 = 4;
	Global_45141[8 /*12*/].f_3 = 0;
	Global_45141[8 /*12*/].f_10 = 0;
	Global_45141[8 /*12*/].f_11 = 0;
	Global_45141[8 /*12*/].f_4 = 0;
	Global_45141[9 /*12*/] = 27;
	Global_45141[9 /*12*/].f_1 = 28;
	Global_45141[9 /*12*/].f_2 = 4;
	Global_45141[9 /*12*/].f_3 = 0;
	Global_45141[9 /*12*/].f_10 = 0;
	Global_45141[9 /*12*/].f_11 = 0;
	Global_45141[9 /*12*/].f_4 = 0;
	Global_45141[10 /*12*/] = 32;
	Global_45141[10 /*12*/].f_1 = 33;
	Global_45141[10 /*12*/].f_2 = 5;
	Global_45141[10 /*12*/].f_3 = 0;
	Global_45141[10 /*12*/].f_10 = 0;
	Global_45141[10 /*12*/].f_11 = 0;
	Global_45141[10 /*12*/].f_4 = 0;
	Global_45141[11 /*12*/] = 34;
	Global_45141[11 /*12*/].f_1 = 35;
	Global_45141[11 /*12*/].f_2 = 5;
	Global_45141[11 /*12*/].f_3 = 0;
	Global_45141[11 /*12*/].f_10 = 0;
	Global_45141[11 /*12*/].f_11 = 0;
	Global_45141[11 /*12*/].f_4 = 0;
	Global_45141[12 /*12*/] = 42;
	Global_45141[12 /*12*/].f_1 = 43;
	Global_45141[12 /*12*/].f_2 = 7;
	Global_45141[12 /*12*/].f_3 = 1;
	Global_45141[12 /*12*/].f_10 = 0;
	Global_45141[12 /*12*/].f_11 = 0;
	Global_45141[12 /*12*/].f_4 = 0;
	Global_45141[13 /*12*/] = 44;
	Global_45141[13 /*12*/].f_1 = 45;
	Global_45141[13 /*12*/].f_2 = 7;
	Global_45141[13 /*12*/].f_3 = 1;
	Global_45141[13 /*12*/].f_10 = 0;
	Global_45141[13 /*12*/].f_11 = 0;
	Global_45141[13 /*12*/].f_4 = 0;
	Global_45141[14 /*12*/] = 46;
	Global_45141[14 /*12*/].f_1 = 47;
	Global_45141[14 /*12*/].f_2 = 7;
	Global_45141[14 /*12*/].f_3 = 1;
	Global_45141[14 /*12*/].f_10 = 0;
	Global_45141[14 /*12*/].f_11 = 0;
	Global_45141[14 /*12*/].f_4 = 0;
	Global_45141[15 /*12*/] = 48;
	Global_45141[15 /*12*/].f_1 = 49;
	Global_45141[15 /*12*/].f_2 = 7;
	Global_45141[15 /*12*/].f_3 = 1;
	Global_45141[15 /*12*/].f_10 = 0;
	Global_45141[15 /*12*/].f_11 = 0;
	Global_45141[15 /*12*/].f_4 = 0;
	Global_45141[16 /*12*/] = 50;
	Global_45141[16 /*12*/].f_1 = 51;
	Global_45141[16 /*12*/].f_2 = 4;
	Global_45141[16 /*12*/].f_3 = 0;
	Global_45141[16 /*12*/].f_10 = 0;
	Global_45141[16 /*12*/].f_11 = 0;
	Global_45141[16 /*12*/].f_4 = 0;
	Global_45141[17 /*12*/] = 61;
	Global_45141[17 /*12*/].f_1 = 62;
	Global_45141[17 /*12*/].f_2 = 8;
	Global_45141[17 /*12*/].f_3 = 0;
	Global_45141[17 /*12*/].f_10 = 1;
	Global_45141[17 /*12*/].f_11 = 0;
	Global_45141[17 /*12*/].f_4 = 0;
	Global_45141[18 /*12*/] = 63;
	Global_45141[18 /*12*/].f_1 = 64;
	Global_45141[18 /*12*/].f_2 = 9;
	Global_45141[18 /*12*/].f_3 = 1;
	Global_45141[18 /*12*/].f_10 = 1;
	Global_45141[18 /*12*/].f_11 = 0;
	Global_45141[18 /*12*/].f_4 = 0;
	Global_45141[19 /*12*/] = 61;
	Global_45141[19 /*12*/].f_1 = 65;
	Global_45141[19 /*12*/].f_2 = 8;
	Global_45141[19 /*12*/].f_3 = 0;
	Global_45141[19 /*12*/].f_10 = 1;
	Global_45141[19 /*12*/].f_11 = 0;
	Global_45141[19 /*12*/].f_4 = 0;
	Global_45141[20 /*12*/] = 61;
	Global_45141[20 /*12*/].f_1 = 66;
	Global_45141[20 /*12*/].f_2 = 8;
	Global_45141[20 /*12*/].f_3 = 0;
	Global_45141[20 /*12*/].f_10 = 1;
	Global_45141[20 /*12*/].f_11 = 0;
	Global_45141[20 /*12*/].f_4 = 0;
	Global_45141[21 /*12*/] = 61;
	Global_45141[21 /*12*/].f_1 = 67;
	Global_45141[21 /*12*/].f_2 = 8;
	Global_45141[21 /*12*/].f_3 = 0;
	Global_45141[21 /*12*/].f_10 = 1;
	Global_45141[21 /*12*/].f_11 = 0;
	Global_45141[21 /*12*/].f_4 = 0;
	Global_45141[22 /*12*/] = 61;
	Global_45141[22 /*12*/].f_1 = 68;
	Global_45141[22 /*12*/].f_2 = 8;
	Global_45141[22 /*12*/].f_3 = 0;
	Global_45141[22 /*12*/].f_10 = 0;
	Global_45141[22 /*12*/].f_11 = 0;
	Global_45141[22 /*12*/].f_4 = 0;
	Global_45141[23 /*12*/] = 69;
	Global_45141[23 /*12*/].f_1 = 70;
	Global_45141[23 /*12*/].f_2 = 10;
	Global_45141[23 /*12*/].f_3 = 2;
	Global_45141[23 /*12*/].f_10 = 1;
	Global_45141[23 /*12*/].f_11 = 0;
	Global_45141[23 /*12*/].f_4 = 0;
	Global_45141[24 /*12*/] = 63;
	Global_45141[24 /*12*/].f_1 = 74;
	Global_45141[24 /*12*/].f_2 = 9;
	Global_45141[24 /*12*/].f_3 = 1;
	Global_45141[24 /*12*/].f_10 = 1;
	Global_45141[24 /*12*/].f_11 = 0;
	Global_45141[24 /*12*/].f_4 = 0;
	Global_45141[25 /*12*/] = 63;
	Global_45141[25 /*12*/].f_1 = 75;
	Global_45141[25 /*12*/].f_2 = 9;
	Global_45141[25 /*12*/].f_3 = 1;
	Global_45141[25 /*12*/].f_10 = 1;
	Global_45141[25 /*12*/].f_11 = 0;
	Global_45141[25 /*12*/].f_4 = 0;
	Global_45141[26 /*12*/] = 63;
	Global_45141[26 /*12*/].f_1 = 76;
	Global_45141[26 /*12*/].f_2 = 9;
	Global_45141[26 /*12*/].f_3 = 1;
	Global_45141[26 /*12*/].f_10 = 1;
	Global_45141[26 /*12*/].f_11 = 0;
	Global_45141[26 /*12*/].f_4 = 0;
	Global_45141[27 /*12*/] = 63;
	Global_45141[27 /*12*/].f_1 = 77;
	Global_45141[27 /*12*/].f_2 = 9;
	Global_45141[27 /*12*/].f_3 = 1;
	Global_45141[27 /*12*/].f_10 = 0;
	Global_45141[27 /*12*/].f_11 = 0;
	Global_45141[27 /*12*/].f_4 = 0;
	Global_45141[28 /*12*/] = 69;
	Global_45141[28 /*12*/].f_1 = 73;
	Global_45141[28 /*12*/].f_2 = 10;
	Global_45141[28 /*12*/].f_3 = 2;
	Global_45141[28 /*12*/].f_10 = 1;
	Global_45141[28 /*12*/].f_11 = 0;
	Global_45141[28 /*12*/].f_4 = 0;
	Global_45141[29 /*12*/] = 69;
	Global_45141[29 /*12*/].f_1 = 72;
	Global_45141[29 /*12*/].f_2 = 10;
	Global_45141[29 /*12*/].f_3 = 2;
	Global_45141[29 /*12*/].f_10 = 1;
	Global_45141[29 /*12*/].f_11 = 0;
	Global_45141[29 /*12*/].f_4 = 0;
	Global_45141[30 /*12*/] = 69;
	Global_45141[30 /*12*/].f_1 = 71;
	Global_45141[30 /*12*/].f_2 = 10;
	Global_45141[30 /*12*/].f_3 = 2;
	Global_45141[30 /*12*/].f_10 = 0;
	Global_45141[30 /*12*/].f_11 = 0;
	Global_45141[30 /*12*/].f_4 = 0;
	Global_45141[31 /*12*/] = 90;
	Global_45141[31 /*12*/].f_1 = 91;
	Global_45141[31 /*12*/].f_2 = 11;
	Global_45141[31 /*12*/].f_3 = 1;
	Global_45141[31 /*12*/].f_10 = 0;
	Global_45141[31 /*12*/].f_11 = 0;
	Global_45141[31 /*12*/].f_4 = 0;
	Global_45141[32 /*12*/] = 90;
	Global_45141[32 /*12*/].f_1 = 92;
	Global_45141[32 /*12*/].f_2 = 11;
	Global_45141[32 /*12*/].f_3 = 0;
	Global_45141[32 /*12*/].f_10 = 0;
	Global_45141[32 /*12*/].f_11 = 0;
	Global_45141[32 /*12*/].f_4 = 0;
	Global_45141[33 /*12*/] = 90;
	Global_45141[33 /*12*/].f_1 = 93;
	Global_45141[33 /*12*/].f_2 = 11;
	Global_45141[33 /*12*/].f_3 = 2;
	Global_45141[33 /*12*/].f_10 = 0;
	Global_45141[33 /*12*/].f_11 = 0;
	Global_45141[33 /*12*/].f_4 = 0;
	Global_45141[34 /*12*/] = 94;
	Global_45141[34 /*12*/].f_1 = 95;
	Global_45141[34 /*12*/].f_2 = 13;
	Global_45141[34 /*12*/].f_3 = 0;
	Global_45141[34 /*12*/].f_10 = 0;
	Global_45141[34 /*12*/].f_11 = 0;
	Global_45141[34 /*12*/].f_4 = 0;
	Global_45141[35 /*12*/] = 94;
	Global_45141[35 /*12*/].f_1 = 96;
	Global_45141[35 /*12*/].f_2 = 13;
	Global_45141[35 /*12*/].f_3 = 1;
	Global_45141[35 /*12*/].f_10 = 0;
	Global_45141[35 /*12*/].f_11 = 0;
	Global_45141[35 /*12*/].f_4 = 0;
	Global_45141[36 /*12*/] = 94;
	Global_45141[36 /*12*/].f_1 = 97;
	Global_45141[36 /*12*/].f_2 = 13;
	Global_45141[36 /*12*/].f_3 = 2;
	Global_45141[36 /*12*/].f_10 = 0;
	Global_45141[36 /*12*/].f_11 = 0;
	Global_45141[36 /*12*/].f_4 = 0;
	Global_45141[37 /*12*/] = 94;
	Global_45141[37 /*12*/].f_1 = 98;
	Global_45141[37 /*12*/].f_2 = 14;
	Global_45141[37 /*12*/].f_3 = 0;
	Global_45141[37 /*12*/].f_10 = 0;
	Global_45141[37 /*12*/].f_11 = 0;
	Global_45141[37 /*12*/].f_4 = 0;
	Global_45141[38 /*12*/] = 94;
	Global_45141[38 /*12*/].f_1 = 99;
	Global_45141[38 /*12*/].f_2 = 14;
	Global_45141[38 /*12*/].f_3 = 1;
	Global_45141[38 /*12*/].f_10 = 0;
	Global_45141[38 /*12*/].f_11 = 0;
	Global_45141[38 /*12*/].f_4 = 0;
	Global_45141[39 /*12*/] = 94;
	Global_45141[39 /*12*/].f_1 = 100;
	Global_45141[39 /*12*/].f_2 = 14;
	Global_45141[39 /*12*/].f_3 = 2;
	Global_45141[39 /*12*/].f_10 = 0;
	Global_45141[39 /*12*/].f_11 = 0;
	Global_45141[39 /*12*/].f_4 = 0;
	Global_45141[40 /*12*/] = 94;
	Global_45141[40 /*12*/].f_1 = 101;
	Global_45141[40 /*12*/].f_2 = 12;
	Global_45141[40 /*12*/].f_3 = 0;
	Global_45141[40 /*12*/].f_10 = 0;
	Global_45141[40 /*12*/].f_11 = 0;
	Global_45141[40 /*12*/].f_4 = 0;
	Global_45141[41 /*12*/] = 94;
	Global_45141[41 /*12*/].f_1 = 102;
	Global_45141[41 /*12*/].f_2 = 12;
	Global_45141[41 /*12*/].f_3 = 1;
	Global_45141[41 /*12*/].f_10 = 0;
	Global_45141[41 /*12*/].f_11 = 0;
	Global_45141[41 /*12*/].f_4 = 0;
	Global_45141[42 /*12*/] = 94;
	Global_45141[42 /*12*/].f_1 = 103;
	Global_45141[42 /*12*/].f_2 = 12;
	Global_45141[42 /*12*/].f_3 = 2;
	Global_45141[42 /*12*/].f_10 = 0;
	Global_45141[42 /*12*/].f_11 = 0;
	Global_45141[42 /*12*/].f_4 = 0;
	Global_45141[43 /*12*/] = 104;
	Global_45141[43 /*12*/].f_1 = 105;
	Global_45141[43 /*12*/].f_2 = 7;
	Global_45141[43 /*12*/].f_3 = 0;
	Global_45141[43 /*12*/].f_10 = 1;
	Global_45141[43 /*12*/].f_11 = 0;
	Global_45141[43 /*12*/].f_4 = 0;
	Global_45141[44 /*12*/] = 108;
	Global_45141[44 /*12*/].f_1 = 109;
	Global_45141[44 /*12*/].f_2 = 15;
	Global_45141[44 /*12*/].f_3 = 0;
	Global_45141[44 /*12*/].f_10 = 1;
	Global_45141[44 /*12*/].f_11 = 0;
	Global_45141[44 /*12*/].f_4 = 0;
	Global_45141[45 /*12*/] = 110;
	Global_45141[45 /*12*/].f_1 = 111;
	Global_45141[45 /*12*/].f_2 = 15;
	Global_45141[45 /*12*/].f_3 = 0;
	Global_45141[45 /*12*/].f_10 = 1;
	Global_45141[45 /*12*/].f_11 = 0;
	Global_45141[45 /*12*/].f_4 = 0;
	Global_45141[46 /*12*/] = 112;
	Global_45141[46 /*12*/].f_1 = 113;
	Global_45141[46 /*12*/].f_2 = 15;
	Global_45141[46 /*12*/].f_3 = 0;
	Global_45141[46 /*12*/].f_10 = 1;
	Global_45141[46 /*12*/].f_11 = 0;
	Global_45141[46 /*12*/].f_4 = 0;
	Global_45141[47 /*12*/] = 117;
	Global_45141[47 /*12*/].f_1 = 118;
	Global_45141[47 /*12*/].f_2 = 16;
	Global_45141[47 /*12*/].f_3 = 0;
	Global_45141[47 /*12*/].f_10 = 1;
	Global_45141[47 /*12*/].f_11 = 0;
	Global_45141[47 /*12*/].f_4 = 0;
	Global_45141[48 /*12*/] = 119;
	Global_45141[48 /*12*/].f_1 = 120;
	Global_45141[48 /*12*/].f_2 = 16;
	Global_45141[48 /*12*/].f_3 = 0;
	Global_45141[48 /*12*/].f_10 = 1;
	Global_45141[48 /*12*/].f_11 = 0;
	Global_45141[48 /*12*/].f_4 = 0;
	Global_45141[49 /*12*/] = 131;
	Global_45141[49 /*12*/].f_1 = 132;
	Global_45141[49 /*12*/].f_2 = 16;
	Global_45141[49 /*12*/].f_3 = 0;
	Global_45141[49 /*12*/].f_10 = 1;
	Global_45141[49 /*12*/].f_11 = 0;
	Global_45141[49 /*12*/].f_4 = 0;
	Global_45141[50 /*12*/] = 129;
	Global_45141[50 /*12*/].f_1 = 130;
	Global_45141[50 /*12*/].f_2 = 16;
	Global_45141[50 /*12*/].f_3 = 0;
	Global_45141[50 /*12*/].f_10 = 0;
	Global_45141[50 /*12*/].f_11 = 0;
	Global_45141[50 /*12*/].f_4 = 0;
	Global_45141[51 /*12*/] = 127;
	Global_45141[51 /*12*/].f_1 = 128;
	Global_45141[51 /*12*/].f_2 = 16;
	Global_45141[51 /*12*/].f_3 = 0;
	Global_45141[51 /*12*/].f_10 = 1;
	Global_45141[51 /*12*/].f_11 = 0;
	Global_45141[51 /*12*/].f_4 = 0;
	Global_45141[52 /*12*/] = 125;
	Global_45141[52 /*12*/].f_1 = 126;
	Global_45141[52 /*12*/].f_2 = 16;
	Global_45141[52 /*12*/].f_3 = 0;
	Global_45141[52 /*12*/].f_10 = 1;
	Global_45141[52 /*12*/].f_11 = 0;
	Global_45141[52 /*12*/].f_4 = 0;
	Global_45141[53 /*12*/] = 123;
	Global_45141[53 /*12*/].f_1 = 124;
	Global_45141[53 /*12*/].f_2 = 16;
	Global_45141[53 /*12*/].f_3 = 0;
	Global_45141[53 /*12*/].f_10 = 1;
	Global_45141[53 /*12*/].f_11 = 0;
	Global_45141[53 /*12*/].f_4 = 0;
	Global_45141[54 /*12*/] = 121;
	Global_45141[54 /*12*/].f_1 = 122;
	Global_45141[54 /*12*/].f_2 = 16;
	Global_45141[54 /*12*/].f_3 = 0;
	Global_45141[54 /*12*/].f_10 = 1;
	Global_45141[54 /*12*/].f_11 = 0;
	Global_45141[54 /*12*/].f_4 = 0;
	Global_45141[55 /*12*/] = 133;
	Global_45141[55 /*12*/].f_1 = 134;
	Global_45141[55 /*12*/].f_2 = 12;
	Global_45141[55 /*12*/].f_3 = 0;
	Global_45141[55 /*12*/].f_10 = 0;
	Global_45141[55 /*12*/].f_11 = 0;
	Global_45141[55 /*12*/].f_4 = 0;
	Global_45141[56 /*12*/] = 135;
	Global_45141[56 /*12*/].f_1 = 136;
	Global_45141[56 /*12*/].f_2 = 14;
	Global_45141[56 /*12*/].f_3 = 0;
	Global_45141[56 /*12*/].f_10 = 0;
	Global_45141[56 /*12*/].f_11 = 0;
	Global_45141[56 /*12*/].f_4 = 0;
	Global_45141[57 /*12*/] = 137;
	Global_45141[57 /*12*/].f_1 = 138;
	Global_45141[57 /*12*/].f_2 = 12;
	Global_45141[57 /*12*/].f_3 = 0;
	Global_45141[57 /*12*/].f_10 = 0;
	Global_45141[57 /*12*/].f_11 = 0;
	Global_45141[57 /*12*/].f_4 = 0;
	Global_45141[58 /*12*/] = 133;
	Global_45141[58 /*12*/].f_1 = 139;
	Global_45141[58 /*12*/].f_2 = 12;
	Global_45141[58 /*12*/].f_3 = 1;
	Global_45141[58 /*12*/].f_10 = 0;
	Global_45141[58 /*12*/].f_11 = 0;
	Global_45141[58 /*12*/].f_4 = 0;
	Global_45141[59 /*12*/] = 133;
	Global_45141[59 /*12*/].f_1 = 140;
	Global_45141[59 /*12*/].f_2 = 12;
	Global_45141[59 /*12*/].f_3 = 2;
	Global_45141[59 /*12*/].f_10 = 0;
	Global_45141[59 /*12*/].f_11 = 0;
	Global_45141[59 /*12*/].f_4 = 0;
	Global_45141[60 /*12*/] = 135;
	Global_45141[60 /*12*/].f_1 = 136;
	Global_45141[60 /*12*/].f_2 = 14;
	Global_45141[60 /*12*/].f_3 = 1;
	Global_45141[60 /*12*/].f_10 = 0;
	Global_45141[60 /*12*/].f_11 = 0;
	Global_45141[60 /*12*/].f_4 = 0;
	Global_45141[61 /*12*/] = 135;
	Global_45141[61 /*12*/].f_1 = 136;
	Global_45141[61 /*12*/].f_2 = 14;
	Global_45141[61 /*12*/].f_3 = 2;
	Global_45141[61 /*12*/].f_10 = 0;
	Global_45141[61 /*12*/].f_11 = 0;
	Global_45141[61 /*12*/].f_4 = 0;
	Global_45141[62 /*12*/] = 137;
	Global_45141[62 /*12*/].f_1 = 141;
	Global_45141[62 /*12*/].f_2 = 12;
	Global_45141[62 /*12*/].f_3 = 1;
	Global_45141[62 /*12*/].f_10 = 0;
	Global_45141[62 /*12*/].f_11 = 0;
	Global_45141[62 /*12*/].f_4 = 0;
	Global_45141[63 /*12*/] = 137;
	Global_45141[63 /*12*/].f_1 = 138;
	Global_45141[63 /*12*/].f_2 = 12;
	Global_45141[63 /*12*/].f_3 = 2;
	Global_45141[63 /*12*/].f_10 = 0;
	Global_45141[63 /*12*/].f_11 = 0;
	Global_45141[63 /*12*/].f_4 = 0;
	Global_45141[64 /*12*/] = 148;
	Global_45141[64 /*12*/].f_1 = 149;
	Global_45141[64 /*12*/].f_2 = 7;
	Global_45141[64 /*12*/].f_3 = 0;
	Global_45141[64 /*12*/].f_10 = 0;
	Global_45141[64 /*12*/].f_11 = 0;
	Global_45141[64 /*12*/].f_4 = 0;
	Global_45141[65 /*12*/] = 148;
	Global_45141[65 /*12*/].f_1 = 151;
	Global_45141[65 /*12*/].f_2 = 7;
	Global_45141[65 /*12*/].f_3 = 0;
	Global_45141[65 /*12*/].f_10 = 0;
	Global_45141[65 /*12*/].f_11 = 0;
	Global_45141[65 /*12*/].f_4 = 0;
	Global_45141[66 /*12*/] = 148;
	Global_45141[66 /*12*/].f_1 = 150;
	Global_45141[66 /*12*/].f_2 = 7;
	Global_45141[66 /*12*/].f_3 = 0;
	Global_45141[66 /*12*/].f_10 = 0;
	Global_45141[66 /*12*/].f_11 = 0;
	Global_45141[66 /*12*/].f_4 = 0;
	Global_45141[67 /*12*/] = 155;
	Global_45141[67 /*12*/].f_1 = 156;
	Global_45141[67 /*12*/].f_2 = 63;
	Global_45141[67 /*12*/].f_3 = 2;
	Global_45141[67 /*12*/].f_10 = 0;
	Global_45141[67 /*12*/].f_11 = 0;
	Global_45141[67 /*12*/].f_4 = 0;
	Global_45141[68 /*12*/] = 125;
	Global_45141[68 /*12*/].f_1 = 160;
	Global_45141[68 /*12*/].f_2 = 16;
	Global_45141[68 /*12*/].f_3 = 0;
	Global_45141[68 /*12*/].f_10 = 1;
	Global_45141[68 /*12*/].f_11 = 0;
	Global_45141[68 /*12*/].f_4 = 0;
	Global_45141[69 /*12*/] = 161;
	Global_45141[69 /*12*/].f_1 = 162;
	Global_45141[69 /*12*/].f_2 = 64;
	Global_45141[69 /*12*/].f_3 = 2;
	Global_45141[69 /*12*/].f_10 = 0;
	Global_45141[69 /*12*/].f_11 = 0;
	Global_45141[69 /*12*/].f_4 = 0;
	Global_45141[70 /*12*/] = 161;
	Global_45141[70 /*12*/].f_1 = 162;
	Global_45141[70 /*12*/].f_2 = 64;
	Global_45141[70 /*12*/].f_3 = 1;
	Global_45141[70 /*12*/].f_10 = 0;
	Global_45141[70 /*12*/].f_11 = 0;
	Global_45141[70 /*12*/].f_4 = 0;
	Global_45141[71 /*12*/] = 161;
	Global_45141[71 /*12*/].f_1 = 162;
	Global_45141[71 /*12*/].f_2 = 64;
	Global_45141[71 /*12*/].f_3 = 2;
	Global_45141[71 /*12*/].f_10 = 0;
	Global_45141[71 /*12*/].f_11 = 0;
	Global_45141[71 /*12*/].f_4 = 0;
	Global_45141[72 /*12*/] = 166;
	Global_45141[72 /*12*/].f_1 = 16;
	Global_45141[72 /*12*/].f_2 = 21;
	Global_45141[72 /*12*/].f_3 = 0;
	Global_45141[72 /*12*/].f_10 = 0;
	Global_45141[72 /*12*/].f_11 = 0;
	Global_45141[72 /*12*/].f_4 = 0;
	Global_45141[73 /*12*/] = 166;
	Global_45141[73 /*12*/].f_1 = 16;
	Global_45141[73 /*12*/].f_2 = 21;
	Global_45141[73 /*12*/].f_3 = 1;
	Global_45141[73 /*12*/].f_10 = 0;
	Global_45141[73 /*12*/].f_11 = 0;
	Global_45141[73 /*12*/].f_4 = 0;
	Global_45141[74 /*12*/] = 166;
	Global_45141[74 /*12*/].f_1 = 16;
	Global_45141[74 /*12*/].f_2 = 21;
	Global_45141[74 /*12*/].f_3 = 2;
	Global_45141[74 /*12*/].f_10 = 0;
	Global_45141[74 /*12*/].f_11 = 0;
	Global_45141[74 /*12*/].f_4 = 0;
	Global_45141[75 /*12*/] = 167;
	Global_45141[75 /*12*/].f_1 = 16;
	Global_45141[75 /*12*/].f_2 = 6;
	Global_45141[75 /*12*/].f_3 = 2;
	Global_45141[75 /*12*/].f_10 = 0;
	Global_45141[75 /*12*/].f_11 = 0;
	Global_45141[75 /*12*/].f_4 = 0;
	Global_45141[76 /*12*/] = 168;
	Global_45141[76 /*12*/].f_1 = 16;
	Global_45141[76 /*12*/].f_2 = 6;
	Global_45141[76 /*12*/].f_3 = 2;
	Global_45141[76 /*12*/].f_10 = 0;
	Global_45141[76 /*12*/].f_11 = 0;
	Global_45141[76 /*12*/].f_4 = 0;
	Global_45141[77 /*12*/] = 169;
	Global_45141[77 /*12*/].f_1 = 16;
	Global_45141[77 /*12*/].f_2 = 6;
	Global_45141[77 /*12*/].f_3 = 2;
	Global_45141[77 /*12*/].f_10 = 0;
	Global_45141[77 /*12*/].f_11 = 0;
	Global_45141[77 /*12*/].f_4 = 0;
	Global_45141[78 /*12*/] = 170;
	Global_45141[78 /*12*/].f_1 = 16;
	Global_45141[78 /*12*/].f_2 = 6;
	Global_45141[78 /*12*/].f_3 = 2;
	Global_45141[78 /*12*/].f_10 = 0;
	Global_45141[78 /*12*/].f_11 = 0;
	Global_45141[78 /*12*/].f_4 = 0;
	Global_45141[79 /*12*/] = 171;
	Global_45141[79 /*12*/].f_1 = 16;
	Global_45141[79 /*12*/].f_2 = 6;
	Global_45141[79 /*12*/].f_3 = 2;
	Global_45141[79 /*12*/].f_10 = 0;
	Global_45141[79 /*12*/].f_11 = 0;
	Global_45141[79 /*12*/].f_4 = 0;
	Global_45141[80 /*12*/] = 172;
	Global_45141[80 /*12*/].f_1 = 173;
	Global_45141[80 /*12*/].f_2 = 6;
	Global_45141[80 /*12*/].f_3 = 2;
	Global_45141[80 /*12*/].f_10 = 0;
	Global_45141[80 /*12*/].f_11 = 0;
	Global_45141[80 /*12*/].f_4 = 0;
	Global_45141[81 /*12*/] = 174;
	Global_45141[81 /*12*/].f_1 = 175;
	Global_45141[81 /*12*/].f_2 = 6;
	Global_45141[81 /*12*/].f_3 = 2;
	Global_45141[81 /*12*/].f_10 = 0;
	Global_45141[81 /*12*/].f_11 = 0;
	Global_45141[81 /*12*/].f_4 = 0;
	Global_45141[82 /*12*/] = 176;
	Global_45141[82 /*12*/].f_1 = 177;
	Global_45141[82 /*12*/].f_2 = 6;
	Global_45141[82 /*12*/].f_3 = 2;
	Global_45141[82 /*12*/].f_10 = 0;
	Global_45141[82 /*12*/].f_11 = 0;
	Global_45141[82 /*12*/].f_4 = 0;
	Global_45141[83 /*12*/] = 178;
	Global_45141[83 /*12*/].f_1 = 179;
	Global_45141[83 /*12*/].f_2 = 6;
	Global_45141[83 /*12*/].f_3 = 2;
	Global_45141[83 /*12*/].f_10 = 0;
	Global_45141[83 /*12*/].f_11 = 0;
	Global_45141[83 /*12*/].f_4 = 0;
	Global_45141[84 /*12*/] = 180;
	Global_45141[84 /*12*/].f_1 = 181;
	Global_45141[84 /*12*/].f_2 = 4;
	Global_45141[84 /*12*/].f_3 = 0;
	Global_45141[84 /*12*/].f_10 = 0;
	Global_45141[84 /*12*/].f_11 = 3000;
	Global_45141[84 /*12*/].f_4 = 0;
	Global_45141[85 /*12*/] = 185;
	Global_45141[85 /*12*/].f_1 = 186;
	Global_45141[85 /*12*/].f_2 = 22;
	Global_45141[85 /*12*/].f_3 = 0;
	Global_45141[85 /*12*/].f_10 = 0;
	Global_45141[85 /*12*/].f_11 = 0;
	Global_45141[85 /*12*/].f_4 = 0;
	Global_45141[86 /*12*/] = 193;
	Global_45141[86 /*12*/].f_1 = 194;
	Global_45141[86 /*12*/].f_2 = 24;
	Global_45141[86 /*12*/].f_3 = 0;
	Global_45141[86 /*12*/].f_10 = 1;
	Global_45141[86 /*12*/].f_11 = 0;
	Global_45141[86 /*12*/].f_4 = 1;
	Global_45141[86 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[86 /*12*/].f_5[0 /*4*/].f_1 = 87;
	Global_45141[86 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[86 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[87 /*12*/] = 195;
	Global_45141[87 /*12*/].f_1 = 196;
	Global_45141[87 /*12*/].f_2 = 0;
	Global_45141[87 /*12*/].f_3 = 24;
	Global_45141[87 /*12*/].f_10 = 0;
	Global_45141[87 /*12*/].f_11 = 0;
	Global_45141[87 /*12*/].f_4 = 1;
	Global_45141[87 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[87 /*12*/].f_5[0 /*4*/].f_1 = 88;
	Global_45141[87 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[87 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[88 /*12*/] = 197;
	Global_45141[88 /*12*/].f_1 = 198;
	Global_45141[88 /*12*/].f_2 = 24;
	Global_45141[88 /*12*/].f_3 = 0;
	Global_45141[88 /*12*/].f_10 = 0;
	Global_45141[88 /*12*/].f_11 = 120000;
	Global_45141[88 /*12*/].f_4 = 0;
	Global_45141[89 /*12*/] = 200;
	Global_45141[89 /*12*/].f_1 = 201;
	Global_45141[89 /*12*/].f_2 = 24;
	Global_45141[89 /*12*/].f_3 = 0;
	Global_45141[89 /*12*/].f_10 = 1;
	Global_45141[89 /*12*/].f_11 = 0;
	Global_45141[89 /*12*/].f_4 = 1;
	Global_45141[89 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[89 /*12*/].f_5[0 /*4*/].f_1 = 90;
	Global_45141[89 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[89 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[90 /*12*/] = 202;
	Global_45141[90 /*12*/].f_1 = 203;
	Global_45141[90 /*12*/].f_2 = 0;
	Global_45141[90 /*12*/].f_3 = 24;
	Global_45141[90 /*12*/].f_10 = 0;
	Global_45141[90 /*12*/].f_11 = 0;
	Global_45141[90 /*12*/].f_4 = 1;
	Global_45141[90 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[90 /*12*/].f_5[0 /*4*/].f_1 = 91;
	Global_45141[90 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[90 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[91 /*12*/] = 204;
	Global_45141[91 /*12*/].f_1 = 205;
	Global_45141[91 /*12*/].f_2 = 24;
	Global_45141[91 /*12*/].f_3 = 0;
	Global_45141[91 /*12*/].f_10 = 0;
	Global_45141[91 /*12*/].f_11 = 120000;
	Global_45141[91 /*12*/].f_4 = 0;
	Global_45141[92 /*12*/] = 209;
	Global_45141[92 /*12*/].f_1 = 210;
	Global_45141[92 /*12*/].f_2 = 25;
	Global_45141[92 /*12*/].f_3 = 0;
	Global_45141[92 /*12*/].f_10 = 1;
	Global_45141[92 /*12*/].f_11 = 0;
	Global_45141[92 /*12*/].f_4 = 1;
	Global_45141[92 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[92 /*12*/].f_5[0 /*4*/].f_1 = 93;
	Global_45141[92 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[92 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[93 /*12*/] = 211;
	Global_45141[93 /*12*/].f_1 = 212;
	Global_45141[93 /*12*/].f_2 = 0;
	Global_45141[93 /*12*/].f_3 = 25;
	Global_45141[93 /*12*/].f_10 = 0;
	Global_45141[93 /*12*/].f_11 = 0;
	Global_45141[93 /*12*/].f_4 = 1;
	Global_45141[93 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[93 /*12*/].f_5[0 /*4*/].f_1 = 94;
	Global_45141[93 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[93 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[94 /*12*/] = 213;
	Global_45141[94 /*12*/].f_1 = 214;
	Global_45141[94 /*12*/].f_2 = 25;
	Global_45141[94 /*12*/].f_3 = 0;
	Global_45141[94 /*12*/].f_10 = 1;
	Global_45141[94 /*12*/].f_11 = 60000;
	Global_45141[94 /*12*/].f_4 = 1;
	Global_45141[94 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[94 /*12*/].f_5[0 /*4*/].f_1 = 95;
	Global_45141[94 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[94 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[95 /*12*/] = 215;
	Global_45141[95 /*12*/].f_1 = 216;
	Global_45141[95 /*12*/].f_2 = 0;
	Global_45141[95 /*12*/].f_3 = 25;
	Global_45141[95 /*12*/].f_10 = 0;
	Global_45141[95 /*12*/].f_11 = 0;
	Global_45141[95 /*12*/].f_4 = 1;
	Global_45141[95 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[95 /*12*/].f_5[0 /*4*/].f_1 = 96;
	Global_45141[95 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[95 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[96 /*12*/] = 217;
	Global_45141[96 /*12*/].f_1 = 218;
	Global_45141[96 /*12*/].f_2 = 25;
	Global_45141[96 /*12*/].f_3 = 0;
	Global_45141[96 /*12*/].f_10 = 0;
	Global_45141[96 /*12*/].f_11 = 60000;
	Global_45141[96 /*12*/].f_4 = 0;
	Global_45141[97 /*12*/] = 222;
	Global_45141[97 /*12*/].f_1 = 223;
	Global_45141[97 /*12*/].f_2 = 26;
	Global_45141[97 /*12*/].f_3 = 0;
	Global_45141[97 /*12*/].f_10 = 1;
	Global_45141[97 /*12*/].f_11 = 0;
	Global_45141[97 /*12*/].f_4 = 1;
	Global_45141[97 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[97 /*12*/].f_5[0 /*4*/].f_1 = 98;
	Global_45141[97 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[97 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[98 /*12*/] = 224;
	Global_45141[98 /*12*/].f_1 = 225;
	Global_45141[98 /*12*/].f_2 = 0;
	Global_45141[98 /*12*/].f_3 = 26;
	Global_45141[98 /*12*/].f_10 = 0;
	Global_45141[98 /*12*/].f_11 = 0;
	Global_45141[98 /*12*/].f_4 = 0;
	Global_45141[99 /*12*/] = 229;
	Global_45141[99 /*12*/].f_1 = 230;
	Global_45141[99 /*12*/].f_2 = 27;
	Global_45141[99 /*12*/].f_3 = 0;
	Global_45141[99 /*12*/].f_10 = 1;
	Global_45141[99 /*12*/].f_11 = 0;
	Global_45141[99 /*12*/].f_4 = 1;
	Global_45141[99 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[99 /*12*/].f_5[0 /*4*/].f_1 = 100;
	Global_45141[99 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[99 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[100 /*12*/] = 231;
	Global_45141[100 /*12*/].f_1 = 232;
	Global_45141[100 /*12*/].f_2 = 0;
	Global_45141[100 /*12*/].f_3 = 27;
	Global_45141[100 /*12*/].f_10 = 0;
	Global_45141[100 /*12*/].f_11 = 0;
	Global_45141[100 /*12*/].f_4 = 0;
	Global_45141[101 /*12*/] = 236;
	Global_45141[101 /*12*/].f_1 = 237;
	Global_45141[101 /*12*/].f_2 = 28;
	Global_45141[101 /*12*/].f_3 = 0;
	Global_45141[101 /*12*/].f_10 = 0;
	Global_45141[101 /*12*/].f_11 = 0;
	Global_45141[101 /*12*/].f_4 = 0;
	Global_45141[102 /*12*/] = 238;
	Global_45141[102 /*12*/].f_1 = 239;
	Global_45141[102 /*12*/].f_2 = 26;
	Global_45141[102 /*12*/].f_3 = 0;
	Global_45141[102 /*12*/].f_10 = 1;
	Global_45141[102 /*12*/].f_11 = 0;
	Global_45141[102 /*12*/].f_4 = 1;
	Global_45141[102 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[102 /*12*/].f_5[0 /*4*/].f_1 = 103;
	Global_45141[102 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[102 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[103 /*12*/] = 240;
	Global_45141[103 /*12*/].f_1 = 241;
	Global_45141[103 /*12*/].f_2 = 0;
	Global_45141[103 /*12*/].f_3 = 26;
	Global_45141[103 /*12*/].f_10 = 0;
	Global_45141[103 /*12*/].f_11 = 0;
	Global_45141[103 /*12*/].f_4 = 0;
	Global_45141[104 /*12*/] = 245;
	Global_45141[104 /*12*/].f_1 = 246;
	Global_45141[104 /*12*/].f_2 = 29;
	Global_45141[104 /*12*/].f_3 = 0;
	Global_45141[104 /*12*/].f_10 = 1;
	Global_45141[104 /*12*/].f_11 = 0;
	Global_45141[104 /*12*/].f_4 = 1;
	Global_45141[104 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[104 /*12*/].f_5[0 /*4*/].f_1 = 105;
	Global_45141[104 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[104 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[105 /*12*/] = 247;
	Global_45141[105 /*12*/].f_1 = 248;
	Global_45141[105 /*12*/].f_2 = 0;
	Global_45141[105 /*12*/].f_3 = 29;
	Global_45141[105 /*12*/].f_10 = 0;
	Global_45141[105 /*12*/].f_11 = 0;
	Global_45141[105 /*12*/].f_4 = 0;
	Global_45141[106 /*12*/] = 252;
	Global_45141[106 /*12*/].f_1 = 253;
	Global_45141[106 /*12*/].f_2 = 30;
	Global_45141[106 /*12*/].f_3 = 1;
	Global_45141[106 /*12*/].f_10 = 1;
	Global_45141[106 /*12*/].f_11 = 120000;
	Global_45141[106 /*12*/].f_4 = 1;
	Global_45141[106 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[106 /*12*/].f_5[0 /*4*/].f_1 = 107;
	Global_45141[106 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[106 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[107 /*12*/] = 254;
	Global_45141[107 /*12*/].f_1 = 255;
	Global_45141[107 /*12*/].f_2 = 1;
	Global_45141[107 /*12*/].f_3 = 30;
	Global_45141[107 /*12*/].f_10 = 0;
	Global_45141[107 /*12*/].f_11 = 0;
	Global_45141[107 /*12*/].f_4 = 1;
	Global_45141[107 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[107 /*12*/].f_5[0 /*4*/].f_1 = 108;
	Global_45141[107 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[107 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[108 /*12*/] = 256;
	Global_45141[108 /*12*/].f_1 = 257;
	Global_45141[108 /*12*/].f_2 = 30;
	Global_45141[108 /*12*/].f_3 = 1;
	Global_45141[108 /*12*/].f_10 = 1;
	Global_45141[108 /*12*/].f_11 = 120000;
	Global_45141[108 /*12*/].f_4 = 1;
	Global_45141[108 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[108 /*12*/].f_5[0 /*4*/].f_1 = 109;
	Global_45141[108 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[108 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[109 /*12*/] = 258;
	Global_45141[109 /*12*/].f_1 = 259;
	Global_45141[109 /*12*/].f_2 = 1;
	Global_45141[109 /*12*/].f_3 = 30;
	Global_45141[109 /*12*/].f_10 = 0;
	Global_45141[109 /*12*/].f_11 = 0;
	Global_45141[109 /*12*/].f_4 = 1;
	Global_45141[109 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[109 /*12*/].f_5[0 /*4*/].f_1 = 110;
	Global_45141[109 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[109 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[110 /*12*/] = 260;
	Global_45141[110 /*12*/].f_1 = 261;
	Global_45141[110 /*12*/].f_2 = 30;
	Global_45141[110 /*12*/].f_3 = 1;
	Global_45141[110 /*12*/].f_10 = 0;
	Global_45141[110 /*12*/].f_11 = 60000;
	Global_45141[110 /*12*/].f_4 = 0;
	Global_45141[111 /*12*/] = 265;
	Global_45141[111 /*12*/].f_1 = 266;
	Global_45141[111 /*12*/].f_2 = 31;
	Global_45141[111 /*12*/].f_3 = 1;
	Global_45141[111 /*12*/].f_10 = 1;
	Global_45141[111 /*12*/].f_11 = 0;
	Global_45141[111 /*12*/].f_4 = 1;
	Global_45141[111 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[111 /*12*/].f_5[0 /*4*/].f_1 = 112;
	Global_45141[111 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[111 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[112 /*12*/] = 267;
	Global_45141[112 /*12*/].f_1 = 268;
	Global_45141[112 /*12*/].f_2 = 1;
	Global_45141[112 /*12*/].f_3 = 31;
	Global_45141[112 /*12*/].f_10 = 0;
	Global_45141[112 /*12*/].f_11 = 0;
	Global_45141[112 /*12*/].f_4 = 0;
	Global_45141[113 /*12*/] = 272;
	Global_45141[113 /*12*/].f_1 = 273;
	Global_45141[113 /*12*/].f_2 = 32;
	Global_45141[113 /*12*/].f_3 = 1;
	Global_45141[113 /*12*/].f_10 = 1;
	Global_45141[113 /*12*/].f_11 = 0;
	Global_45141[113 /*12*/].f_4 = 1;
	Global_45141[113 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[113 /*12*/].f_5[0 /*4*/].f_1 = 114;
	Global_45141[113 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[113 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[114 /*12*/] = 274;
	Global_45141[114 /*12*/].f_1 = 275;
	Global_45141[114 /*12*/].f_2 = 1;
	Global_45141[114 /*12*/].f_3 = 32;
	Global_45141[114 /*12*/].f_10 = 0;
	Global_45141[114 /*12*/].f_11 = 0;
	Global_45141[114 /*12*/].f_4 = 1;
	Global_45141[114 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[114 /*12*/].f_5[0 /*4*/].f_1 = 115;
	Global_45141[114 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[114 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[115 /*12*/] = 276;
	Global_45141[115 /*12*/].f_1 = 277;
	Global_45141[115 /*12*/].f_2 = 32;
	Global_45141[115 /*12*/].f_3 = 1;
	Global_45141[115 /*12*/].f_10 = 0;
	Global_45141[115 /*12*/].f_11 = 30000;
	Global_45141[115 /*12*/].f_4 = 0;
	Global_45141[116 /*12*/] = 278;
	Global_45141[116 /*12*/].f_1 = 279;
	Global_45141[116 /*12*/].f_2 = 32;
	Global_45141[116 /*12*/].f_3 = 1;
	Global_45141[116 /*12*/].f_10 = 1;
	Global_45141[116 /*12*/].f_11 = 0;
	Global_45141[116 /*12*/].f_4 = 1;
	Global_45141[116 /*12*/].f_5[0 /*4*/] = 282;
	Global_45141[116 /*12*/].f_5[0 /*4*/].f_1 = 117;
	Global_45141[116 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[116 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[117 /*12*/] = 280;
	Global_45141[117 /*12*/].f_1 = 281;
	Global_45141[117 /*12*/].f_2 = 1;
	Global_45141[117 /*12*/].f_3 = 32;
	Global_45141[117 /*12*/].f_10 = 0;
	Global_45141[117 /*12*/].f_11 = 0;
	Global_45141[117 /*12*/].f_4 = 0;
	Global_45141[118 /*12*/] = 283;
	Global_45141[118 /*12*/].f_1 = 284;
	Global_45141[118 /*12*/].f_2 = 32;
	Global_45141[118 /*12*/].f_3 = 1;
	Global_45141[118 /*12*/].f_10 = 1;
	Global_45141[118 /*12*/].f_11 = 0;
	Global_45141[118 /*12*/].f_4 = 1;
	Global_45141[118 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[118 /*12*/].f_5[0 /*4*/].f_1 = 119;
	Global_45141[118 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[118 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[119 /*12*/] = 285;
	Global_45141[119 /*12*/].f_1 = 286;
	Global_45141[119 /*12*/].f_2 = 1;
	Global_45141[119 /*12*/].f_3 = 32;
	Global_45141[119 /*12*/].f_10 = 0;
	Global_45141[119 /*12*/].f_11 = 0;
	Global_45141[119 /*12*/].f_4 = 0;
	Global_45141[120 /*12*/] = 287;
	Global_45141[120 /*12*/].f_1 = 288;
	Global_45141[120 /*12*/].f_2 = 32;
	Global_45141[120 /*12*/].f_3 = 1;
	Global_45141[120 /*12*/].f_10 = 1;
	Global_45141[120 /*12*/].f_11 = 0;
	Global_45141[120 /*12*/].f_4 = 1;
	Global_45141[120 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[120 /*12*/].f_5[0 /*4*/].f_1 = 121;
	Global_45141[120 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[120 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[121 /*12*/] = 289;
	Global_45141[121 /*12*/].f_1 = 290;
	Global_45141[121 /*12*/].f_2 = 1;
	Global_45141[121 /*12*/].f_3 = 32;
	Global_45141[121 /*12*/].f_10 = 0;
	Global_45141[121 /*12*/].f_11 = 0;
	Global_45141[121 /*12*/].f_4 = 1;
	Global_45141[121 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[121 /*12*/].f_5[0 /*4*/].f_1 = 122;
	Global_45141[121 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[121 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[122 /*12*/] = 291;
	Global_45141[122 /*12*/].f_1 = 292;
	Global_45141[122 /*12*/].f_2 = 32;
	Global_45141[122 /*12*/].f_3 = 1;
	Global_45141[122 /*12*/].f_10 = 1;
	Global_45141[122 /*12*/].f_11 = 30000;
	Global_45141[122 /*12*/].f_4 = 1;
	Global_45141[122 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[122 /*12*/].f_5[0 /*4*/].f_1 = 123;
	Global_45141[122 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[122 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[123 /*12*/] = 293;
	Global_45141[123 /*12*/].f_1 = 294;
	Global_45141[123 /*12*/].f_2 = 1;
	Global_45141[123 /*12*/].f_3 = 32;
	Global_45141[123 /*12*/].f_10 = 0;
	Global_45141[123 /*12*/].f_11 = 0;
	Global_45141[123 /*12*/].f_4 = 0;
	Global_45141[124 /*12*/] = 295;
	Global_45141[124 /*12*/].f_1 = 296;
	Global_45141[124 /*12*/].f_2 = 27;
	Global_45141[124 /*12*/].f_3 = 1;
	Global_45141[124 /*12*/].f_10 = 1;
	Global_45141[124 /*12*/].f_11 = 0;
	Global_45141[124 /*12*/].f_4 = 1;
	Global_45141[124 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[124 /*12*/].f_5[0 /*4*/].f_1 = 125;
	Global_45141[124 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[124 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[125 /*12*/] = 297;
	Global_45141[125 /*12*/].f_1 = 298;
	Global_45141[125 /*12*/].f_2 = 1;
	Global_45141[125 /*12*/].f_3 = 27;
	Global_45141[125 /*12*/].f_10 = 0;
	Global_45141[125 /*12*/].f_11 = 0;
	Global_45141[125 /*12*/].f_4 = 0;
	Global_45141[126 /*12*/] = 299;
	Global_45141[126 /*12*/].f_1 = 300;
	Global_45141[126 /*12*/].f_2 = 2;
	Global_45141[126 /*12*/].f_3 = 1;
	Global_45141[126 /*12*/].f_10 = 1;
	Global_45141[126 /*12*/].f_11 = 0;
	Global_45141[126 /*12*/].f_4 = 1;
	Global_45141[126 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[126 /*12*/].f_5[0 /*4*/].f_1 = 127;
	Global_45141[126 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[126 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[127 /*12*/] = 301;
	Global_45141[127 /*12*/].f_1 = 302;
	Global_45141[127 /*12*/].f_2 = 1;
	Global_45141[127 /*12*/].f_3 = 2;
	Global_45141[127 /*12*/].f_10 = 0;
	Global_45141[127 /*12*/].f_11 = 0;
	Global_45141[127 /*12*/].f_4 = 1;
	Global_45141[127 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[127 /*12*/].f_5[0 /*4*/].f_1 = 128;
	Global_45141[127 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[127 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[128 /*12*/] = 303;
	Global_45141[128 /*12*/].f_1 = 304;
	Global_45141[128 /*12*/].f_2 = 2;
	Global_45141[128 /*12*/].f_3 = 1;
	Global_45141[128 /*12*/].f_10 = 1;
	Global_45141[128 /*12*/].f_11 = 60000;
	Global_45141[128 /*12*/].f_4 = 1;
	Global_45141[128 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[128 /*12*/].f_5[0 /*4*/].f_1 = 129;
	Global_45141[128 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[128 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[129 /*12*/] = 305;
	Global_45141[129 /*12*/].f_1 = 306;
	Global_45141[129 /*12*/].f_2 = 1;
	Global_45141[129 /*12*/].f_3 = 2;
	Global_45141[129 /*12*/].f_10 = 0;
	Global_45141[129 /*12*/].f_11 = 0;
	Global_45141[129 /*12*/].f_4 = 1;
	Global_45141[129 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[129 /*12*/].f_5[0 /*4*/].f_1 = 130;
	Global_45141[129 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[129 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[130 /*12*/] = 307;
	Global_45141[130 /*12*/].f_1 = 308;
	Global_45141[130 /*12*/].f_2 = 2;
	Global_45141[130 /*12*/].f_3 = 1;
	Global_45141[130 /*12*/].f_10 = 0;
	Global_45141[130 /*12*/].f_11 = 30000;
	Global_45141[130 /*12*/].f_4 = 0;
	Global_45141[131 /*12*/] = 309;
	Global_45141[131 /*12*/].f_1 = 310;
	Global_45141[131 /*12*/].f_2 = 0;
	Global_45141[131 /*12*/].f_3 = 1;
	Global_45141[131 /*12*/].f_10 = 1;
	Global_45141[131 /*12*/].f_11 = 0;
	Global_45141[131 /*12*/].f_4 = 1;
	Global_45141[131 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[131 /*12*/].f_5[0 /*4*/].f_1 = 132;
	Global_45141[131 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[131 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[132 /*12*/] = 311;
	Global_45141[132 /*12*/].f_1 = 312;
	Global_45141[132 /*12*/].f_2 = 1;
	Global_45141[132 /*12*/].f_3 = 0;
	Global_45141[132 /*12*/].f_10 = 0;
	Global_45141[132 /*12*/].f_11 = 0;
	Global_45141[132 /*12*/].f_4 = 1;
	Global_45141[132 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[132 /*12*/].f_5[0 /*4*/].f_1 = 133;
	Global_45141[132 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[132 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[133 /*12*/] = 313;
	Global_45141[133 /*12*/].f_1 = 314;
	Global_45141[133 /*12*/].f_2 = 0;
	Global_45141[133 /*12*/].f_3 = 1;
	Global_45141[133 /*12*/].f_10 = 0;
	Global_45141[133 /*12*/].f_11 = 25000;
	Global_45141[133 /*12*/].f_4 = 0;
	Global_45141[134 /*12*/] = 315;
	Global_45141[134 /*12*/].f_1 = 316;
	Global_45141[134 /*12*/].f_2 = 0;
	Global_45141[134 /*12*/].f_3 = 1;
	Global_45141[134 /*12*/].f_10 = 1;
	Global_45141[134 /*12*/].f_11 = 0;
	Global_45141[134 /*12*/].f_4 = 1;
	Global_45141[134 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[134 /*12*/].f_5[0 /*4*/].f_1 = 135;
	Global_45141[134 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[134 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[135 /*12*/] = 317;
	Global_45141[135 /*12*/].f_1 = 318;
	Global_45141[135 /*12*/].f_2 = 1;
	Global_45141[135 /*12*/].f_3 = 0;
	Global_45141[135 /*12*/].f_10 = 0;
	Global_45141[135 /*12*/].f_11 = 0;
	Global_45141[135 /*12*/].f_4 = 0;
	Global_45141[136 /*12*/] = 322;
	Global_45141[136 /*12*/].f_1 = 323;
	Global_45141[136 /*12*/].f_2 = 33;
	Global_45141[136 /*12*/].f_3 = 2;
	Global_45141[136 /*12*/].f_10 = 1;
	Global_45141[136 /*12*/].f_11 = 0;
	Global_45141[136 /*12*/].f_4 = 1;
	Global_45141[136 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[136 /*12*/].f_5[0 /*4*/].f_1 = 137;
	Global_45141[136 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[136 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[137 /*12*/] = 324;
	Global_45141[137 /*12*/].f_1 = 325;
	Global_45141[137 /*12*/].f_2 = 2;
	Global_45141[137 /*12*/].f_3 = 33;
	Global_45141[137 /*12*/].f_10 = 0;
	Global_45141[137 /*12*/].f_11 = 0;
	Global_45141[137 /*12*/].f_4 = 0;
	Global_45141[138 /*12*/] = 326;
	Global_45141[138 /*12*/].f_1 = 327;
	Global_45141[138 /*12*/].f_2 = 33;
	Global_45141[138 /*12*/].f_3 = 2;
	Global_45141[138 /*12*/].f_10 = 1;
	Global_45141[138 /*12*/].f_11 = 0;
	Global_45141[138 /*12*/].f_4 = 1;
	Global_45141[138 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[138 /*12*/].f_5[0 /*4*/].f_1 = 139;
	Global_45141[138 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[138 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[139 /*12*/] = 328;
	Global_45141[139 /*12*/].f_1 = 329;
	Global_45141[139 /*12*/].f_2 = 2;
	Global_45141[139 /*12*/].f_3 = 33;
	Global_45141[139 /*12*/].f_10 = 0;
	Global_45141[139 /*12*/].f_11 = 0;
	Global_45141[139 /*12*/].f_4 = 1;
	Global_45141[139 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[139 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_45141[139 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[139 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[140 /*12*/] = 330;
	Global_45141[140 /*12*/].f_1 = 331;
	Global_45141[140 /*12*/].f_2 = 2;
	Global_45141[140 /*12*/].f_3 = 33;
	Global_45141[140 /*12*/].f_10 = 0;
	Global_45141[140 /*12*/].f_11 = 0;
	Global_45141[140 /*12*/].f_4 = 0;
	Global_45141[141 /*12*/] = 332;
	Global_45141[141 /*12*/].f_1 = 333;
	Global_45141[141 /*12*/].f_2 = 29;
	Global_45141[141 /*12*/].f_3 = 2;
	Global_45141[141 /*12*/].f_10 = 0;
	Global_45141[141 /*12*/].f_11 = 0;
	Global_45141[141 /*12*/].f_4 = 1;
	Global_45141[141 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[141 /*12*/].f_5[0 /*4*/].f_1 = 142;
	Global_45141[141 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[141 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[142 /*12*/] = 334;
	Global_45141[142 /*12*/].f_1 = 335;
	Global_45141[142 /*12*/].f_2 = 2;
	Global_45141[142 /*12*/].f_3 = 29;
	Global_45141[142 /*12*/].f_10 = 0;
	Global_45141[142 /*12*/].f_11 = 0;
	Global_45141[142 /*12*/].f_4 = 0;
	Global_45141[143 /*12*/] = 336;
	Global_45141[143 /*12*/].f_1 = 337;
	Global_45141[143 /*12*/].f_2 = 3;
	Global_45141[143 /*12*/].f_3 = 2;
	Global_45141[143 /*12*/].f_10 = 0;
	Global_45141[143 /*12*/].f_11 = 0;
	Global_45141[143 /*12*/].f_4 = 1;
	Global_45141[143 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[143 /*12*/].f_5[0 /*4*/].f_1 = 144;
	Global_45141[143 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[143 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[144 /*12*/] = 338;
	Global_45141[144 /*12*/].f_1 = 339;
	Global_45141[144 /*12*/].f_2 = 2;
	Global_45141[144 /*12*/].f_3 = 3;
	Global_45141[144 /*12*/].f_10 = 0;
	Global_45141[144 /*12*/].f_11 = 0;
	Global_45141[144 /*12*/].f_4 = 0;
	Global_45141[145 /*12*/] = 343;
	Global_45141[145 /*12*/].f_1 = 344;
	Global_45141[145 /*12*/].f_2 = 34;
	Global_45141[145 /*12*/].f_3 = 2;
	Global_45141[145 /*12*/].f_10 = 0;
	Global_45141[145 /*12*/].f_11 = 0;
	Global_45141[145 /*12*/].f_4 = 1;
	Global_45141[145 /*12*/].f_5[0 /*4*/] = 199;
	Global_45141[145 /*12*/].f_5[0 /*4*/].f_1 = 146;
	Global_45141[145 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[145 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[146 /*12*/] = 345;
	Global_45141[146 /*12*/].f_1 = 346;
	Global_45141[146 /*12*/].f_2 = 2;
	Global_45141[146 /*12*/].f_3 = 34;
	Global_45141[146 /*12*/].f_10 = 0;
	Global_45141[146 /*12*/].f_11 = 0;
	Global_45141[146 /*12*/].f_4 = 0;
	Global_45141[147 /*12*/] = 319;
	Global_45141[147 /*12*/].f_1 = 347;
	Global_45141[147 /*12*/].f_2 = 26;
	Global_45141[147 /*12*/].f_3 = 2;
	Global_45141[147 /*12*/].f_10 = 0;
	Global_45141[147 /*12*/].f_11 = 0;
	Global_45141[147 /*12*/].f_4 = 0;
	Global_45141[148 /*12*/] = 351;
	Global_45141[148 /*12*/].f_1 = 352;
	Global_45141[148 /*12*/].f_2 = 35;
	Global_45141[148 /*12*/].f_3 = 2;
	Global_45141[148 /*12*/].f_10 = 0;
	Global_45141[148 /*12*/].f_11 = 0;
	Global_45141[148 /*12*/].f_4 = 0;
	Global_45141[149 /*12*/] = 351;
	Global_45141[149 /*12*/].f_1 = 352;
	Global_45141[149 /*12*/].f_2 = 35;
	Global_45141[149 /*12*/].f_3 = 0;
	Global_45141[149 /*12*/].f_10 = 0;
	Global_45141[149 /*12*/].f_11 = 0;
	Global_45141[149 /*12*/].f_4 = 0;
	Global_45141[150 /*12*/] = 351;
	Global_45141[150 /*12*/].f_1 = 352;
	Global_45141[150 /*12*/].f_2 = 35;
	Global_45141[150 /*12*/].f_3 = 1;
	Global_45141[150 /*12*/].f_10 = 0;
	Global_45141[150 /*12*/].f_11 = 0;
	Global_45141[150 /*12*/].f_4 = 0;
	Global_45141[151 /*12*/] = 355;
	Global_45141[151 /*12*/].f_1 = 356;
	Global_45141[151 /*12*/].f_2 = 36;
	Global_45141[151 /*12*/].f_3 = 2;
	Global_45141[151 /*12*/].f_10 = 0;
	Global_45141[151 /*12*/].f_11 = 0;
	Global_45141[151 /*12*/].f_4 = 0;
	Global_45141[152 /*12*/] = 355;
	Global_45141[152 /*12*/].f_1 = 356;
	Global_45141[152 /*12*/].f_2 = 36;
	Global_45141[152 /*12*/].f_3 = 0;
	Global_45141[152 /*12*/].f_10 = 0;
	Global_45141[152 /*12*/].f_11 = 0;
	Global_45141[152 /*12*/].f_4 = 0;
	Global_45141[153 /*12*/] = 355;
	Global_45141[153 /*12*/].f_1 = 356;
	Global_45141[153 /*12*/].f_2 = 36;
	Global_45141[153 /*12*/].f_3 = 1;
	Global_45141[153 /*12*/].f_10 = 0;
	Global_45141[153 /*12*/].f_11 = 0;
	Global_45141[153 /*12*/].f_4 = 0;
	Global_45141[154 /*12*/] = 363;
	Global_45141[154 /*12*/].f_1 = 364;
	Global_45141[154 /*12*/].f_2 = 38;
	Global_45141[154 /*12*/].f_3 = 2;
	Global_45141[154 /*12*/].f_10 = 0;
	Global_45141[154 /*12*/].f_11 = 0;
	Global_45141[154 /*12*/].f_4 = 0;
	Global_45141[155 /*12*/] = 365;
	Global_45141[155 /*12*/].f_1 = 366;
	Global_45141[155 /*12*/].f_2 = 11;
	Global_45141[155 /*12*/].f_3 = 0;
	Global_45141[155 /*12*/].f_10 = 0;
	Global_45141[155 /*12*/].f_11 = 0;
	Global_45141[155 /*12*/].f_4 = 0;
	Global_45141[156 /*12*/] = 365;
	Global_45141[156 /*12*/].f_1 = 366;
	Global_45141[156 /*12*/].f_2 = 11;
	Global_45141[156 /*12*/].f_3 = 1;
	Global_45141[156 /*12*/].f_10 = 0;
	Global_45141[156 /*12*/].f_11 = 0;
	Global_45141[156 /*12*/].f_4 = 0;
	Global_45141[157 /*12*/] = 365;
	Global_45141[157 /*12*/].f_1 = 366;
	Global_45141[157 /*12*/].f_2 = 11;
	Global_45141[157 /*12*/].f_3 = 2;
	Global_45141[157 /*12*/].f_10 = 0;
	Global_45141[157 /*12*/].f_11 = 0;
	Global_45141[157 /*12*/].f_4 = 0;
	Global_45141[158 /*12*/] = 367;
	Global_45141[158 /*12*/].f_1 = 368;
	Global_45141[158 /*12*/].f_2 = 29;
	Global_45141[158 /*12*/].f_3 = 2;
	Global_45141[158 /*12*/].f_10 = 0;
	Global_45141[158 /*12*/].f_11 = 0;
	Global_45141[158 /*12*/].f_4 = 0;
	Global_45141[159 /*12*/] = 372;
	Global_45141[159 /*12*/].f_1 = 373;
	Global_45141[159 /*12*/].f_2 = 39;
	Global_45141[159 /*12*/].f_3 = 0;
	Global_45141[159 /*12*/].f_10 = 0;
	Global_45141[159 /*12*/].f_11 = 0;
	Global_45141[159 /*12*/].f_4 = 0;
	Global_45141[160 /*12*/] = 374;
	Global_45141[160 /*12*/].f_1 = 375;
	Global_45141[160 /*12*/].f_2 = 39;
	Global_45141[160 /*12*/].f_3 = 1;
	Global_45141[160 /*12*/].f_10 = 0;
	Global_45141[160 /*12*/].f_11 = 0;
	Global_45141[160 /*12*/].f_4 = 0;
	Global_45141[161 /*12*/] = 417;
	Global_45141[161 /*12*/].f_1 = 418;
	Global_45141[161 /*12*/].f_2 = 40;
	Global_45141[161 /*12*/].f_3 = 1;
	Global_45141[161 /*12*/].f_10 = 0;
	Global_45141[161 /*12*/].f_11 = 0;
	Global_45141[161 /*12*/].f_4 = 0;
	Global_45141[162 /*12*/] = 419;
	Global_45141[162 /*12*/].f_1 = 420;
	Global_45141[162 /*12*/].f_2 = 43;
	Global_45141[162 /*12*/].f_3 = 0;
	Global_45141[162 /*12*/].f_10 = 0;
	Global_45141[162 /*12*/].f_11 = 0;
	Global_45141[162 /*12*/].f_4 = 0;
	Global_45141[163 /*12*/] = 421;
	Global_45141[163 /*12*/].f_1 = 422;
	Global_45141[163 /*12*/].f_2 = 43;
	Global_45141[163 /*12*/].f_3 = 2;
	Global_45141[163 /*12*/].f_10 = 0;
	Global_45141[163 /*12*/].f_11 = 0;
	Global_45141[163 /*12*/].f_4 = 0;
	Global_45141[164 /*12*/] = 423;
	Global_45141[164 /*12*/].f_1 = 424;
	Global_45141[164 /*12*/].f_2 = 43;
	Global_45141[164 /*12*/].f_3 = 1;
	Global_45141[164 /*12*/].f_10 = 0;
	Global_45141[164 /*12*/].f_11 = 0;
	Global_45141[164 /*12*/].f_4 = 0;
	Global_45141[165 /*12*/] = 425;
	Global_45141[165 /*12*/].f_1 = 426;
	Global_45141[165 /*12*/].f_2 = 44;
	Global_45141[165 /*12*/].f_3 = 1;
	Global_45141[165 /*12*/].f_10 = 0;
	Global_45141[165 /*12*/].f_11 = 0;
	Global_45141[165 /*12*/].f_4 = 0;
	Global_45141[166 /*12*/] = 427;
	Global_45141[166 /*12*/].f_1 = 428;
	Global_45141[166 /*12*/].f_2 = 45;
	Global_45141[166 /*12*/].f_3 = 0;
	Global_45141[166 /*12*/].f_10 = 0;
	Global_45141[166 /*12*/].f_11 = 0;
	Global_45141[166 /*12*/].f_4 = 0;
	Global_45141[167 /*12*/] = 429;
	Global_45141[167 /*12*/].f_1 = 430;
	Global_45141[167 /*12*/].f_2 = 46;
	Global_45141[167 /*12*/].f_3 = 0;
	Global_45141[167 /*12*/].f_10 = 0;
	Global_45141[167 /*12*/].f_11 = 0;
	Global_45141[167 /*12*/].f_4 = 0;
	Global_45141[168 /*12*/] = 431;
	Global_45141[168 /*12*/].f_1 = 432;
	Global_45141[168 /*12*/].f_2 = 49;
	Global_45141[168 /*12*/].f_3 = 0;
	Global_45141[168 /*12*/].f_10 = 0;
	Global_45141[168 /*12*/].f_11 = 0;
	Global_45141[168 /*12*/].f_4 = 0;
	Global_45141[169 /*12*/] = 433;
	Global_45141[169 /*12*/].f_1 = 434;
	Global_45141[169 /*12*/].f_2 = 49;
	Global_45141[169 /*12*/].f_3 = 2;
	Global_45141[169 /*12*/].f_10 = 0;
	Global_45141[169 /*12*/].f_11 = 0;
	Global_45141[169 /*12*/].f_4 = 0;
	Global_45141[170 /*12*/] = 435;
	Global_45141[170 /*12*/].f_1 = 436;
	Global_45141[170 /*12*/].f_2 = 49;
	Global_45141[170 /*12*/].f_3 = 1;
	Global_45141[170 /*12*/].f_10 = 0;
	Global_45141[170 /*12*/].f_11 = 0;
	Global_45141[170 /*12*/].f_4 = 0;
	Global_45141[171 /*12*/] = 437;
	Global_45141[171 /*12*/].f_1 = 438;
	Global_45141[171 /*12*/].f_2 = 50;
	Global_45141[171 /*12*/].f_3 = 1;
	Global_45141[171 /*12*/].f_10 = 0;
	Global_45141[171 /*12*/].f_11 = 0;
	Global_45141[171 /*12*/].f_4 = 0;
	Global_45141[172 /*12*/] = 439;
	Global_45141[172 /*12*/].f_1 = 440;
	Global_45141[172 /*12*/].f_2 = 51;
	Global_45141[172 /*12*/].f_3 = 0;
	Global_45141[172 /*12*/].f_10 = 0;
	Global_45141[172 /*12*/].f_11 = 0;
	Global_45141[172 /*12*/].f_4 = 0;
	Global_45141[173 /*12*/] = 441;
	Global_45141[173 /*12*/].f_1 = 442;
	Global_45141[173 /*12*/].f_2 = 51;
	Global_45141[173 /*12*/].f_3 = 2;
	Global_45141[173 /*12*/].f_10 = 0;
	Global_45141[173 /*12*/].f_11 = 0;
	Global_45141[173 /*12*/].f_4 = 0;
	Global_45141[174 /*12*/] = 443;
	Global_45141[174 /*12*/].f_1 = 444;
	Global_45141[174 /*12*/].f_2 = 51;
	Global_45141[174 /*12*/].f_3 = 1;
	Global_45141[174 /*12*/].f_10 = 0;
	Global_45141[174 /*12*/].f_11 = 0;
	Global_45141[174 /*12*/].f_4 = 0;
	Global_45141[175 /*12*/] = 445;
	Global_45141[175 /*12*/].f_1 = 446;
	Global_45141[175 /*12*/].f_2 = 52;
	Global_45141[175 /*12*/].f_3 = 0;
	Global_45141[175 /*12*/].f_10 = 0;
	Global_45141[175 /*12*/].f_11 = 0;
	Global_45141[175 /*12*/].f_4 = 0;
	Global_45141[176 /*12*/] = 447;
	Global_45141[176 /*12*/].f_1 = 448;
	Global_45141[176 /*12*/].f_2 = 52;
	Global_45141[176 /*12*/].f_3 = 2;
	Global_45141[176 /*12*/].f_10 = 0;
	Global_45141[176 /*12*/].f_11 = 0;
	Global_45141[176 /*12*/].f_4 = 0;
	Global_45141[177 /*12*/] = 449;
	Global_45141[177 /*12*/].f_1 = 450;
	Global_45141[177 /*12*/].f_2 = 52;
	Global_45141[177 /*12*/].f_3 = 1;
	Global_45141[177 /*12*/].f_10 = 0;
	Global_45141[177 /*12*/].f_11 = 0;
	Global_45141[177 /*12*/].f_4 = 0;
	Global_45141[178 /*12*/] = 451;
	Global_45141[178 /*12*/].f_1 = 452;
	Global_45141[178 /*12*/].f_2 = 53;
	Global_45141[178 /*12*/].f_3 = 2;
	Global_45141[178 /*12*/].f_10 = 0;
	Global_45141[178 /*12*/].f_11 = 0;
	Global_45141[178 /*12*/].f_4 = 0;
	Global_45141[179 /*12*/] = 453;
	Global_45141[179 /*12*/].f_1 = 454;
	Global_45141[179 /*12*/].f_2 = 53;
	Global_45141[179 /*12*/].f_3 = 0;
	Global_45141[179 /*12*/].f_10 = 0;
	Global_45141[179 /*12*/].f_11 = 0;
	Global_45141[179 /*12*/].f_4 = 0;
	Global_45141[180 /*12*/] = 455;
	Global_45141[180 /*12*/].f_1 = 456;
	Global_45141[180 /*12*/].f_2 = 53;
	Global_45141[180 /*12*/].f_3 = 1;
	Global_45141[180 /*12*/].f_10 = 0;
	Global_45141[180 /*12*/].f_11 = 0;
	Global_45141[180 /*12*/].f_4 = 0;
	Global_45141[181 /*12*/] = 457;
	Global_45141[181 /*12*/].f_1 = 458;
	Global_45141[181 /*12*/].f_2 = 4;
	Global_45141[181 /*12*/].f_3 = 0;
	Global_45141[181 /*12*/].f_10 = 0;
	Global_45141[181 /*12*/].f_11 = 0;
	Global_45141[181 /*12*/].f_4 = 0;
	Global_45141[182 /*12*/] = 459;
	Global_45141[182 /*12*/].f_1 = 460;
	Global_45141[182 /*12*/].f_2 = 37;
	Global_45141[182 /*12*/].f_3 = 0;
	Global_45141[182 /*12*/].f_10 = 0;
	Global_45141[182 /*12*/].f_11 = 0;
	Global_45141[182 /*12*/].f_4 = 0;
	Global_45141[183 /*12*/] = 461;
	Global_45141[183 /*12*/].f_1 = 462;
	Global_45141[183 /*12*/].f_2 = 37;
	Global_45141[183 /*12*/].f_3 = 2;
	Global_45141[183 /*12*/].f_10 = 0;
	Global_45141[183 /*12*/].f_11 = 0;
	Global_45141[183 /*12*/].f_4 = 0;
	Global_45141[184 /*12*/] = 463;
	Global_45141[184 /*12*/].f_1 = 464;
	Global_45141[184 /*12*/].f_2 = 37;
	Global_45141[184 /*12*/].f_3 = 1;
	Global_45141[184 /*12*/].f_10 = 0;
	Global_45141[184 /*12*/].f_11 = 0;
	Global_45141[184 /*12*/].f_4 = 0;
	Global_45141[185 /*12*/] = 471;
	Global_45141[185 /*12*/].f_1 = 472;
	Global_45141[185 /*12*/].f_2 = 54;
	Global_45141[185 /*12*/].f_3 = 1;
	Global_45141[185 /*12*/].f_10 = 0;
	Global_45141[185 /*12*/].f_11 = 0;
	Global_45141[185 /*12*/].f_4 = 0;
	Global_45141[186 /*12*/] = 473;
	Global_45141[186 /*12*/].f_1 = 474;
	Global_45141[186 /*12*/].f_2 = 54;
	Global_45141[186 /*12*/].f_3 = 0;
	Global_45141[186 /*12*/].f_10 = 0;
	Global_45141[186 /*12*/].f_11 = 0;
	Global_45141[186 /*12*/].f_4 = 0;
	Global_45141[187 /*12*/] = 475;
	Global_45141[187 /*12*/].f_1 = 476;
	Global_45141[187 /*12*/].f_2 = 55;
	Global_45141[187 /*12*/].f_3 = 1;
	Global_45141[187 /*12*/].f_10 = 0;
	Global_45141[187 /*12*/].f_11 = 0;
	Global_45141[187 /*12*/].f_4 = 0;
	Global_45141[188 /*12*/] = 477;
	Global_45141[188 /*12*/].f_1 = 478;
	Global_45141[188 /*12*/].f_2 = 54;
	Global_45141[188 /*12*/].f_3 = 2;
	Global_45141[188 /*12*/].f_10 = 0;
	Global_45141[188 /*12*/].f_11 = 0;
	Global_45141[188 /*12*/].f_4 = 0;
	Global_45141[189 /*12*/] = 479;
	Global_45141[189 /*12*/].f_1 = 480;
	Global_45141[189 /*12*/].f_2 = 55;
	Global_45141[189 /*12*/].f_3 = 0;
	Global_45141[189 /*12*/].f_10 = 0;
	Global_45141[189 /*12*/].f_11 = 0;
	Global_45141[189 /*12*/].f_4 = 0;
	Global_45141[190 /*12*/] = 481;
	Global_45141[190 /*12*/].f_1 = 482;
	Global_45141[190 /*12*/].f_2 = 55;
	Global_45141[190 /*12*/].f_3 = 2;
	Global_45141[190 /*12*/].f_10 = 0;
	Global_45141[190 /*12*/].f_11 = 0;
	Global_45141[190 /*12*/].f_4 = 0;
	Global_45141[191 /*12*/] = 483;
	Global_45141[191 /*12*/].f_1 = 484;
	Global_45141[191 /*12*/].f_2 = 12;
	Global_45141[191 /*12*/].f_3 = 0;
	Global_45141[191 /*12*/].f_10 = 0;
	Global_45141[191 /*12*/].f_11 = 0;
	Global_45141[191 /*12*/].f_4 = 0;
	Global_45141[192 /*12*/] = 485;
	Global_45141[192 /*12*/].f_1 = 486;
	Global_45141[192 /*12*/].f_2 = 12;
	Global_45141[192 /*12*/].f_3 = 1;
	Global_45141[192 /*12*/].f_10 = 0;
	Global_45141[192 /*12*/].f_11 = 0;
	Global_45141[192 /*12*/].f_4 = 0;
	Global_45141[193 /*12*/] = 487;
	Global_45141[193 /*12*/].f_1 = 488;
	Global_45141[193 /*12*/].f_2 = 12;
	Global_45141[193 /*12*/].f_3 = 2;
	Global_45141[193 /*12*/].f_10 = 0;
	Global_45141[193 /*12*/].f_11 = 0;
	Global_45141[193 /*12*/].f_4 = 0;
	Global_45141[194 /*12*/] = 510;
	Global_45141[194 /*12*/].f_1 = 511;
	Global_45141[194 /*12*/].f_2 = 56;
	Global_45141[194 /*12*/].f_3 = 0;
	Global_45141[194 /*12*/].f_10 = 0;
	Global_45141[194 /*12*/].f_11 = 0;
	Global_45141[194 /*12*/].f_4 = 0;
	Global_45141[195 /*12*/] = 512;
	Global_45141[195 /*12*/].f_1 = 513;
	Global_45141[195 /*12*/].f_2 = 56;
	Global_45141[195 /*12*/].f_3 = 0;
	Global_45141[195 /*12*/].f_10 = 0;
	Global_45141[195 /*12*/].f_11 = 0;
	Global_45141[195 /*12*/].f_4 = 0;
	Global_45141[196 /*12*/] = 514;
	Global_45141[196 /*12*/].f_1 = 515;
	Global_45141[196 /*12*/].f_2 = 56;
	Global_45141[196 /*12*/].f_3 = 0;
	Global_45141[196 /*12*/].f_10 = 0;
	Global_45141[196 /*12*/].f_11 = 0;
	Global_45141[196 /*12*/].f_4 = 0;
	Global_45141[197 /*12*/] = 516;
	Global_45141[197 /*12*/].f_1 = 517;
	Global_45141[197 /*12*/].f_2 = 56;
	Global_45141[197 /*12*/].f_3 = 0;
	Global_45141[197 /*12*/].f_10 = 0;
	Global_45141[197 /*12*/].f_11 = 0;
	Global_45141[197 /*12*/].f_4 = 0;
	Global_45141[198 /*12*/] = 518;
	Global_45141[198 /*12*/].f_1 = 519;
	Global_45141[198 /*12*/].f_2 = 56;
	Global_45141[198 /*12*/].f_3 = 0;
	Global_45141[198 /*12*/].f_10 = 0;
	Global_45141[198 /*12*/].f_11 = 0;
	Global_45141[198 /*12*/].f_4 = 0;
	Global_45141[199 /*12*/] = 520;
	Global_45141[199 /*12*/].f_1 = 521;
	Global_45141[199 /*12*/].f_2 = 57;
	Global_45141[199 /*12*/].f_3 = 0;
	Global_45141[199 /*12*/].f_10 = 1;
	Global_45141[199 /*12*/].f_11 = 60000;
	Global_45141[199 /*12*/].f_4 = 1;
	Global_45141[199 /*12*/].f_5[0 /*4*/] = 536;
	Global_45141[199 /*12*/].f_5[0 /*4*/].f_1 = 200;
	Global_45141[199 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[199 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[200 /*12*/] = 522;
	Global_45141[200 /*12*/].f_1 = 523;
	Global_45141[200 /*12*/].f_2 = 0;
	Global_45141[200 /*12*/].f_3 = 57;
	Global_45141[200 /*12*/].f_10 = 0;
	Global_45141[200 /*12*/].f_11 = 0;
	Global_45141[200 /*12*/].f_4 = 1;
	Global_45141[200 /*12*/].f_5[0 /*4*/] = 537;
	Global_45141[200 /*12*/].f_5[0 /*4*/].f_1 = 201;
	Global_45141[200 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[200 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[201 /*12*/] = 524;
	Global_45141[201 /*12*/].f_1 = 525;
	Global_45141[201 /*12*/].f_2 = 57;
	Global_45141[201 /*12*/].f_3 = 0;
	Global_45141[201 /*12*/].f_10 = 1;
	Global_45141[201 /*12*/].f_11 = 60000;
	Global_45141[201 /*12*/].f_4 = 1;
	Global_45141[201 /*12*/].f_5[0 /*4*/] = 538;
	Global_45141[201 /*12*/].f_5[0 /*4*/].f_1 = 202;
	Global_45141[201 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[201 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[202 /*12*/] = 526;
	Global_45141[202 /*12*/].f_1 = 527;
	Global_45141[202 /*12*/].f_2 = 0;
	Global_45141[202 /*12*/].f_3 = 57;
	Global_45141[202 /*12*/].f_10 = 0;
	Global_45141[202 /*12*/].f_11 = 0;
	Global_45141[202 /*12*/].f_4 = 1;
	Global_45141[202 /*12*/].f_5[0 /*4*/] = 539;
	Global_45141[202 /*12*/].f_5[0 /*4*/].f_1 = 203;
	Global_45141[202 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[202 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[203 /*12*/] = 528;
	Global_45141[203 /*12*/].f_1 = 529;
	Global_45141[203 /*12*/].f_2 = 57;
	Global_45141[203 /*12*/].f_3 = 0;
	Global_45141[203 /*12*/].f_10 = 1;
	Global_45141[203 /*12*/].f_11 = 60000;
	Global_45141[203 /*12*/].f_4 = 1;
	Global_45141[203 /*12*/].f_5[0 /*4*/] = 540;
	Global_45141[203 /*12*/].f_5[0 /*4*/].f_1 = 204;
	Global_45141[203 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[203 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[204 /*12*/] = 530;
	Global_45141[204 /*12*/].f_1 = 531;
	Global_45141[204 /*12*/].f_2 = 0;
	Global_45141[204 /*12*/].f_3 = 57;
	Global_45141[204 /*12*/].f_10 = 0;
	Global_45141[204 /*12*/].f_11 = 0;
	Global_45141[204 /*12*/].f_4 = 1;
	Global_45141[204 /*12*/].f_5[0 /*4*/] = 541;
	Global_45141[204 /*12*/].f_5[0 /*4*/].f_1 = 205;
	Global_45141[204 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[204 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[205 /*12*/] = 532;
	Global_45141[205 /*12*/].f_1 = 533;
	Global_45141[205 /*12*/].f_2 = 57;
	Global_45141[205 /*12*/].f_3 = 0;
	Global_45141[205 /*12*/].f_10 = 1;
	Global_45141[205 /*12*/].f_11 = 60000;
	Global_45141[205 /*12*/].f_4 = 1;
	Global_45141[205 /*12*/].f_5[0 /*4*/] = 542;
	Global_45141[205 /*12*/].f_5[0 /*4*/].f_1 = 206;
	Global_45141[205 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[205 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[206 /*12*/] = 534;
	Global_45141[206 /*12*/].f_1 = 535;
	Global_45141[206 /*12*/].f_2 = 0;
	Global_45141[206 /*12*/].f_3 = 57;
	Global_45141[206 /*12*/].f_10 = 0;
	Global_45141[206 /*12*/].f_11 = 0;
	Global_45141[206 /*12*/].f_4 = 0;
	Global_45141[207 /*12*/] = 543;
	Global_45141[207 /*12*/].f_1 = 544;
	Global_45141[207 /*12*/].f_2 = 58;
	Global_45141[207 /*12*/].f_3 = 0;
	Global_45141[207 /*12*/].f_10 = 1;
	Global_45141[207 /*12*/].f_11 = 60000;
	Global_45141[207 /*12*/].f_4 = 1;
	Global_45141[207 /*12*/].f_5[0 /*4*/] = 557;
	Global_45141[207 /*12*/].f_5[0 /*4*/].f_1 = 208;
	Global_45141[207 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[207 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[208 /*12*/] = 545;
	Global_45141[208 /*12*/].f_1 = 546;
	Global_45141[208 /*12*/].f_2 = 0;
	Global_45141[208 /*12*/].f_3 = 58;
	Global_45141[208 /*12*/].f_10 = 0;
	Global_45141[208 /*12*/].f_11 = 0;
	Global_45141[208 /*12*/].f_4 = 1;
	Global_45141[208 /*12*/].f_5[0 /*4*/] = 558;
	Global_45141[208 /*12*/].f_5[0 /*4*/].f_1 = 209;
	Global_45141[208 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[208 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[209 /*12*/] = 547;
	Global_45141[209 /*12*/].f_1 = 548;
	Global_45141[209 /*12*/].f_2 = 58;
	Global_45141[209 /*12*/].f_3 = 0;
	Global_45141[209 /*12*/].f_10 = 1;
	Global_45141[209 /*12*/].f_11 = 60000;
	Global_45141[209 /*12*/].f_4 = 1;
	Global_45141[209 /*12*/].f_5[0 /*4*/] = 559;
	Global_45141[209 /*12*/].f_5[0 /*4*/].f_1 = 210;
	Global_45141[209 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[209 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[210 /*12*/] = 549;
	Global_45141[210 /*12*/].f_1 = 550;
	Global_45141[210 /*12*/].f_2 = 0;
	Global_45141[210 /*12*/].f_3 = 58;
	Global_45141[210 /*12*/].f_10 = 0;
	Global_45141[210 /*12*/].f_11 = 0;
	Global_45141[210 /*12*/].f_4 = 1;
	Global_45141[210 /*12*/].f_5[0 /*4*/] = 560;
	Global_45141[210 /*12*/].f_5[0 /*4*/].f_1 = 211;
	Global_45141[210 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[210 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[211 /*12*/] = 551;
	Global_45141[211 /*12*/].f_1 = 552;
	Global_45141[211 /*12*/].f_2 = 58;
	Global_45141[211 /*12*/].f_3 = 0;
	Global_45141[211 /*12*/].f_10 = 1;
	Global_45141[211 /*12*/].f_11 = 60000;
	Global_45141[211 /*12*/].f_4 = 1;
	Global_45141[211 /*12*/].f_5[0 /*4*/] = 561;
	Global_45141[211 /*12*/].f_5[0 /*4*/].f_1 = 212;
	Global_45141[211 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[211 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[212 /*12*/] = 553;
	Global_45141[212 /*12*/].f_1 = 554;
	Global_45141[212 /*12*/].f_2 = 0;
	Global_45141[212 /*12*/].f_3 = 58;
	Global_45141[212 /*12*/].f_10 = 0;
	Global_45141[212 /*12*/].f_11 = 0;
	Global_45141[212 /*12*/].f_4 = 1;
	Global_45141[212 /*12*/].f_5[0 /*4*/] = 562;
	Global_45141[212 /*12*/].f_5[0 /*4*/].f_1 = -1;
	Global_45141[212 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[212 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[213 /*12*/] = 555;
	Global_45141[213 /*12*/].f_1 = 556;
	Global_45141[213 /*12*/].f_2 = 58;
	Global_45141[213 /*12*/].f_3 = 0;
	Global_45141[213 /*12*/].f_10 = 1;
	Global_45141[213 /*12*/].f_11 = 60000;
	Global_45141[213 /*12*/].f_4 = 0;
	Global_45141[214 /*12*/] = 563;
	Global_45141[214 /*12*/].f_1 = 564;
	Global_45141[214 /*12*/].f_2 = 59;
	Global_45141[214 /*12*/].f_3 = 0;
	Global_45141[214 /*12*/].f_10 = 1;
	Global_45141[214 /*12*/].f_11 = 60000;
	Global_45141[214 /*12*/].f_4 = 1;
	Global_45141[214 /*12*/].f_5[0 /*4*/] = 579;
	Global_45141[214 /*12*/].f_5[0 /*4*/].f_1 = 215;
	Global_45141[214 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[214 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[215 /*12*/] = 565;
	Global_45141[215 /*12*/].f_1 = 566;
	Global_45141[215 /*12*/].f_2 = 0;
	Global_45141[215 /*12*/].f_3 = 59;
	Global_45141[215 /*12*/].f_10 = 0;
	Global_45141[215 /*12*/].f_11 = 0;
	Global_45141[215 /*12*/].f_4 = 1;
	Global_45141[215 /*12*/].f_5[0 /*4*/] = 580;
	Global_45141[215 /*12*/].f_5[0 /*4*/].f_1 = 216;
	Global_45141[215 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[215 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[216 /*12*/] = 567;
	Global_45141[216 /*12*/].f_1 = 568;
	Global_45141[216 /*12*/].f_2 = 59;
	Global_45141[216 /*12*/].f_3 = 0;
	Global_45141[216 /*12*/].f_10 = 1;
	Global_45141[216 /*12*/].f_11 = 60000;
	Global_45141[216 /*12*/].f_4 = 1;
	Global_45141[216 /*12*/].f_5[0 /*4*/] = 581;
	Global_45141[216 /*12*/].f_5[0 /*4*/].f_1 = 217;
	Global_45141[216 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[216 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[217 /*12*/] = 569;
	Global_45141[217 /*12*/].f_1 = 570;
	Global_45141[217 /*12*/].f_2 = 0;
	Global_45141[217 /*12*/].f_3 = 59;
	Global_45141[217 /*12*/].f_10 = 0;
	Global_45141[217 /*12*/].f_11 = 0;
	Global_45141[217 /*12*/].f_4 = 1;
	Global_45141[217 /*12*/].f_5[0 /*4*/] = 582;
	Global_45141[217 /*12*/].f_5[0 /*4*/].f_1 = 218;
	Global_45141[217 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[217 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[218 /*12*/] = 571;
	Global_45141[218 /*12*/].f_1 = 572;
	Global_45141[218 /*12*/].f_2 = 59;
	Global_45141[218 /*12*/].f_3 = 0;
	Global_45141[218 /*12*/].f_10 = 1;
	Global_45141[218 /*12*/].f_11 = 60000;
	Global_45141[218 /*12*/].f_4 = 1;
	Global_45141[218 /*12*/].f_5[0 /*4*/] = 583;
	Global_45141[218 /*12*/].f_5[0 /*4*/].f_1 = 219;
	Global_45141[218 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[218 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[219 /*12*/] = 573;
	Global_45141[219 /*12*/].f_1 = 574;
	Global_45141[219 /*12*/].f_2 = 0;
	Global_45141[219 /*12*/].f_3 = 59;
	Global_45141[219 /*12*/].f_10 = 0;
	Global_45141[219 /*12*/].f_11 = 0;
	Global_45141[219 /*12*/].f_4 = 1;
	Global_45141[219 /*12*/].f_5[0 /*4*/] = 584;
	Global_45141[219 /*12*/].f_5[0 /*4*/].f_1 = 220;
	Global_45141[219 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[219 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[220 /*12*/] = 575;
	Global_45141[220 /*12*/].f_1 = 576;
	Global_45141[220 /*12*/].f_2 = 59;
	Global_45141[220 /*12*/].f_3 = 0;
	Global_45141[220 /*12*/].f_10 = 1;
	Global_45141[220 /*12*/].f_11 = 60000;
	Global_45141[220 /*12*/].f_4 = 1;
	Global_45141[220 /*12*/].f_5[0 /*4*/] = 585;
	Global_45141[220 /*12*/].f_5[0 /*4*/].f_1 = 221;
	Global_45141[220 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[220 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[221 /*12*/] = 577;
	Global_45141[221 /*12*/].f_1 = 578;
	Global_45141[221 /*12*/].f_2 = 0;
	Global_45141[221 /*12*/].f_3 = 59;
	Global_45141[221 /*12*/].f_10 = 0;
	Global_45141[221 /*12*/].f_11 = 0;
	Global_45141[221 /*12*/].f_4 = 0;
	Global_45141[222 /*12*/] = 586;
	Global_45141[222 /*12*/].f_1 = 587;
	Global_45141[222 /*12*/].f_2 = 60;
	Global_45141[222 /*12*/].f_3 = 2;
	Global_45141[222 /*12*/].f_10 = 1;
	Global_45141[222 /*12*/].f_11 = 60000;
	Global_45141[222 /*12*/].f_4 = 1;
	Global_45141[222 /*12*/].f_5[0 /*4*/] = 600;
	Global_45141[222 /*12*/].f_5[0 /*4*/].f_1 = 223;
	Global_45141[222 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[222 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[223 /*12*/] = 588;
	Global_45141[223 /*12*/].f_1 = 589;
	Global_45141[223 /*12*/].f_2 = 2;
	Global_45141[223 /*12*/].f_3 = 60;
	Global_45141[223 /*12*/].f_10 = 0;
	Global_45141[223 /*12*/].f_11 = 0;
	Global_45141[223 /*12*/].f_4 = 1;
	Global_45141[223 /*12*/].f_5[0 /*4*/] = 601;
	Global_45141[223 /*12*/].f_5[0 /*4*/].f_1 = 224;
	Global_45141[223 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[223 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[224 /*12*/] = 590;
	Global_45141[224 /*12*/].f_1 = 591;
	Global_45141[224 /*12*/].f_2 = 60;
	Global_45141[224 /*12*/].f_3 = 2;
	Global_45141[224 /*12*/].f_10 = 1;
	Global_45141[224 /*12*/].f_11 = 60000;
	Global_45141[224 /*12*/].f_4 = 1;
	Global_45141[224 /*12*/].f_5[0 /*4*/] = 602;
	Global_45141[224 /*12*/].f_5[0 /*4*/].f_1 = 225;
	Global_45141[224 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[224 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[225 /*12*/] = 592;
	Global_45141[225 /*12*/].f_1 = 593;
	Global_45141[225 /*12*/].f_2 = 2;
	Global_45141[225 /*12*/].f_3 = 60;
	Global_45141[225 /*12*/].f_10 = 0;
	Global_45141[225 /*12*/].f_11 = 0;
	Global_45141[225 /*12*/].f_4 = 1;
	Global_45141[225 /*12*/].f_5[0 /*4*/] = 603;
	Global_45141[225 /*12*/].f_5[0 /*4*/].f_1 = 226;
	Global_45141[225 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[225 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[226 /*12*/] = 594;
	Global_45141[226 /*12*/].f_1 = 595;
	Global_45141[226 /*12*/].f_2 = 60;
	Global_45141[226 /*12*/].f_3 = 2;
	Global_45141[226 /*12*/].f_10 = 1;
	Global_45141[226 /*12*/].f_11 = 60000;
	Global_45141[226 /*12*/].f_4 = 1;
	Global_45141[226 /*12*/].f_5[0 /*4*/] = 604;
	Global_45141[226 /*12*/].f_5[0 /*4*/].f_1 = 227;
	Global_45141[226 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[226 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[227 /*12*/] = 596;
	Global_45141[227 /*12*/].f_1 = 597;
	Global_45141[227 /*12*/].f_2 = 2;
	Global_45141[227 /*12*/].f_3 = 60;
	Global_45141[227 /*12*/].f_10 = 1;
	Global_45141[227 /*12*/].f_11 = 60000;
	Global_45141[227 /*12*/].f_4 = 1;
	Global_45141[227 /*12*/].f_5[0 /*4*/] = 605;
	Global_45141[227 /*12*/].f_5[0 /*4*/].f_1 = 228;
	Global_45141[227 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[227 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[228 /*12*/] = 598;
	Global_45141[228 /*12*/].f_1 = 599;
	Global_45141[228 /*12*/].f_2 = 2;
	Global_45141[228 /*12*/].f_3 = 60;
	Global_45141[228 /*12*/].f_10 = 0;
	Global_45141[228 /*12*/].f_11 = 0;
	Global_45141[228 /*12*/].f_4 = 0;
	Global_45141[229 /*12*/] = 606;
	Global_45141[229 /*12*/].f_1 = 607;
	Global_45141[229 /*12*/].f_2 = 61;
	Global_45141[229 /*12*/].f_3 = 2;
	Global_45141[229 /*12*/].f_10 = 1;
	Global_45141[229 /*12*/].f_11 = 60000;
	Global_45141[229 /*12*/].f_4 = 1;
	Global_45141[229 /*12*/].f_5[0 /*4*/] = 610;
	Global_45141[229 /*12*/].f_5[0 /*4*/].f_1 = 230;
	Global_45141[229 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[229 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[230 /*12*/] = 608;
	Global_45141[230 /*12*/].f_1 = 609;
	Global_45141[230 /*12*/].f_2 = 2;
	Global_45141[230 /*12*/].f_3 = 61;
	Global_45141[230 /*12*/].f_10 = 0;
	Global_45141[230 /*12*/].f_11 = 0;
	Global_45141[230 /*12*/].f_4 = 1;
	Global_45141[230 /*12*/].f_5[0 /*4*/] = 617;
	Global_45141[230 /*12*/].f_5[0 /*4*/].f_1 = 231;
	Global_45141[230 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[230 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[231 /*12*/] = 611;
	Global_45141[231 /*12*/].f_1 = 612;
	Global_45141[231 /*12*/].f_2 = 61;
	Global_45141[231 /*12*/].f_3 = 2;
	Global_45141[231 /*12*/].f_10 = 1;
	Global_45141[231 /*12*/].f_11 = 60000;
	Global_45141[231 /*12*/].f_4 = 1;
	Global_45141[231 /*12*/].f_5[0 /*4*/] = 618;
	Global_45141[231 /*12*/].f_5[0 /*4*/].f_1 = 232;
	Global_45141[231 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[231 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[232 /*12*/] = 613;
	Global_45141[232 /*12*/].f_1 = 614;
	Global_45141[232 /*12*/].f_2 = 2;
	Global_45141[232 /*12*/].f_3 = 61;
	Global_45141[232 /*12*/].f_10 = 0;
	Global_45141[232 /*12*/].f_11 = 0;
	Global_45141[232 /*12*/].f_4 = 1;
	Global_45141[232 /*12*/].f_5[0 /*4*/] = 619;
	Global_45141[232 /*12*/].f_5[0 /*4*/].f_1 = 233;
	Global_45141[232 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[232 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[233 /*12*/] = 615;
	Global_45141[233 /*12*/].f_1 = 616;
	Global_45141[233 /*12*/].f_2 = 61;
	Global_45141[233 /*12*/].f_3 = 2;
	Global_45141[233 /*12*/].f_10 = 1;
	Global_45141[233 /*12*/].f_11 = 60000;
	Global_45141[233 /*12*/].f_4 = 1;
	Global_45141[233 /*12*/].f_5[0 /*4*/] = 622;
	Global_45141[233 /*12*/].f_5[0 /*4*/].f_1 = 234;
	Global_45141[233 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[233 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[234 /*12*/] = 620;
	Global_45141[234 /*12*/].f_1 = 621;
	Global_45141[234 /*12*/].f_2 = 2;
	Global_45141[234 /*12*/].f_3 = 61;
	Global_45141[234 /*12*/].f_10 = 0;
	Global_45141[234 /*12*/].f_11 = 0;
	Global_45141[234 /*12*/].f_4 = 0;
	Global_45141[235 /*12*/] = 623;
	Global_45141[235 /*12*/].f_1 = 624;
	Global_45141[235 /*12*/].f_2 = 62;
	Global_45141[235 /*12*/].f_3 = 2;
	Global_45141[235 /*12*/].f_10 = 1;
	Global_45141[235 /*12*/].f_11 = 60000;
	Global_45141[235 /*12*/].f_4 = 1;
	Global_45141[235 /*12*/].f_5[0 /*4*/] = 635;
	Global_45141[235 /*12*/].f_5[0 /*4*/].f_1 = 236;
	Global_45141[235 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[235 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[236 /*12*/] = 625;
	Global_45141[236 /*12*/].f_1 = 626;
	Global_45141[236 /*12*/].f_2 = 2;
	Global_45141[236 /*12*/].f_3 = 62;
	Global_45141[236 /*12*/].f_10 = 0;
	Global_45141[236 /*12*/].f_11 = 0;
	Global_45141[236 /*12*/].f_4 = 1;
	Global_45141[236 /*12*/].f_5[0 /*4*/] = 636;
	Global_45141[236 /*12*/].f_5[0 /*4*/].f_1 = 237;
	Global_45141[236 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[236 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[237 /*12*/] = 627;
	Global_45141[237 /*12*/].f_1 = 628;
	Global_45141[237 /*12*/].f_2 = 62;
	Global_45141[237 /*12*/].f_3 = 2;
	Global_45141[237 /*12*/].f_10 = 1;
	Global_45141[237 /*12*/].f_11 = 60000;
	Global_45141[237 /*12*/].f_4 = 1;
	Global_45141[237 /*12*/].f_5[0 /*4*/] = 637;
	Global_45141[237 /*12*/].f_5[0 /*4*/].f_1 = 238;
	Global_45141[237 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[237 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[238 /*12*/] = 629;
	Global_45141[238 /*12*/].f_1 = 630;
	Global_45141[238 /*12*/].f_2 = 2;
	Global_45141[238 /*12*/].f_3 = 62;
	Global_45141[238 /*12*/].f_10 = 0;
	Global_45141[238 /*12*/].f_11 = 0;
	Global_45141[238 /*12*/].f_4 = 1;
	Global_45141[238 /*12*/].f_5[0 /*4*/] = 638;
	Global_45141[238 /*12*/].f_5[0 /*4*/].f_1 = 239;
	Global_45141[238 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[238 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[239 /*12*/] = 631;
	Global_45141[239 /*12*/].f_1 = 632;
	Global_45141[239 /*12*/].f_2 = 62;
	Global_45141[239 /*12*/].f_3 = 2;
	Global_45141[239 /*12*/].f_10 = 1;
	Global_45141[239 /*12*/].f_11 = 60000;
	Global_45141[239 /*12*/].f_4 = 1;
	Global_45141[239 /*12*/].f_5[0 /*4*/] = 639;
	Global_45141[239 /*12*/].f_5[0 /*4*/].f_1 = 240;
	Global_45141[239 /*12*/].f_5[0 /*4*/].f_2 = 0;
	Global_45141[239 /*12*/].f_5[0 /*4*/].f_3 = -1;
	Global_45141[240 /*12*/] = 633;
	Global_45141[240 /*12*/].f_1 = 634;
	Global_45141[240 /*12*/].f_2 = 2;
	Global_45141[240 /*12*/].f_3 = 62;
	Global_45141[240 /*12*/].f_10 = 0;
	Global_45141[240 /*12*/].f_11 = 0;
	Global_45141[240 /*12*/].f_4 = 0;
	Global_45141[241 /*12*/] = 646;
	Global_45141[241 /*12*/].f_1 = 647;
	Global_45141[241 /*12*/].f_2 = 36;
	Global_45141[241 /*12*/].f_3 = 2;
	Global_45141[241 /*12*/].f_10 = 0;
	Global_45141[241 /*12*/].f_11 = 0;
	Global_45141[241 /*12*/].f_4 = 0;
	Global_45141[242 /*12*/] = 648;
	Global_45141[242 /*12*/].f_1 = 649;
	Global_45141[242 /*12*/].f_2 = 36;
	Global_45141[242 /*12*/].f_3 = 0;
	Global_45141[242 /*12*/].f_10 = 0;
	Global_45141[242 /*12*/].f_11 = 0;
	Global_45141[242 /*12*/].f_4 = 0;
	Global_45141[243 /*12*/] = 650;
	Global_45141[243 /*12*/].f_1 = 651;
	Global_45141[243 /*12*/].f_2 = 36;
	Global_45141[243 /*12*/].f_3 = 1;
	Global_45141[243 /*12*/].f_10 = 0;
	Global_45141[243 /*12*/].f_11 = 0;
	Global_45141[243 /*12*/].f_4 = 0;
	Global_45141[244 /*12*/] = 655;
	Global_45141[244 /*12*/].f_1 = 656;
	Global_45141[244 /*12*/].f_2 = 65;
	Global_45141[244 /*12*/].f_3 = 1;
	Global_45141[244 /*12*/].f_10 = 0;
	Global_45141[244 /*12*/].f_11 = 0;
	Global_45141[244 /*12*/].f_4 = 0;
	Global_45141[245 /*12*/] = 657;
	Global_45141[245 /*12*/].f_1 = 658;
	Global_45141[245 /*12*/].f_2 = 65;
	Global_45141[245 /*12*/].f_3 = 1;
	Global_45141[245 /*12*/].f_10 = 0;
	Global_45141[245 /*12*/].f_11 = 0;
	Global_45141[245 /*12*/].f_4 = 0;
	Global_45141[246 /*12*/] = 659;
	Global_45141[246 /*12*/].f_1 = 660;
	Global_45141[246 /*12*/].f_2 = 65;
	Global_45141[246 /*12*/].f_3 = 1;
	Global_45141[246 /*12*/].f_10 = 0;
	Global_45141[246 /*12*/].f_11 = 0;
	Global_45141[246 /*12*/].f_4 = 0;
	Global_45141[247 /*12*/] = 661;
	Global_45141[247 /*12*/].f_1 = 662;
	Global_45141[247 /*12*/].f_2 = 65;
	Global_45141[247 /*12*/].f_3 = 1;
	Global_45141[247 /*12*/].f_10 = 0;
	Global_45141[247 /*12*/].f_11 = 0;
	Global_45141[247 /*12*/].f_4 = 0;
	Global_45141[248 /*12*/] = 663;
	Global_45141[248 /*12*/].f_1 = 664;
	Global_45141[248 /*12*/].f_2 = 33;
	Global_45141[248 /*12*/].f_3 = 2;
	Global_45141[248 /*12*/].f_10 = 0;
	Global_45141[248 /*12*/].f_11 = 40000;
	Global_45141[248 /*12*/].f_4 = 0;
	Global_45141[249 /*12*/] = 665;
	Global_45141[249 /*12*/].f_1 = 666;
	Global_45141[249 /*12*/].f_2 = 19;
	Global_45141[249 /*12*/].f_3 = 1;
	Global_45141[249 /*12*/].f_10 = 1;
	Global_45141[249 /*12*/].f_11 = 0;
	Global_45141[249 /*12*/].f_4 = 0;
	Global_45141[250 /*12*/] = 667;
	Global_45141[250 /*12*/].f_1 = 668;
	Global_45141[250 /*12*/].f_2 = 19;
	Global_45141[250 /*12*/].f_3 = 1;
	Global_45141[250 /*12*/].f_10 = 1;
	Global_45141[250 /*12*/].f_11 = 0;
	Global_45141[250 /*12*/].f_4 = 0;
	Global_45141[251 /*12*/] = 669;
	Global_45141[251 /*12*/].f_1 = 670;
	Global_45141[251 /*12*/].f_2 = 19;
	Global_45141[251 /*12*/].f_3 = 1;
	Global_45141[251 /*12*/].f_10 = 1;
	Global_45141[251 /*12*/].f_11 = 0;
	Global_45141[251 /*12*/].f_4 = 0;
	Global_45141[252 /*12*/] = 671;
	Global_45141[252 /*12*/].f_1 = 672;
	Global_45141[252 /*12*/].f_2 = 19;
	Global_45141[252 /*12*/].f_3 = 1;
	Global_45141[252 /*12*/].f_10 = 1;
	Global_45141[252 /*12*/].f_11 = 0;
	Global_45141[252 /*12*/].f_4 = 0;
	Global_45141[253 /*12*/] = 673;
	Global_45141[253 /*12*/].f_1 = 674;
	Global_45141[253 /*12*/].f_2 = 19;
	Global_45141[253 /*12*/].f_3 = 1;
	Global_45141[253 /*12*/].f_10 = 1;
	Global_45141[253 /*12*/].f_11 = 0;
	Global_45141[253 /*12*/].f_4 = 0;
	Global_45141[254 /*12*/] = 675;
	Global_45141[254 /*12*/].f_1 = 676;
	Global_45141[254 /*12*/].f_2 = 19;
	Global_45141[254 /*12*/].f_3 = 1;
	Global_45141[254 /*12*/].f_10 = 1;
	Global_45141[254 /*12*/].f_11 = 0;
	Global_45141[254 /*12*/].f_4 = 0;
	Global_45141[255 /*12*/] = 679;
	Global_45141[255 /*12*/].f_1 = 680;
	Global_45141[255 /*12*/].f_2 = 19;
	Global_45141[255 /*12*/].f_3 = 1;
	Global_45141[255 /*12*/].f_10 = 1;
	Global_45141[255 /*12*/].f_11 = 0;
	Global_45141[255 /*12*/].f_4 = 0;
	Global_45141[256 /*12*/] = 677;
	Global_45141[256 /*12*/].f_1 = 678;
	Global_45141[256 /*12*/].f_2 = 19;
	Global_45141[256 /*12*/].f_3 = 1;
	Global_45141[256 /*12*/].f_10 = 1;
	Global_45141[256 /*12*/].f_11 = 0;
	Global_45141[256 /*12*/].f_4 = 0;
	Global_45141[257 /*12*/] = 681;
	Global_45141[257 /*12*/].f_1 = 682;
	Global_45141[257 /*12*/].f_2 = 19;
	Global_45141[257 /*12*/].f_3 = 1;
	Global_45141[257 /*12*/].f_10 = 1;
	Global_45141[257 /*12*/].f_11 = 0;
	Global_45141[257 /*12*/].f_4 = 0;
	Global_45141[258 /*12*/] = 683;
	Global_45141[258 /*12*/].f_1 = 684;
	Global_45141[258 /*12*/].f_2 = 19;
	Global_45141[258 /*12*/].f_3 = 1;
	Global_45141[258 /*12*/].f_10 = 1;
	Global_45141[258 /*12*/].f_11 = 0;
	Global_45141[258 /*12*/].f_4 = 0;
	Global_45141[259 /*12*/] = 685;
	Global_45141[259 /*12*/].f_1 = 686;
	Global_45141[259 /*12*/].f_2 = 19;
	Global_45141[259 /*12*/].f_3 = 1;
	Global_45141[259 /*12*/].f_10 = 1;
	Global_45141[259 /*12*/].f_11 = 0;
	Global_45141[259 /*12*/].f_4 = 0;
	Global_45141[260 /*12*/] = 687;
	Global_45141[260 /*12*/].f_1 = 688;
	Global_45141[260 /*12*/].f_2 = 19;
	Global_45141[260 /*12*/].f_3 = 1;
	Global_45141[260 /*12*/].f_10 = 1;
	Global_45141[260 /*12*/].f_11 = 0;
	Global_45141[260 /*12*/].f_4 = 0;
	Global_45141[261 /*12*/] = 691;
	Global_45141[261 /*12*/].f_1 = 692;
	Global_45141[261 /*12*/].f_2 = 19;
	Global_45141[261 /*12*/].f_3 = 1;
	Global_45141[261 /*12*/].f_10 = 1;
	Global_45141[261 /*12*/].f_11 = 0;
	Global_45141[261 /*12*/].f_4 = 0;
	Global_45141[262 /*12*/] = 689;
	Global_45141[262 /*12*/].f_1 = 690;
	Global_45141[262 /*12*/].f_2 = 19;
	Global_45141[262 /*12*/].f_3 = 1;
	Global_45141[262 /*12*/].f_10 = 1;
	Global_45141[262 /*12*/].f_11 = 0;
	Global_45141[262 /*12*/].f_4 = 0;
	Global_45141[263 /*12*/] = 693;
	Global_45141[263 /*12*/].f_1 = 694;
	Global_45141[263 /*12*/].f_2 = 19;
	Global_45141[263 /*12*/].f_3 = 1;
	Global_45141[263 /*12*/].f_10 = 1;
	Global_45141[263 /*12*/].f_11 = 0;
	Global_45141[263 /*12*/].f_4 = 0;
	Global_45141[264 /*12*/] = 695;
	Global_45141[264 /*12*/].f_1 = 696;
	Global_45141[264 /*12*/].f_2 = 19;
	Global_45141[264 /*12*/].f_3 = 1;
	Global_45141[264 /*12*/].f_10 = 1;
	Global_45141[264 /*12*/].f_11 = 0;
	Global_45141[264 /*12*/].f_4 = 0;
	Global_45141[265 /*12*/] = 697;
	Global_45141[265 /*12*/].f_1 = 698;
	Global_45141[265 /*12*/].f_2 = 19;
	Global_45141[265 /*12*/].f_3 = 1;
	Global_45141[265 /*12*/].f_10 = 1;
	Global_45141[265 /*12*/].f_11 = 0;
	Global_45141[265 /*12*/].f_4 = 0;
	Global_45141[266 /*12*/] = 699;
	Global_45141[266 /*12*/].f_1 = 700;
	Global_45141[266 /*12*/].f_2 = 19;
	Global_45141[266 /*12*/].f_3 = 1;
	Global_45141[266 /*12*/].f_10 = 1;
	Global_45141[266 /*12*/].f_11 = 0;
	Global_45141[266 /*12*/].f_4 = 0;
	Global_45141[267 /*12*/] = 701;
	Global_45141[267 /*12*/].f_1 = 702;
	Global_45141[267 /*12*/].f_2 = 19;
	Global_45141[267 /*12*/].f_3 = 1;
	Global_45141[267 /*12*/].f_10 = 1;
	Global_45141[267 /*12*/].f_11 = 0;
	Global_45141[267 /*12*/].f_4 = 0;
	Global_45141[268 /*12*/] = 703;
	Global_45141[268 /*12*/].f_1 = 704;
	Global_45141[268 /*12*/].f_2 = 19;
	Global_45141[268 /*12*/].f_3 = 1;
	Global_45141[268 /*12*/].f_10 = 1;
	Global_45141[268 /*12*/].f_11 = 0;
	Global_45141[268 /*12*/].f_4 = 0;
	Global_45141[269 /*12*/] = 705;
	Global_45141[269 /*12*/].f_1 = 706;
	Global_45141[269 /*12*/].f_2 = 19;
	Global_45141[269 /*12*/].f_3 = 1;
	Global_45141[269 /*12*/].f_10 = 1;
	Global_45141[269 /*12*/].f_11 = 0;
	Global_45141[269 /*12*/].f_4 = 0;
	Global_45141[270 /*12*/] = 707;
	Global_45141[270 /*12*/].f_1 = 708;
	Global_45141[270 /*12*/].f_2 = 16;
	Global_45141[270 /*12*/].f_3 = 0;
	Global_45141[270 /*12*/].f_10 = 1;
	Global_45141[270 /*12*/].f_11 = 0;
	Global_45141[270 /*12*/].f_4 = 0;
	Global_45141[271 /*12*/] = 709;
	Global_45141[271 /*12*/].f_1 = 710;
	Global_45141[271 /*12*/].f_2 = 16;
	Global_45141[271 /*12*/].f_3 = 0;
	Global_45141[271 /*12*/].f_10 = 1;
	Global_45141[271 /*12*/].f_11 = 0;
	Global_45141[271 /*12*/].f_4 = 0;
	Global_45141[272 /*12*/] = 711;
	Global_45141[272 /*12*/].f_1 = 712;
	Global_45141[272 /*12*/].f_2 = 16;
	Global_45141[272 /*12*/].f_3 = 0;
	Global_45141[272 /*12*/].f_10 = 1;
	Global_45141[272 /*12*/].f_11 = 0;
	Global_45141[272 /*12*/].f_4 = 0;
	Global_45141[273 /*12*/] = 713;
	Global_45141[273 /*12*/].f_1 = 714;
	Global_45141[273 /*12*/].f_2 = 16;
	Global_45141[273 /*12*/].f_3 = 0;
	Global_45141[273 /*12*/].f_10 = 1;
	Global_45141[273 /*12*/].f_11 = 0;
	Global_45141[273 /*12*/].f_4 = 0;
	Global_45141[274 /*12*/] = 715;
	Global_45141[274 /*12*/].f_1 = 716;
	Global_45141[274 /*12*/].f_2 = 16;
	Global_45141[274 /*12*/].f_3 = 0;
	Global_45141[274 /*12*/].f_10 = 1;
	Global_45141[274 /*12*/].f_11 = 0;
	Global_45141[274 /*12*/].f_4 = 0;
	Global_45141[275 /*12*/] = 717;
	Global_45141[275 /*12*/].f_1 = 718;
	Global_45141[275 /*12*/].f_2 = 16;
	Global_45141[275 /*12*/].f_3 = 0;
	Global_45141[275 /*12*/].f_10 = 1;
	Global_45141[275 /*12*/].f_11 = 0;
	Global_45141[275 /*12*/].f_4 = 0;
	Global_45141[276 /*12*/] = 719;
	Global_45141[276 /*12*/].f_1 = 720;
	Global_45141[276 /*12*/].f_2 = 16;
	Global_45141[276 /*12*/].f_3 = 0;
	Global_45141[276 /*12*/].f_10 = 1;
	Global_45141[276 /*12*/].f_11 = 0;
	Global_45141[276 /*12*/].f_4 = 0;
	Global_48466[0 /*46*/].f_45 = 0;
	Global_48466[0 /*46*/].f_31 = 0;
	Global_48466[0 /*46*/].f_42 = 0;
	Global_48466[0 /*46*/].f_43 = 0;
	Global_48466[0 /*46*/].f_2 = 2;
	Global_48466[0 /*46*/].f_3[0] = 0;
	Global_48466[0 /*46*/].f_3[1] = 4;
	Global_48466[0 /*46*/].f_30 = 8;
	Global_48466[0 /*46*/].f_8[0] = 0;
	Global_48466[0 /*46*/].f_8[1] = 1;
	Global_48466[0 /*46*/].f_8[2] = 2;
	Global_48466[0 /*46*/].f_8[3] = 3;
	Global_48466[0 /*46*/].f_8[4] = 4;
	Global_48466[0 /*46*/].f_8[5] = 5;
	Global_48466[0 /*46*/].f_8[6] = 6;
	Global_48466[0 /*46*/].f_8[7] = 9;
	Global_48466[1 /*46*/].f_45 = 0;
	Global_48466[1 /*46*/].f_31 = 0;
	Global_48466[1 /*46*/].f_42 = 0;
	Global_48466[1 /*46*/].f_43 = 0;
	Global_48466[1 /*46*/].f_2 = 3;
	Global_48466[1 /*46*/].f_3[0] = 5;
	Global_48466[1 /*46*/].f_3[1] = 0;
	Global_48466[1 /*46*/].f_3[2] = 4;
	Global_48466[1 /*46*/].f_30 = 3;
	Global_48466[1 /*46*/].f_8[0] = 10;
	Global_48466[1 /*46*/].f_8[1] = 11;
	Global_48466[1 /*46*/].f_8[2] = 16;
	Global_48466[2 /*46*/].f_45 = 0;
	Global_48466[2 /*46*/].f_31 = 0;
	Global_48466[2 /*46*/].f_42 = 0;
	Global_48466[2 /*46*/].f_43 = 0;
	Global_48466[2 /*46*/].f_2 = 2;
	Global_48466[2 /*46*/].f_3[0] = 7;
	Global_48466[2 /*46*/].f_3[1] = 1;
	Global_48466[2 /*46*/].f_30 = 1;
	Global_48466[2 /*46*/].f_8[0] = 12;
	Global_48466[3 /*46*/].f_45 = 0;
	Global_48466[3 /*46*/].f_31 = 0;
	Global_48466[3 /*46*/].f_42 = 0;
	Global_48466[3 /*46*/].f_43 = 0;
	Global_48466[3 /*46*/].f_2 = 2;
	Global_48466[3 /*46*/].f_3[0] = 7;
	Global_48466[3 /*46*/].f_3[1] = 1;
	Global_48466[3 /*46*/].f_30 = 1;
	Global_48466[3 /*46*/].f_8[0] = 14;
	Global_48466[4 /*46*/].f_45 = 0;
	Global_48466[4 /*46*/].f_31 = 0;
	Global_48466[4 /*46*/].f_42 = 0;
	Global_48466[4 /*46*/].f_43 = 0;
	Global_48466[4 /*46*/].f_2 = 2;
	Global_48466[4 /*46*/].f_3[0] = 7;
	Global_48466[4 /*46*/].f_3[1] = 1;
	Global_48466[4 /*46*/].f_30 = 1;
	Global_48466[4 /*46*/].f_8[0] = 13;
	Global_48466[5 /*46*/].f_45 = 0;
	Global_48466[5 /*46*/].f_31 = 0;
	Global_48466[5 /*46*/].f_42 = 0;
	Global_48466[5 /*46*/].f_43 = 0;
	Global_48466[5 /*46*/].f_2 = 2;
	Global_48466[5 /*46*/].f_3[0] = 7;
	Global_48466[5 /*46*/].f_3[1] = 1;
	Global_48466[5 /*46*/].f_30 = 1;
	Global_48466[5 /*46*/].f_8[0] = 15;
	Global_48466[6 /*46*/].f_45 = 0;
	Global_48466[6 /*46*/].f_31 = 0;
	Global_48466[6 /*46*/].f_42 = 0;
	Global_48466[6 /*46*/].f_43 = 0;
	Global_48466[6 /*46*/].f_2 = 2;
	Global_48466[6 /*46*/].f_3[0] = 0;
	Global_48466[6 /*46*/].f_3[1] = 8;
	Global_48466[6 /*46*/].f_30 = 5;
	Global_48466[6 /*46*/].f_8[0] = 17;
	Global_48466[6 /*46*/].f_8[1] = 19;
	Global_48466[6 /*46*/].f_8[2] = 20;
	Global_48466[6 /*46*/].f_8[3] = 21;
	Global_48466[6 /*46*/].f_8[4] = 22;
	Global_48466[7 /*46*/].f_45 = 0;
	Global_48466[7 /*46*/].f_31 = 0;
	Global_48466[7 /*46*/].f_42 = 0;
	Global_48466[7 /*46*/].f_43 = 0;
	Global_48466[7 /*46*/].f_2 = 2;
	Global_48466[7 /*46*/].f_3[0] = 1;
	Global_48466[7 /*46*/].f_3[1] = 9;
	Global_48466[7 /*46*/].f_30 = 5;
	Global_48466[7 /*46*/].f_8[0] = 18;
	Global_48466[7 /*46*/].f_8[1] = 24;
	Global_48466[7 /*46*/].f_8[2] = 25;
	Global_48466[7 /*46*/].f_8[3] = 26;
	Global_48466[7 /*46*/].f_8[4] = 27;
	Global_48466[8 /*46*/].f_45 = 0;
	Global_48466[8 /*46*/].f_31 = 0;
	Global_48466[8 /*46*/].f_42 = 0;
	Global_48466[8 /*46*/].f_43 = 0;
	Global_48466[8 /*46*/].f_2 = 2;
	Global_48466[8 /*46*/].f_3[0] = 2;
	Global_48466[8 /*46*/].f_3[1] = 10;
	Global_48466[8 /*46*/].f_30 = 4;
	Global_48466[8 /*46*/].f_8[0] = 23;
	Global_48466[8 /*46*/].f_8[1] = 28;
	Global_48466[8 /*46*/].f_8[2] = 29;
	Global_48466[8 /*46*/].f_8[3] = 30;
	Global_48466[9 /*46*/].f_45 = 0;
	Global_48466[9 /*46*/].f_31 = 0;
	Global_48466[9 /*46*/].f_42 = 0;
	Global_48466[9 /*46*/].f_43 = 0;
	Global_48466[9 /*46*/].f_2 = 1;
	Global_48466[9 /*46*/].f_3[0] = 11;
	Global_48466[9 /*46*/].f_30 = 3;
	Global_48466[9 /*46*/].f_8[0] = 31;
	Global_48466[9 /*46*/].f_8[1] = 32;
	Global_48466[9 /*46*/].f_8[2] = 33;
	Global_48466[10 /*46*/].f_45 = 0;
	Global_48466[10 /*46*/].f_31 = 0;
	Global_48466[10 /*46*/].f_42 = 0;
	Global_48466[10 /*46*/].f_43 = 0;
	Global_48466[10 /*46*/].f_2 = 1;
	Global_48466[10 /*46*/].f_3[0] = 13;
	Global_48466[10 /*46*/].f_30 = 3;
	Global_48466[10 /*46*/].f_8[0] = 34;
	Global_48466[10 /*46*/].f_8[1] = 35;
	Global_48466[10 /*46*/].f_8[2] = 36;
	Global_48466[11 /*46*/].f_45 = 0;
	Global_48466[11 /*46*/].f_31 = 0;
	Global_48466[11 /*46*/].f_42 = 0;
	Global_48466[11 /*46*/].f_43 = 0;
	Global_48466[11 /*46*/].f_2 = 1;
	Global_48466[11 /*46*/].f_3[0] = 14;
	Global_48466[11 /*46*/].f_30 = 3;
	Global_48466[11 /*46*/].f_8[0] = 37;
	Global_48466[11 /*46*/].f_8[1] = 38;
	Global_48466[11 /*46*/].f_8[2] = 39;
	Global_48466[12 /*46*/].f_45 = 0;
	Global_48466[12 /*46*/].f_31 = 0;
	Global_48466[12 /*46*/].f_42 = 0;
	Global_48466[12 /*46*/].f_43 = 0;
	Global_48466[12 /*46*/].f_2 = 1;
	Global_48466[12 /*46*/].f_3[0] = 12;
	Global_48466[12 /*46*/].f_30 = 6;
	Global_48466[12 /*46*/].f_8[0] = 40;
	Global_48466[12 /*46*/].f_8[1] = 41;
	Global_48466[12 /*46*/].f_8[2] = 42;
	Global_48466[12 /*46*/].f_8[3] = 191;
	Global_48466[12 /*46*/].f_8[4] = 192;
	Global_48466[12 /*46*/].f_8[5] = 193;
	Global_48466[13 /*46*/].f_45 = 0;
	Global_48466[13 /*46*/].f_31 = 0;
	Global_48466[13 /*46*/].f_42 = 0;
	Global_48466[13 /*46*/].f_43 = 0;
	Global_48466[13 /*46*/].f_2 = 2;
	Global_48466[13 /*46*/].f_3[0] = 7;
	Global_48466[13 /*46*/].f_3[1] = 0;
	Global_48466[13 /*46*/].f_30 = 1;
	Global_48466[13 /*46*/].f_8[0] = 43;
	Global_48466[14 /*46*/].f_45 = 0;
	Global_48466[14 /*46*/].f_31 = 0;
	Global_48466[14 /*46*/].f_42 = 0;
	Global_48466[14 /*46*/].f_43 = 0;
	Global_48466[14 /*46*/].f_2 = 4;
	Global_48466[14 /*46*/].f_3[0] = 15;
	Global_48466[14 /*46*/].f_3[1] = 0;
	Global_48466[14 /*46*/].f_3[2] = 1;
	Global_48466[14 /*46*/].f_3[3] = 2;
	Global_48466[14 /*46*/].f_30 = 3;
	Global_48466[14 /*46*/].f_8[0] = 44;
	Global_48466[14 /*46*/].f_8[1] = 45;
	Global_48466[14 /*46*/].f_8[2] = 46;
	Global_48466[15 /*46*/].f_45 = 0;
	Global_48466[15 /*46*/].f_31 = 0;
	Global_48466[15 /*46*/].f_42 = 0;
	Global_48466[15 /*46*/].f_43 = 0;
	Global_48466[15 /*46*/].f_2 = 4;
	Global_48466[15 /*46*/].f_3[0] = 16;
	Global_48466[15 /*46*/].f_3[1] = 0;
	Global_48466[15 /*46*/].f_3[2] = 1;
	Global_48466[15 /*46*/].f_3[3] = 2;
	Global_48466[15 /*46*/].f_30 = 1;
	Global_48466[15 /*46*/].f_8[0] = 47;
	Global_48466[16 /*46*/].f_45 = 0;
	Global_48466[16 /*46*/].f_31 = 0;
	Global_48466[16 /*46*/].f_42 = 0;
	Global_48466[16 /*46*/].f_43 = 0;
	Global_48466[16 /*46*/].f_2 = 4;
	Global_48466[16 /*46*/].f_3[0] = 16;
	Global_48466[16 /*46*/].f_3[1] = 0;
	Global_48466[16 /*46*/].f_3[2] = 1;
	Global_48466[16 /*46*/].f_3[3] = 2;
	Global_48466[16 /*46*/].f_30 = 1;
	Global_48466[16 /*46*/].f_8[0] = 48;
	Global_48466[17 /*46*/].f_45 = 0;
	Global_48466[17 /*46*/].f_31 = 0;
	Global_48466[17 /*46*/].f_42 = 0;
	Global_48466[17 /*46*/].f_43 = 0;
	Global_48466[17 /*46*/].f_2 = 4;
	Global_48466[17 /*46*/].f_3[0] = 0;
	Global_48466[17 /*46*/].f_3[1] = 1;
	Global_48466[17 /*46*/].f_3[2] = 2;
	Global_48466[17 /*46*/].f_3[3] = 16;
	Global_48466[17 /*46*/].f_30 = 1;
	Global_48466[17 /*46*/].f_8[0] = 49;
	Global_48466[18 /*46*/].f_45 = 0;
	Global_48466[18 /*46*/].f_31 = 0;
	Global_48466[18 /*46*/].f_42 = 0;
	Global_48466[18 /*46*/].f_43 = 0;
	Global_48466[18 /*46*/].f_2 = 4;
	Global_48466[18 /*46*/].f_3[0] = 0;
	Global_48466[18 /*46*/].f_3[1] = 1;
	Global_48466[18 /*46*/].f_3[2] = 2;
	Global_48466[18 /*46*/].f_3[3] = 16;
	Global_48466[18 /*46*/].f_30 = 1;
	Global_48466[18 /*46*/].f_8[0] = 50;
	Global_48466[19 /*46*/].f_45 = 0;
	Global_48466[19 /*46*/].f_31 = 0;
	Global_48466[19 /*46*/].f_42 = 0;
	Global_48466[19 /*46*/].f_43 = 0;
	Global_48466[19 /*46*/].f_2 = 4;
	Global_48466[19 /*46*/].f_3[0] = 0;
	Global_48466[19 /*46*/].f_3[1] = 1;
	Global_48466[19 /*46*/].f_3[2] = 2;
	Global_48466[19 /*46*/].f_3[3] = 16;
	Global_48466[19 /*46*/].f_30 = 1;
	Global_48466[19 /*46*/].f_8[0] = 51;
	Global_48466[20 /*46*/].f_45 = 0;
	Global_48466[20 /*46*/].f_31 = 0;
	Global_48466[20 /*46*/].f_42 = 0;
	Global_48466[20 /*46*/].f_43 = 0;
	Global_48466[20 /*46*/].f_2 = 4;
	Global_48466[20 /*46*/].f_3[0] = 0;
	Global_48466[20 /*46*/].f_3[1] = 1;
	Global_48466[20 /*46*/].f_3[2] = 2;
	Global_48466[20 /*46*/].f_3[3] = 16;
	Global_48466[20 /*46*/].f_30 = 1;
	Global_48466[20 /*46*/].f_8[0] = 52;
	Global_48466[21 /*46*/].f_45 = 0;
	Global_48466[21 /*46*/].f_31 = 0;
	Global_48466[21 /*46*/].f_42 = 0;
	Global_48466[21 /*46*/].f_43 = 0;
	Global_48466[21 /*46*/].f_2 = 4;
	Global_48466[21 /*46*/].f_3[0] = 16;
	Global_48466[21 /*46*/].f_3[1] = 0;
	Global_48466[21 /*46*/].f_3[2] = 1;
	Global_48466[21 /*46*/].f_3[3] = 2;
	Global_48466[21 /*46*/].f_30 = 1;
	Global_48466[21 /*46*/].f_8[0] = 53;
	Global_48466[22 /*46*/].f_45 = 0;
	Global_48466[22 /*46*/].f_31 = 0;
	Global_48466[22 /*46*/].f_42 = 0;
	Global_48466[22 /*46*/].f_43 = 0;
	Global_48466[22 /*46*/].f_2 = 4;
	Global_48466[22 /*46*/].f_3[0] = 0;
	Global_48466[22 /*46*/].f_3[1] = 1;
	Global_48466[22 /*46*/].f_3[2] = 2;
	Global_48466[22 /*46*/].f_3[3] = 16;
	Global_48466[22 /*46*/].f_30 = 1;
	Global_48466[22 /*46*/].f_8[0] = 54;
	Global_48466[23 /*46*/].f_45 = 0;
	Global_48466[23 /*46*/].f_31 = 0;
	Global_48466[23 /*46*/].f_42 = 0;
	Global_48466[23 /*46*/].f_43 = 0;
	Global_48466[23 /*46*/].f_2 = 1;
	Global_48466[23 /*46*/].f_3[0] = 12;
	Global_48466[23 /*46*/].f_30 = 3;
	Global_48466[23 /*46*/].f_8[0] = 55;
	Global_48466[23 /*46*/].f_8[1] = 58;
	Global_48466[23 /*46*/].f_8[2] = 59;
	Global_48466[24 /*46*/].f_45 = 0;
	Global_48466[24 /*46*/].f_31 = 0;
	Global_48466[24 /*46*/].f_42 = 0;
	Global_48466[24 /*46*/].f_43 = 0;
	Global_48466[24 /*46*/].f_2 = 1;
	Global_48466[24 /*46*/].f_3[0] = 14;
	Global_48466[24 /*46*/].f_30 = 3;
	Global_48466[24 /*46*/].f_8[0] = 56;
	Global_48466[24 /*46*/].f_8[1] = 60;
	Global_48466[24 /*46*/].f_8[2] = 61;
	Global_48466[25 /*46*/].f_45 = 0;
	Global_48466[25 /*46*/].f_31 = 0;
	Global_48466[25 /*46*/].f_42 = 0;
	Global_48466[25 /*46*/].f_43 = 0;
	Global_48466[25 /*46*/].f_2 = 1;
	Global_48466[25 /*46*/].f_3[0] = 12;
	Global_48466[25 /*46*/].f_30 = 3;
	Global_48466[25 /*46*/].f_8[0] = 57;
	Global_48466[25 /*46*/].f_8[1] = 62;
	Global_48466[25 /*46*/].f_8[2] = 63;
	Global_48466[26 /*46*/].f_45 = 0;
	Global_48466[26 /*46*/].f_31 = 0;
	Global_48466[26 /*46*/].f_42 = 0;
	Global_48466[26 /*46*/].f_43 = 0;
	Global_48466[26 /*46*/].f_2 = 4;
	Global_48466[26 /*46*/].f_3[0] = 1;
	Global_48466[26 /*46*/].f_3[1] = 0;
	Global_48466[26 /*46*/].f_3[2] = 2;
	Global_48466[26 /*46*/].f_3[3] = 20;
	Global_48466[26 /*46*/].f_30 = 1;
	Global_48466[26 /*46*/].f_8[0] = 64;
	Global_48466[27 /*46*/].f_45 = 0;
	Global_48466[27 /*46*/].f_31 = 0;
	Global_48466[27 /*46*/].f_42 = 0;
	Global_48466[27 /*46*/].f_43 = 0;
	Global_48466[27 /*46*/].f_2 = 4;
	Global_48466[27 /*46*/].f_3[0] = 17;
	Global_48466[27 /*46*/].f_3[1] = 0;
	Global_48466[27 /*46*/].f_3[2] = 1;
	Global_48466[27 /*46*/].f_3[3] = 2;
	Global_48466[27 /*46*/].f_30 = 1;
	Global_48466[27 /*46*/].f_8[0] = 66;
	Global_48466[28 /*46*/].f_45 = 0;
	Global_48466[28 /*46*/].f_31 = 0;
	Global_48466[28 /*46*/].f_42 = 0;
	Global_48466[28 /*46*/].f_43 = 0;
	Global_48466[28 /*46*/].f_2 = 4;
	Global_48466[28 /*46*/].f_3[0] = 18;
	Global_48466[28 /*46*/].f_3[1] = 0;
	Global_48466[28 /*46*/].f_3[2] = 1;
	Global_48466[28 /*46*/].f_3[3] = 2;
	Global_48466[28 /*46*/].f_30 = 1;
	Global_48466[28 /*46*/].f_8[0] = 65;
	Global_48466[29 /*46*/].f_45 = 0;
	Global_48466[29 /*46*/].f_31 = 0;
	Global_48466[29 /*46*/].f_42 = 0;
	Global_48466[29 /*46*/].f_43 = 0;
	Global_48466[29 /*46*/].f_2 = 2;
	Global_48466[29 /*46*/].f_3[0] = 2;
	Global_48466[29 /*46*/].f_3[1] = 63;
	Global_48466[29 /*46*/].f_30 = 1;
	Global_48466[29 /*46*/].f_8[0] = 67;
	Global_48466[30 /*46*/].f_45 = 0;
	Global_48466[30 /*46*/].f_31 = 0;
	Global_48466[30 /*46*/].f_42 = 0;
	Global_48466[30 /*46*/].f_43 = 0;
	Global_48466[30 /*46*/].f_2 = 3;
	Global_48466[30 /*46*/].f_3[0] = 0;
	Global_48466[30 /*46*/].f_3[1] = 1;
	Global_48466[30 /*46*/].f_3[2] = 2;
	Global_48466[30 /*46*/].f_30 = 1;
	Global_48466[30 /*46*/].f_8[0] = 68;
	Global_48466[31 /*46*/].f_45 = 0;
	Global_48466[31 /*46*/].f_31 = 0;
	Global_48466[31 /*46*/].f_42 = 0;
	Global_48466[31 /*46*/].f_43 = 0;
	Global_48466[31 /*46*/].f_2 = 2;
	Global_48466[31 /*46*/].f_3[0] = 0;
	Global_48466[31 /*46*/].f_3[1] = 64;
	Global_48466[31 /*46*/].f_30 = 1;
	Global_48466[31 /*46*/].f_8[0] = 69;
	Global_48466[32 /*46*/].f_45 = 0;
	Global_48466[32 /*46*/].f_31 = 0;
	Global_48466[32 /*46*/].f_42 = 0;
	Global_48466[32 /*46*/].f_43 = 0;
	Global_48466[32 /*46*/].f_2 = 2;
	Global_48466[32 /*46*/].f_3[0] = 1;
	Global_48466[32 /*46*/].f_3[1] = 64;
	Global_48466[32 /*46*/].f_30 = 1;
	Global_48466[32 /*46*/].f_8[0] = 70;
	Global_48466[33 /*46*/].f_45 = 0;
	Global_48466[33 /*46*/].f_31 = 0;
	Global_48466[33 /*46*/].f_42 = 0;
	Global_48466[33 /*46*/].f_43 = 0;
	Global_48466[33 /*46*/].f_2 = 2;
	Global_48466[33 /*46*/].f_3[0] = 2;
	Global_48466[33 /*46*/].f_3[1] = 64;
	Global_48466[33 /*46*/].f_30 = 1;
	Global_48466[33 /*46*/].f_8[0] = 71;
	Global_48466[34 /*46*/].f_45 = 0;
	Global_48466[34 /*46*/].f_31 = 0;
	Global_48466[34 /*46*/].f_42 = 0;
	Global_48466[34 /*46*/].f_43 = 0;
	Global_48466[34 /*46*/].f_2 = 1;
	Global_48466[34 /*46*/].f_3[0] = 21;
	Global_48466[34 /*46*/].f_30 = 1;
	Global_48466[34 /*46*/].f_8[0] = 72;
	Global_48466[35 /*46*/].f_45 = 0;
	Global_48466[35 /*46*/].f_31 = 0;
	Global_48466[35 /*46*/].f_42 = 0;
	Global_48466[35 /*46*/].f_43 = 0;
	Global_48466[35 /*46*/].f_2 = 1;
	Global_48466[35 /*46*/].f_3[0] = 21;
	Global_48466[35 /*46*/].f_30 = 1;
	Global_48466[35 /*46*/].f_8[0] = 73;
	Global_48466[36 /*46*/].f_45 = 0;
	Global_48466[36 /*46*/].f_31 = 0;
	Global_48466[36 /*46*/].f_42 = 0;
	Global_48466[36 /*46*/].f_43 = 0;
	Global_48466[36 /*46*/].f_2 = 1;
	Global_48466[36 /*46*/].f_3[0] = 21;
	Global_48466[36 /*46*/].f_30 = 1;
	Global_48466[36 /*46*/].f_8[0] = 74;
	Global_48466[37 /*46*/].f_45 = 0;
	Global_48466[37 /*46*/].f_31 = 0;
	Global_48466[37 /*46*/].f_42 = 0;
	Global_48466[37 /*46*/].f_43 = 0;
	Global_48466[37 /*46*/].f_2 = 2;
	Global_48466[37 /*46*/].f_3[0] = 6;
	Global_48466[37 /*46*/].f_3[1] = 2;
	Global_48466[37 /*46*/].f_30 = 9;
	Global_48466[37 /*46*/].f_8[0] = 75;
	Global_48466[37 /*46*/].f_8[1] = 76;
	Global_48466[37 /*46*/].f_8[2] = 77;
	Global_48466[37 /*46*/].f_8[3] = 78;
	Global_48466[37 /*46*/].f_8[4] = 79;
	Global_48466[37 /*46*/].f_8[5] = 80;
	Global_48466[37 /*46*/].f_8[6] = 81;
	Global_48466[37 /*46*/].f_8[7] = 82;
	Global_48466[37 /*46*/].f_8[8] = 83;
	Global_48466[38 /*46*/].f_45 = 0;
	Global_48466[38 /*46*/].f_31 = 0;
	Global_48466[38 /*46*/].f_42 = 0;
	Global_48466[38 /*46*/].f_43 = 0;
	Global_48466[38 /*46*/].f_2 = 2;
	Global_48466[38 /*46*/].f_3[0] = 0;
	Global_48466[38 /*46*/].f_3[1] = 4;
	Global_48466[38 /*46*/].f_30 = 1;
	Global_48466[38 /*46*/].f_8[0] = 84;
	Global_48466[39 /*46*/].f_45 = 0;
	Global_48466[39 /*46*/].f_31 = 0;
	Global_48466[39 /*46*/].f_42 = 0;
	Global_48466[39 /*46*/].f_43 = 0;
	Global_48466[39 /*46*/].f_2 = 4;
	Global_48466[39 /*46*/].f_3[0] = 22;
	Global_48466[39 /*46*/].f_3[1] = 0;
	Global_48466[39 /*46*/].f_3[2] = 1;
	Global_48466[39 /*46*/].f_3[3] = 2;
	Global_48466[39 /*46*/].f_30 = 1;
	Global_48466[39 /*46*/].f_8[0] = 85;
	Global_48466[40 /*46*/].f_45 = 0;
	Global_48466[40 /*46*/].f_31 = 0;
	Global_48466[40 /*46*/].f_42 = 0;
	Global_48466[40 /*46*/].f_43 = 0;
	Global_48466[40 /*46*/].f_2 = 2;
	Global_48466[40 /*46*/].f_3[0] = 0;
	Global_48466[40 /*46*/].f_3[1] = 24;
	Global_48466[40 /*46*/].f_30 = 3;
	Global_48466[40 /*46*/].f_8[0] = 86;
	Global_48466[40 /*46*/].f_8[1] = 87;
	Global_48466[40 /*46*/].f_8[2] = 88;
	Global_48466[41 /*46*/].f_45 = 0;
	Global_48466[41 /*46*/].f_31 = 0;
	Global_48466[41 /*46*/].f_42 = 0;
	Global_48466[41 /*46*/].f_43 = 0;
	Global_48466[41 /*46*/].f_2 = 2;
	Global_48466[41 /*46*/].f_3[0] = 0;
	Global_48466[41 /*46*/].f_3[1] = 24;
	Global_48466[41 /*46*/].f_30 = 3;
	Global_48466[41 /*46*/].f_8[0] = 89;
	Global_48466[41 /*46*/].f_8[1] = 90;
	Global_48466[41 /*46*/].f_8[2] = 91;
	Global_48466[42 /*46*/].f_45 = 0;
	Global_48466[42 /*46*/].f_31 = 0;
	Global_48466[42 /*46*/].f_42 = 0;
	Global_48466[42 /*46*/].f_43 = 0;
	Global_48466[42 /*46*/].f_2 = 2;
	Global_48466[42 /*46*/].f_3[0] = 0;
	Global_48466[42 /*46*/].f_3[1] = 25;
	Global_48466[42 /*46*/].f_30 = 5;
	Global_48466[42 /*46*/].f_8[0] = 92;
	Global_48466[42 /*46*/].f_8[1] = 93;
	Global_48466[42 /*46*/].f_8[2] = 94;
	Global_48466[42 /*46*/].f_8[3] = 95;
	Global_48466[42 /*46*/].f_8[4] = 96;
	Global_48466[43 /*46*/].f_45 = 0;
	Global_48466[43 /*46*/].f_31 = 0;
	Global_48466[43 /*46*/].f_42 = 0;
	Global_48466[43 /*46*/].f_43 = 0;
	Global_48466[43 /*46*/].f_2 = 2;
	Global_48466[43 /*46*/].f_3[0] = 26;
	Global_48466[43 /*46*/].f_3[1] = 0;
	Global_48466[43 /*46*/].f_30 = 2;
	Global_48466[43 /*46*/].f_8[0] = 97;
	Global_48466[43 /*46*/].f_8[1] = 98;
	Global_48466[44 /*46*/].f_45 = 0;
	Global_48466[44 /*46*/].f_31 = 0;
	Global_48466[44 /*46*/].f_42 = 0;
	Global_48466[44 /*46*/].f_43 = 0;
	Global_48466[44 /*46*/].f_2 = 2;
	Global_48466[44 /*46*/].f_3[0] = 27;
	Global_48466[44 /*46*/].f_3[1] = 0;
	Global_48466[44 /*46*/].f_30 = 2;
	Global_48466[44 /*46*/].f_8[0] = 99;
	Global_48466[44 /*46*/].f_8[1] = 100;
	Global_48466[45 /*46*/].f_45 = 0;
	Global_48466[45 /*46*/].f_31 = 0;
	Global_48466[45 /*46*/].f_42 = 0;
	Global_48466[45 /*46*/].f_43 = 0;
	Global_48466[45 /*46*/].f_2 = 3;
	Global_48466[45 /*46*/].f_3[0] = 0;
	Global_48466[45 /*46*/].f_3[1] = 2;
	Global_48466[45 /*46*/].f_3[2] = 28;
	Global_48466[45 /*46*/].f_30 = 1;
	Global_48466[45 /*46*/].f_8[0] = 101;
	Global_48466[46 /*46*/].f_45 = 0;
	Global_48466[46 /*46*/].f_31 = 0;
	Global_48466[46 /*46*/].f_42 = 0;
	Global_48466[46 /*46*/].f_43 = 0;
	Global_48466[46 /*46*/].f_2 = 2;
	Global_48466[46 /*46*/].f_3[0] = 0;
	Global_48466[46 /*46*/].f_3[1] = 26;
	Global_48466[46 /*46*/].f_30 = 2;
	Global_48466[46 /*46*/].f_8[0] = 102;
	Global_48466[46 /*46*/].f_8[1] = 103;
	Global_48466[47 /*46*/].f_45 = 0;
	Global_48466[47 /*46*/].f_31 = 0;
	Global_48466[47 /*46*/].f_42 = 0;
	Global_48466[47 /*46*/].f_43 = 0;
	Global_48466[47 /*46*/].f_2 = 2;
	Global_48466[47 /*46*/].f_3[0] = 0;
	Global_48466[47 /*46*/].f_3[1] = 29;
	Global_48466[47 /*46*/].f_30 = 2;
	Global_48466[47 /*46*/].f_8[0] = 104;
	Global_48466[47 /*46*/].f_8[1] = 105;
	Global_48466[48 /*46*/].f_45 = 0;
	Global_48466[48 /*46*/].f_31 = 0;
	Global_48466[48 /*46*/].f_42 = 0;
	Global_48466[48 /*46*/].f_43 = 0;
	Global_48466[48 /*46*/].f_2 = 2;
	Global_48466[48 /*46*/].f_3[0] = 1;
	Global_48466[48 /*46*/].f_3[1] = 30;
	Global_48466[48 /*46*/].f_30 = 5;
	Global_48466[48 /*46*/].f_8[0] = 106;
	Global_48466[48 /*46*/].f_8[1] = 107;
	Global_48466[48 /*46*/].f_8[2] = 108;
	Global_48466[48 /*46*/].f_8[3] = 109;
	Global_48466[48 /*46*/].f_8[4] = 110;
	Global_48466[49 /*46*/].f_45 = 0;
	Global_48466[49 /*46*/].f_31 = 0;
	Global_48466[49 /*46*/].f_42 = 0;
	Global_48466[49 /*46*/].f_43 = 0;
	Global_48466[49 /*46*/].f_2 = 2;
	Global_48466[49 /*46*/].f_3[0] = 1;
	Global_48466[49 /*46*/].f_3[1] = 31;
	Global_48466[49 /*46*/].f_30 = 2;
	Global_48466[49 /*46*/].f_8[0] = 111;
	Global_48466[49 /*46*/].f_8[1] = 112;
	Global_48466[50 /*46*/].f_45 = 0;
	Global_48466[50 /*46*/].f_31 = 0;
	Global_48466[50 /*46*/].f_42 = 0;
	Global_48466[50 /*46*/].f_43 = 0;
	Global_48466[50 /*46*/].f_2 = 2;
	Global_48466[50 /*46*/].f_3[0] = 1;
	Global_48466[50 /*46*/].f_3[1] = 32;
	Global_48466[50 /*46*/].f_30 = 3;
	Global_48466[50 /*46*/].f_8[0] = 113;
	Global_48466[50 /*46*/].f_8[1] = 114;
	Global_48466[50 /*46*/].f_8[2] = 115;
	Global_48466[51 /*46*/].f_45 = 0;
	Global_48466[51 /*46*/].f_31 = 0;
	Global_48466[51 /*46*/].f_42 = 0;
	Global_48466[51 /*46*/].f_43 = 0;
	Global_48466[51 /*46*/].f_2 = 2;
	Global_48466[51 /*46*/].f_3[0] = 1;
	Global_48466[51 /*46*/].f_3[1] = 32;
	Global_48466[51 /*46*/].f_30 = 2;
	Global_48466[51 /*46*/].f_8[0] = 116;
	Global_48466[51 /*46*/].f_8[1] = 117;
	Global_48466[52 /*46*/].f_45 = 0;
	Global_48466[52 /*46*/].f_31 = 0;
	Global_48466[52 /*46*/].f_42 = 0;
	Global_48466[52 /*46*/].f_43 = 0;
	Global_48466[52 /*46*/].f_2 = 2;
	Global_48466[52 /*46*/].f_3[0] = 1;
	Global_48466[52 /*46*/].f_3[1] = 32;
	Global_48466[52 /*46*/].f_30 = 2;
	Global_48466[52 /*46*/].f_8[0] = 118;
	Global_48466[52 /*46*/].f_8[1] = 119;
	Global_48466[53 /*46*/].f_45 = 0;
	Global_48466[53 /*46*/].f_31 = 0;
	Global_48466[53 /*46*/].f_42 = 0;
	Global_48466[53 /*46*/].f_43 = 0;
	Global_48466[53 /*46*/].f_2 = 2;
	Global_48466[53 /*46*/].f_3[0] = 1;
	Global_48466[53 /*46*/].f_3[1] = 32;
	Global_48466[53 /*46*/].f_30 = 4;
	Global_48466[53 /*46*/].f_8[0] = 120;
	Global_48466[53 /*46*/].f_8[1] = 121;
	Global_48466[53 /*46*/].f_8[2] = 122;
	Global_48466[53 /*46*/].f_8[3] = 123;
	Global_48466[54 /*46*/].f_45 = 0;
	Global_48466[54 /*46*/].f_31 = 0;
	Global_48466[54 /*46*/].f_42 = 0;
	Global_48466[54 /*46*/].f_43 = 0;
	Global_48466[54 /*46*/].f_2 = 2;
	Global_48466[54 /*46*/].f_3[0] = 1;
	Global_48466[54 /*46*/].f_3[1] = 27;
	Global_48466[54 /*46*/].f_30 = 2;
	Global_48466[54 /*46*/].f_8[0] = 124;
	Global_48466[54 /*46*/].f_8[1] = 125;
	Global_48466[55 /*46*/].f_45 = 0;
	Global_48466[55 /*46*/].f_31 = 0;
	Global_48466[55 /*46*/].f_42 = 0;
	Global_48466[55 /*46*/].f_43 = 0;
	Global_48466[55 /*46*/].f_2 = 2;
	Global_48466[55 /*46*/].f_3[0] = 1;
	Global_48466[55 /*46*/].f_3[1] = 2;
	Global_48466[55 /*46*/].f_30 = 5;
	Global_48466[55 /*46*/].f_8[0] = 126;
	Global_48466[55 /*46*/].f_8[1] = 127;
	Global_48466[55 /*46*/].f_8[2] = 128;
	Global_48466[55 /*46*/].f_8[3] = 129;
	Global_48466[55 /*46*/].f_8[4] = 130;
	Global_48466[56 /*46*/].f_45 = 0;
	Global_48466[56 /*46*/].f_31 = 0;
	Global_48466[56 /*46*/].f_42 = 0;
	Global_48466[56 /*46*/].f_43 = 0;
	Global_48466[56 /*46*/].f_2 = 2;
	Global_48466[56 /*46*/].f_3[0] = 1;
	Global_48466[56 /*46*/].f_3[1] = 0;
	Global_48466[56 /*46*/].f_30 = 3;
	Global_48466[56 /*46*/].f_8[0] = 131;
	Global_48466[56 /*46*/].f_8[1] = 132;
	Global_48466[56 /*46*/].f_8[2] = 133;
	Global_48466[57 /*46*/].f_45 = 0;
	Global_48466[57 /*46*/].f_31 = 0;
	Global_48466[57 /*46*/].f_42 = 0;
	Global_48466[57 /*46*/].f_43 = 0;
	Global_48466[57 /*46*/].f_2 = 2;
	Global_48466[57 /*46*/].f_3[0] = 0;
	Global_48466[57 /*46*/].f_3[1] = 1;
	Global_48466[57 /*46*/].f_30 = 2;
	Global_48466[57 /*46*/].f_8[0] = 134;
	Global_48466[57 /*46*/].f_8[1] = 135;
	Global_48466[58 /*46*/].f_45 = 0;
	Global_48466[58 /*46*/].f_31 = 0;
	Global_48466[58 /*46*/].f_42 = 0;
	Global_48466[58 /*46*/].f_43 = 0;
	Global_48466[58 /*46*/].f_2 = 2;
	Global_48466[58 /*46*/].f_3[0] = 2;
	Global_48466[58 /*46*/].f_3[1] = 33;
	Global_48466[58 /*46*/].f_30 = 2;
	Global_48466[58 /*46*/].f_8[0] = 136;
	Global_48466[58 /*46*/].f_8[1] = 137;
	Global_48466[59 /*46*/].f_45 = 0;
	Global_48466[59 /*46*/].f_31 = 0;
	Global_48466[59 /*46*/].f_42 = 0;
	Global_48466[59 /*46*/].f_43 = 0;
	Global_48466[59 /*46*/].f_2 = 2;
	Global_48466[59 /*46*/].f_3[0] = 2;
	Global_48466[59 /*46*/].f_3[1] = 33;
	Global_48466[59 /*46*/].f_30 = 3;
	Global_48466[59 /*46*/].f_8[0] = 138;
	Global_48466[59 /*46*/].f_8[1] = 139;
	Global_48466[59 /*46*/].f_8[2] = 248;
	Global_48466[60 /*46*/].f_45 = 0;
	Global_48466[60 /*46*/].f_31 = 0;
	Global_48466[60 /*46*/].f_42 = 0;
	Global_48466[60 /*46*/].f_43 = 0;
	Global_48466[60 /*46*/].f_2 = 2;
	Global_48466[60 /*46*/].f_3[0] = 2;
	Global_48466[60 /*46*/].f_3[1] = 33;
	Global_48466[60 /*46*/].f_30 = 1;
	Global_48466[60 /*46*/].f_8[0] = 140;
	Global_48466[61 /*46*/].f_45 = 0;
	Global_48466[61 /*46*/].f_31 = 0;
	Global_48466[61 /*46*/].f_42 = 0;
	Global_48466[61 /*46*/].f_43 = 0;
	Global_48466[61 /*46*/].f_2 = 2;
	Global_48466[61 /*46*/].f_3[0] = 2;
	Global_48466[61 /*46*/].f_3[1] = 29;
	Global_48466[61 /*46*/].f_30 = 2;
	Global_48466[61 /*46*/].f_8[0] = 141;
	Global_48466[61 /*46*/].f_8[1] = 142;
	Global_48466[62 /*46*/].f_45 = 0;
	Global_48466[62 /*46*/].f_31 = 0;
	Global_48466[62 /*46*/].f_42 = 0;
	Global_48466[62 /*46*/].f_43 = 0;
	Global_48466[62 /*46*/].f_2 = 2;
	Global_48466[62 /*46*/].f_3[0] = 3;
	Global_48466[62 /*46*/].f_3[1] = 2;
	Global_48466[62 /*46*/].f_30 = 2;
	Global_48466[62 /*46*/].f_8[0] = 143;
	Global_48466[62 /*46*/].f_8[1] = 144;
	Global_48466[63 /*46*/].f_45 = 0;
	Global_48466[63 /*46*/].f_31 = 0;
	Global_48466[63 /*46*/].f_42 = 0;
	Global_48466[63 /*46*/].f_43 = 0;
	Global_48466[63 /*46*/].f_2 = 2;
	Global_48466[63 /*46*/].f_3[0] = 2;
	Global_48466[63 /*46*/].f_3[1] = 34;
	Global_48466[63 /*46*/].f_30 = 2;
	Global_48466[63 /*46*/].f_8[0] = 145;
	Global_48466[63 /*46*/].f_8[1] = 146;
	Global_48466[64 /*46*/].f_45 = 0;
	Global_48466[64 /*46*/].f_31 = 0;
	Global_48466[64 /*46*/].f_42 = 0;
	Global_48466[64 /*46*/].f_43 = 0;
	Global_48466[64 /*46*/].f_2 = 2;
	Global_48466[64 /*46*/].f_3[0] = 2;
	Global_48466[64 /*46*/].f_3[1] = 26;
	Global_48466[64 /*46*/].f_30 = 1;
	Global_48466[64 /*46*/].f_8[0] = 147;
	Global_48466[65 /*46*/].f_45 = 0;
	Global_48466[65 /*46*/].f_31 = 0;
	Global_48466[65 /*46*/].f_42 = 0;
	Global_48466[65 /*46*/].f_43 = 0;
	Global_48466[65 /*46*/].f_2 = 1;
	Global_48466[65 /*46*/].f_3[0] = 35;
	Global_48466[65 /*46*/].f_30 = 3;
	Global_48466[65 /*46*/].f_8[0] = 148;
	Global_48466[65 /*46*/].f_8[1] = 149;
	Global_48466[65 /*46*/].f_8[2] = 150;
	Global_48466[66 /*46*/].f_45 = 0;
	Global_48466[66 /*46*/].f_31 = 0;
	Global_48466[66 /*46*/].f_42 = 0;
	Global_48466[66 /*46*/].f_43 = 0;
	Global_48466[66 /*46*/].f_2 = 1;
	Global_48466[66 /*46*/].f_3[0] = 36;
	Global_48466[66 /*46*/].f_30 = 3;
	Global_48466[66 /*46*/].f_8[0] = 151;
	Global_48466[66 /*46*/].f_8[1] = 152;
	Global_48466[66 /*46*/].f_8[2] = 153;
	Global_48466[67 /*46*/].f_45 = 0;
	Global_48466[67 /*46*/].f_31 = 0;
	Global_48466[67 /*46*/].f_42 = 0;
	Global_48466[67 /*46*/].f_43 = 0;
	Global_48466[67 /*46*/].f_2 = 2;
	Global_48466[67 /*46*/].f_3[0] = 4;
	Global_48466[67 /*46*/].f_3[1] = 0;
	Global_48466[67 /*46*/].f_30 = 1;
	Global_48466[67 /*46*/].f_8[0] = 7;
	Global_48466[68 /*46*/].f_45 = 0;
	Global_48466[68 /*46*/].f_31 = 0;
	Global_48466[68 /*46*/].f_42 = 0;
	Global_48466[68 /*46*/].f_43 = 0;
	Global_48466[68 /*46*/].f_2 = 2;
	Global_48466[68 /*46*/].f_3[0] = 4;
	Global_48466[68 /*46*/].f_3[1] = 0;
	Global_48466[68 /*46*/].f_30 = 1;
	Global_48466[68 /*46*/].f_8[0] = 8;
	Global_48466[69 /*46*/].f_45 = 0;
	Global_48466[69 /*46*/].f_31 = 0;
	Global_48466[69 /*46*/].f_42 = 0;
	Global_48466[69 /*46*/].f_43 = 0;
	Global_48466[69 /*46*/].f_2 = 2;
	Global_48466[69 /*46*/].f_3[0] = 2;
	Global_48466[69 /*46*/].f_3[1] = 38;
	Global_48466[69 /*46*/].f_30 = 1;
	Global_48466[69 /*46*/].f_8[0] = 154;
	Global_48466[70 /*46*/].f_45 = 0;
	Global_48466[70 /*46*/].f_31 = 0;
	Global_48466[70 /*46*/].f_42 = 0;
	Global_48466[70 /*46*/].f_43 = 0;
	Global_48466[70 /*46*/].f_2 = 1;
	Global_48466[70 /*46*/].f_3[0] = 11;
	Global_48466[70 /*46*/].f_30 = 3;
	Global_48466[70 /*46*/].f_8[0] = 155;
	Global_48466[70 /*46*/].f_8[1] = 156;
	Global_48466[70 /*46*/].f_8[2] = 157;
	Global_48466[71 /*46*/].f_45 = 0;
	Global_48466[71 /*46*/].f_31 = 0;
	Global_48466[71 /*46*/].f_42 = 0;
	Global_48466[71 /*46*/].f_43 = 0;
	Global_48466[71 /*46*/].f_2 = 2;
	Global_48466[71 /*46*/].f_3[0] = 2;
	Global_48466[71 /*46*/].f_3[1] = 29;
	Global_48466[71 /*46*/].f_30 = 1;
	Global_48466[71 /*46*/].f_8[0] = 158;
	Global_48466[72 /*46*/].f_45 = 0;
	Global_48466[72 /*46*/].f_31 = 0;
	Global_48466[72 /*46*/].f_42 = 0;
	Global_48466[72 /*46*/].f_43 = 0;
	Global_48466[72 /*46*/].f_2 = 1;
	Global_48466[72 /*46*/].f_3[0] = 0;
	Global_48466[72 /*46*/].f_30 = 1;
	Global_48466[72 /*46*/].f_8[0] = 159;
	Global_48466[73 /*46*/].f_45 = 0;
	Global_48466[73 /*46*/].f_31 = 0;
	Global_48466[73 /*46*/].f_42 = 0;
	Global_48466[73 /*46*/].f_43 = 0;
	Global_48466[73 /*46*/].f_2 = 1;
	Global_48466[73 /*46*/].f_3[0] = 1;
	Global_48466[73 /*46*/].f_30 = 1;
	Global_48466[73 /*46*/].f_8[0] = 160;
	Global_48466[74 /*46*/].f_45 = 0;
	Global_48466[74 /*46*/].f_31 = 0;
	Global_48466[74 /*46*/].f_42 = 0;
	Global_48466[74 /*46*/].f_43 = 0;
	Global_48466[74 /*46*/].f_2 = 1;
	Global_48466[74 /*46*/].f_3[0] = 1;
	Global_48466[74 /*46*/].f_30 = 1;
	Global_48466[74 /*46*/].f_8[0] = 161;
	Global_48466[75 /*46*/].f_45 = 0;
	Global_48466[75 /*46*/].f_31 = 0;
	Global_48466[75 /*46*/].f_42 = 0;
	Global_48466[75 /*46*/].f_43 = 0;
	Global_48466[75 /*46*/].f_2 = 1;
	Global_48466[75 /*46*/].f_3[0] = 0;
	Global_48466[75 /*46*/].f_30 = 1;
	Global_48466[75 /*46*/].f_8[0] = 162;
	Global_48466[76 /*46*/].f_45 = 0;
	Global_48466[76 /*46*/].f_31 = 0;
	Global_48466[76 /*46*/].f_42 = 0;
	Global_48466[76 /*46*/].f_43 = 0;
	Global_48466[76 /*46*/].f_2 = 1;
	Global_48466[76 /*46*/].f_3[0] = 2;
	Global_48466[76 /*46*/].f_30 = 1;
	Global_48466[76 /*46*/].f_8[0] = 163;
	Global_48466[77 /*46*/].f_45 = 0;
	Global_48466[77 /*46*/].f_31 = 0;
	Global_48466[77 /*46*/].f_42 = 0;
	Global_48466[77 /*46*/].f_43 = 0;
	Global_48466[77 /*46*/].f_2 = 1;
	Global_48466[77 /*46*/].f_3[0] = 1;
	Global_48466[77 /*46*/].f_30 = 1;
	Global_48466[77 /*46*/].f_8[0] = 164;
	Global_48466[78 /*46*/].f_45 = 0;
	Global_48466[78 /*46*/].f_31 = 0;
	Global_48466[78 /*46*/].f_42 = 0;
	Global_48466[78 /*46*/].f_43 = 0;
	Global_48466[78 /*46*/].f_2 = 1;
	Global_48466[78 /*46*/].f_3[0] = 1;
	Global_48466[78 /*46*/].f_30 = 1;
	Global_48466[78 /*46*/].f_8[0] = 165;
	Global_48466[79 /*46*/].f_45 = 0;
	Global_48466[79 /*46*/].f_31 = 0;
	Global_48466[79 /*46*/].f_42 = 0;
	Global_48466[79 /*46*/].f_43 = 0;
	Global_48466[79 /*46*/].f_2 = 1;
	Global_48466[79 /*46*/].f_3[0] = 0;
	Global_48466[79 /*46*/].f_30 = 1;
	Global_48466[79 /*46*/].f_8[0] = 166;
	Global_48466[80 /*46*/].f_45 = 0;
	Global_48466[80 /*46*/].f_31 = 0;
	Global_48466[80 /*46*/].f_42 = 0;
	Global_48466[80 /*46*/].f_43 = 0;
	Global_48466[80 /*46*/].f_2 = 1;
	Global_48466[80 /*46*/].f_3[0] = 0;
	Global_48466[80 /*46*/].f_30 = 1;
	Global_48466[80 /*46*/].f_8[0] = 167;
	Global_48466[81 /*46*/].f_45 = 0;
	Global_48466[81 /*46*/].f_31 = 0;
	Global_48466[81 /*46*/].f_42 = 0;
	Global_48466[81 /*46*/].f_43 = 0;
	Global_48466[81 /*46*/].f_2 = 1;
	Global_48466[81 /*46*/].f_3[0] = 0;
	Global_48466[81 /*46*/].f_30 = 1;
	Global_48466[81 /*46*/].f_8[0] = 168;
	Global_48466[82 /*46*/].f_45 = 0;
	Global_48466[82 /*46*/].f_31 = 0;
	Global_48466[82 /*46*/].f_42 = 0;
	Global_48466[82 /*46*/].f_43 = 0;
	Global_48466[82 /*46*/].f_2 = 1;
	Global_48466[82 /*46*/].f_3[0] = 2;
	Global_48466[82 /*46*/].f_30 = 1;
	Global_48466[82 /*46*/].f_8[0] = 169;
	Global_48466[83 /*46*/].f_45 = 0;
	Global_48466[83 /*46*/].f_31 = 0;
	Global_48466[83 /*46*/].f_42 = 0;
	Global_48466[83 /*46*/].f_43 = 0;
	Global_48466[83 /*46*/].f_2 = 1;
	Global_48466[83 /*46*/].f_3[0] = 1;
	Global_48466[83 /*46*/].f_30 = 1;
	Global_48466[83 /*46*/].f_8[0] = 170;
	Global_48466[84 /*46*/].f_45 = 0;
	Global_48466[84 /*46*/].f_31 = 0;
	Global_48466[84 /*46*/].f_42 = 0;
	Global_48466[84 /*46*/].f_43 = 0;
	Global_48466[84 /*46*/].f_2 = 1;
	Global_48466[84 /*46*/].f_3[0] = 1;
	Global_48466[84 /*46*/].f_30 = 1;
	Global_48466[84 /*46*/].f_8[0] = 171;
	Global_48466[85 /*46*/].f_45 = 0;
	Global_48466[85 /*46*/].f_31 = 0;
	Global_48466[85 /*46*/].f_42 = 0;
	Global_48466[85 /*46*/].f_43 = 0;
	Global_48466[85 /*46*/].f_2 = 1;
	Global_48466[85 /*46*/].f_3[0] = 0;
	Global_48466[85 /*46*/].f_30 = 1;
	Global_48466[85 /*46*/].f_8[0] = 172;
	Global_48466[86 /*46*/].f_45 = 0;
	Global_48466[86 /*46*/].f_31 = 0;
	Global_48466[86 /*46*/].f_42 = 0;
	Global_48466[86 /*46*/].f_43 = 0;
	Global_48466[86 /*46*/].f_2 = 1;
	Global_48466[86 /*46*/].f_3[0] = 2;
	Global_48466[86 /*46*/].f_30 = 1;
	Global_48466[86 /*46*/].f_8[0] = 173;
	Global_48466[87 /*46*/].f_45 = 0;
	Global_48466[87 /*46*/].f_31 = 0;
	Global_48466[87 /*46*/].f_42 = 0;
	Global_48466[87 /*46*/].f_43 = 0;
	Global_48466[87 /*46*/].f_2 = 1;
	Global_48466[87 /*46*/].f_3[0] = 1;
	Global_48466[87 /*46*/].f_30 = 1;
	Global_48466[87 /*46*/].f_8[0] = 174;
	Global_48466[88 /*46*/].f_45 = 0;
	Global_48466[88 /*46*/].f_31 = 0;
	Global_48466[88 /*46*/].f_42 = 0;
	Global_48466[88 /*46*/].f_43 = 0;
	Global_48466[88 /*46*/].f_2 = 1;
	Global_48466[88 /*46*/].f_3[0] = 0;
	Global_48466[88 /*46*/].f_30 = 1;
	Global_48466[88 /*46*/].f_8[0] = 175;
	Global_48466[89 /*46*/].f_45 = 0;
	Global_48466[89 /*46*/].f_31 = 0;
	Global_48466[89 /*46*/].f_42 = 0;
	Global_48466[89 /*46*/].f_43 = 0;
	Global_48466[89 /*46*/].f_2 = 1;
	Global_48466[89 /*46*/].f_3[0] = 2;
	Global_48466[89 /*46*/].f_30 = 1;
	Global_48466[89 /*46*/].f_8[0] = 176;
	Global_48466[90 /*46*/].f_45 = 0;
	Global_48466[90 /*46*/].f_31 = 0;
	Global_48466[90 /*46*/].f_42 = 0;
	Global_48466[90 /*46*/].f_43 = 0;
	Global_48466[90 /*46*/].f_2 = 1;
	Global_48466[90 /*46*/].f_3[0] = 1;
	Global_48466[90 /*46*/].f_30 = 1;
	Global_48466[90 /*46*/].f_8[0] = 177;
	Global_48466[91 /*46*/].f_45 = 0;
	Global_48466[91 /*46*/].f_31 = 0;
	Global_48466[91 /*46*/].f_42 = 0;
	Global_48466[91 /*46*/].f_43 = 0;
	Global_48466[91 /*46*/].f_2 = 1;
	Global_48466[91 /*46*/].f_3[0] = 0;
	Global_48466[91 /*46*/].f_30 = 1;
	Global_48466[91 /*46*/].f_8[0] = 179;
	Global_48466[92 /*46*/].f_45 = 0;
	Global_48466[92 /*46*/].f_31 = 0;
	Global_48466[92 /*46*/].f_42 = 0;
	Global_48466[92 /*46*/].f_43 = 0;
	Global_48466[92 /*46*/].f_2 = 1;
	Global_48466[92 /*46*/].f_3[0] = 2;
	Global_48466[92 /*46*/].f_30 = 1;
	Global_48466[92 /*46*/].f_8[0] = 178;
	Global_48466[93 /*46*/].f_45 = 0;
	Global_48466[93 /*46*/].f_31 = 0;
	Global_48466[93 /*46*/].f_42 = 0;
	Global_48466[93 /*46*/].f_43 = 0;
	Global_48466[93 /*46*/].f_2 = 1;
	Global_48466[93 /*46*/].f_3[0] = 1;
	Global_48466[93 /*46*/].f_30 = 1;
	Global_48466[93 /*46*/].f_8[0] = 180;
	Global_48466[94 /*46*/].f_45 = 0;
	Global_48466[94 /*46*/].f_31 = 0;
	Global_48466[94 /*46*/].f_42 = 0;
	Global_48466[94 /*46*/].f_43 = 0;
	Global_48466[94 /*46*/].f_2 = 2;
	Global_48466[94 /*46*/].f_3[0] = 4;
	Global_48466[94 /*46*/].f_3[1] = 0;
	Global_48466[94 /*46*/].f_30 = 1;
	Global_48466[94 /*46*/].f_8[0] = 181;
	Global_48466[95 /*46*/].f_45 = 0;
	Global_48466[95 /*46*/].f_31 = 0;
	Global_48466[95 /*46*/].f_42 = 0;
	Global_48466[95 /*46*/].f_43 = 0;
	Global_48466[95 /*46*/].f_2 = 1;
	Global_48466[95 /*46*/].f_3[0] = 37;
	Global_48466[95 /*46*/].f_30 = 1;
	Global_48466[95 /*46*/].f_8[0] = 182;
	Global_48466[96 /*46*/].f_45 = 0;
	Global_48466[96 /*46*/].f_31 = 0;
	Global_48466[96 /*46*/].f_42 = 0;
	Global_48466[96 /*46*/].f_43 = 0;
	Global_48466[96 /*46*/].f_2 = 1;
	Global_48466[96 /*46*/].f_3[0] = 37;
	Global_48466[96 /*46*/].f_30 = 1;
	Global_48466[96 /*46*/].f_8[0] = 183;
	Global_48466[97 /*46*/].f_45 = 0;
	Global_48466[97 /*46*/].f_31 = 0;
	Global_48466[97 /*46*/].f_42 = 0;
	Global_48466[97 /*46*/].f_43 = 0;
	Global_48466[97 /*46*/].f_2 = 1;
	Global_48466[97 /*46*/].f_3[0] = 37;
	Global_48466[97 /*46*/].f_30 = 1;
	Global_48466[97 /*46*/].f_8[0] = 184;
	Global_48466[98 /*46*/].f_45 = 0;
	Global_48466[98 /*46*/].f_31 = 0;
	Global_48466[98 /*46*/].f_42 = 0;
	Global_48466[98 /*46*/].f_43 = 0;
	Global_48466[98 /*46*/].f_2 = 1;
	Global_48466[98 /*46*/].f_3[0] = 54;
	Global_48466[98 /*46*/].f_30 = 3;
	Global_48466[98 /*46*/].f_8[0] = 185;
	Global_48466[98 /*46*/].f_8[1] = 186;
	Global_48466[98 /*46*/].f_8[2] = 188;
	Global_48466[99 /*46*/].f_45 = 0;
	Global_48466[99 /*46*/].f_31 = 0;
	Global_48466[99 /*46*/].f_42 = 0;
	Global_48466[99 /*46*/].f_43 = 0;
	Global_48466[99 /*46*/].f_2 = 1;
	Global_48466[99 /*46*/].f_3[0] = 55;
	Global_48466[99 /*46*/].f_30 = 3;
	Global_48466[99 /*46*/].f_8[0] = 187;
	Global_48466[99 /*46*/].f_8[1] = 189;
	Global_48466[99 /*46*/].f_8[2] = 190;
	Global_48466[100 /*46*/].f_45 = 0;
	Global_48466[100 /*46*/].f_31 = 0;
	Global_48466[100 /*46*/].f_42 = 0;
	Global_48466[100 /*46*/].f_43 = 0;
	Global_48466[100 /*46*/].f_2 = 3;
	Global_48466[100 /*46*/].f_3[0] = 56;
	Global_48466[100 /*46*/].f_3[1] = 0;
	Global_48466[100 /*46*/].f_3[2] = 2;
	Global_48466[100 /*46*/].f_30 = 5;
	Global_48466[100 /*46*/].f_8[0] = 194;
	Global_48466[100 /*46*/].f_8[1] = 195;
	Global_48466[100 /*46*/].f_8[2] = 196;
	Global_48466[100 /*46*/].f_8[3] = 197;
	Global_48466[100 /*46*/].f_8[4] = 198;
	Global_48466[101 /*46*/].f_45 = 0;
	Global_48466[101 /*46*/].f_31 = 0;
	Global_48466[101 /*46*/].f_42 = 0;
	Global_48466[101 /*46*/].f_43 = 0;
	Global_48466[101 /*46*/].f_2 = 2;
	Global_48466[101 /*46*/].f_3[0] = 57;
	Global_48466[101 /*46*/].f_3[1] = 0;
	Global_48466[101 /*46*/].f_30 = 8;
	Global_48466[101 /*46*/].f_8[0] = 199;
	Global_48466[101 /*46*/].f_8[1] = 200;
	Global_48466[101 /*46*/].f_8[2] = 201;
	Global_48466[101 /*46*/].f_8[3] = 202;
	Global_48466[101 /*46*/].f_8[4] = 203;
	Global_48466[101 /*46*/].f_8[5] = 204;
	Global_48466[101 /*46*/].f_8[6] = 205;
	Global_48466[101 /*46*/].f_8[7] = 206;
	Global_48466[102 /*46*/].f_45 = 0;
	Global_48466[102 /*46*/].f_31 = 0;
	Global_48466[102 /*46*/].f_42 = 0;
	Global_48466[102 /*46*/].f_43 = 0;
	Global_48466[102 /*46*/].f_2 = 2;
	Global_48466[102 /*46*/].f_3[0] = 58;
	Global_48466[102 /*46*/].f_3[1] = 0;
	Global_48466[102 /*46*/].f_30 = 7;
	Global_48466[102 /*46*/].f_8[0] = 207;
	Global_48466[102 /*46*/].f_8[1] = 208;
	Global_48466[102 /*46*/].f_8[2] = 209;
	Global_48466[102 /*46*/].f_8[3] = 210;
	Global_48466[102 /*46*/].f_8[4] = 211;
	Global_48466[102 /*46*/].f_8[5] = 212;
	Global_48466[102 /*46*/].f_8[6] = 213;
	Global_48466[103 /*46*/].f_45 = 0;
	Global_48466[103 /*46*/].f_31 = 0;
	Global_48466[103 /*46*/].f_42 = 0;
	Global_48466[103 /*46*/].f_43 = 0;
	Global_48466[103 /*46*/].f_2 = 2;
	Global_48466[103 /*46*/].f_3[0] = 59;
	Global_48466[103 /*46*/].f_3[1] = 0;
	Global_48466[103 /*46*/].f_30 = 8;
	Global_48466[103 /*46*/].f_8[0] = 214;
	Global_48466[103 /*46*/].f_8[1] = 215;
	Global_48466[103 /*46*/].f_8[2] = 216;
	Global_48466[103 /*46*/].f_8[3] = 217;
	Global_48466[103 /*46*/].f_8[4] = 218;
	Global_48466[103 /*46*/].f_8[5] = 219;
	Global_48466[103 /*46*/].f_8[6] = 220;
	Global_48466[103 /*46*/].f_8[7] = 221;
	Global_48466[104 /*46*/].f_45 = 0;
	Global_48466[104 /*46*/].f_31 = 0;
	Global_48466[104 /*46*/].f_42 = 0;
	Global_48466[104 /*46*/].f_43 = 0;
	Global_48466[104 /*46*/].f_2 = 2;
	Global_48466[104 /*46*/].f_3[0] = 60;
	Global_48466[104 /*46*/].f_3[1] = 2;
	Global_48466[104 /*46*/].f_30 = 7;
	Global_48466[104 /*46*/].f_8[0] = 222;
	Global_48466[104 /*46*/].f_8[1] = 223;
	Global_48466[104 /*46*/].f_8[2] = 224;
	Global_48466[104 /*46*/].f_8[3] = 225;
	Global_48466[104 /*46*/].f_8[4] = 226;
	Global_48466[104 /*46*/].f_8[5] = 227;
	Global_48466[104 /*46*/].f_8[6] = 228;
	Global_48466[105 /*46*/].f_45 = 0;
	Global_48466[105 /*46*/].f_31 = 0;
	Global_48466[105 /*46*/].f_42 = 0;
	Global_48466[105 /*46*/].f_43 = 0;
	Global_48466[105 /*46*/].f_2 = 2;
	Global_48466[105 /*46*/].f_3[0] = 61;
	Global_48466[105 /*46*/].f_3[1] = 2;
	Global_48466[105 /*46*/].f_30 = 6;
	Global_48466[105 /*46*/].f_8[0] = 229;
	Global_48466[105 /*46*/].f_8[1] = 230;
	Global_48466[105 /*46*/].f_8[2] = 231;
	Global_48466[105 /*46*/].f_8[3] = 232;
	Global_48466[105 /*46*/].f_8[4] = 233;
	Global_48466[105 /*46*/].f_8[5] = 234;
	Global_48466[106 /*46*/].f_45 = 0;
	Global_48466[106 /*46*/].f_31 = 0;
	Global_48466[106 /*46*/].f_42 = 0;
	Global_48466[106 /*46*/].f_43 = 0;
	Global_48466[106 /*46*/].f_2 = 2;
	Global_48466[106 /*46*/].f_3[0] = 62;
	Global_48466[106 /*46*/].f_3[1] = 2;
	Global_48466[106 /*46*/].f_30 = 6;
	Global_48466[106 /*46*/].f_8[0] = 235;
	Global_48466[106 /*46*/].f_8[1] = 236;
	Global_48466[106 /*46*/].f_8[2] = 237;
	Global_48466[106 /*46*/].f_8[3] = 238;
	Global_48466[106 /*46*/].f_8[4] = 239;
	Global_48466[106 /*46*/].f_8[5] = 240;
	Global_48466[107 /*46*/].f_45 = 0;
	Global_48466[107 /*46*/].f_31 = 0;
	Global_48466[107 /*46*/].f_42 = 0;
	Global_48466[107 /*46*/].f_43 = 0;
	Global_48466[107 /*46*/].f_2 = 1;
	Global_48466[107 /*46*/].f_3[0] = 36;
	Global_48466[107 /*46*/].f_30 = 1;
	Global_48466[107 /*46*/].f_8[0] = 241;
	Global_48466[108 /*46*/].f_45 = 0;
	Global_48466[108 /*46*/].f_31 = 0;
	Global_48466[108 /*46*/].f_42 = 0;
	Global_48466[108 /*46*/].f_43 = 0;
	Global_48466[108 /*46*/].f_2 = 1;
	Global_48466[108 /*46*/].f_3[0] = 36;
	Global_48466[108 /*46*/].f_30 = 1;
	Global_48466[108 /*46*/].f_8[0] = 242;
	Global_48466[109 /*46*/].f_45 = 0;
	Global_48466[109 /*46*/].f_31 = 0;
	Global_48466[109 /*46*/].f_42 = 0;
	Global_48466[109 /*46*/].f_43 = 0;
	Global_48466[109 /*46*/].f_2 = 1;
	Global_48466[109 /*46*/].f_3[0] = 36;
	Global_48466[109 /*46*/].f_30 = 1;
	Global_48466[109 /*46*/].f_8[0] = 243;
	Global_48466[110 /*46*/].f_45 = 0;
	Global_48466[110 /*46*/].f_31 = 0;
	Global_48466[110 /*46*/].f_42 = 0;
	Global_48466[110 /*46*/].f_43 = 0;
	Global_48466[110 /*46*/].f_2 = 1;
	Global_48466[110 /*46*/].f_3[0] = 65;
	Global_48466[110 /*46*/].f_30 = 1;
	Global_48466[110 /*46*/].f_8[0] = 244;
	Global_48466[111 /*46*/].f_45 = 0;
	Global_48466[111 /*46*/].f_31 = 0;
	Global_48466[111 /*46*/].f_42 = 0;
	Global_48466[111 /*46*/].f_43 = 0;
	Global_48466[111 /*46*/].f_2 = 1;
	Global_48466[111 /*46*/].f_3[0] = 65;
	Global_48466[111 /*46*/].f_30 = 1;
	Global_48466[111 /*46*/].f_8[0] = 245;
	Global_48466[112 /*46*/].f_45 = 0;
	Global_48466[112 /*46*/].f_31 = 0;
	Global_48466[112 /*46*/].f_42 = 0;
	Global_48466[112 /*46*/].f_43 = 0;
	Global_48466[112 /*46*/].f_2 = 1;
	Global_48466[112 /*46*/].f_3[0] = 65;
	Global_48466[112 /*46*/].f_30 = 1;
	Global_48466[112 /*46*/].f_8[0] = 246;
	Global_48466[113 /*46*/].f_45 = 0;
	Global_48466[113 /*46*/].f_31 = 0;
	Global_48466[113 /*46*/].f_42 = 0;
	Global_48466[113 /*46*/].f_43 = 0;
	Global_48466[113 /*46*/].f_2 = 1;
	Global_48466[113 /*46*/].f_3[0] = 65;
	Global_48466[113 /*46*/].f_30 = 1;
	Global_48466[113 /*46*/].f_8[0] = 247;
	Global_48466[114 /*46*/].f_45 = 0;
	Global_48466[114 /*46*/].f_31 = 0;
	Global_48466[114 /*46*/].f_42 = 0;
	Global_48466[114 /*46*/].f_43 = 0;
	Global_48466[114 /*46*/].f_2 = 2;
	Global_48466[114 /*46*/].f_3[0] = 19;
	Global_48466[114 /*46*/].f_3[1] = 1;
	Global_48466[114 /*46*/].f_30 = 21;
	Global_48466[114 /*46*/].f_8[0] = 249;
	Global_48466[114 /*46*/].f_8[1] = 250;
	Global_48466[114 /*46*/].f_8[2] = 251;
	Global_48466[114 /*46*/].f_8[3] = 252;
	Global_48466[114 /*46*/].f_8[4] = 253;
	Global_48466[114 /*46*/].f_8[5] = 254;
	Global_48466[114 /*46*/].f_8[6] = 255;
	Global_48466[114 /*46*/].f_8[7] = 256;
	Global_48466[114 /*46*/].f_8[8] = 257;
	Global_48466[114 /*46*/].f_8[9] = 258;
	Global_48466[114 /*46*/].f_8[10] = 259;
	Global_48466[114 /*46*/].f_8[11] = 260;
	Global_48466[114 /*46*/].f_8[12] = 261;
	Global_48466[114 /*46*/].f_8[13] = 262;
	Global_48466[114 /*46*/].f_8[14] = 263;
	Global_48466[114 /*46*/].f_8[15] = 264;
	Global_48466[114 /*46*/].f_8[16] = 265;
	Global_48466[114 /*46*/].f_8[17] = 266;
	Global_48466[114 /*46*/].f_8[18] = 267;
	Global_48466[114 /*46*/].f_8[19] = 268;
	Global_48466[114 /*46*/].f_8[20] = 269;
	Global_48466[115 /*46*/].f_45 = 0;
	Global_48466[115 /*46*/].f_31 = 0;
	Global_48466[115 /*46*/].f_42 = 0;
	Global_48466[115 /*46*/].f_43 = 0;
	Global_48466[115 /*46*/].f_2 = 4;
	Global_48466[115 /*46*/].f_3[0] = 0;
	Global_48466[115 /*46*/].f_3[1] = 1;
	Global_48466[115 /*46*/].f_3[2] = 2;
	Global_48466[115 /*46*/].f_3[3] = 16;
	Global_48466[115 /*46*/].f_30 = 1;
	Global_48466[115 /*46*/].f_8[0] = 270;
	Global_48466[116 /*46*/].f_45 = 0;
	Global_48466[116 /*46*/].f_31 = 0;
	Global_48466[116 /*46*/].f_42 = 0;
	Global_48466[116 /*46*/].f_43 = 0;
	Global_48466[116 /*46*/].f_2 = 4;
	Global_48466[116 /*46*/].f_3[0] = 0;
	Global_48466[116 /*46*/].f_3[1] = 1;
	Global_48466[116 /*46*/].f_3[2] = 2;
	Global_48466[116 /*46*/].f_3[3] = 16;
	Global_48466[116 /*46*/].f_30 = 1;
	Global_48466[116 /*46*/].f_8[0] = 271;
	Global_48466[117 /*46*/].f_45 = 0;
	Global_48466[117 /*46*/].f_31 = 0;
	Global_48466[117 /*46*/].f_42 = 0;
	Global_48466[117 /*46*/].f_43 = 0;
	Global_48466[117 /*46*/].f_2 = 4;
	Global_48466[117 /*46*/].f_3[0] = 0;
	Global_48466[117 /*46*/].f_3[1] = 1;
	Global_48466[117 /*46*/].f_3[2] = 2;
	Global_48466[117 /*46*/].f_3[3] = 16;
	Global_48466[117 /*46*/].f_30 = 1;
	Global_48466[117 /*46*/].f_8[0] = 272;
	Global_48466[118 /*46*/].f_45 = 0;
	Global_48466[118 /*46*/].f_31 = 0;
	Global_48466[118 /*46*/].f_42 = 0;
	Global_48466[118 /*46*/].f_43 = 0;
	Global_48466[118 /*46*/].f_2 = 4;
	Global_48466[118 /*46*/].f_3[0] = 0;
	Global_48466[118 /*46*/].f_3[1] = 1;
	Global_48466[118 /*46*/].f_3[2] = 2;
	Global_48466[118 /*46*/].f_3[3] = 16;
	Global_48466[118 /*46*/].f_30 = 1;
	Global_48466[118 /*46*/].f_8[0] = 273;
	Global_48466[119 /*46*/].f_45 = 0;
	Global_48466[119 /*46*/].f_31 = 0;
	Global_48466[119 /*46*/].f_42 = 0;
	Global_48466[119 /*46*/].f_43 = 0;
	Global_48466[119 /*46*/].f_2 = 4;
	Global_48466[119 /*46*/].f_3[0] = 0;
	Global_48466[119 /*46*/].f_3[1] = 1;
	Global_48466[119 /*46*/].f_3[2] = 2;
	Global_48466[119 /*46*/].f_3[3] = 16;
	Global_48466[119 /*46*/].f_30 = 1;
	Global_48466[119 /*46*/].f_8[0] = 274;
	Global_48466[120 /*46*/].f_45 = 0;
	Global_48466[120 /*46*/].f_31 = 0;
	Global_48466[120 /*46*/].f_42 = 0;
	Global_48466[120 /*46*/].f_43 = 0;
	Global_48466[120 /*46*/].f_2 = 4;
	Global_48466[120 /*46*/].f_3[0] = 0;
	Global_48466[120 /*46*/].f_3[1] = 1;
	Global_48466[120 /*46*/].f_3[2] = 2;
	Global_48466[120 /*46*/].f_3[3] = 16;
	Global_48466[120 /*46*/].f_30 = 1;
	Global_48466[120 /*46*/].f_8[0] = 275;
	Global_48466[121 /*46*/].f_45 = 0;
	Global_48466[121 /*46*/].f_31 = 0;
	Global_48466[121 /*46*/].f_42 = 0;
	Global_48466[121 /*46*/].f_43 = 0;
	Global_48466[121 /*46*/].f_2 = 4;
	Global_48466[121 /*46*/].f_3[0] = 0;
	Global_48466[121 /*46*/].f_3[1] = 1;
	Global_48466[121 /*46*/].f_3[2] = 2;
	Global_48466[121 /*46*/].f_3[3] = 16;
	Global_48466[121 /*46*/].f_30 = 1;
	Global_48466[121 /*46*/].f_8[0] = 276;
}

void func_70()//Position - 0xE75A
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

