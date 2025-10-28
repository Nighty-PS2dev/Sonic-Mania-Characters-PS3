#include "../Game.h" // Or equivalent main header for function declarations & ModAPI access

#ifndef ADD_PUBLIC_FUNC
#define ADD_PUBLIC_FUNC(func) Mod.AddPublicFunction(#func, (void *)(func))
#endif

void InitPublicFunctions_Part4(void)
{
    // Menu/CompetitionMenu
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(CompetitionMenu_Initialize);
    ADD_PUBLIC_FUNC(CompetitionMenu_SetupActions);
    ADD_PUBLIC_FUNC(CompetitionMenu_HandleMenuReturn);
    ADD_PUBLIC_FUNC(CompetitionMenu_HandleUnlocks);
    ADD_PUBLIC_FUNC(CompetitionMenu_HandleStartCompPrompt);
    ADD_PUBLIC_FUNC(CompetitionMenu_GetReadyPlayerCount);
    ADD_PUBLIC_FUNC(CompetitionMenu_GetTotalPlayerCount);
    ADD_PUBLIC_FUNC(CompetitionMenu_ResetControllerAssignments);
    ADD_PUBLIC_FUNC(CompetitionMenu_SetupSplitScreenChoices);
    ADD_PUBLIC_FUNC(CompetitionMenu_SetupSplitScreen);
    ADD_PUBLIC_FUNC(CompetitionMenu_SetupResultsUI);
    ADD_PUBLIC_FUNC(CompetitionMenu_GotoCompRules);
    ADD_PUBLIC_FUNC(CompetitionMenu_GotoCompZones);
    ADD_PUBLIC_FUNC(CompetitionMenu_VS_ProcessInputCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_VS_MenuSetupCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_Rules_MenuSetupCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_StartMatch);
    ADD_PUBLIC_FUNC(CompetitionMenu_ZoneButtonActionCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_RulesButton_ActionCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_GotoCompTotal);
    ADD_PUBLIC_FUNC(CompetitionMenu_Round_ProcessInputCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_Round_MenuSetupCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_GotoCompetition);
    ADD_PUBLIC_FUNC(CompetitionMenu_Results_ProcessInputCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_Results_MenuSetupCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_Results_MenuUpdateCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_ExitComp_TransitionCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_ExitComp_YesCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_CompRules_BackPressCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_CompZones_BackPressCB);
    ADD_PUBLIC_FUNC(CompetitionMenu_GotoPuyoVS);
#endif

    // Menu/DASetup
    ADD_PUBLIC_FUNC(DASetup_DisplayTrack);
    ADD_PUBLIC_FUNC(DASetup_HandleMedallionDebug);
    ADD_PUBLIC_FUNC(DASetup_SetupUI);
    ADD_PUBLIC_FUNC(DASetup_State_ManageControl);

    // Menu/DemoMenu
    ADD_PUBLIC_FUNC(DemoMenu_DrawStagePreview);
    ADD_PUBLIC_FUNC(DemoMenu_State_Appear);
    ADD_PUBLIC_FUNC(DemoMenu_State_Selection);
    ADD_PUBLIC_FUNC(DemoMenu_State_Load);
    ADD_PUBLIC_FUNC(DemoMenu_State_Disappear);

    // Menu/E3MenuSetup
#if !MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(E3MenuSetup_SetupUI);
    ADD_PUBLIC_FUNC(E3MenuSetup_SetupButtons);
    ADD_PUBLIC_FUNC(E3MenuSetup_Callback_LoadScene);
    ADD_PUBLIC_FUNC(E3MenuSetup_ActionCB_ZoneSelect);
    ADD_PUBLIC_FUNC(E3MenuSetup_ActionCB_Sonic);
    ADD_PUBLIC_FUNC(E3MenuSetup_ActionCB_Tails);
    ADD_PUBLIC_FUNC(E3MenuSetup_ActionCB_Knux);
    ADD_PUBLIC_FUNC(E3MenuSetup_State_FadeOut);
#endif

    // Menu/ExtrasMenu
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(ExtrasMenu_Initialize);
    ADD_PUBLIC_FUNC(ExtrasMenu_HandleUnlocks);
    ADD_PUBLIC_FUNC(ExtrasMenu_SetupActions);
    ADD_PUBLIC_FUNC(ExtrasMenu_ProcessMedallionCheat);
    ADD_PUBLIC_FUNC(ExtrasMenu_CheckMedallionCheat);
    ADD_PUBLIC_FUNC(ExtrasMenu_ProcessInputs);
    ADD_PUBLIC_FUNC(ExtrasMenu_Start_Puyo_vsAI);
    ADD_PUBLIC_FUNC(ExtrasMenu_Puyo_vsAI_ActionCB);
    ADD_PUBLIC_FUNC(ExtrasMenu_Start_Puyo_vs2P);
    ADD_PUBLIC_FUNC(ExtrasMenu_Puyo_vs2P_ActionCB);
    ADD_PUBLIC_FUNC(ExtrasMenu_Start_Credits);
    ADD_PUBLIC_FUNC(ExtrasMenu_CreditsButton_ActionCB);
    ADD_PUBLIC_FUNC(ExtrasMenu_Start_DAGarden);
    ADD_PUBLIC_FUNC(ExtrasMenu_DAGarden_ActionCB);
    ADD_PUBLIC_FUNC(ExtrasMenu_Start_BSS_3K);
    ADD_PUBLIC_FUNC(ExtrasMenu_BSS_S3_ActionCB);
    ADD_PUBLIC_FUNC(ExtrasMenu_Start_BSS_Mania);
    ADD_PUBLIC_FUNC(ExtrasMenu_BSS_Mania_ActionCB);
#endif

#if MANIA_USE_PLUS
    // Menu/LevelSelect
    ADD_PUBLIC_FUNC(LevelSelect_Cheat_AllEmeralds);
    ADD_PUBLIC_FUNC(LevelSelect_Cheat_ToggleSuperMusic);
    ADD_PUBLIC_FUNC(LevelSelect_Cheat_MaxContinues);
    ADD_PUBLIC_FUNC(LevelSelect_Cheat_MaxControl);
    ADD_PUBLIC_FUNC(LevelSelect_Cheat_RickyMode);
    ADD_PUBLIC_FUNC(LevelSelect_Cheat_SuperDash);
    ADD_PUBLIC_FUNC(LevelSelect_Cheat_SwapGameMode);
    ADD_PUBLIC_FUNC(LevelSelect_Cheat_UnlockAllMedals);
    ADD_PUBLIC_FUNC(LevelSelect_Draw_Fade);
#endif
    ADD_PUBLIC_FUNC(LevelSelect_State_Init);
    ADD_PUBLIC_FUNC(LevelSelect_State_FadeIn);
    ADD_PUBLIC_FUNC(LevelSelect_State_Navigate);
    ADD_PUBLIC_FUNC(LevelSelect_State_FadeOut);
    ADD_PUBLIC_FUNC(LevelSelect_ManagePlayerIcon);
    ADD_PUBLIC_FUNC(LevelSelect_SetLabelHighlighted);
    ADD_PUBLIC_FUNC(LevelSelect_HandleColumnChange);
    ADD_PUBLIC_FUNC(LevelSelect_HandleNewStagePos);

    // Menu/LogoSetup
    ADD_PUBLIC_FUNC(LogoSetup_ImageCallback);
    ADD_PUBLIC_FUNC(LogoSetup_State_CESAScreen);
    ADD_PUBLIC_FUNC(LogoSetup_State_ShowLogos);
    ADD_PUBLIC_FUNC(LogoSetup_State_FadeToNextLogos);
    ADD_PUBLIC_FUNC(LogoSetup_State_NextLogos);
    ADD_PUBLIC_FUNC(LogoSetup_Draw_Fade);

    // Menu/MainMenu
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MainMenu_Initialize);
    ADD_PUBLIC_FUNC(MainMenu_BackPressCB_ReturnToTitle);
    ADD_PUBLIC_FUNC(MainMenu_ExitGame);
    ADD_PUBLIC_FUNC(MainMenu_ExitButton_ActionCB);
    ADD_PUBLIC_FUNC(MainMenu_StartExitGame);
    ADD_PUBLIC_FUNC(MainMenu_MenuButton_ActionCB);
#if MANIA_USE_EGS
    ADD_PUBLIC_FUNC(MainMenu_BuyPlusDialogCB);
    ADD_PUBLIC_FUNC(MainMenu_HandleUnlocks);
#endif
    ADD_PUBLIC_FUNC(MainMenu_SetupActions);
    ADD_PUBLIC_FUNC(MainMenu_MenuSetupCB);
#endif

    // Menu/ManiaModeMenu
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(ManiaModeMenu_Initialize);
    ADD_PUBLIC_FUNC(ManiaModeMenu_InitAPI);
    ADD_PUBLIC_FUNC(ManiaModeMenu_InitLocalization);
    ADD_PUBLIC_FUNC(ManiaModeMenu_GetActiveMenu);
    ADD_PUBLIC_FUNC(ManiaModeMenu_ChangeMenuTrack);
    ADD_PUBLIC_FUNC(ManiaModeMenu_StartReturnToTitle);
    ADD_PUBLIC_FUNC(ManiaModeMenu_SetBGColors);
    ADD_PUBLIC_FUNC(ManiaModeMenu_ReturnToTitle);
    ADD_PUBLIC_FUNC(ManiaModeMenu_State_HandleTransition);
    ADD_PUBLIC_FUNC(ManiaModeMenu_HandleUnlocks);
    ADD_PUBLIC_FUNC(ManiaModeMenu_SetupActions);
    ADD_PUBLIC_FUNC(ManiaModeMenu_HandleMenuReturn);
#endif

    // Menu/MenuParam
    ADD_PUBLIC_FUNC(MenuParam_GetParam);

    // Menu/MenuSetup
    ADD_PUBLIC_FUNC(MenuSetup_StartTransition);
