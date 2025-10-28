#include "../Game.h" // Or equivalent main header for function declarations & ModAPI access

#ifndef ADD_PUBLIC_FUNC
#define ADD_PUBLIC_FUNC(func) Mod.AddPublicFunction(#func, (void *)(func))
#endif

void InitPublicFunctions_Part3(void)
{
#if MANIA_USE_PLUS
    // HCZ/Blastoid
    ADD_PUBLIC_FUNC(Blastoid_DebugSpawn);
    ADD_PUBLIC_FUNC(Blastoid_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Blastoid_State_Init);
    ADD_PUBLIC_FUNC(Blastoid_State_Body);
    ADD_PUBLIC_FUNC(Blastoid_State_Projectile);

    // HCZ/BreakBar
    ADD_PUBLIC_FUNC(BreakBar_DrawSprites);
    ADD_PUBLIC_FUNC(BreakBar_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(BreakBar_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(BreakBar_State_Init);
    ADD_PUBLIC_FUNC(BreakBar_State_Main);

    // HCZ/Buggernaut
    ADD_PUBLIC_FUNC(Buggernaut_DebugSpawn);
    ADD_PUBLIC_FUNC(Buggernaut_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Buggernaut_CheckOffScreen);
    ADD_PUBLIC_FUNC(Buggernaut_HandleTileCollisionsX);
    ADD_PUBLIC_FUNC(Buggernaut_HandleTileCollisionsY);
    ADD_PUBLIC_FUNC(Buggernaut_State_Init);
    ADD_PUBLIC_FUNC(Buggernaut_State_Idle);
    ADD_PUBLIC_FUNC(Buggernaut_State_FlyTowardTarget);
    ADD_PUBLIC_FUNC(Buggernaut_State_FlyAway);
    ADD_PUBLIC_FUNC(Buggernaut_State_Child);

    // HCZ/ButtonDoor
    ADD_PUBLIC_FUNC(ButtonDoor_SetupSize);
    ADD_PUBLIC_FUNC(ButtonDoor_SetupTagLink);
    ADD_PUBLIC_FUNC(ButtonDoor_DrawSprites);

    // HCZ/Current
    ADD_PUBLIC_FUNC(Current_SetupTagLink);
    ADD_PUBLIC_FUNC(Current_GetBubbleSpawnPosHorizontal);
    ADD_PUBLIC_FUNC(Current_GetBubbleSpawnPosVertical);
    ADD_PUBLIC_FUNC(Current_State_WaterLeft);
    ADD_PUBLIC_FUNC(Current_State_WaterRight);
    ADD_PUBLIC_FUNC(Current_State_WaterUp);
    ADD_PUBLIC_FUNC(Current_State_WaterDown);
    ADD_PUBLIC_FUNC(Current_State_PushLeft);
    ADD_PUBLIC_FUNC(Current_State_PushRight);
    ADD_PUBLIC_FUNC(Current_State_PushUp);
    ADD_PUBLIC_FUNC(Current_State_PushDown);
    ADD_PUBLIC_FUNC(Current_State_Child);
    ADD_PUBLIC_FUNC(Current_PlayerState_Left);
    ADD_PUBLIC_FUNC(Current_PlayerState_Right);
    ADD_PUBLIC_FUNC(Current_PlayerState_Up);
    ADD_PUBLIC_FUNC(Current_PlayerState_Down);

    // HCZ/DCEvent
    ADD_PUBLIC_FUNC(DCEvent_State_Collapse);
    ADD_PUBLIC_FUNC(DCEvent_StateEggmanBomber_AwaitPlayer);
    ADD_PUBLIC_FUNC(DCEvent_Input_MoveRight);
    ADD_PUBLIC_FUNC(DCEvent_Input_LookDown);
    ADD_PUBLIC_FUNC(DCEvent_StateEggmanBomber_WaitForLookDown);
    ADD_PUBLIC_FUNC(DCEvent_StateEggmanBomber_Swimming);
    ADD_PUBLIC_FUNC(DCEvent_StateEggmanBomber_PlaceBomb);
    ADD_PUBLIC_FUNC(DCEvent_StateEggmanBomber_PlacedAllBombs);
    ADD_PUBLIC_FUNC(DCEvent_StateEggmanSwim_AwaitPlayer);
    ADD_PUBLIC_FUNC(DCEvent_StateEggmanSwim_Swimming);
    ADD_PUBLIC_FUNC(DCEvent_State_Bomb);
    ADD_PUBLIC_FUNC(DCEvent_State_BombExplode);

    // HCZ/DiveEggman
    ADD_PUBLIC_FUNC(DiveEggman_Hit);
    ADD_PUBLIC_FUNC(DiveEggman_Explode);
    ADD_PUBLIC_FUNC(DiveEggman_StateEggman_AwaitPlayer);
    ADD_PUBLIC_FUNC(DiveEggman_StateEggman_Swimming);
    ADD_PUBLIC_FUNC(DiveEggman_StateEggman_InWhirlpool);
    ADD_PUBLIC_FUNC(DiveEggman_StateEggman_WhirlpoolRise);
    ADD_PUBLIC_FUNC(DiveEggman_StateEggman_Falling);
    ADD_PUBLIC_FUNC(DiveEggman_StateEggman_PlaceBomb);
    ADD_PUBLIC_FUNC(DiveEggman_StateEggman_Destroyed);
    ADD_PUBLIC_FUNC(DiveEggman_StateEggman_Finish);
    ADD_PUBLIC_FUNC(DiveEggman_CheckNoBombExplode);
    ADD_PUBLIC_FUNC(DiveEggman_StateBomb_Idle);
    ADD_PUBLIC_FUNC(DiveEggman_StateBomb_InWhirlpool);
    ADD_PUBLIC_FUNC(DiveEggman_StateBomb_WhirlpoolRise);
    ADD_PUBLIC_FUNC(DiveEggman_StateBomb_Falling);

    // HCZ/Fan
    ADD_PUBLIC_FUNC(Fan_SetupTagLink);
    ADD_PUBLIC_FUNC(Fan_HandlePlayerInteractions_Top);
    ADD_PUBLIC_FUNC(Fan_HandlePlayerInteractions_Bottom);
    ADD_PUBLIC_FUNC(Fan_HandlePlayerInteractions_Left);
    ADD_PUBLIC_FUNC(Fan_HandlePlayerInteractions_Right);
    ADD_PUBLIC_FUNC(Fan_State_Started);
    ADD_PUBLIC_FUNC(Fan_State_Stopped);
    ADD_PUBLIC_FUNC(Fan_Activate_Interval);
    ADD_PUBLIC_FUNC(Fan_Activate_Button);
    ADD_PUBLIC_FUNC(Fan_Deactivate_Button);
    ADD_PUBLIC_FUNC(Fan_Activate_Platform);
    ADD_PUBLIC_FUNC(Fan_Activate);

    // HCZ/Gondola
    ADD_PUBLIC_FUNC(Gondola_GetWaterLevel);
    ADD_PUBLIC_FUNC(Gondola_HandleWaterFloating);
    ADD_PUBLIC_FUNC(Gondola_HandleTilting);
    ADD_PUBLIC_FUNC(Gondola_HandleMoveVelocity);
    ADD_PUBLIC_FUNC(Gondola_HandleTileCollisions);
    ADD_PUBLIC_FUNC(Gondola_HandlePlayerInteractions);

    // HCZ/HandLauncher
    ADD_PUBLIC_FUNC(HandLauncher_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(HandLauncher_CheckPlayerInRange);
    ADD_PUBLIC_FUNC(HandLauncher_ReleasePlayers);
    ADD_PUBLIC_FUNC(HandLauncher_HandleGrabbedPlayers);
    ADD_PUBLIC_FUNC(HandLauncher_State_Init);
    ADD_PUBLIC_FUNC(HandLauncher_State_AwaitPlayer);
    ADD_PUBLIC_FUNC(HandLauncher_State_TryGrabPlayer);
    ADD_PUBLIC_FUNC(HandLauncher_State_GrabbedPlayer);

    // HCZ/HangConveyor
    ADD_PUBLIC_FUNC(HangConveyor_DrawSprites);
    ADD_PUBLIC_FUNC(HangConveyor_SetupHitboxes);
    ADD_PUBLIC_FUNC(HangConveyor_HandlePlayerInteractions);

    // HCZ/HCZ1Intro
    ADD_PUBLIC_FUNC(HCZ1Intro_Cutscene_Intro);

    // HCZ/HCZOneWayDoor
    ADD_PUBLIC_FUNC(HCZOneWayDoor_SetupHitboxes);
    ADD_PUBLIC_FUNC(HCZOneWayDoor_DrawSprites);

    // HCZ/HCZSetup
    ADD_PUBLIC_FUNC(HCZSetup_Scanline_WaterLine);
    ADD_PUBLIC_FUNC(HCZSetup_StageFinish_EndAct1);
    ADD_PUBLIC_FUNC(HCZSetup_StageFinish_EndAct2);

    // HCZ/HCZSpikeBall
    ADD_PUBLIC_FUNC(HCZSpikeBall_HandleConveyorSetup);
    ADD_PUBLIC_FUNC(HCZSpikeBall_LinkToConveyor);
    ADD_PUBLIC_FUNC(HCZSpikeBall_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(HCZSpikeBall_HandleConveyorMovement);

    // HCZ/Jawz
    ADD_PUBLIC_FUNC(Jawz_DebugSpawn);
    ADD_PUBLIC_FUNC(Jawz_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Jawz_State_CheckPlayerTrigger);
    ADD_PUBLIC_FUNC(Jawz_State_Triggered);

    // HCZ/Jellygnite
    ADD_PUBLIC_FUNC(Jellygnite_DebugSpawn);
    ADD_PUBLIC_FUNC(Jellygnite_SetupAnimations);
    ADD_PUBLIC_FUNC(Jellygnite_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Jellygnite_HandlePlayerStruggle);
    ADD_PUBLIC_FUNC(Jellygnite_CheckInWater);
    ADD_PUBLIC_FUNC(Jellygnite_DrawBackTentacle);
    ADD_PUBLIC_FUNC(Jellygnite_DrawFrontTentacle);
    ADD_PUBLIC_FUNC(Jellygnite_State_Init);
    ADD_PUBLIC_FUNC(Jellygnite_State_Swimming);
    ADD_PUBLIC_FUNC(Jellygnite_State_GrabbedPlayer);
    ADD_PUBLIC_FUNC(Jellygnite_State_Explode);

    // HCZ/LaundroMobile
    ADD_PUBLIC_FUNC(LaundroMobile_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(LaundroMobile_Explode);
    ADD_PUBLIC_FUNC(LaundroMobile_HandleStageWrap);
    ADD_PUBLIC_FUNC(LaundroMobile_HandleRocketMovement);
    ADD_PUBLIC_FUNC(LaundroMobile_HandleEggmanAnimations);
    ADD_PUBLIC_FUNC(LaundroMobile_HandleTileCollisions);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_AwaitPlayer_Phase1);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_SetupArena_Phase1);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_EnterEggman_Phase1);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_StartupPropellers);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_HandlePhase1);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_Destroyed_Phase1);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_Explode_Phase1);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_WaitForLastStageWrap);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_AwaitPlayer_Phase2);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_SetupArena_Phase2);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_EnterEggman_Phase2);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_StartupRockets);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_SpeedUpRockets);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_RiseUpToAttack);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_Attacking);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_ReturnToLaundry);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_PrepareWhirlpool);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_StartupWhirlpool);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_WhirlpoolActive);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_PrepareRockets);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_Destroyed_Phase2);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBoss_Explode_Phase2);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(LaundroMobile_StageFinish_Wait);
    ADD_PUBLIC_FUNC(LaundroMobile_StateOutro_StartCutscene);
    ADD_PUBLIC_FUNC(LaundroMobile_StateOutro_Rumble);
    ADD_PUBLIC_FUNC(LaundroMobile_StateOutro_WaterGush);
    ADD_PUBLIC_FUNC(LaundroMobile_StateOutro_ExitHCZ);
    ADD_PUBLIC_FUNC(LaundroMobile_Draw_Boss);