#if !MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MenuSetup_Initialize);
    ADD_PUBLIC_FUNC(MenuSetup_InitAPI);
    ADD_PUBLIC_FUNC(MenuSetup_SetupActions);
    ADD_PUBLIC_FUNC(MenuSetup_HandleUnlocks);
    ADD_PUBLIC_FUNC(MenuSetup_HandleMenuReturn);
    ADD_PUBLIC_FUNC(MenuSetup_GetActiveMenu);
    ADD_PUBLIC_FUNC(MenuSetup_ChangeMenuTrack);
    ADD_PUBLIC_FUNC(MenuSetup_SetBGColors);
    ADD_PUBLIC_FUNC(MenuSetup_MenuButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_StartTransitionLB);
    ADD_PUBLIC_FUNC(MenuSetup_BackPressCB_ReturnToTitle);
    ADD_PUBLIC_FUNC(MenuSetup_StartReturnToTitle);
    ADD_PUBLIC_FUNC(MenuSetup_ReturnToTitle);
    ADD_PUBLIC_FUNC(MenuSetup_ExitGame);
    ADD_PUBLIC_FUNC(MenuSetup_ExitGame_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_ExitGame_CB);
    ADD_PUBLIC_FUNC(MenuSetup_State_HandleTransition);
    ADD_PUBLIC_FUNC(MenuSetup_GetMedalMods);
    ADD_PUBLIC_FUNC(MenuSetup_OpenSaveSelectMenu);
    ADD_PUBLIC_FUNC(MenuSetup_SaveFileCB);
    ADD_PUBLIC_FUNC(MenuSetup_SaveSlot_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_SaveSel_MenuUpdateCB);
    ADD_PUBLIC_FUNC(MenuSetup_OpenSecretsMenu);
    ADD_PUBLIC_FUNC(MenuSetup_SaveSel_YPressCB);
    ADD_PUBLIC_FUNC(MenuSetup_TA_OpenZoneList_Sonic);
    ADD_PUBLIC_FUNC(MenuSetup_TA_OpenZoneList_Tails);
    ADD_PUBLIC_FUNC(MenuSetup_TA_OpenZoneList_Knux);
    ADD_PUBLIC_FUNC(MenuSetup_TA_TAZoneModule_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_TA_StartAttempt);
    ADD_PUBLIC_FUNC(MenuSetup_TA_Leaderboards_TransitionCB);
    ADD_PUBLIC_FUNC(MenuSetup_TA_Leaderboards_BackPressCB);
    ADD_PUBLIC_FUNC(MenuSetup_TA_Leaderboards_YPressCB);
    ADD_PUBLIC_FUNC(MenuSetup_State_SetupLeaderboards);
    ADD_PUBLIC_FUNC(MenuSetup_VS_OpenCompRules);
    ADD_PUBLIC_FUNC(MenuSetup_VS_OpenCompZones);
    ADD_PUBLIC_FUNC(MenuSetup_VS_ProcessButtonCB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_MenuSetupCB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_StartMatch);
    ADD_PUBLIC_FUNC(MenuSetup_VS_StartMatch_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_RulesButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_OpenCompTotal);
    ADD_PUBLIC_FUNC(MenuSetup_VS_Round_ProcessButtonCB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_Round_MenuSetupCB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_GotoCompetition);
    ADD_PUBLIC_FUNC(MenuSetup_VS_Total_ProcessButtonCB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_Total_MenuSetupCB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_Total_MenuUpdateCB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_ExitComp_TransitionCB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_BackoutFromVsCharSelect_CB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_BackoutFromVsCharSelect);
    ADD_PUBLIC_FUNC(MenuSetup_VS_ExitComp_YesCB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_CompZones_BackPressCB);
    ADD_PUBLIC_FUNC(MenuSetup_VS_StartPuyoMatch);
    ADD_PUBLIC_FUNC(MenuSetup_Options_VideoMenuButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_Options_SoundMenuButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_Options_LanguageMenuButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_Options_ControlsMenuButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_Options_SetDefaultMappings_P1);
    ADD_PUBLIC_FUNC(MenuSetup_Options_SetDefaultMappings_P2);
    ADD_PUBLIC_FUNC(MenuSetup_Options_SetupKBControlsMenu);
    ADD_PUBLIC_FUNC(MenuSetup_OptionsVideo_Win_MenuUpdateCB);
    ADD_PUBLIC_FUNC(MenuSetup_OptionsVideo_Win_InitVideoOptionsMenu);
    ADD_PUBLIC_FUNC(MenuSetup_Options_OpenKBControlsMenu);
    ADD_PUBLIC_FUNC(MenuSetup_Options_MenuSetupCB);
    ADD_PUBLIC_FUNC(MenuSetup_Options_SaveOptionsCB_Load);
    ADD_PUBLIC_FUNC(MenuSetup_Options_LaunchManual);
    ADD_PUBLIC_FUNC(MenuSetup_OptionsLanguage_LanguageButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_OptionsVideo_ShaderButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_OptionsVideo_WindowScaleButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_OptionsVideo_BorderlessButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_OptionsVideo_FullscreenButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_OptionsVideo_VSyncButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_OptionsVideo_TripleBufferButton_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_OptionsVideo_UISlider_ChangedCB);
    ADD_PUBLIC_FUNC(MenuSetup_OpenExtrasMenu_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_ProcessButtonCB);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_Start_Puyo_vsAI);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_Puyo_vsAI_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_Start_Puyo_vs2P);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_Puyo_vs2P_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_Start_Credits);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_Credits_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_StartDAGarden);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_DAGarden_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_Start_BSS_3K);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_BSS_3K_ActionCB);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_Start_BSS_Mania);
    ADD_PUBLIC_FUNC(MenuSetup_Extras_BSS_Mania_ActionCB);
#endif

    // Menu/OptionsMenu
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(OptionsMenu_Initialize);
    ADD_PUBLIC_FUNC(OptionsMenu_HandleUnlocks);
    ADD_PUBLIC_FUNC(OptionsMenu_SetupActions);
    ADD_PUBLIC_FUNC(OptionsMenu_HandleMenuReturn);
    ADD_PUBLIC_FUNC(OptionsMenu_InitVideoOptionsMenu);
    ADD_PUBLIC_FUNC(OptionsMenu_VideoControl_Win_MenuUpdateCB);
    ADD_PUBLIC_FUNC(OptionsMenu_VideoControl_Win_YPressCB);
    ADD_PUBLIC_FUNC(OptionsMenu_DlgRunnerCB_RevertVideoChanges);
    ADD_PUBLIC_FUNC(OptionsMenu_VideoControl_Win_BackPressCB);
    ADD_PUBLIC_FUNC(OptionsMenu_ApplyChangesDlg_BackPress_YesCB);
    ADD_PUBLIC_FUNC(OptionsMenu_ApplyChangesDlg_Win_NoCB);
    ADD_PUBLIC_FUNC(OptionsMenu_ApplyChangesDlg_NoCB);
    ADD_PUBLIC_FUNC(OptionsMenu_ApplyChangesDlg_Win_YesCB);
    ADD_PUBLIC_FUNC(OptionsMenu_ApplyChangesDlg_BackPress_NoCB);
    ADD_PUBLIC_FUNC(OptionsMenu_VideoMenuButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_SoundMenuButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_LanguageMenuButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_DataOptionsMenuButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_ControlsMenuButton_DefaultKB_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_ControlsMenuButton_Default_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_ControlsMenuButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_SetDefaultMappings);
    ADD_PUBLIC_FUNC(OptionsMenu_SetupKBControlsMenu);
    ADD_PUBLIC_FUNC(OptionsMenu_KeyboardIDButton_Win_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_MenuSetupCB);
    ADD_PUBLIC_FUNC(OptionsMenu_SaveOptionsCB_Load);
    ADD_PUBLIC_FUNC(OptionsMenu_TransitionCB_ReloadScene);
    ADD_PUBLIC_FUNC(OptionsMenu_SaveOptionsCB_Action);
    ADD_PUBLIC_FUNC(OptionsMenu_LanguageButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_ShaderButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_WindowScaleButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_BorderlessButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_FullScreenButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_VSyncButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_TripleBufferButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_UISlider_ChangedCB);
    ADD_PUBLIC_FUNC(OptionsMenu_ShowManual);
    ADD_PUBLIC_FUNC(OptionsMenu_EraseSaveDataCB);
    ADD_PUBLIC_FUNC(OptionsMenu_AreYouSureDlg_YesCB_EraseSaveGame);
    ADD_PUBLIC_FUNC(OptionsMenu_AreYouSureDlg_YesCB_EraseAllData);
    ADD_PUBLIC_FUNC(OptionsMenu_EraseSaveGameButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_AreYouSureDlg_YesCB_EraseMedallions);
    ADD_PUBLIC_FUNC(OptionsMenu_EraseMedallionsButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_AreYouSureDlg_YesCB_EraseTimeAttack);
    ADD_PUBLIC_FUNC(OptionsMenu_EraseTimeAttackButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_AreYouSureDlg_YesCB_EraseReplays);
    ADD_PUBLIC_FUNC(OptionsMenu_EraseReplaysCB);
    ADD_PUBLIC_FUNC(OptionsMenu_EraseReplaysButton_ActionCB);
    ADD_PUBLIC_FUNC(OptionsMenu_EraseAllButton_ActionCB);
#endif

    // Menu/ThanksSetup
    ADD_PUBLIC_FUNC(ThanksSetup_HandleIconsPos);
    ADD_PUBLIC_FUNC(ThanksSetup_State_ThanksForPlaying);
    ADD_PUBLIC_FUNC(ThanksSetup_State_FlipOverIcon);
    ADD_PUBLIC_FUNC(ThanksSetup_State_Mania2017);
    ADD_PUBLIC_FUNC(ThanksSetup_State_FadeOut);
    ADD_PUBLIC_FUNC(ThanksSetup_Draw_Fade);

    // Menu/TimeAttackMenu
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(TimeAttackMenu_Initialize);
    ADD_PUBLIC_FUNC(TimeAttackMenu_HandleUnlocks);
    ADD_PUBLIC_FUNC(TimeAttackMenu_SetupActions);
    ADD_PUBLIC_FUNC(TimeAttackMenu_HandleMenuReturn);
    ADD_PUBLIC_FUNC(TimeAttackMenu_SetEncoreLayouts);
    ADD_PUBLIC_FUNC(TimeAttackMenu_DeleteReplayActionCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_ConfirmDeleteReplay_Yes_CB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_DeleteReplayCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_MenuUpdateCB_LB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_SetupLeaderboards);
    ADD_PUBLIC_FUNC(TimeAttackMenu_ReplayCarousel_ActionCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_WatchReplay);
    ADD_PUBLIC_FUNC(TimeAttackMenu_ReplayLoad_CB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_WatchReplayActionCB_ReplaysMenu);
    ADD_PUBLIC_FUNC(TimeAttackMenu_ChallengeReplayActionCB_ReplaysMenu);
    ADD_PUBLIC_FUNC(TimeAttackMenu_WatchReplayCB_RanksMenu);
    ADD_PUBLIC_FUNC(TimeAttackMenu_ChallengeReplayCB_RanksMenu);
    ADD_PUBLIC_FUNC(TimeAttackMenu_LoadScene_Fadeout);
    ADD_PUBLIC_FUNC(TimeAttackMenu_MenuSetupCB_Replay);
    ADD_PUBLIC_FUNC(TimeAttackMenu_MenuUpdateCB_Replay);
    ADD_PUBLIC_FUNC(TimeAttackMenu_MenuUpdateCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_ReplayButton_ActionCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_YPressCB_Replay);
    ADD_PUBLIC_FUNC(TimeAttackMenu_SortReplayChoiceCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_SetupDetailsView);
    ADD_PUBLIC_FUNC(TimeAttackMenu_TAModule_ActionCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_StartTAAttempt);
    ADD_PUBLIC_FUNC(TimeAttackMenu_LoadScene);
    ADD_PUBLIC_FUNC(TimeAttackMenu_YPressCB_ZoneSel);
    ADD_PUBLIC_FUNC(TimeAttackMenu_BackPressCB_ZoneSel);
    ADD_PUBLIC_FUNC(TimeAttackMenu_YPressCB_Details);
    ADD_PUBLIC_FUNC(TimeAttackMenu_ResetTimes_YesCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_XPressCB_Details);
    ADD_PUBLIC_FUNC(TimeAttackMenu_TAZoneModule_ActionCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_RankButton_ActionCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_MenuSetupCB_Details);
    ADD_PUBLIC_FUNC(TimeAttackMenu_TAZoneModule_ChoiceChangeCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_CharButton_ActionCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_TransitionToDetailsCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_LeaderboardsBackPressCB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_YPressCB_LB);
    ADD_PUBLIC_FUNC(TimeAttackMenu_State_SetupLeaderboards);
    ADD_PUBLIC_FUNC(TimeAttackMenu_SetupLeaderboardsCarousel);
#endif

    // Menu/UIBackground
    ADD_PUBLIC_FUNC(UIBackground_DrawNormal);

    // Menu/UIButton
    ADD_PUBLIC_FUNC(UIButton_ManageChoices);
    ADD_PUBLIC_FUNC(UIButton_GetChoicePtr);
    ADD_PUBLIC_FUNC(UIButton_SetChoiceSelectionWithCB);
    ADD_PUBLIC_FUNC(UIButton_SetChoiceSelection);
    ADD_PUBLIC_FUNC(UIButton_GetActionCB);
    ADD_PUBLIC_FUNC(UIButton_FailCB);
    ADD_PUBLIC_FUNC(UIButton_ProcessButtonCB_Scroll);
    ADD_PUBLIC_FUNC(UIButton_ProcessTouchCB_Multi);
    ADD_PUBLIC_FUNC(UIButton_ProcessTouchCB_Single);
    ADD_PUBLIC_FUNC(UIButton_ProcessButtonCB);
    ADD_PUBLIC_FUNC(UIButton_CheckButtonEnterCB);
    ADD_PUBLIC_FUNC(UIButton_CheckSelectedCB);
    ADD_PUBLIC_FUNC(UIButton_ButtonEnterCB);
    ADD_PUBLIC_FUNC(UIButton_ButtonLeaveCB);
    ADD_PUBLIC_FUNC(UIButton_SelectedCB);
    ADD_PUBLIC_FUNC(UIButton_State_HandleButtonLeave);
    ADD_PUBLIC_FUNC(UIButton_State_HandleButtonEnter);
    ADD_PUBLIC_FUNC(UIButton_State_Selected);

    // Menu/UIButtonPrompt
    ADD_PUBLIC_FUNC(UIButtonPrompt_GetButtonMappings);
    ADD_PUBLIC_FUNC(UIButtonPrompt_GetGamepadType);
    ADD_PUBLIC_FUNC(UIButtonPrompt_MappingsToFrame);
    ADD_PUBLIC_FUNC(UIButtonPrompt_CheckTouch);
    ADD_PUBLIC_FUNC(UIButtonPrompt_SetButtonSprites);
    ADD_PUBLIC_FUNC(UIButtonPrompt_State_CheckIfSelected);
    ADD_PUBLIC_FUNC(UIButtonPrompt_State_Selected);

    // Menu/UICarousel
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UICarousel_HandleScrolling);
    ADD_PUBLIC_FUNC(UICarousel_HandleButtonPositions);
#endif

    // Menu/UICharButton
    ADD_PUBLIC_FUNC(UICharButton_DrawOutlines);
    ADD_PUBLIC_FUNC(UICharButton_DrawBG);
    ADD_PUBLIC_FUNC(UICharButton_DrawPlayers);
    ADD_PUBLIC_FUNC(UICharButton_SelectedCB);
    ADD_PUBLIC_FUNC(UICharButton_CheckButtonEnterCB);
    ADD_PUBLIC_FUNC(UICharButton_CheckSelectedCB);
    ADD_PUBLIC_FUNC(UICharButton_ButtonEnterCB);
    ADD_PUBLIC_FUNC(UICharButton_ButtonLeaveCB);
    ADD_PUBLIC_FUNC(UICharButton_State_HandleButtonLeave);
    ADD_PUBLIC_FUNC(UICharButton_State_HandleButtonEnter);
    ADD_PUBLIC_FUNC(UICharButton_State_Selected);

    // Menu/UIChoice
    ADD_PUBLIC_FUNC(UIChoice_SetChoiceActive);
    ADD_PUBLIC_FUNC(UIChoice_SetChoiceInactive);
    ADD_PUBLIC_FUNC(UIChoice_TouchedCB_Left);
    ADD_PUBLIC_FUNC(UIChoice_TouchedCB_Right);
    ADD_PUBLIC_FUNC(UIChoice_CheckTouch);
    ADD_PUBLIC_FUNC(UIChoice_State_HandleButtonLeave);
    ADD_PUBLIC_FUNC(UIChoice_State_HandleButtonEnter);

    // Menu/UIControl
    ADD_PUBLIC_FUNC(UIControl_GetButtonID);
    ADD_PUBLIC_FUNC(UIControl_MenuChangeButtonInit);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UIControl_SetActiveMenuButtonPrompts);
    ADD_PUBLIC_FUNC(UIControl_SetActiveMenu);
#endif
    ADD_PUBLIC_FUNC(UIControl_SetMenuLostFocus);
    ADD_PUBLIC_FUNC(UIControl_SetInactiveMenu);
    ADD_PUBLIC_FUNC(UIControl_SetupButtons);
    ADD_PUBLIC_FUNC(UIControl_GetUIControl);
    ADD_PUBLIC_FUNC(UIControl_isMoving);
    ADD_PUBLIC_FUNC(UIControl_MatchMenuTag);
    ADD_PUBLIC_FUNC(UIControl_HandleMenuChange);
    ADD_PUBLIC_FUNC(UIControl_HandleMenuLoseFocus);
    ADD_PUBLIC_FUNC(UIControl_ReturnToParentMenu);
    ADD_PUBLIC_FUNC(UIControl_ClearInputs);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UIControl_SetTargetPos);
    ADD_PUBLIC_FUNC(UIControl_HandlePosition);
#endif
    ADD_PUBLIC_FUNC(UIControl_ProcessInputs);
    ADD_PUBLIC_FUNC(UIControl_ProcessButtonInput);
    ADD_PUBLIC_FUNC(UIControl_ContainsPos);

    // Menu/UICreditsText
    ADD_PUBLIC_FUNC(UICreditsText_SetText);
    ADD_PUBLIC_FUNC(UICreditsText_State_Init);
    ADD_PUBLIC_FUNC(UICreditsText_State_SetupCharPos);
    ADD_PUBLIC_FUNC(UICreditsText_State_MoveChars);
    ADD_PUBLIC_FUNC(UICreditsText_State_ScaleIn);
    ADD_PUBLIC_FUNC(UICreditsText_State_FadeIn);
    ADD_PUBLIC_FUNC(UICreditsText_SetupIdleDelay);
    ADD_PUBLIC_FUNC(UICreditsText_State_Idle);
    ADD_PUBLIC_FUNC(UICreditsText_State_ScaleOut);
    ADD_PUBLIC_FUNC(UICreditsText_State_FadeOut);

    // Menu/UIDialog
    ADD_PUBLIC_FUNC(UIDialog_CreateActiveDialog);
    ADD_PUBLIC_FUNC(UIDialog_SetupText);
    ADD_PUBLIC_FUNC(UIDialog_AddButton);
    ADD_PUBLIC_FUNC(UIDialog_Setup);
    ADD_PUBLIC_FUNC(UIDialog_CloseOnSel_HandleSelection);
    ADD_PUBLIC_FUNC(UIDialog_DrawBGShapes);
    ADD_PUBLIC_FUNC(UIDialog_HandleButtonPositions);
    ADD_PUBLIC_FUNC(UIDialog_Close);
    ADD_PUBLIC_FUNC(UIDialog_HandleAutoClose);
    ADD_PUBLIC_FUNC(UIDialog_ButtonActionCB);
    ADD_PUBLIC_FUNC(UIDialog_State_Appear);
    ADD_PUBLIC_FUNC(UIDialog_State_Idle);
    ADD_PUBLIC_FUNC(UIDialog_State_Close);
    ADD_PUBLIC_FUNC(UIDialog_CreateDialogOk);

    // Menu/UIDiorama
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UIDiorama_ChangeDiorama);
    ADD_PUBLIC_FUNC(UIDiorama_SetText);
    ADD_PUBLIC_FUNC(UIDiorama_State_ManiaMode_Alt_Run);
    ADD_PUBLIC_FUNC(UIDiorama_State_ManiaMode_Alt_Jog);
    ADD_PUBLIC_FUNC(UIDiorama_State_ManiaMode_Alt_Loop);
    ADD_PUBLIC_FUNC(UIDiorama_State_PlusUpsell);
    ADD_PUBLIC_FUNC(UIDiorama_State_EncoreMode);
    ADD_PUBLIC_FUNC(UIDiorama_State_TimeAttack);
    ADD_PUBLIC_FUNC(UIDiorama_State_Competition);
    ADD_PUBLIC_FUNC(UIDiorama_State_Options);
    ADD_PUBLIC_FUNC(UIDiorama_State_Extras);
    ADD_PUBLIC_FUNC(UIDiorama_State_Exit);
    ADD_PUBLIC_FUNC(UIDiorama_Draw_ManiaMode);
    ADD_PUBLIC_FUNC(UIDiorama_Draw_PlusUpsell);
    ADD_PUBLIC_FUNC(UIDiorama_Draw_EncoreMode);
    ADD_PUBLIC_FUNC(UIDiorama_Draw_TimeAttack);
    ADD_PUBLIC_FUNC(UIDiorama_Draw_Competition);
    ADD_PUBLIC_FUNC(UIDiorama_Draw_Options);
    ADD_PUBLIC_FUNC(UIDiorama_Draw_Extras);
    ADD_PUBLIC_FUNC(UIDiorama_Draw_Exit);
#endif

    // Menu/UIHeading
    ADD_PUBLIC_FUNC(UIHeading_LoadSprites);

    // Menu/UIInfoLabel
    ADD_PUBLIC_FUNC(UIInfoLabel_SetText);
    ADD_PUBLIC_FUNC(UIInfoLabel_SetString);
    ADD_PUBLIC_FUNC(UIInfoLabel_DrawSprites);

    // Menu/UIKeyBinder
    ADD_PUBLIC_FUNC(UIKeyBinder_GetButtonListID);
    ADD_PUBLIC_FUNC(UIKeyBinder_GetMappings);
    ADD_PUBLIC_FUNC(UIKeyBinder_SetMappings);
    ADD_PUBLIC_FUNC(UIKeyBinder_GetKeyNameFrameID);
    ADD_PUBLIC_FUNC(UIKeyBinder_DrawSprites);
    ADD_PUBLIC_FUNC(UIKeyBinder_ActionCB);
    ADD_PUBLIC_FUNC(UIKeyBinder_CheckButtonEnterCB);
    ADD_PUBLIC_FUNC(UIKeyBinder_CheckSelectedCB);
    ADD_PUBLIC_FUNC(UIKeyBinder_ButtonEnterCB);
    ADD_PUBLIC_FUNC(UIKeyBinder_ButtonLeaveCB);
    ADD_PUBLIC_FUNC(UIKeyBinder_SelectedCB);
    ADD_PUBLIC_FUNC(UIKeyBinder_State_HandleButtonLeave);
    ADD_PUBLIC_FUNC(UIKeyBinder_State_HandleButtonEnter);
    ADD_PUBLIC_FUNC(UIKeyBinder_State_Selected);
#if GAME_VERSION != VER_100
    ADD_PUBLIC_FUNC(UIKeyBinder_MoveKeyToActionCB_No);
    ADD_PUBLIC_FUNC(UIKeyBinder_MoveKeyToActionCB_Yes);
#endif

    // Menu/UILeaderboard
    ADD_PUBLIC_FUNC(UILeaderboard_SetupEntrySprites);
#if !MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UILeaderboard_InitLeaderboard);
    ADD_PUBLIC_FUNC(UILeaderboard_SetupLeaderboard);
    ADD_PUBLIC_FUNC(UILeaderboard_LoadEntries);