#endif
    ADD_PUBLIC_FUNC(LaundroMobile_Draw_Boss_Destroyed);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBomb_Spawner);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBomb_Bomb_Idle);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBomb_Bomb_Activated);
    ADD_PUBLIC_FUNC(LaundroMobile_Draw_Simple);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBlock_Spawner);
    ADD_PUBLIC_FUNC(LaundroMobile_StateBlock_Block);
    ADD_PUBLIC_FUNC(LaundroMobile_State_Laundry);
    ADD_PUBLIC_FUNC(LaundroMobile_Draw_Laundry);
    ADD_PUBLIC_FUNC(LaundroMobile_State_DelayedSplash);

    // HCZ/MegaChopper
    ADD_PUBLIC_FUNC(MegaChopper_DebugSpawn);
    ADD_PUBLIC_FUNC(MegaChopper_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(MegaChopper_CheckOffScreen);
    ADD_PUBLIC_FUNC(MegaChopper_Input_GrabbedP1);
    ADD_PUBLIC_FUNC(MegaChopper_Input_GrabbedP2);
    ADD_PUBLIC_FUNC(MegaChopper_Input_GrabbedP2_AI);
    ADD_PUBLIC_FUNC(MegaChopper_State_Init);
    ADD_PUBLIC_FUNC(MegaChopper_State_InWater);
    ADD_PUBLIC_FUNC(MegaChopper_State_OutOfWater);
    ADD_PUBLIC_FUNC(MegaChopper_State_Chopping);
    ADD_PUBLIC_FUNC(MegaChopper_State_ShakenOff);

    // HCZ/Pointdexter
    ADD_PUBLIC_FUNC(Pointdexter_DebugSpawn);
    ADD_PUBLIC_FUNC(Pointdexter_CheckOffScreen);
    ADD_PUBLIC_FUNC(Pointdexter_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Pointdexter_State_Init);
    ADD_PUBLIC_FUNC(Pointdexter_State_Swimming);

#if GAME_VERSION == VER_100
    // HCZ/PullChain
    ADD_PUBLIC_FUNC(PullChain_HandleDunkeyCode);
#endif

    // HCZ/ScrewMobile
    ADD_PUBLIC_FUNC(ScrewMobile_State_CheckPlayerEnter);
    ADD_PUBLIC_FUNC(ScrewMobile_State_PlayerRiding);
    ADD_PUBLIC_FUNC(ScrewMobile_State_BossFinished);
    ADD_PUBLIC_FUNC(ScrewMobile_State_Idle);
    ADD_PUBLIC_FUNC(ScrewMobile_Draw_ScrewMobile);
    ADD_PUBLIC_FUNC(ScrewMobile_StateDepthCharge_Active);
    ADD_PUBLIC_FUNC(ScrewMobile_StateDepthCharge_Debris);
    ADD_PUBLIC_FUNC(ScrewMobile_Draw_DepthCharge);

    // HCZ/Spear
    ADD_PUBLIC_FUNC(Spear_SetupHitboxes);

    // HCZ/TurboSpiker
    ADD_PUBLIC_FUNC(TurboSpiker_DebugSpawn);
#endif
    ADD_PUBLIC_FUNC(TurboSpiker_Hermit_Collide);
    ADD_PUBLIC_FUNC(TurboSpiker_Hermit_CheckOffScreen);
    ADD_PUBLIC_FUNC(TurboSpiker_HandleMovement);
    ADD_PUBLIC_FUNC(TurboSpiker_State_Init);
    ADD_PUBLIC_FUNC(TurboSpiker_State_Idle);
    ADD_PUBLIC_FUNC(TurboSpiker_State_Hidden);
    ADD_PUBLIC_FUNC(TurboSpiker_State_Moving);
    ADD_PUBLIC_FUNC(TurboSpiker_State_Turning);
    ADD_PUBLIC_FUNC(TurboSpiker_State_FinishTurning);
    ADD_PUBLIC_FUNC(TurboSpiker_State_Falling);
    ADD_PUBLIC_FUNC(TurboSpiker_State_FireShell);
    ADD_PUBLIC_FUNC(TurboSpiker_HandleSpikeCollisions);
    ADD_PUBLIC_FUNC(TurboSpiker_State_Spike);
    ADD_PUBLIC_FUNC(TurboSpiker_State_Ember);

    // HCZ/TwistingSlide
    ADD_PUBLIC_FUNC(TwistingSlide_SetupHitboxes);

    // HCZ/WaterGush
    ADD_PUBLIC_FUNC(WaterGush_SetupHitboxes);
    ADD_PUBLIC_FUNC(WaterGush_DrawSprites);
    ADD_PUBLIC_FUNC(WaterGush_SpawnBrickDebris);

    // HCZ/Whirlpool
    ADD_PUBLIC_FUNC(WhirlPool_DrawSprites);
    ADD_PUBLIC_FUNC(Whirlpool_SetupBubbles);

    // HPZ/Batbot
    ADD_PUBLIC_FUNC(Batbot_DebugSpawn);
    ADD_PUBLIC_FUNC(Batbot_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Batbot_State_Init);
    ADD_PUBLIC_FUNC(Batbot_State_Idle);
    ADD_PUBLIC_FUNC(Batbot_State_Attack);
    ADD_PUBLIC_FUNC(Batbot_State_SwoopLeft);
    ADD_PUBLIC_FUNC(Batbot_State_SwoopRight);

    // HPZ/Redz
    ADD_PUBLIC_FUNC(Redz_DebugSpawn);
    ADD_PUBLIC_FUNC(Redz_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Redz_State_Init);
    ADD_PUBLIC_FUNC(Redz_State_Walk);
    ADD_PUBLIC_FUNC(Redz_State_Turn);
    ADD_PUBLIC_FUNC(Redz_State_PrepareAttack);
    ADD_PUBLIC_FUNC(Redz_State_Attack);
    ADD_PUBLIC_FUNC(Redz_Flame_Setup);
    ADD_PUBLIC_FUNC(Redz_Flame_State);

    // HPZ/Stegway
    ADD_PUBLIC_FUNC(Stegway_DebugSpawn);
    ADD_PUBLIC_FUNC(Stegway_CheckOffScreen);
    ADD_PUBLIC_FUNC(Stegway_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(Stegway_SetupAnims);
    ADD_PUBLIC_FUNC(Stegway_State_Init);
    ADD_PUBLIC_FUNC(Stegway_State_Moving);
    ADD_PUBLIC_FUNC(Stegway_State_Turn);
    ADD_PUBLIC_FUNC(Stegway_State_RevUp);
    ADD_PUBLIC_FUNC(Stegway_State_RevRelease);
    ADD_PUBLIC_FUNC(Stegway_State_Dash);

    // Helpers/BadnikHelpers
    ADD_PUBLIC_FUNC(BadnikHelpers_BadnikBreak);
    ADD_PUBLIC_FUNC(BadnikHelpers_BadnikBreakUnseeded);
    ADD_PUBLIC_FUNC(BadnikHelpers_Oscillate);

    // Helpers/ColorHelpers
    ADD_PUBLIC_FUNC(ColorHelpers_PackRGB);
    ADD_PUBLIC_FUNC(ColorHelpers_RGBToHSL);
    ADD_PUBLIC_FUNC(ColorHelpers_HSLToRGB);

    // Helpers/CompetitionSession
    ADD_PUBLIC_FUNC(CompetitionSession_GetSession);
#if !MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(CompetitionSession_ResetOptions);
    ADD_PUBLIC_FUNC(CompetitionSession_ClearMatchData);
    ADD_PUBLIC_FUNC(CompetitionSession_DeriveWinner);
    ADD_PUBLIC_FUNC(CompetitionSession_WinMatchFor);
#endif

    // Helpers/DrawHelpers
    ADD_PUBLIC_FUNC(DrawHelpers_DrawHitboxOutline);
    ADD_PUBLIC_FUNC(DrawHelpers_DrawArrowAdditive);
    ADD_PUBLIC_FUNC(DrawHelpers_DrawIsocelesTriangle);
    ADD_PUBLIC_FUNC(DrawHelpers_DrawCross);
    ADD_PUBLIC_FUNC(DrawHelpers_DrawArrow);
    ADD_PUBLIC_FUNC(DrawHelpers_DrawRectOutline);
    ADD_PUBLIC_FUNC(DrawHelpers_DrawArenaBounds);

    // Helpers/GameProgress
    ADD_PUBLIC_FUNC(GameProgress_GetNotifStringID);
    ADD_PUBLIC_FUNC(GameProgress_ShuffleBSSID);
    ADD_PUBLIC_FUNC(GameProgress_GetProgressRAM);
    ADD_PUBLIC_FUNC(GameProgress_GetZoneUnlocked);
    ADD_PUBLIC_FUNC(GameProgress_GetCompletionPercent);
    ADD_PUBLIC_FUNC(GameProgress_TrackGameProgress);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(GameProgress_ClearBSSSave);
#endif
    ADD_PUBLIC_FUNC(GameProgress_UnlockAll);
    ADD_PUBLIC_FUNC(GameProgress_LockAllSpecialClear);
    ADD_PUBLIC_FUNC(GameProgress_ClearProgress);
    ADD_PUBLIC_FUNC(GameProgress_MarkZoneCompleted);
    ADD_PUBLIC_FUNC(GameProgress_CheckZoneClear);
    ADD_PUBLIC_FUNC(GameProgress_GiveEmerald);
    ADD_PUBLIC_FUNC(GameProgress_GiveMedal);
    ADD_PUBLIC_FUNC(GameProgress_GiveEnding);
    ADD_PUBLIC_FUNC(GameProgress_PrintSaveProgress);
    ADD_PUBLIC_FUNC(GameProgress_CountUnreadNotifs);
    ADD_PUBLIC_FUNC(GameProgress_GetNextNotif);
    ADD_PUBLIC_FUNC(GameProgress_CheckUnlock);

    // Helpers/LogHelpers
    ADD_PUBLIC_FUNC(LogHelpers_Print);

    // Helpers/MathHelpers
    ADD_PUBLIC_FUNC(MathHelpers_LerpToPos);
    ADD_PUBLIC_FUNC(MathHelpers_Lerp);
    ADD_PUBLIC_FUNC(MathHelpers_LerpSin1024);
    ADD_PUBLIC_FUNC(MathHelpers_Lerp2Sin1024);
    ADD_PUBLIC_FUNC(MathHelpers_LerpSin512);
    ADD_PUBLIC_FUNC(MathHelpers_GetBezierPoint);
    ADD_PUBLIC_FUNC(MathHelpers_SquareRoot);
    ADD_PUBLIC_FUNC(MathHelpers_GetBezierCurveLength);
    ADD_PUBLIC_FUNC(MathHelpers_PointInHitbox);
    ADD_PUBLIC_FUNC(MathHelpers_GetInteractionDir);
    ADD_PUBLIC_FUNC(MathHelpers_CheckValidIntersect);
    ADD_PUBLIC_FUNC(MathHelpers_GetEdgeDistance);
    ADD_PUBLIC_FUNC(MathHelpers_ConstrainToBox);

    // Helpers/Options
    ADD_PUBLIC_FUNC(Options_GetOptionsRAM);
    ADD_PUBLIC_FUNC(Options_Reload);
    ADD_PUBLIC_FUNC(Options_GetWinSize);
    ADD_PUBLIC_FUNC(Options_LoadCallback);
    ADD_PUBLIC_FUNC(Options_LoadFile);
    ADD_PUBLIC_FUNC(Options_SaveFile);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Options_SetLanguage);
#endif
    ADD_PUBLIC_FUNC(Options_LoadValuesFromSettings);
    ADD_PUBLIC_FUNC(Options_LoadOptionsCallback);
    ADD_PUBLIC_FUNC(Options_SaveOptionsCallback);

    // Helpers/ParticleHelpers
    ADD_PUBLIC_FUNC(ParticleHelpers_SetupFallingParticles);

    // Helpers/PlayerHelpers
    ADD_PUBLIC_FUNC(CutsceneRules_IsAct1);
    ADD_PUBLIC_FUNC(CutsceneRules_IsAct2);
    ADD_PUBLIC_FUNC(CutsceneRules_IsIntroEnabled);
    ADD_PUBLIC_FUNC(CutsceneRules_IsAct1Regular);
    ADD_PUBLIC_FUNC(CutsceneRules_CheckStageReload);
    ADD_PUBLIC_FUNC(CutsceneRules_CheckPlayerPos);

    // Helpers/PlayerProbe
    ADD_PUBLIC_FUNC(PlayerProbe_Print);
    ADD_PUBLIC_FUNC(PlayerProbe_DrawSprites);
    ADD_PUBLIC_FUNC(PlayerProbe_DrawArrow);

    // Helpers/ReplayDB
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(ReplayDB_CreateDB);
    ADD_PUBLIC_FUNC(ReplayDB_LoadDB);
    ADD_PUBLIC_FUNC(ReplayDB_SaveDB);
    ADD_PUBLIC_FUNC(ReplayDB_AddReplay);
    ADD_PUBLIC_FUNC(ReplayDB_DeleteReplay);
    ADD_PUBLIC_FUNC(ReplayDB_DeleteReplay_CB);
    ADD_PUBLIC_FUNC(ReplayDB_DeleteReplaySave_CB);
    ADD_PUBLIC_FUNC(ReplayDB_DeleteReplaySave2_CB);
    ADD_PUBLIC_FUNC(ReplayDB_LoadDBCallback);
    ADD_PUBLIC_FUNC(ReplayDB_SaveDBCallback);
    ADD_PUBLIC_FUNC(ReplayDB_LoadCallback);

    ADD_PUBLIC_FUNC(ReplayDB_Buffer_PackEntry);
    ADD_PUBLIC_FUNC(ReplayDB_Buffer_UnpackEntry);
#endif

#if MANIA_USE_PLUS
    // Helpers/TimeAttackData
    ADD_PUBLIC_FUNC(TimeAttackData_TrackActClear);
    ADD_PUBLIC_FUNC(TimeAttackData_TrackTAClear);
    ADD_PUBLIC_FUNC(TimeAttackData_TrackEnemyDefeat);
    ADD_PUBLIC_FUNC(TimeAttackData_Clear);
#endif
    ADD_PUBLIC_FUNC(TimeAttackData_GetManiaListPos);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(TimeAttackData_GetEncoreListPos);
#endif
    ADD_PUBLIC_FUNC(TimeAttackData_GetUnpackedTime);
    ADD_PUBLIC_FUNC(TimeAttackData_GetRecordedTime);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(TimeAttackData_CreateDB);
    ADD_PUBLIC_FUNC(TimeAttackData_LoadDB);
    ADD_PUBLIC_FUNC(TimeAttackData_SaveDB);
    ADD_PUBLIC_FUNC(TimeAttackData_LoadDBCallback);
    ADD_PUBLIC_FUNC(TimeAttackData_SaveDBCallback);
    ADD_PUBLIC_FUNC(TimeAttackData_MigrateLegacySaves);
    ADD_PUBLIC_FUNC(TimeAttackData_AddDBRow);
    ADD_PUBLIC_FUNC(TimeAttackData_AddRecord);
    ADD_PUBLIC_FUNC(TimeAttackData_GetScore);
    ADD_PUBLIC_FUNC(TimeAttackData_GetReplayID);
    ADD_PUBLIC_FUNC(TimeAttackData_ConfigureTableView);
    ADD_PUBLIC_FUNC(TimeAttackData_Leaderboard_GetRank);
    ADD_PUBLIC_FUNC(TimeAttackData_AddLeaderboardEntry);
    ADD_PUBLIC_FUNC(TimeAttackData_GetLeaderboardInfo);
#else
    ADD_PUBLIC_FUNC(TimeAttackData_AddRecord);
#endif

    // LRZ/BuckwildBall
    ADD_PUBLIC_FUNC(BuckwildBall_HandleTimerSfx);
    ADD_PUBLIC_FUNC(BuckwildBall_CheckOffScreen);
    ADD_PUBLIC_FUNC(BuckwildBall_SpawnDebris);
    ADD_PUBLIC_FUNC(BuckwildBall_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(BuckwildBall_HandleRollCrush);
    ADD_PUBLIC_FUNC(BuckwildBall_State_Init);
    ADD_PUBLIC_FUNC(BuckwildBall_State_Patrolling);
    ADD_PUBLIC_FUNC(BuckwildBall_State_AwaitDetection);
    ADD_PUBLIC_FUNC(BuckwildBall_State_Falling);
    ADD_PUBLIC_FUNC(BuckwildBall_State_Rolling);
    ADD_PUBLIC_FUNC(BuckwildBall_State_Debris);

    // LRZ/DashLift
    ADD_PUBLIC_FUNC(DashLift_CheckOffScreen);
    ADD_PUBLIC_FUNC(DashLift_State_Init);
    ADD_PUBLIC_FUNC(DashLift_State_HandleDash);

    // LRZ/Drillerdroid
    ADD_PUBLIC_FUNC(Drillerdroid_Hit);
    ADD_PUBLIC_FUNC(Drillerdroid_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Drillerdroid_Explode);
    ADD_PUBLIC_FUNC(Drillerdroid_SpawnDebris);
    ADD_PUBLIC_FUNC(Drillerdroid_State_SetupArena);
    ADD_PUBLIC_FUNC(Drillerdroid_State_AwaitPlayer);
    ADD_PUBLIC_FUNC(Drillerdroid_State_Dropping);
    ADD_PUBLIC_FUNC(Drillerdroid_State_Landed);
    ADD_PUBLIC_FUNC(Drillerdroid_State_LandRecoil);
    ADD_PUBLIC_FUNC(Drillerdroid_State_DecideNextMove);
    ADD_PUBLIC_FUNC(Drillerdroid_State_PrepareJump);
    ADD_PUBLIC_FUNC(Drillerdroid_State_Jumping);
    ADD_PUBLIC_FUNC(Drillerdroid_State_Drilling);
    ADD_PUBLIC_FUNC(Drillerdroid_State_FinishDrilling);
    ADD_PUBLIC_FUNC(Drillerdroid_State_Overheat);
    ADD_PUBLIC_FUNC(Drillerdroid_State_OverheatRecoil);
    ADD_PUBLIC_FUNC(Drillerdroid_State_JumpTargetDelay);
    ADD_PUBLIC_FUNC(Drillerdroid_State_PrepareJumpTarget);
    ADD_PUBLIC_FUNC(Drillerdroid_State_JumpTargeting);
    ADD_PUBLIC_FUNC(Drillerdroid_State_DecidingDropPos);
    ADD_PUBLIC_FUNC(Drillerdroid_State_DropFailReset);
    ADD_PUBLIC_FUNC(Drillerdroid_State_OverheatRecoil_DestroyedSegment);
    ADD_PUBLIC_FUNC(Drillerdroid_State_Cooldown);
    ADD_PUBLIC_FUNC(Drillerdroid_State_ResetFromCooldown);
    ADD_PUBLIC_FUNC(Drillerdroid_State_Destroyed);
    ADD_PUBLIC_FUNC(Drillerdroid_State_Finish);
    ADD_PUBLIC_FUNC(Drillerdroid_State_DropSignPost);
    ADD_PUBLIC_FUNC(Drillerdroid_Draw_Boss);
    ADD_PUBLIC_FUNC(Drillerdroid_Draw_Simple);
    ADD_PUBLIC_FUNC(Drillerdroid_State_Target);
    ADD_PUBLIC_FUNC(Drillerdroid_Draw_Target);

    // LRZ/DrillerdroidO
    ADD_PUBLIC_FUNC(DrillerdroidO_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(DrillerdroidO_Explode);
    ADD_PUBLIC_FUNC(DrillerdroidO_SpawnDebris);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_SetupArena);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_AwaitPlayer);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_Dropping);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_Landed);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_LandRecoil);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_BeginDrilling);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_Drilling);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_FinishDrilling);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_Overheat);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_OverheatRecoil);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_JumpTargetDelay);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_PrepareJumpTarget);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_JumpTargeting);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_DestroyRockPiles);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_NextLevelDelay);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_MoveToNextLevel);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_DecidingDropPos);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_OverheatRecoil_DestroyedSegment);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_Cooldown);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_ResetFromCooldown);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_Destroyed);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_Finish);
    ADD_PUBLIC_FUNC(DrillerdroidO_Draw_Boss);
    ADD_PUBLIC_FUNC(DrillerdroidO_Draw_Simple);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_Target);
    ADD_PUBLIC_FUNC(DrillerdroidO_Draw_Target);
    ADD_PUBLIC_FUNC(DrillerdroidO_State_FireballEmitter);
    ADD_PUBLIC_FUNC(DrillerdroidO_Draw_FireballEmitter);

    // LRZ/Fireworm
    ADD_PUBLIC_FUNC(Fireworm_DebugSpawn);
    ADD_PUBLIC_FUNC(Fireworm_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Fireworm_CheckOffScreen);
    ADD_PUBLIC_FUNC(Fireworm_State_Init);
    ADD_PUBLIC_FUNC(Fireworm_State_AwaitPlayer);
    ADD_PUBLIC_FUNC(Fireworm_State_HeadAppear);
    ADD_PUBLIC_FUNC(Fireworm_State_BodyAppear);
    ADD_PUBLIC_FUNC(Fireworm_State_FlyAround);

    // LRZ/Flamethrower
    ADD_PUBLIC_FUNC(Flamethrower_SetupOrientation);
    ADD_PUBLIC_FUNC(Flamethrower_GetHitbox);
    ADD_PUBLIC_FUNC(Flamethrower_CheckOffScreen);
    ADD_PUBLIC_FUNC(Flamethrower_HandleAnimations);
    ADD_PUBLIC_FUNC(Flamethrower_HandleAngles);
    ADD_PUBLIC_FUNC(Flamethrower_HandleTileCollisions);
    ADD_PUBLIC_FUNC(Flamethrower_CheckOutOfBounds);
    ADD_PUBLIC_FUNC(Flamethrower_CheckFlameCollisions);
    ADD_PUBLIC_FUNC(Flamethrower_CheckMouthCollisions);
    ADD_PUBLIC_FUNC(Flamethrower_State_Init);
    ADD_PUBLIC_FUNC(Flamethrower_State_AwaitInterval);
    ADD_PUBLIC_FUNC(Flamethrower_State_EmittingFlames);
    ADD_PUBLIC_FUNC(Flamethrower_State_SetupFireball);
    ADD_PUBLIC_FUNC(Flamethrower_State_Fireball);

    // LRZ/HeavyKing
    ADD_PUBLIC_FUNC(HeavyKing_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(HeavyKing_CheckPlayerCollisions_Charging);
    ADD_PUBLIC_FUNC(HeavyKing_Hit);
    ADD_PUBLIC_FUNC(HeavyKing_HandleClawMovement);
    ADD_PUBLIC_FUNC(HeavyKing_HandleAnimators);
    ADD_PUBLIC_FUNC(HeavyKing_HandleHoverMovement);
    ADD_PUBLIC_FUNC(HeavyKing_FindTargetEmerald);
    ADD_PUBLIC_FUNC(HeavyKing_StartLeap);
    ADD_PUBLIC_FUNC(HeavyKing_HandleAttackFinish);
    ADD_PUBLIC_FUNC(HeavyKing_CreateSpinRayFX);
    ADD_PUBLIC_FUNC(HeavyKing_CreateExpandRingFX);
    ADD_PUBLIC_FUNC(HeavyKing_CreateLaser);
    ADD_PUBLIC_FUNC(HeavyKing_CreateExpandRing);
    ADD_PUBLIC_FUNC(HeavyKing_State_SetupArena);
    ADD_PUBLIC_FUNC(HeavyKing_State_HandleCutsceneSetup);
    ADD_PUBLIC_FUNC(HeavyKing_StateCutscene_PlayerLookUp);
    ADD_PUBLIC_FUNC(HeavyKing_StateCutscene_EnterKing);
    ADD_PUBLIC_FUNC(HeavyKing_StateCutscene_ReturnCamToPlayer);
    ADD_PUBLIC_FUNC(HeavyKing_StateCutscene_GrabMasterEmerald);
    ADD_PUBLIC_FUNC(HeavyKing_StateCutscene_FinishThinking);
    ADD_PUBLIC_FUNC(HeavyKing_StateCutscene_GetHigherGround);
    ADD_PUBLIC_FUNC(HeavyKing_StateCutscene_Complaining);
    ADD_PUBLIC_FUNC(HeavyKing_StateCutscene_ChargeSpindash);
    ADD_PUBLIC_FUNC(HeavyKing_StateCutscene_AttackClaw);
    ADD_PUBLIC_FUNC(HeavyKing_StateCutscene_AttackRebound);
    ADD_PUBLIC_FUNC(HeavyKing_State_JumpToTargetEmerald);
    ADD_PUBLIC_FUNC(HeavyKing_State_Leaping);
    ADD_PUBLIC_FUNC(HeavyKing_State_LeapToMasterEmerald);
    ADD_PUBLIC_FUNC(HeavyKing_State_LandedOnMasterEmerald);
    ADD_PUBLIC_FUNC(HeavyKing_State_ChargeStart);
    ADD_PUBLIC_FUNC(HeavyKing_State_Charging);
    ADD_PUBLIC_FUNC(HeavyKing_State_ChargeStop);
    ADD_PUBLIC_FUNC(HeavyKing_State_PrepareHover);
    ADD_PUBLIC_FUNC(HeavyKing_State_StartHovering);
    ADD_PUBLIC_FUNC(HeavyKing_State_Hovering);
    ADD_PUBLIC_FUNC(HeavyKing_State_LaserAttack);
    ADD_PUBLIC_FUNC(HeavyKing_State_ExpandRingAttack);
    ADD_PUBLIC_FUNC(HeavyKing_State_TwinChargeAttack);
    ADD_PUBLIC_FUNC(HeavyKing_State_HitRecoil);
    ADD_PUBLIC_FUNC(HeavyKing_State_Destroyed);
    ADD_PUBLIC_FUNC(HeavyKing_State_Escape);
    ADD_PUBLIC_FUNC(HeavyKing_State_Finish);

    // LRZ/HeavyRider
    ADD_PUBLIC_FUNC(HeavyRider_SpawnDebris);
    ADD_PUBLIC_FUNC(HeavyRider_CheckObjectCollisions);
    ADD_PUBLIC_FUNC(HeavyRider_Hit);
    ADD_PUBLIC_FUNC(HeavyRider_Explode);
    ADD_PUBLIC_FUNC(HeavyRider_HandleTurn_ScreenEdges);
    ADD_PUBLIC_FUNC(HeavyRider_HandleTurn_ArenaEdges);
    ADD_PUBLIC_FUNC(HeavyRider_DecideNextAttack);
    ADD_PUBLIC_FUNC(HeavyRider_State_SetupArena);
    ADD_PUBLIC_FUNC(HeavyRider_State_AwaitPlayer);
    ADD_PUBLIC_FUNC(HeavyRider_State_SetupRider);
    ADD_PUBLIC_FUNC(HeavyRider_State_Moving);
    ADD_PUBLIC_FUNC(HeavyRider_State_RampJump);
    ADD_PUBLIC_FUNC(HeavyRider_State_Charging);
    ADD_PUBLIC_FUNC(HeavyRider_State_ChargeDash);
    ADD_PUBLIC_FUNC(HeavyRider_State_Turning);
    ADD_PUBLIC_FUNC(HeavyRider_State_Destroyed);
    ADD_PUBLIC_FUNC(HeavyRider_State_Finish);
    ADD_PUBLIC_FUNC(HeavyRider_Draw_Boss);
    ADD_PUBLIC_FUNC(HeavyRider_State_PlaneSwitch);
    ADD_PUBLIC_FUNC(HeavyRider_Draw_PlaneSwitch);
    ADD_PUBLIC_FUNC(HeavyRider_State_ChargeTrigger);
    ADD_PUBLIC_FUNC(HeavyRider_Draw_Simple);
    ADD_PUBLIC_FUNC(HeavyRider_State_Fireball);
    ADD_PUBLIC_FUNC(HeavyRider_State_Puff);
    ADD_PUBLIC_FUNC(HeavyRider_StateJimmy_Idle);
    ADD_PUBLIC_FUNC(HeavyRider_StateJimmy_RevRelease);
    ADD_PUBLIC_FUNC(HeavyRider_StateJimmy_RevUp);

    // LRZ/Iwamodoki
    ADD_PUBLIC_FUNC(Iwamodoki_DebugSpawn);
    ADD_PUBLIC_FUNC(Iwamodoki_HandlePlayerCollisions);
    ADD_PUBLIC_FUNC(Iwamodoki_CheckOffScreen);
    ADD_PUBLIC_FUNC(Iwamodoki_State_Init);
    ADD_PUBLIC_FUNC(Iwamodoki_State_AwaitPlayer);
    ADD_PUBLIC_FUNC(Iwamodoki_State_Appear);
    ADD_PUBLIC_FUNC(Iwamodoki_State_Charging);
    ADD_PUBLIC_FUNC(Iwamodoki_State_Explode);
    ADD_PUBLIC_FUNC(Iwamodoki_State_Debris);

    // LRZ/KingAttack
    ADD_PUBLIC_FUNC(KingAttack_SfxCheck_ElecIdle);
    ADD_PUBLIC_FUNC(KingAttack_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(KingAttack_HandleLaserPositions);
    ADD_PUBLIC_FUNC(KingAttack_State_Laser);
    ADD_PUBLIC_FUNC(KingAttack_State_LaserBlast_Delay);
    ADD_PUBLIC_FUNC(KingAttack_State_LaserBlast_Erupt);
    ADD_PUBLIC_FUNC(KingAttack_State_OrbitAppear);
    ADD_PUBLIC_FUNC(KingAttack_State_Orbiting);
    ADD_PUBLIC_FUNC(KingAttack_State_OrbitLaunched);
    ADD_PUBLIC_FUNC(KingAttack_State_Trail);
    ADD_PUBLIC_FUNC(KingAttack_State_LargeBullet_Appear);
    ADD_PUBLIC_FUNC(KingAttack_State_EnergyLine);
    ADD_PUBLIC_FUNC(KingAttack_State_LargeBullet_TwinShot);
    ADD_PUBLIC_FUNC(KingAttack_State_SmallBullet);
    ADD_PUBLIC_FUNC(KingAttack_State_SmallBullet_Impact);

    // LRZ/KingClaw
    ADD_PUBLIC_FUNC(KingClaw_HandleJointPositions);
    ADD_PUBLIC_FUNC(KingClaw_State_EnterClaw);
    ADD_PUBLIC_FUNC(KingClaw_State_Grab);
    ADD_PUBLIC_FUNC(KingClaw_State_LiftMasterEmerald);
    ADD_PUBLIC_FUNC(KingClaw_State_Swinging);
    ADD_PUBLIC_FUNC(KingClaw_State_LowerClaw);
    ADD_PUBLIC_FUNC(KingClaw_State_RaiseClaw);

    // LRZ/LavaFall
    ADD_PUBLIC_FUNC(LavaFall_State_Idle);
    ADD_PUBLIC_FUNC(LavaFall_State_LavaFall);
    ADD_PUBLIC_FUNC(LavaFall_State_Lava);

    // LRZ/LavaGeyser
    ADD_PUBLIC_FUNC(LavaGeyser_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(LavaGeyser_HandleSetup);
    ADD_PUBLIC_FUNC(LavaGeyser_State_Intervals);
    ADD_PUBLIC_FUNC(LavaGeyser_State_Init);
    ADD_PUBLIC_FUNC(LavaGeyser_State_ShowPlume);
    ADD_PUBLIC_FUNC(LavaGeyser_State_Erupting);
    ADD_PUBLIC_FUNC(LavaGeyser_State_Erupted);
    ADD_PUBLIC_FUNC(LavaGeyser_State_Recede);
    ADD_PUBLIC_FUNC(LavaGeyser_State_HandleFinish);

    // LRZ/LRZ1Intro
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(LRZ1Intro_HandlePlayerCollisions);
    ADD_PUBLIC_FUNC(LRZ1Intro_HandlePlayerMovement);
    ADD_PUBLIC_FUNC(LRZ1Intro_HandleExplosions);
    // ADD_PUBLIC_FUNC(LRZ1Intro_HandleExplosions); // Duplicate in original
    ADD_PUBLIC_FUNC(LRZ1Intro_State_SetupActors);
    ADD_PUBLIC_FUNC(LRZ1Intro_State_IntroDelay);
    ADD_PUBLIC_FUNC(LRZ1Intro_State_EnterSub);
    ADD_PUBLIC_FUNC(LRZ1Intro_State_RidingSub);
    ADD_PUBLIC_FUNC(LRZ1Intro_State_CrashedSub);
    ADD_PUBLIC_FUNC(LRZ1Intro_State_SubSinking);
#endif

    // LRZ/LRZ1Outro
    ADD_PUBLIC_FUNC(LRZ1Outro_StartCutscene);
    ADD_PUBLIC_FUNC(LRZ1Outro_CutsceneAct1_SetupActors);
    ADD_PUBLIC_FUNC(LRZ1Outro_CutsceneAct2_SetupActors);
    ADD_PUBLIC_FUNC(LRZ1Outro_CutsceneAct1_SetupDashLift);
    ADD_PUBLIC_FUNC(LRZ1Outro_CutsceneAct1_GoToDashLift);
    ADD_PUBLIC_FUNC(LRZ1Outro_CutsceneAct1_UsingDashLift);
    ADD_PUBLIC_FUNC(LRZ1Outro_CutsceneAct2_UsingDashLift);
    ADD_PUBLIC_FUNC(LRZ1Outro_CutsceneAct2_ExitDashLift);

    // LRZ/LRZ1Setup
    ADD_PUBLIC_FUNC(LRZ1Setup_StageFinish_EndAct1);
    ADD_PUBLIC_FUNC(LRZ1Setup_DrawHook_ApplyBGSmoothing);

    // LRZ/LRZ2Setup
    ADD_PUBLIC_FUNC(LRZ2Setup_HandleStageReload);
    ADD_PUBLIC_FUNC(LRZ2Setup_Trigger_StartOutro);
    ADD_PUBLIC_FUNC(LRZ2Setup_SetupTagLink);
    ADD_PUBLIC_FUNC(LRZ2Setup_GetTileInfo);

    // LRZ/LRZ3Cutscene
    ADD_PUBLIC_FUNC(LRZ3Cutscene_Cutscene_FadeIn);
    ADD_PUBLIC_FUNC(LRZ3Cutscene_Cutscene_RunRight);

    // LRZ/LRZ3Outro
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(LRZ3Outro_HandleExplosions);
    ADD_PUBLIC_FUNC(LRZ3Outro_State_BlastOff);
    ADD_PUBLIC_FUNC(LRZ3Outro_State_RocketLaunch);
    ADD_PUBLIC_FUNC(LRZ3Outro_State_EnterLittlePlanet);
    ADD_PUBLIC_FUNC(LRZ3Outro_StageFinish_EndAct2ST);
    ADD_PUBLIC_FUNC(LRZ3Outro_Cutscene_StopPlayers);
    ADD_PUBLIC_FUNC(LRZ3Outro_Cutscene_LightUpLittlePlanet);
#endif

    // LRZ/LRZ3OutroK
    ADD_PUBLIC_FUNC(LRZ3OutroK_StartCutscene);
    ADD_PUBLIC_FUNC(LRZ3OutroK_Cutscene_RunToTeleporter);
    ADD_PUBLIC_FUNC(LRZ3OutroK_Cutscene_LandOnTeleporter);
    ADD_PUBLIC_FUNC(LRZ3OutroK_Cutscene_UseTeleporter);
    ADD_PUBLIC_FUNC(LRZ3OutroK_Cutscene_TeleporterActivated);

    // LRZ/LRZ3Setup
    ADD_PUBLIC_FUNC(LRZ3Setup_StageFinish_EndAct2K);

    // LRZ/LRZConvControl
    ADD_PUBLIC_FUNC(LRZConvControl_HandlePlayerTrigger);
    ADD_PUBLIC_FUNC(LRZConvControl_HandleButtonTrigger);

    // LRZ/LRZConvDropper
    ADD_PUBLIC_FUNC(LRZConvDropper_SetupDropperChildren);
    ADD_PUBLIC_FUNC(LRZConvDropper_HandleButtonDrop);

    // LRZ/LRZConveyor
    ADD_PUBLIC_FUNC(LRZConveyor_HandleBehaviour);
    ADD_PUBLIC_FUNC(LRZConveyor_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(LRZConveyor_HandlePlayerCollisions);
    ADD_PUBLIC_FUNC(LRZConveyor_DrawWheels);
    ADD_PUBLIC_FUNC(LRZConveyor_DrawDeformedLine);
    ADD_PUBLIC_FUNC(LRZConveyor_DrawConveyorLines);

    // LRZ/LRZConvItem
    ADD_PUBLIC_FUNC(LRZConvItem_SetupHitboxes);
    ADD_PUBLIC_FUNC(LRZConvItem_HandleLRZConvPhys);
    ADD_PUBLIC_FUNC(LRZConvItem_State_Rock);
    ADD_PUBLIC_FUNC(LRZConvItem_State_SpikeBall);

    // LRZ/LRZConvSwitch
    ADD_PUBLIC_FUNC(LRZConvSwitch_Calibrate);

    // LRZ/LRZFireball
    ADD_PUBLIC_FUNC(LRZFireball_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(LRZFireball_CheckOffScreen);
    ADD_PUBLIC_FUNC(LRZFireball_CheckTileCollisions);
    ADD_PUBLIC_FUNC(LRZFireball_State_Spawner);
    ADD_PUBLIC_FUNC(LRZFireball_State_LauncherStatic);
    ADD_PUBLIC_FUNC(LRZFireball_State_LauncherGravity);
    ADD_PUBLIC_FUNC(LRZFireball_StateFireball_Spawner);
    ADD_PUBLIC_FUNC(LRZFireball_StateFireball_LauncherStatic);
    ADD_PUBLIC_FUNC(LRZFireball_StateFireball_LauncherGravity);
    ADD_PUBLIC_FUNC(LRZFireball_Draw_Simple);

    // LRZ/LRZRockPile
    ADD_PUBLIC_FUNC(LRZRockPile_SetupDebris);
    ADD_PUBLIC_FUNC(LRZRockPile_SpawnRockDebris);
    ADD_PUBLIC_FUNC(LRZRockPile_State_Wall);
    ADD_PUBLIC_FUNC(LRZRockPile_State_Floor_TopSolid);
    ADD_PUBLIC_FUNC(LRZRockPile_State_Floor_AllSolid);
    ADD_PUBLIC_FUNC(LRZRockPile_State_Broken);

    // LRZ/LRZSpikeBall
    ADD_PUBLIC_FUNC(LRZSpikeBall_GetBaseFrameID);
    ADD_PUBLIC_FUNC(LRZSpikeBall_CheckPlayerBaseCollisions);
    ADD_PUBLIC_FUNC(LRZSpikeBall_CheckPlayerBallCollisions);
    ADD_PUBLIC_FUNC(LRZSpikeBall_State_Init);
    ADD_PUBLIC_FUNC(LRZSpikeBall_State_AwaitInterval);
    ADD_PUBLIC_FUNC(LRZSpikeBall_State_ChargeUp);
    ADD_PUBLIC_FUNC(LRZSpikeBall_State_LaunchedBall);

    // LRZ/LRZSpiral
    ADD_PUBLIC_FUNC(LRZSpiral_HandlePlayerExit);
    ADD_PUBLIC_FUNC(LRZSpiral_State_Cylinder);
    ADD_PUBLIC_FUNC(LRZSpiral_State_J_Curve);
    ADD_PUBLIC_FUNC(LRZSpiral_State_C_Curve);

    // LRZ/Rexon
    ADD_PUBLIC_FUNC(Rexon_DebugSpawn);
    ADD_PUBLIC_FUNC(Rexon_CheckOffScreen);
    ADD_PUBLIC_FUNC(Rexon_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Rexon_Destroy);
    ADD_PUBLIC_FUNC(Rexon_State_Init);
    ADD_PUBLIC_FUNC(Rexon_State_Hidden);
    ADD_PUBLIC_FUNC(Rexon_State_Rising);
    ADD_PUBLIC_FUNC(Rexon_State_Shooting);
    ADD_PUBLIC_FUNC(Rexon_State_Destroyed);
    ADD_PUBLIC_FUNC(Rexon_State_Explode);
    ADD_PUBLIC_FUNC(Rexon_State_Debris);
    ADD_PUBLIC_FUNC(Rexon_State_Projectile);

    // LRZ/RisingLava
    ADD_PUBLIC_FUNC(RisingLava_State_CheckRiseStart);
    ADD_PUBLIC_FUNC(RisingLava_State_RiseShake);
    ADD_PUBLIC_FUNC(RisingLava_State_StoppedRising);

    // LRZ/RockDrill
    ADD_PUBLIC_FUNC(RockDrill_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(RockDrill_Hit);
    ADD_PUBLIC_FUNC(RockDrill_Explode);
    ADD_PUBLIC_FUNC(RockDrill_SpawnDebris);
    ADD_PUBLIC_FUNC(RockDrill_State_Init);
    ADD_PUBLIC_FUNC(RockDrill_State_Drilling);
    ADD_PUBLIC_FUNC(RockDrill_State_Falling);
    ADD_PUBLIC_FUNC(RockDrill_State_Explode);

    // LRZ/SkyTeleporter
    ADD_PUBLIC_FUNC(SkyTeleporter_DrawTeleportBeam);

    // LRZ/SpikeCrusher
    ADD_PUBLIC_FUNC(SpikeCrusher_CheckOffScreen);
    ADD_PUBLIC_FUNC(SpikeCrusher_State_Init);
    ADD_PUBLIC_FUNC(SpikeCrusher_State_MovingDown);
    ADD_PUBLIC_FUNC(SpikeCrusher_State_Crushing);
    ADD_PUBLIC_FUNC(SpikeCrusher_State_CrushBounce);
    ADD_PUBLIC_FUNC(SpikeCrusher_State_ActivateFlames);
    ADD_PUBLIC_FUNC(SpikeCrusher_State_MovingUp);

    // LRZ/Stalactite
    ADD_PUBLIC_FUNC(Stalactite_State_AwaitPlayer);
    ADD_PUBLIC_FUNC(Stalactite_State_Falling);
    ADD_PUBLIC_FUNC(Stalactite_State_Landed);
    ADD_PUBLIC_FUNC(Stalactite_State_Falling_Boss);
    ADD_PUBLIC_FUNC(Stalactite_State_Debris);

    // LRZ/ThoughtBubble
    ADD_PUBLIC_FUNC(ThoughtBubble_BubbleAppear);
    ADD_PUBLIC_FUNC(ThoughtBubble_HaveFirstThought);
    ADD_PUBLIC_FUNC(ThoughtBubble_HaveOtherThoughts);
    ADD_PUBLIC_FUNC(ThoughtBubble_BubbleDisappear);
    ADD_PUBLIC_FUNC(ThoughtBubble_DestroyBubble);

    // LRZ/Toxomister
    ADD_PUBLIC_FUNC(Toxomister_DebugSpawn);
    ADD_PUBLIC_FUNC(Toxomister_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Toxomister_CheckOffScreen);
    ADD_PUBLIC_FUNC(Toxomister_CheckCloudOnScreen);
    ADD_PUBLIC_FUNC(Toxomister_CheckPlayerCloudCollisions);
    ADD_PUBLIC_FUNC(Toxomister_State_Init);
    ADD_PUBLIC_FUNC(Toxomister_State_CreateClouds);
    ADD_PUBLIC_FUNC(Toxomister_StateCloud_FallDelay);
    ADD_PUBLIC_FUNC(Toxomister_StateCloud_FallToFloor);
    ADD_PUBLIC_FUNC(Toxomister_StateCloud_ReachedFloor);
    ADD_PUBLIC_FUNC(Toxomister_StateCloud_GrabbedPlayer);
    ADD_PUBLIC_FUNC(Toxomister_StateCloud_Dissipate);

    // LRZ/Turbine
    ADD_PUBLIC_FUNC(Turbine_State_Handles);
    ADD_PUBLIC_FUNC(Turbine_State_Spikes);

    // LRZ/TurretSwitch
    ADD_PUBLIC_FUNC(TurretSwitch_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(TurretSwitch_Break);
    ADD_PUBLIC_FUNC(TurretSwitch_State_Init);
    ADD_PUBLIC_FUNC(TurretSwitch_State_Turret);
    ADD_PUBLIC_FUNC(TurretSwitch_State_Projectile);

    // LRZ/WalkerLegs
    ADD_PUBLIC_FUNC(WalkerLegs_DrawSprites);
    ADD_PUBLIC_FUNC(WalkerLegs_CheckOffScreen);
    ADD_PUBLIC_FUNC(WalkerLegs_HandlePlayerMovement);
    ADD_PUBLIC_FUNC(WalkerLegs_CheckObjectCrush);
    ADD_PUBLIC_FUNC(WalkerLegs_CheckStepTrigger);
    ADD_PUBLIC_FUNC(WalkerLegs_CheckTileCollisions);
    ADD_PUBLIC_FUNC(WalkerLegs_CheckStoodLava);
    ADD_PUBLIC_FUNC(WalkerLegs_CreateDebris);
    ADD_PUBLIC_FUNC(WalkerLegs_CreateSmoke);
    ADD_PUBLIC_FUNC(WalkerLegs_State_Init);
    ADD_PUBLIC_FUNC(WalkerLegs_State_Idle);
    ADD_PUBLIC_FUNC(WalkerLegs_State_Stepping);
    ADD_PUBLIC_FUNC(WalkerLegs_State_TryToReset);
}