#endif
    ADD_PUBLIC_FUNC(UILeaderboard_DrawPrimitives);
    ADD_PUBLIC_FUNC(UILeaderboard_DrawEntries);
    ADD_PUBLIC_FUNC(UILeaderboard_DrawZonePreview);
    ADD_PUBLIC_FUNC(UILeaderboard_DrawTime);
    ADD_PUBLIC_FUNC(UILeaderboard_DrawRank);
    ADD_PUBLIC_FUNC(UILeaderboard_State_Init);
    ADD_PUBLIC_FUNC(UILeaderboard_State_Unselected);
    ADD_PUBLIC_FUNC(UILeaderboard_State_Selected);
    ADD_PUBLIC_FUNC(UILeaderboard_ProcessButtonCB);

    // Menu/UIMedallionPanel
    ADD_PUBLIC_FUNC(UIMedallionPanel_DrawPanel);

    // Menu/UIModeButton
    ADD_PUBLIC_FUNC(UIModeButton_SetupSprites);
    ADD_PUBLIC_FUNC(UIModeButton_CheckButtonEnterCB);
    ADD_PUBLIC_FUNC(UIModeButton_CheckSelectedCB);
    ADD_PUBLIC_FUNC(UIModeButton_ButtonEnterCB);
    ADD_PUBLIC_FUNC(UIModeButton_SelectedCB);
    ADD_PUBLIC_FUNC(UIModeButton_FailCB);
    ADD_PUBLIC_FUNC(UIModeButton_ButtonLeaveCB);
    ADD_PUBLIC_FUNC(UIModeButton_State_HandleButtonLeave);
    ADD_PUBLIC_FUNC(UIModeButton_State_HandleButtonEnter);
    ADD_PUBLIC_FUNC(UIModeButton_State_Selected);

    // Menu/UIOptionPanel
    ADD_PUBLIC_FUNC(UIOptionPanel_DrawBG);

    // Menu/UIPopover
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UIPopover_CreatePopover);
    ADD_PUBLIC_FUNC(UIPopover_AddButton);
    ADD_PUBLIC_FUNC(UIPopover_Setup);
    ADD_PUBLIC_FUNC(UIPopover_DrawSprites);
    ADD_PUBLIC_FUNC(UIPopover_SetupButtonPositions);
    ADD_PUBLIC_FUNC(UIPopover_Close);
    ADD_PUBLIC_FUNC(UIPopover_BackPressCB);
    ADD_PUBLIC_FUNC(UIPopover_ButtonActionCB);
    ADD_PUBLIC_FUNC(UIPopover_State_Appear);
    ADD_PUBLIC_FUNC(UIPopover_State_Idle);
    ADD_PUBLIC_FUNC(UIPopover_State_Close);
#endif

    // Menu/UIRankButton
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UIRankButton_SetRankText);
    ADD_PUBLIC_FUNC(UIRankButton_SetTimeAttackRank);
    ADD_PUBLIC_FUNC(UIRankButton_SetupLeaderboardRank);
    ADD_PUBLIC_FUNC(UIRankButton_DrawSprites);
    ADD_PUBLIC_FUNC(UIRankButton_DrawBackgroundShape);
    ADD_PUBLIC_FUNC(UIRankButton_CheckButtonEnterCB);
    ADD_PUBLIC_FUNC(UIRankButton_CheckSelectedCB);
    ADD_PUBLIC_FUNC(UIRankButton_ButtonEnterCB);
    ADD_PUBLIC_FUNC(UIRankButton_ButtonLeaveCB);
    ADD_PUBLIC_FUNC(UIRankButton_FailCB);
    ADD_PUBLIC_FUNC(UIRankButton_SelectedCB);
    ADD_PUBLIC_FUNC(UIRankButton_State_HandleButtonLeave);
    ADD_PUBLIC_FUNC(UIRankButton_State_HandleButtonEnter);
    ADD_PUBLIC_FUNC(UIRankButton_State_Selected);
#endif

    // Menu/UIReplayCarousel
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UIReplayCarousel_ProcessButtonCB);
    ADD_PUBLIC_FUNC(UIReplayCarousel_HandlePositions);
    ADD_PUBLIC_FUNC(UIReplayCarousel_SetupButtonCallbacks);
    ADD_PUBLIC_FUNC(UIReplayCarousel_HandleTouchPositions);
    ADD_PUBLIC_FUNC(UIReplayCarousel_TouchedCB);
    ADD_PUBLIC_FUNC(UIReplayCarousel_SetupVisibleReplayButtons);
    ADD_PUBLIC_FUNC(UIReplayCarousel_DrawBGShapes);
    ADD_PUBLIC_FUNC(UIReplayCarousel_DrawStageInfo);
    ADD_PUBLIC_FUNC(UIReplayCarousel_DrawZoneIcon);
    ADD_PUBLIC_FUNC(UIReplayCarousel_DrawReplayInfo);
    ADD_PUBLIC_FUNC(UIReplayCarousel_StartAction);
    ADD_PUBLIC_FUNC(UIReplayCarousel_SetUnselected);
    ADD_PUBLIC_FUNC(UIReplayCarousel_Draw_Loading);
    ADD_PUBLIC_FUNC(UIReplayCarousel_Draw_NoReplays);
    ADD_PUBLIC_FUNC(UIReplayCarousel_Draw_Carousel);
    ADD_PUBLIC_FUNC(UIReplayCarousel_State_Init);
    ADD_PUBLIC_FUNC(UIReplayCarousel_State_Unselected);
    ADD_PUBLIC_FUNC(UIReplayCarousel_State_Selected);
    ADD_PUBLIC_FUNC(UIReplayCarousel_State_StartAction);
#endif

#if GAME_VERSION != VER_100
    // Menu/UIResPicker
    ADD_PUBLIC_FUNC(UIResPicker_GetDisplayInfo);
    ADD_PUBLIC_FUNC(UIResPicker_ApplySettings);
    ADD_PUBLIC_FUNC(UIResPicker_ProcessButtonCB);
    ADD_PUBLIC_FUNC(UIResPicker_ProcessTouchCB);
    ADD_PUBLIC_FUNC(UIResPicker_TouchedCB_Left);
    ADD_PUBLIC_FUNC(UIResPicker_TouchedCB_Right);
    ADD_PUBLIC_FUNC(UIResPicker_SetChoiceActive);
    ADD_PUBLIC_FUNC(UIResPicker_SetChoiceInactive);
    ADD_PUBLIC_FUNC(UIResPicker_State_HandleButtonLeave);
    ADD_PUBLIC_FUNC(UIResPicker_State_HandleButtonEnter);
#endif

#if MANIA_USE_PLUS
    // Menu/UISaveSlot
    ADD_PUBLIC_FUNC(UISaveSlot_GetPlayerIDFromID);
    ADD_PUBLIC_FUNC(UISaveSlot_GetIDFromPlayerID);
    ADD_PUBLIC_FUNC(UISaveSlot_DrawPlayerIcons);
#endif
    ADD_PUBLIC_FUNC(UISaveSlot_DrawPlayerInfo);
    ADD_PUBLIC_FUNC(UISaveSlot_SetupButtonElements);
    ADD_PUBLIC_FUNC(UISaveSlot_SetupAnimators);
    ADD_PUBLIC_FUNC(UISaveSlot_LoadSaveInfo);
    ADD_PUBLIC_FUNC(UISaveSlot_HandleSaveIcons);
    ADD_PUBLIC_FUNC(UISaveSlot_DeleteDLG_CB);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UISaveSlot_DeleteSaveCB);
#else
    ADD_PUBLIC_FUNC(UISaveSlot_DeleteSaveCB);
    ADD_PUBLIC_FUNC(UISaveSlot_ProcessButtonCB);
#endif
    ADD_PUBLIC_FUNC(UISaveSlot_SelectedCB);
    ADD_PUBLIC_FUNC(UISaveSlot_NextCharacter);
    ADD_PUBLIC_FUNC(UISaveSlot_PrevCharacter);
    ADD_PUBLIC_FUNC(UISaveSlot_NextZone);
    ADD_PUBLIC_FUNC(UISaveSlot_PrevZone);
    ADD_PUBLIC_FUNC(UISaveSlot_CheckButtonEnterCB);
    ADD_PUBLIC_FUNC(UISaveSlot_CheckSelectedCB);
    ADD_PUBLIC_FUNC(UISaveSlot_ButtonEnterCB);
    ADD_PUBLIC_FUNC(UISaveSlot_ButtonLeaveCB);
    ADD_PUBLIC_FUNC(UISaveSlot_HandleSaveIconChange);
    ADD_PUBLIC_FUNC(UISaveSlot_State_NotSelected);
    ADD_PUBLIC_FUNC(UISaveSlot_State_OtherWasSelected);
    ADD_PUBLIC_FUNC(UISaveSlot_State_NewSave);
    ADD_PUBLIC_FUNC(UISaveSlot_State_ActiveSave);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UISaveSlot_StateInput_NewSave);
    ADD_PUBLIC_FUNC(UISaveSlot_State_CompletedSave);
#endif
    ADD_PUBLIC_FUNC(UISaveSlot_State_Selected);

    // Menu/UIShifter
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UIShifter_HandleShift);
#endif

    // Menu/UISlider
    ADD_PUBLIC_FUNC(UISlider_DrawBGShapes);
    ADD_PUBLIC_FUNC(UISlider_DrawSlider);
    ADD_PUBLIC_FUNC(UISlider_ButtonPressCB);
    ADD_PUBLIC_FUNC(UISlider_TouchCB);
    ADD_PUBLIC_FUNC(UISlider_ButtonEnterCB);
    ADD_PUBLIC_FUNC(UISlider_ButtonLeaveCB);
    ADD_PUBLIC_FUNC(UISlider_CheckButtonEnterCB);
    ADD_PUBLIC_FUNC(UISlider_CheckSelectedCB);
    ADD_PUBLIC_FUNC(UISlider_State_HandleButtonLeave);
    ADD_PUBLIC_FUNC(UISlider_State_HandleButtonEnter);

#if MANIA_USE_PLUS
    // Menu/UISubHeading
    ADD_PUBLIC_FUNC(UISubHeading_Initialize);
    ADD_PUBLIC_FUNC(UISubHeading_HandleUnlocks);
    ADD_PUBLIC_FUNC(UISubHeading_SetupActions);
    ADD_PUBLIC_FUNC(UISubHeading_HandleMenuReturn);
    ADD_PUBLIC_FUNC(UISubHeading_GetMedalMods);
    ADD_PUBLIC_FUNC(UISubHeading_SaveFileCB);
    ADD_PUBLIC_FUNC(UISubHeading_SecretsTransitionCB);
    ADD_PUBLIC_FUNC(UISubHeading_LeaveSecretsMenu);
    ADD_PUBLIC_FUNC(UISubHeading_SaveSel_MenuUpdateCB);
    ADD_PUBLIC_FUNC(UISubHeading_SaveSel_YPressCB);
    ADD_PUBLIC_FUNC(UISubHeading_SaveButton_ActionCB);
#endif

    // Menu/UITABanner
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UITABanner_SetupDetails);
    ADD_PUBLIC_FUNC(UITABanner_DrawBGShapes);
    ADD_PUBLIC_FUNC(UITABanner_DrawStageInfo);
    ADD_PUBLIC_FUNC(UITABanner_DrawZoneIcon);
    ADD_PUBLIC_FUNC(UITABanner_DrawBannerInfo);
#endif

    // Menu/UITAZoneModule
    ADD_PUBLIC_FUNC(UITAZoneModule_Setup);
    ADD_PUBLIC_FUNC(UITAZoneModule_SetupText);
    ADD_PUBLIC_FUNC(UITAZoneModule_DrawBGShapes);
    ADD_PUBLIC_FUNC(UITAZoneModule_DrawFGShapes);
    ADD_PUBLIC_FUNC(UITAZoneModule_DrawZonePreview);
    ADD_PUBLIC_FUNC(UITAZoneModule_DrawModuleInfo);
    ADD_PUBLIC_FUNC(UITAZoneModule_FailCB);
    ADD_PUBLIC_FUNC(UITAZoneModule_SelectedCB);
    ADD_PUBLIC_FUNC(UITAZoneModule_CheckButtonEnterCB);
    ADD_PUBLIC_FUNC(UITAZoneModule_CheckSelectedCB);
    ADD_PUBLIC_FUNC(UITAZoneModule_ButtonEnterCB);
    ADD_PUBLIC_FUNC(UITAZoneModule_ButtonLeaveCB);
    ADD_PUBLIC_FUNC(UITAZoneModule_TransitionCB);
    ADD_PUBLIC_FUNC(UITAZoneModule_ShowLeaderboards_CB);
    ADD_PUBLIC_FUNC(UITAZoneModule_State_Init);
    ADD_PUBLIC_FUNC(UITAZoneModule_State_NotSelected);
    ADD_PUBLIC_FUNC(UITAZoneModule_State_Selected);
    ADD_PUBLIC_FUNC(UITAZoneModule_State_HasBeenSelected);
#if !MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UITAZoneModule_DrawTime);
    ADD_PUBLIC_FUNC(UITAZoneModule_DrawActInfo_Expanded);
    ADD_PUBLIC_FUNC(UITAZoneModule_DrawExpandedView);
    ADD_PUBLIC_FUNC(UITAZoneModule_State_Expanded);
    ADD_PUBLIC_FUNC(UITAZoneModule_State_StartTimeAttackAttempt);
    ADD_PUBLIC_FUNC(UITAZoneModule_TouchCB_Left);
    ADD_PUBLIC_FUNC(UITAZoneModule_TouchCB_Right);
    ADD_PUBLIC_FUNC(UITAZoneModule_ProcessButtonCB_Expanded);
    ADD_PUBLIC_FUNC(UITAZoneModule_ShowLeaderboards);
    ADD_PUBLIC_FUNC(UITAZoneModule_SetStartupModule);
    ADD_PUBLIC_FUNC(UITAZoneModule_State_ExpandModule);
    ADD_PUBLIC_FUNC(UITAZoneModule_State_ContractModule);
    ADD_PUBLIC_FUNC(UITAZoneModule_State_MoveOffScreen);
    ADD_PUBLIC_FUNC(UITAZoneModule_State_Inactive);
    ADD_PUBLIC_FUNC(UITAZoneModule_State_ComeBackOnScreen);
#endif

    // Menu/UITransition
    ADD_PUBLIC_FUNC(UITransition_StartTransition);
    ADD_PUBLIC_FUNC(UITransition_MatchNewTag);
    ADD_PUBLIC_FUNC(UITransition_SetNewTag);
    ADD_PUBLIC_FUNC(UITransition_DrawShapes);
    ADD_PUBLIC_FUNC(UITransition_State_Init);
    ADD_PUBLIC_FUNC(UITransition_State_TransitionIn);
    ADD_PUBLIC_FUNC(UITransition_State_TransitionOut);

    // Menu/UIUsernamePopup
    ADD_PUBLIC_FUNC(UIUsernamePopup_ShowPopup);
    ADD_PUBLIC_FUNC(UIUsernamePopup_DrawSprites);
    ADD_PUBLIC_FUNC(UIUsernamePopup_State_Init);
    ADD_PUBLIC_FUNC(UIUsernamePopup_State_Appear);
    ADD_PUBLIC_FUNC(UIUsernamePopup_State_Shown);
    ADD_PUBLIC_FUNC(UIUsernamePopup_State_Disappear);

    // Menu/UIVideo
    ADD_PUBLIC_FUNC(UIVideo_SkipCB);
    ADD_PUBLIC_FUNC(UIVideo_State_PlayVideo1);
    ADD_PUBLIC_FUNC(UIVideo_State_PlayVideo2);
    ADD_PUBLIC_FUNC(UIVideo_State_FinishPlayback);

    // Menu/UIVsCharSelector
    ADD_PUBLIC_FUNC(UIVsCharSelector_SetupText);
    ADD_PUBLIC_FUNC(UIVsCharSelector_DrawOutline);
    ADD_PUBLIC_FUNC(UIVsCharSelector_DrawBG);
    ADD_PUBLIC_FUNC(UIVsCharSelector_DrawPlayer);
    ADD_PUBLIC_FUNC(UIVsCharSelector_ProcessButtonCB);
    ADD_PUBLIC_FUNC(UIVsCharSelector_ProcessButtonCB_CharSelected);
    ADD_PUBLIC_FUNC(UIVsCharSelector_State_ResetState);
    ADD_PUBLIC_FUNC(UIVsCharSelector_State_CharSelect);
    ADD_PUBLIC_FUNC(UIVsCharSelector_State_WaitingForPlayer);
    ADD_PUBLIC_FUNC(UIVsCharSelector_State_HandlePlayerJoin);
    ADD_PUBLIC_FUNC(UIVsCharSelector_State_Selected);

    // Menu/UIVsResults
    ADD_PUBLIC_FUNC(UIVsResults_SetupSprites);
    ADD_PUBLIC_FUNC(UIVsResults_DrawOutline);
    ADD_PUBLIC_FUNC(UIVsResults_DrawBG);
    ADD_PUBLIC_FUNC(UIVsResults_DrawRow);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UIVsResults_DrawTrophies);
    ADD_PUBLIC_FUNC(UIVsResults_DrawResults);
#endif
    ADD_PUBLIC_FUNC(UIVsResults_State_Blank);

    // Menu/UIVsRoundPicker
    ADD_PUBLIC_FUNC(UIVsRoundPicker_DrawText);
    ADD_PUBLIC_FUNC(UIVsRoundPicker_SetText);
    ADD_PUBLIC_FUNC(UIVsRoundPicker_Apply);
    ADD_PUBLIC_FUNC(UIVsRoundPicker_ProcessButtonCB);
    ADD_PUBLIC_FUNC(UIVsRoundPicker_ProcessTouchCB);
    ADD_PUBLIC_FUNC(UIVsRoundPicker_TouchedCB_Left);
    ADD_PUBLIC_FUNC(UIVsRoundPicker_TouchedCB_Right);
    ADD_PUBLIC_FUNC(UIVsRoundPicker_SetChoiceActive);
    ADD_PUBLIC_FUNC(UIVsRoundPicker_SetChoiceInactive);
    ADD_PUBLIC_FUNC(UIVsRoundPicker_State_HandleButtonLeave);
    ADD_PUBLIC_FUNC(UIVsRoundPicker_State_HandleButtonEnter);

    // Menu/UIVsScoreboard
    ADD_PUBLIC_FUNC(UIVsScoreboard_SetupSprites);
    ADD_PUBLIC_FUNC(UIVsScoreboard_SetScores);
    ADD_PUBLIC_FUNC(UIVsScoreboard_DrawSprites);

    // Menu/UIVsZoneButton
    ADD_PUBLIC_FUNC(UIVsZoneButton_SetupAnimators);
    ADD_PUBLIC_FUNC(UIVsZoneButton_SetNameText);
    ADD_PUBLIC_FUNC(UIVsZoneButton_DrawOutline);
    ADD_PUBLIC_FUNC(UIVsZoneButton_DrawBG);
    ADD_PUBLIC_FUNC(UIVsZoneButton_DrawZoneIcon);
    ADD_PUBLIC_FUNC(UIVsZoneButton_DrawButton);
    ADD_PUBLIC_FUNC(UIVsZoneButton_CheckButtonEnterCB);
    ADD_PUBLIC_FUNC(UIVsZoneButton_CheckSelectedCB);
    ADD_PUBLIC_FUNC(UIVsZoneButton_SelectedCB);
    ADD_PUBLIC_FUNC(UIVsZoneButton_FailCB);
    ADD_PUBLIC_FUNC(UIVsZoneButton_ButtonEnterCB);
    ADD_PUBLIC_FUNC(UIVsZoneButton_ButtonLeaveCB);
    ADD_PUBLIC_FUNC(UIVsZoneButton_State_HandleButtonLeave);
    ADD_PUBLIC_FUNC(UIVsZoneButton_State_HandleButtonEnter);
    ADD_PUBLIC_FUNC(UIVsZoneButton_State_Selected);

    // Menu/UIWaitSpinner
    ADD_PUBLIC_FUNC(UIWaitSpinner_StartWait);
    ADD_PUBLIC_FUNC(UIWaitSpinner_FinishWait);
    ADD_PUBLIC_FUNC(UIWaitSpinner_State_Show);
    ADD_PUBLIC_FUNC(UIWaitSpinner_State_Hide);

    // Menu/UIWidgets
    ADD_PUBLIC_FUNC(UIWidgets_ApplyLanguage);
    ADD_PUBLIC_FUNC(UIWidgets_DrawRectOutline_Black);
    ADD_PUBLIC_FUNC(UIWidgets_DrawRectOutline_Blended);
    ADD_PUBLIC_FUNC(UIWidgets_DrawRectOutline_Flash);
    ADD_PUBLIC_FUNC(UIWidgets_DrawRightTriangle);
    ADD_PUBLIC_FUNC(UIWidgets_DrawEquilateralTriangle);
    ADD_PUBLIC_FUNC(UIWidgets_DrawParallelogram);
    ADD_PUBLIC_FUNC(UIWidgets_DrawUpDownArrows);
    ADD_PUBLIC_FUNC(UIWidgets_DrawLeftRightArrows);
    ADD_PUBLIC_FUNC(UIWidgets_DrawTriJoinRect);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(UIWidgets_DrawTime);
#endif

#if GAME_VERSION != VER_100
    // Menu/UIWinSize
    ADD_PUBLIC_FUNC(UIWinSize_SetupText);
    ADD_PUBLIC_FUNC(UIWinSize_ApplySettings);
    ADD_PUBLIC_FUNC(UIWinSize_ProcessButtonCB);
    ADD_PUBLIC_FUNC(UIWinSize_ProcessTouchCB);
    ADD_PUBLIC_FUNC(UIWinSize_TouchedCB_Left);
    ADD_PUBLIC_FUNC(UIWinSize_TouchedCB_Right);
    ADD_PUBLIC_FUNC(UIWinSize_SetChoiceActive);
    ADD_PUBLIC_FUNC(UIWinSize_SetChoiceInactive);
    ADD_PUBLIC_FUNC(UIWinSize_State_HandleButtonLeave);
    ADD_PUBLIC_FUNC(UIWinSize_State_HandleButtonEnter);
#endif

    // MMZ/BladePole
    ADD_PUBLIC_FUNC(BladePole_DrawSprites);
    ADD_PUBLIC_FUNC(BladePole_SetAnimation);
    ADD_PUBLIC_FUNC(BladePole_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(BladePole_State_TopBladeActive);
    ADD_PUBLIC_FUNC(BladePole_State_BottomBladeActive);

    // MMZ/BuzzSaw
    ADD_PUBLIC_FUNC(BuzzSaw_SfxCheck_SawSus);
    ADD_PUBLIC_FUNC(BuzzSaw_SfxUpdate_SawSus);
    ADD_PUBLIC_FUNC(BuzzSaw_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(BuzzSaw_State_Attached);
    ADD_PUBLIC_FUNC(BuzzSaw_State_Stray_Waiting);
    ADD_PUBLIC_FUNC(BuzzSaw_State_Stray_Released);
    ADD_PUBLIC_FUNC(BuzzSaw_State_FreeMove_Reset);

    // MMZ/EggPistonsMKII
    ADD_PUBLIC_FUNC(EggPistonsMKII_CheckPlayerCollisions_Piston);
    ADD_PUBLIC_FUNC(EggPistonsMKII_CheckPlayerCollisions_EggPiston);
    ADD_PUBLIC_FUNC(EggPistonsMKII_CheckPlayerCollisions_Ball);
    ADD_PUBLIC_FUNC(EggPistonsMKII_CheckPlayerCollisions_Solid);
    ADD_PUBLIC_FUNC(EggPistonsMKII_Hit);
    ADD_PUBLIC_FUNC(EggPistonsMKII_Explode);
    ADD_PUBLIC_FUNC(EggPistonsMKII_GetNextPiston);
    ADD_PUBLIC_FUNC(EggPistonsMKII_SpawnElecBall);
    ADD_PUBLIC_FUNC(EggPistonsMKII_CheckPlayerAttacking);
    ADD_PUBLIC_FUNC(EggPistonsMKII_State_SetupArena);
    ADD_PUBLIC_FUNC(EggPistonsMKII_State_EnterBoss);
    ADD_PUBLIC_FUNC(EggPistonsMKII_State_PistonReveal);
    ADD_PUBLIC_FUNC(EggPistonsMKII_State_ClassicMode);
    ADD_PUBLIC_FUNC(EggPistonsMKII_State_StartPinchMode);
    ADD_PUBLIC_FUNC(EggPistonsMKII_State_PinchMode);
    ADD_PUBLIC_FUNC(EggPistonsMKII_State_Destroyed);
    ADD_PUBLIC_FUNC(EggPistonsMKII_State_Finish);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StatePiston_Idle);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StatePiston_Shaking);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StatePiston_BeginCrushing);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StatePiston_CrushExtend);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StatePiston_Retract);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StatePiston_Explode);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StateOrbGenerator_Idle);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StateOrbGenerator_Warning);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StateOrb_MoveToTargetPos);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StateOrb_Charging);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StateOrb_Attacking);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StateAlarm_Active);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StateAlarm_Destroyed);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StateBarrier_Solid);
    ADD_PUBLIC_FUNC(EggPistonsMKII_StateBarrier_Explode);

    // MMZ/FarPlane
    ADD_PUBLIC_FUNC(FarPlane_SetupEntities);
    ADD_PUBLIC_FUNC(FarPlane_SetEntityActivities);
    ADD_PUBLIC_FUNC(FarPlane_DrawHook_ApplyFarPlane);
    ADD_PUBLIC_FUNC(FarPlane_DrawHook_RemoveFarPlane);
    ADD_PUBLIC_FUNC(FarPlane_Scanline_FarPlaneView);

    // MMZ/Gachapandora
    ADD_PUBLIC_FUNC(Gachapandora_CheckPlayerCollisions_Prize);
    ADD_PUBLIC_FUNC(Gachapandora_Explode);
    ADD_PUBLIC_FUNC(Gachapandora_Player_StateInput_P1Grabbed);
    ADD_PUBLIC_FUNC(Gachapandora_Player_StateInput_P2PlayerGrabbed);
    ADD_PUBLIC_FUNC(Gachapandora_Player_StateInput_P2AIGrabbed);
    ADD_PUBLIC_FUNC(Gachapandora_HandleSparksAndDebris);
    ADD_PUBLIC_FUNC(Gachapandora_HandleAnimations);
    ADD_PUBLIC_FUNC(Gachapandora_StateBoss_SetupArena);
    ADD_PUBLIC_FUNC(Gachapandora_StateBoss_AwaitPlayer);
    ADD_PUBLIC_FUNC(Gachapandora_StateBoss_EnterEggman);
    ADD_PUBLIC_FUNC(Gachapandora_StateBoss_FloatAround);
    ADD_PUBLIC_FUNC(Gachapandora_StateBoss_HandleSpun);
    ADD_PUBLIC_FUNC(Gachapandora_StateBoss_Explode);
    ADD_PUBLIC_FUNC(Gachapandora_StateBoss_PanicFlee);
    ADD_PUBLIC_FUNC(Gachapandora_StateBoss_EnsureAllCapsulesDestroyed);
    ADD_PUBLIC_FUNC(Gachapandora_StateBoss_LastDitchAttack);
    ADD_PUBLIC_FUNC(Gachapandora_StateBoss_Defeated);
    ADD_PUBLIC_FUNC(Gachapandora_StateBoss_EggmanFallOut);
    ADD_PUBLIC_FUNC(Gachapandora_StateBoss_Finish);
    ADD_PUBLIC_FUNC(Gachapandora_Draw_Boss);
    ADD_PUBLIC_FUNC(Gachapandora_Draw_BossDestroyed);
    ADD_PUBLIC_FUNC(Gachapandora_StatePrize_CapsuleFall);
    ADD_PUBLIC_FUNC(Gachapandora_StatePrize_ExitCapsule);
    ADD_PUBLIC_FUNC(Gachapandora_StatePrize_Destroyed);
    ADD_PUBLIC_FUNC(Gachapandora_StatePrize_DrillerCapsuleExitBounce);
    ADD_PUBLIC_FUNC(Gachapandora_StatePrize_DrillerMove);
    ADD_PUBLIC_FUNC(Gachapandora_StatePrize_FireDropperMove);
    ADD_PUBLIC_FUNC(Gachapandora_StatePrize_AmyIdle);
    ADD_PUBLIC_FUNC(Gachapandora_StatePrize_AmyWalk);
    ADD_PUBLIC_FUNC(Gachapandora_StatePrize_AmyJump);
    ADD_PUBLIC_FUNC(Gachapandora_StatePrize_AmyRebound);
    ADD_PUBLIC_FUNC(Gachapandora_StatePrize_AmyGrabbed);
    ADD_PUBLIC_FUNC(Gachapandora_Draw_Prize);
    ADD_PUBLIC_FUNC(Gachapandora_StateFireball_Falling);
    ADD_PUBLIC_FUNC(Gachapandora_StateFireball_BurnGround);
    ADD_PUBLIC_FUNC(Gachapandora_Draw_Simple);
    ADD_PUBLIC_FUNC(Gachapandora_StateDebris_Delay);
    ADD_PUBLIC_FUNC(Gachapandora_StateDebris_Falling);
    ADD_PUBLIC_FUNC(Gachapandora_StateDebris_BossDebris);
    ADD_PUBLIC_FUNC(Gachapandora_Draw_BossDebris);
    ADD_PUBLIC_FUNC(Gachapandora_StateSpark_Attached);
    ADD_PUBLIC_FUNC(Gachapandora_StateSpark_Detached);
    ADD_PUBLIC_FUNC(Gachapandora_StateEggman_Falling);
    ADD_PUBLIC_FUNC(Gachapandora_StateEggman_Escape);
    ADD_PUBLIC_FUNC(Gachapandora_StateEggman_RunAway);

    // MMZ/MatryoshkaBom
    ADD_PUBLIC_FUNC(MatryoshkaBom_DebugSpawn);
    ADD_PUBLIC_FUNC(MatryoshkaBom_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(MatryoshkaBom_CheckOffScreen);
    ADD_PUBLIC_FUNC(MatryoshkaBom_State_Init);
    ADD_PUBLIC_FUNC(MatryoshkaBom_State_Walk);
    ADD_PUBLIC_FUNC(MatryoshkaBom_State_Stopped);
    ADD_PUBLIC_FUNC(MatryoshkaBom_State_Turn);
    ADD_PUBLIC_FUNC(MatryoshkaBom_State_FuseLit);
    ADD_PUBLIC_FUNC(MatryoshkaBom_State_ReleaseSmallerBuddy);
    ADD_PUBLIC_FUNC(MatryoshkaBom_State_Hatched);
    ADD_PUBLIC_FUNC(MatryoshkaBom_State_Shrapnel);

    // MMZ/MechaBu
    ADD_PUBLIC_FUNC(MechaBu_DebugSpawn);
    ADD_PUBLIC_FUNC(MechaBu_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(MechaBu_CheckOffScreen);
    ADD_PUBLIC_FUNC(MechaBu_GetSawOffset);
    ADD_PUBLIC_FUNC(MechaBu_State_Init);
    ADD_PUBLIC_FUNC(MechaBu_State_Moving);
    ADD_PUBLIC_FUNC(MechaBu_State_Stopped);
    ADD_PUBLIC_FUNC(MechaBu_State_Falling);

    // MMZ/MMZ2Outro
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MMZ2Outro_StartCutscene);
    ADD_PUBLIC_FUNC(MMZ2Outro_Cutscene_PowerDown);
    ADD_PUBLIC_FUNC(MMZ2Outro_Cutscene_Rumble);
    ADD_PUBLIC_FUNC(MMZ2Outro_Cutscene_CameraMoveToWindow);
    ADD_PUBLIC_FUNC(MMZ2Outro_Cutscene_PlayerMoveToWindow);
    ADD_PUBLIC_FUNC(MMZ2Outro_Cutscene_EnterMonarchEyes);
    ADD_PUBLIC_FUNC(MMZ2Outro_Cutscene_ViewMonarch);
#endif

    // MMZ/MMZLightning
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MMZLightning_State_BeginFadeIn);
    ADD_PUBLIC_FUNC(MMZLightning_State_FadeIn);
    ADD_PUBLIC_FUNC(MMZLightning_State_SetupLightningBig);
    ADD_PUBLIC_FUNC(MMZLightning_State_ShowLightningBig);
    ADD_PUBLIC_FUNC(MMZLightning_State_LightningBigFadeOut);
    ADD_PUBLIC_FUNC(MMZLightning_State_SetupLightningSmall);
    ADD_PUBLIC_FUNC(MMZLightning_State_LightningSmallFadeOut);
#endif

    // MMZ/MMZSetup
    ADD_PUBLIC_FUNC(MMZSetup_StageFinish_EndAct1);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MMZSetup_StageFinish_EndAct2);
#endif

    // MMZ/Piston
    ADD_PUBLIC_FUNC(Piston_Collide_Solid);
    ADD_PUBLIC_FUNC(Piston_State_WaitForInterval);
    ADD_PUBLIC_FUNC(Piston_StateMove_Down);
    ADD_PUBLIC_FUNC(Piston_StateMove_Down_Reverse);
    ADD_PUBLIC_FUNC(Piston_StateMove_Vertical);
    ADD_PUBLIC_FUNC(Piston_StateMove_Vertical_Reverse);
    ADD_PUBLIC_FUNC(Piston_StateMove_Up);
    ADD_PUBLIC_FUNC(Piston_StateMove_Up_Reverse);
    ADD_PUBLIC_FUNC(Piston_StateMove_Right);
    ADD_PUBLIC_FUNC(Piston_StateMove_Left);
    ADD_PUBLIC_FUNC(Piston_StateMove_Horizontal);
    ADD_PUBLIC_FUNC(Piston_StateMove_Horizontal_Reverse);
    ADD_PUBLIC_FUNC(Piston_StateActive_WaitForStood);
    ADD_PUBLIC_FUNC(Piston_StateActive_PreparingLaunch);
    ADD_PUBLIC_FUNC(Piston_StateActive_LaunchPlayers);
    ADD_PUBLIC_FUNC(Piston_StateActive_ReturnToStartPos);

    // MMZ/PlaneSeeSaw
    ADD_PUBLIC_FUNC(PlaneSeeSaw_State_WaitForPlayer);
    ADD_PUBLIC_FUNC(PlaneSeeSaw_State_PlayerPushDown);
    ADD_PUBLIC_FUNC(PlaneSeeSaw_State_Launch);
    ADD_PUBLIC_FUNC(PlaneSeeSaw_PlayerState_ToBG);
    ADD_PUBLIC_FUNC(PlaneSeeSaw_PlayerState_ToFG);

    // MMZ/PohBee
    ADD_PUBLIC_FUNC(PohBee_DebugSpawn);
    ADD_PUBLIC_FUNC(PohBee_CheckOffScreen);
    ADD_PUBLIC_FUNC(PohBee_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(PohBee_DrawSprites);
    ADD_PUBLIC_FUNC(PohBee_GetSpikePos);
    ADD_PUBLIC_FUNC(PohBee_SetupHitboxes);
    ADD_PUBLIC_FUNC(PohBee_State_Init);
    ADD_PUBLIC_FUNC(PohBee_State_Move);

    // MMZ/RPlaneShifter
    ADD_PUBLIC_FUNC(RPlaneShifter_DrawSprites);
    ADD_PUBLIC_FUNC(RPlaneShifter_HandlePlaneShift);
    ADD_PUBLIC_FUNC(RPlaneShifter_State_Init);
    ADD_PUBLIC_FUNC(RPlaneShifter_State_AwaitPlayer);
    ADD_PUBLIC_FUNC(RPlaneShifter_State_Spinning);
    ADD_PUBLIC_FUNC(RPlaneShifter_State_FinishSpin);

    // MMZ/Scarab
    ADD_PUBLIC_FUNC(Scarab_DebugSpawn);
    ADD_PUBLIC_FUNC(Scarab_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Scarab_HandleChildMove);
    ADD_PUBLIC_FUNC(Scarab_HandlePlayerGrab);
    ADD_PUBLIC_FUNC(Scarab_HandlePlayerRelease);
    ADD_PUBLIC_FUNC(Scarab_State_Init);
    ADD_PUBLIC_FUNC(Scarab_State_Move);
    ADD_PUBLIC_FUNC(Scarab_State_Wait);

    // MMZ/SizeLaser
    ADD_PUBLIC_FUNC(SizeLaser_SfxCheck_SizeLaser);
    ADD_PUBLIC_FUNC(SizeLaser_SetPlayerSize);
    ADD_PUBLIC_FUNC(SizeLaser_PlayerState_Resize);
    ADD_PUBLIC_FUNC(SizeLaser_PlayerState_GrowNormal);
    ADD_PUBLIC_FUNC(SizeLaser_PlayerState_ShrinkChibi);
    ADD_PUBLIC_FUNC(SizeLaser_PlayerState_GrowGiant);
    ADD_PUBLIC_FUNC(SizeLaser_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(SizeLaser_State_Emitter);
    ADD_PUBLIC_FUNC(SizeLaser_State_Laser);
    ADD_PUBLIC_FUNC(SizeLaser_State_Impact);

    // MMZ/SpikeCorridor
    ADD_PUBLIC_FUNC(SpikeCorridor_SetupHitboxes);
    ADD_PUBLIC_FUNC(SpikeCorridor_HandleDrawing);
    ADD_PUBLIC_FUNC(SpikeCorridor_SetupNextSpikeRow);
    ADD_PUBLIC_FUNC(SpikeCorridor_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(SpikeCorridor_StateDropper_Setup);
    ADD_PUBLIC_FUNC(SpikeCorridor_StateDropper_CheckForPlayer);
    ADD_PUBLIC_FUNC(SpikeCorridor_StateDropper_DropWarn);
    ADD_PUBLIC_FUNC(SpikeCorridor_StateDropper_SpawnSpikes);
    ADD_PUBLIC_FUNC(SpikeCorridor_StateDropper_DropWait);
    ADD_PUBLIC_FUNC(SpikeCorridor_StateSpikes_Setup);
    ADD_PUBLIC_FUNC(SpikeCorridor_StateSpikes_Fall);
    ADD_PUBLIC_FUNC(SpikeCorridor_StateSpikes_Land);
    ADD_PUBLIC_FUNC(SpikeCorridor_Draw_DropWarn);
    ADD_PUBLIC_FUNC(SpikeCorridor_Draw_Spikes);

    // MMZ/VanishPlatform
    ADD_PUBLIC_FUNC(VanishPlatform_State_Appear);
    ADD_PUBLIC_FUNC(VanishPlatform_State_Disappear);

    // MSZ/Armadiloid
    ADD_PUBLIC_FUNC(Armadiloid_DebugSpawn);
    ADD_PUBLIC_FUNC(Armadiloid_State_Init);
    ADD_PUBLIC_FUNC(Armadiloid_State_PlatformFlying);
    ADD_PUBLIC_FUNC(Armadiloid_PlatformShootDelay);
    ADD_PUBLIC_FUNC(Armadiloid_State_PlatformShoot);
    ADD_PUBLIC_FUNC(Armadiloid_State_Rider);

    // MSZ/Bumpalo
    ADD_PUBLIC_FUNC(Bumpalo_DebugSpawn);
    ADD_PUBLIC_FUNC(Bumpalo_CheckOffScreen);
    ADD_PUBLIC_FUNC(Bumpalo_BumpPlayer);
    ADD_PUBLIC_FUNC(Bumpalo_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Bumpalo_HandlePlatformCollisions);
    ADD_PUBLIC_FUNC(Bumpalo_HandleObjectCollisions);
    ADD_PUBLIC_FUNC(Bumpalo_State_Init);
    ADD_PUBLIC_FUNC(Bumpalo_State_Moving);
    ADD_PUBLIC_FUNC(Bumpalo_State_Idle);
    ADD_PUBLIC_FUNC(Bumpalo_State_Charging);
    ADD_PUBLIC_FUNC(Bumpalo_State_Turning);
    ADD_PUBLIC_FUNC(Bumpalo_State_Bumped);
    ADD_PUBLIC_FUNC(Bumpalo_State_Falling);

    // MSZ/Cactula
    ADD_PUBLIC_FUNC(Cactula_DebugSpawn);
    ADD_PUBLIC_FUNC(Cactula_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Cactula_SfxChecK_CactChopper);
    ADD_PUBLIC_FUNC(Cactula_State_CheckPlayerInRange);
    ADD_PUBLIC_FUNC(Cactula_State_Rising);
    ADD_PUBLIC_FUNC(Cactula_State_DropBomb);

    // MSZ/CollapsingSand
    ADD_PUBLIC_FUNC(CollapsingSand_State_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(CollapsingSand_State_CollapseDelay);
    ADD_PUBLIC_FUNC(CollapsingSand_State_CollapseLeft);
    ADD_PUBLIC_FUNC(CollapsingSand_State_CollapseRight);

    // MSZ/DBTower
    ADD_PUBLIC_FUNC(DBTower_CheckPlayerCollisions_Head);
    ADD_PUBLIC_FUNC(DBTower_Explode);
    ADD_PUBLIC_FUNC(DBTower_State_SetupArena);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(DBTower_State_Setup_Encore);
    ADD_PUBLIC_FUNC(DBTower_State_HandleBoss);
#endif
    ADD_PUBLIC_FUNC(DBTower_State_Destroyed);
    ADD_PUBLIC_FUNC(DBTower_State_Finish);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(DBTower_State_SpawnSignPost);
    ADD_PUBLIC_FUNC(DBTower_CheckPlayerCollisions_Body);
#endif
    ADD_PUBLIC_FUNC(DBTower_State_BodyBouncing);
    ADD_PUBLIC_FUNC(DBTower_State_BodyRolling);

    // MSZ/EggLoco
    ADD_PUBLIC_FUNC(EggLoco_SfxCheck_LocoChugga);
    ADD_PUBLIC_FUNC(EggLoco_SfxUpdate_LocoChugga);
    ADD_PUBLIC_FUNC(EggLoco_State_TootDelay);
    ADD_PUBLIC_FUNC(EggLoco_State_Whistle);
    ADD_PUBLIC_FUNC(EggLoco_State_Tooting);

    // MSZ/GiantPistol
    ADD_PUBLIC_FUNC(GiantPistol_State_AwaitPlayerEntry);
    ADD_PUBLIC_FUNC(GiantPistol_State_CloseChamber);
    ADD_PUBLIC_FUNC(GiantPistol_State_SpinGun);
    ADD_PUBLIC_FUNC(GiantPistol_State_Aiming);
    ADD_PUBLIC_FUNC(GiantPistol_State_FiredPlayers);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(GiantPistol_PlayerState_PistolAir);
    ADD_PUBLIC_FUNC(GiantPistol_PlayerState_PistolGround);
#endif

    // MSZ/Hatterkiller
    ADD_PUBLIC_FUNC(Hatterkiller_DebugSpawn);

    // MSZ/HeavyMystic
    ADD_PUBLIC_FUNC(HeavyMystic_SpawnParticleFX);
    ADD_PUBLIC_FUNC(HeavyMystic_HandleParticleFX);
    ADD_PUBLIC_FUNC(HeavyMystic_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(HeavyMystic_Hit);
    ADD_PUBLIC_FUNC(HeavyMystic_CheckPlayerCollisions_Fang);
    ADD_PUBLIC_FUNC(HeavyMystic_CheckPlayerCollisions_Bark);
    ADD_PUBLIC_FUNC(HeavyMystic_CheckPlayerCollisions_Bean);
    ADD_PUBLIC_FUNC(HeavyMystic_Explode);
    ADD_PUBLIC_FUNC(HeavyMystic_Scanline_Curtains);
    ADD_PUBLIC_FUNC(HeavyMystic_StateMischief_Setup);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_SetupArena);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_AwaitPlayer);
    ADD_PUBLIC_FUNC(HeavyMystic_StateMischief_EnterMystic);
    ADD_PUBLIC_FUNC(HeavyMystic_StateMischief_HandleAppearArc);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_BeginShow);
    ADD_PUBLIC_FUNC(HeavyMystic_StateMischief_Idle);
    ADD_PUBLIC_FUNC(HeavyMystic_StateMischief_MoveIntoPlace);
    ADD_PUBLIC_FUNC(HeavyMystic_StateMischief_FinishedMagicTrick);
    ADD_PUBLIC_FUNC(HeavyMystic_StateMischief_PrepareMagicTrick);
    ADD_PUBLIC_FUNC(HeavyMystic_StateMischief_GoodDay);
    ADD_PUBLIC_FUNC(HeavyMystic_StateMischief_ConjureHatterkiller);
    ADD_PUBLIC_FUNC(HeavyMystic_StateMischief_Disappear);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_Destroyed);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_Finish);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_CloseCurtains);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_AwaitBoxOpened);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_EnterMystic);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_GoodDay);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_BoxCloseDelay);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_AwaitBoxClosing);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_AwaitBoxClosed);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_Transforming);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_ShowRogue);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_MysticReveal);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_MoveToBoxY);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_MoveToBoxX);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_TransformBackIntoRogue);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_FangIdle);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_FangTell);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_FangHop);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_RogueHit);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_BarkIdle);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_BarkPounding);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_BarkJump);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_BeanIdle);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_BeanBomb1Throw);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_BeanBomb2Throw);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBoss_BeanJump);
    ADD_PUBLIC_FUNC(HeavyMystic_StateCork_Fired);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(HeavyMystic_StateCork_MightyRebound);
    ADD_PUBLIC_FUNC(HeavyMystic_State_Bomb);
#endif
    ADD_PUBLIC_FUNC(HeavyMystic_State_BarkDebris);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBox_AwaitCurtainRise);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBox_Idle);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBox_CloseDoors);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBox_OpenDoors);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBox_Transforming);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBox_TransformFinish);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBox_Dropping);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBox_ShowContents);
    ADD_PUBLIC_FUNC(HeavyMystic_StateBox_Reappear);
    ADD_PUBLIC_FUNC(HeavyMystic_Draw_BoxOpened);
    ADD_PUBLIC_FUNC(HeavyMystic_Draw_BoxTransforming);
    ADD_PUBLIC_FUNC(HeavyMystic_Draw_BoxClosed);

    // MSZ/LightBulb
    ADD_PUBLIC_FUNC(LightBulb_DebugSpawn);
    ADD_PUBLIC_FUNC(LightBulb_State_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(LightBulb_State_Destroyed);

    // MSZ/MSZ1KIntro
    ADD_PUBLIC_FUNC(MSZ1KIntro_Cutscene_SetupPlane);
    ADD_PUBLIC_FUNC(MSZ1KIntro_Cutscene_MagicianMischief);
    ADD_PUBLIC_FUNC(MSZ1KIntro_Cutscene_StartAct);

    // MSZ/MSZ2Cutscene
    ADD_PUBLIC_FUNC(MSZ2Cutscene_SetupCutscene);
    ADD_PUBLIC_FUNC(MSZ2Cutscene_GetPistolPtr);
    ADD_PUBLIC_FUNC(MSZ2Cutscene_Cutscene_GoToPistol);
    ADD_PUBLIC_FUNC(MSZ2Cutscene_Cutscene_EnterPistol);
    ADD_PUBLIC_FUNC(MSZ2Cutscene_Cutscene_PistolFired);
    ADD_PUBLIC_FUNC(MSZ2Cutscene_Cutscene_AppearInBG);

#if MANIA_USE_PLUS
    // MSZ/MSZCutsceneK
    ADD_PUBLIC_FUNC(MSZCutsceneK_Cutscene_SkipCB);
    ADD_PUBLIC_FUNC(MSZCutsceneK_StartCutscene);
#endif
    ADD_PUBLIC_FUNC(MSZCutsceneK_SetupP2);
    ADD_PUBLIC_FUNC(MSZCutsceneK_Cutscene_RidingTornado);
    ADD_PUBLIC_FUNC(MSZCutsceneK_Cutscene_KnockedOffTornado);

    // MSZ/MSZCutsceneST
    ADD_PUBLIC_FUNC(MSZCutsceneST_SetupCutscene);
    ADD_PUBLIC_FUNC(MSZCutsceneST_Cutscene_HandleSignPostLand);
    ADD_PUBLIC_FUNC(MSZCutsceneST_Cutscene_AwaitActFinish);
    ADD_PUBLIC_FUNC(MSZCutsceneST_Cutscene_EnterMystic);
    ADD_PUBLIC_FUNC(MSZCutsceneST_Cutscene_PrepareAmbush);
    ADD_PUBLIC_FUNC(MSZCutsceneST_Cutscene_RoguesAmbush);
    ADD_PUBLIC_FUNC(MSZCutsceneST_Cutscene_ShowFang);
    ADD_PUBLIC_FUNC(MSZCutsceneST_Cutscene_ShowBean);
    ADD_PUBLIC_FUNC(MSZCutsceneST_Cutscene_ShowBark);
    ADD_PUBLIC_FUNC(MSZCutsceneST_Cutscene_Mayday);
    ADD_PUBLIC_FUNC(MSZCutsceneST_Cutscene_SetPlayerMSZ2SpawnPos);
    ADD_PUBLIC_FUNC(MSZCutsceneST_Cutscene_PanCameraToPlayer);
    ADD_PUBLIC_FUNC(MSZCutsceneST_Cutscene_SetupMSZ2);

    // MSZ/MSZSetup
    ADD_PUBLIC_FUNC(MSZSetup_SetBGScrollOrigin);
    ADD_PUBLIC_FUNC(MSZSetup_StoreBGParallax);
    ADD_PUBLIC_FUNC(MSZSetup_ReloadBGParallax);
    ADD_PUBLIC_FUNC(MSZSetup_ReloadBGParallax_Multiply);
    ADD_PUBLIC_FUNC(MSZSetup_State_ManageFade_ST);
    ADD_PUBLIC_FUNC(MSZSetup_State_ManageFade_K);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MSZSetup_State_ManageFade_E);
    ADD_PUBLIC_FUNC(MSZSetup_StageFinish_EndAct1ST);
#endif
    ADD_PUBLIC_FUNC(MSZSetup_StageFinish_EndAct1K);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MSZSetup_StageFinish_EndAct1E);
    ADD_PUBLIC_FUNC(MSZSetup_StageFinish_EndAct2);
#endif
    ADD_PUBLIC_FUNC(MSZSetup_Trigger_AwardAchievement);
    ADD_PUBLIC_FUNC(MSZSetup_HandleRestart);
    ADD_PUBLIC_FUNC(MSZSetup_State_SwitchPalettes);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MSZSetup_State_CheckFadeTrigger_E);
    ADD_PUBLIC_FUNC(MSZSetup_State_CheckTrainStart);
    ADD_PUBLIC_FUNC(MSZSetup_State_TrainStarting);
    ADD_PUBLIC_FUNC(MSZSetup_State_TrainSequence_MSZ1E);
    ADD_PUBLIC_FUNC(MSZSetup_State_Boss_MSZ1E);
    ADD_PUBLIC_FUNC(MSZSetup_State_AwaitActClearStart);
    ADD_PUBLIC_FUNC(MSZSetup_State_AwaitActClearFinish);
    ADD_PUBLIC_FUNC(MSZSetup_State_MoveToMSZ2Start);
    ADD_PUBLIC_FUNC(MSZSetup_State_AwaitPlayerStopped);
    ADD_PUBLIC_FUNC(MSZSetup_State_StoreMSZ1ScrollPos_E);
    ADD_PUBLIC_FUNC(MSZSetup_State_StoreMSZ1ScrollPos_ST);
#endif
    ADD_PUBLIC_FUNC(MSZSetup_PlayerState_Pilot);
    ADD_PUBLIC_FUNC(MSZSetup_PlayerState_PostCrashJumpIn);

    // MSZ/MSZSpotlight
    ADD_PUBLIC_FUNC(MSZSpotlight_State_Appear);
    ADD_PUBLIC_FUNC(MSZSpotlight_State_Circling);
    ADD_PUBLIC_FUNC(MSZSpotlight_State_Idle);
    ADD_PUBLIC_FUNC(MSZSpotlight_State_MoveToBox);
    ADD_PUBLIC_FUNC(MSZSpotlight_State_Disappear);

    // MSZ/Pinata
    ADD_PUBLIC_FUNC(Pinata_DebugSpawn);
    ADD_PUBLIC_FUNC(Pinata_State_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Pinata_State_Destroyed);

    // MSZ/Rattlekiller
    ADD_PUBLIC_FUNC(Rattlekiller_DebugSpawn);
    ADD_PUBLIC_FUNC(Rattlekiller_HandleSorting);

    // MSZ/RollerMKII
    ADD_PUBLIC_FUNC(RollerMKII_DebugSpawn);
    ADD_PUBLIC_FUNC(RollerMKII_CheckOffScreen);
    ADD_PUBLIC_FUNC(RollerMKII_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(RollerMKII_CheckPlayerCollisions_Rolling);
    ADD_PUBLIC_FUNC(RollerMKII_HandleObjectCollisions);
    ADD_PUBLIC_FUNC(RollerMKII_HandlePlatformCollisions);
    ADD_PUBLIC_FUNC(RollerMKII_HandleCollisions);
    ADD_PUBLIC_FUNC(RollerMKII_State_Init);
    ADD_PUBLIC_FUNC(RollerMKII_State_Idle);
    ADD_PUBLIC_FUNC(RollerMKII_State_SpinUp);
    ADD_PUBLIC_FUNC(RollerMKII_State_RollDelay);
    ADD_PUBLIC_FUNC(RollerMKII_State_Rolling_Air);
    ADD_PUBLIC_FUNC(RollerMKII_State_Rolling_Ground);
    ADD_PUBLIC_FUNC(RollerMKII_State_Bumped);

    // MSZ/SeeSaw
    ADD_PUBLIC_FUNC(SeeSaw_SetupHitbox);
    ADD_PUBLIC_FUNC(SeeSaw_State_OrbIdle);
    ADD_PUBLIC_FUNC(SeeSaw_State_None);
    ADD_PUBLIC_FUNC(SeeSaw_State_NoOrb);
    ADD_PUBLIC_FUNC(SeeSaw_State_OrbLaunched);

    // MSZ/SeltzerBottle
    ADD_PUBLIC_FUNC(SeltzerBottle_State_Spraying);
    ADD_PUBLIC_FUNC(SeltzerBottle_State_TryReset);

    // MSZ/SeltzerWater
    ADD_PUBLIC_FUNC(SeltzerWater_State_Sprayed);
    ADD_PUBLIC_FUNC(SeltzerWater_State_Falling);
    ADD_PUBLIC_FUNC(SeltzerWater_State_Splash);

    // MSZ/SwingRope
    ADD_PUBLIC_FUNC(SwingRope_DebugSpawn);

    // MSZ/Tornado
    ADD_PUBLIC_FUNC(Tornado_State_Init);
    ADD_PUBLIC_FUNC(Tornado_State_SetupMSZ1Intro);
    ADD_PUBLIC_FUNC(Tornado_State_MSZ1Intro);
    ADD_PUBLIC_FUNC(Tornado_State_KnuxKnockedOff);
    ADD_PUBLIC_FUNC(Tornado_HandlePlayerCollisions);
    ADD_PUBLIC_FUNC(Tornado_State_PlayerControlled);
    ADD_PUBLIC_FUNC(Tornado_State_Mayday);
    ADD_PUBLIC_FUNC(Tornado_State_FlyAway_Right);
    ADD_PUBLIC_FUNC(Tornado_State_FlyAway_Left);

    // MSZ/TornadoPath
    ADD_PUBLIC_FUNC(TornadoPath_SetupHitbox);
    ADD_PUBLIC_FUNC(TornadoPath_HandleMoveSpeed);
    ADD_PUBLIC_FUNC(TornadoPath_State_SetTornadoSpeed);
    ADD_PUBLIC_FUNC(TornadoPath_State_ReturnCamera);
    ADD_PUBLIC_FUNC(TornadoPath_State_DisablePlayerInteractions);
    ADD_PUBLIC_FUNC(TornadoPath_State_ExitTornadoSequence);
    ADD_PUBLIC_FUNC(TornadoPath_State_PrepareCatchPlayer);
    ADD_PUBLIC_FUNC(TornadoPath_State_CatchPlayer);
    ADD_PUBLIC_FUNC(TornadoPath_State_UberCaterkillerBossNode);
    ADD_PUBLIC_FUNC(TornadoPath_State_HandleUberCaterkillerBoss);
    ADD_PUBLIC_FUNC(TornadoPath_State_GoToStopNode);
    ADD_PUBLIC_FUNC(TornadoPath_State_SetupMSZ1CutsceneST);
    ADD_PUBLIC_FUNC(TornadoPath_State_FinishCrash);

    // MSZ/UberCaterkiller
    ADD_PUBLIC_FUNC(UberCaterkiller_DebugSpawn);
    ADD_PUBLIC_FUNC(UberCaterkiller_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(UberCaterkiller_Hit);
    ADD_PUBLIC_FUNC(UberCaterkiller_Explode);
    ADD_PUBLIC_FUNC(UberCaterkiller_HandleSegmentMoveFX);
    ADD_PUBLIC_FUNC(UberCaterkiller_SetupBodySegments);
    ADD_PUBLIC_FUNC(UberCaterkiller_State_SetupArena);
    ADD_PUBLIC_FUNC(UberCaterkiller_PrepareMoveIntoBG);
    ADD_PUBLIC_FUNC(UberCaterkiller_State_MoveIntoBG);
    ADD_PUBLIC_FUNC(UberCaterkiller_State_MoveToTargetPos);
    ADD_PUBLIC_FUNC(UberCaterkiller_State_PrepareHorizontalJump);
    ADD_PUBLIC_FUNC(UberCaterkiller_State_HorizontalJump);
    ADD_PUBLIC_FUNC(UberCaterkiller_State_PrepareBGJump);
    ADD_PUBLIC_FUNC(UberCaterkiller_State_FirstJump);
    ADD_PUBLIC_FUNC(UberCaterkiller_State_RepeatedJumps);
    ADD_PUBLIC_FUNC(UberCaterkiller_State_Destroyed);
    ADD_PUBLIC_FUNC(UberCaterkiller_State_Finish);

    // MSZ/Vultron
    ADD_PUBLIC_FUNC(Vultron_DebugSpawn);
    ADD_PUBLIC_FUNC(Vultron_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Vultron_CheckOffScreen);
    ADD_PUBLIC_FUNC(Vultron_State_Init);
    ADD_PUBLIC_FUNC(Vultron_State_CheckPlayerInRange);
    ADD_PUBLIC_FUNC(Vultron_State_Hop);
    ADD_PUBLIC_FUNC(Vultron_State_Dive);
    ADD_PUBLIC_FUNC(Vultron_State_Flying);
    ADD_PUBLIC_FUNC(Vultron_State_Rise);
    ADD_PUBLIC_FUNC(Vultron_State_PrepareDive);
    ADD_PUBLIC_FUNC(Vultron_State_Targeting);
}
