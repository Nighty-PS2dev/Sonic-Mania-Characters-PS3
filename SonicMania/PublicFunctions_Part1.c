#include "../Game.h" // Or equivalent main header for function declarations & ModAPI access

#ifndef ADD_PUBLIC_FUNC
#define ADD_PUBLIC_FUNC(func) Mod.AddPublicFunction(#func, (void *)(func))
#endif

void InitPublicFunctions_Part1(void)
{
    // AIZ/AIZEncoreTutorial
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(AIZEncoreTutorial_State_ShowTutBubble);
    ADD_PUBLIC_FUNC(AIZEncoreTutorial_State_EnterTutorial);
    ADD_PUBLIC_FUNC(AIZEncoreTutorial_State_ShowSwapTutorial);
    ADD_PUBLIC_FUNC(AIZEncoreTutorial_State_ExitTutorial);
    ADD_PUBLIC_FUNC(AIZEncoreTutorial_State_ReturnToCutscene);
#endif

    // AIZ/AIZKingClaw
    ADD_PUBLIC_FUNC(AIZKingClaw_HandleClawPositions);
    ADD_PUBLIC_FUNC(AIZKingClaw_State_Grab);

    // AIZ/AIZRockPile
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(AIZRockPile_SpawnRocks);
#endif

#if MANIA_USE_PLUS
    // AIZ/AIZSetup
    ADD_PUBLIC_FUNC(AIZSetup_BGSwitch_Jungle);
    ADD_PUBLIC_FUNC(AIZSetup_BGSwitch_Sky);
    ADD_PUBLIC_FUNC(AIZSetup_PlayerState_Static);
#endif
    ADD_PUBLIC_FUNC(AIZSetup_PlayerState_P2Enter);
    ADD_PUBLIC_FUNC(AIZSetup_HandleHeavyMovement);
    ADD_PUBLIC_FUNC(AIZSetup_SetupObjects);
    ADD_PUBLIC_FUNC(AIZSetup_GetCutsceneSetupPtr);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(AIZSetup_Cutscene_SkipCB);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneST_Setup);
#endif
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneSonic_EnterAIZ);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneSonic_EnterAIZJungle);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneSonic_EnterHeavies);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneSonic_P2FlyIn);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneSonic_EnterClaw);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneSonic_WatchClaw);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneSonic_RubyGrabbed);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneSonic_RubyAppear);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneSonic_RubyFX);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneK_Setup);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneKnux_Chillin);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneKnux_StartDrillin);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneKnux_Drillin);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneKnux_PrepareForTrouble);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneKnux_EnterThreat);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneKnux_HeaviesAppear);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneKnux_RubyImpact);
    ADD_PUBLIC_FUNC(AIZSetup_CutsceneKnux_RubyFX);
    ADD_PUBLIC_FUNC(AIZSetup_Cutscene_LoadGHZ);

    // AIZ/AIZTornado
    ADD_PUBLIC_FUNC(AIZTornado_HandleMovement);
    ADD_PUBLIC_FUNC(AIZTornado_HandlePlayerCollisions);
    ADD_PUBLIC_FUNC(AIZTornado_State_Move);

    // AIZ/AIZTornadoPath
    ADD_PUBLIC_FUNC(AIZTornadoPath_HandleMoveSpeed);
    ADD_PUBLIC_FUNC(AIZTornadoPath_State_SetTornadoSpeed);
    ADD_PUBLIC_FUNC(AIZTornadoPath_State_SetPlayerCamera);
    ADD_PUBLIC_FUNC(AIZTornadoPath_State_DisablePlayerInteractions);
    ADD_PUBLIC_FUNC(AIZTornadoPath_State_ExitTornadoSequence);
    ADD_PUBLIC_FUNC(AIZTornadoPath_State_PrepareCatchPlayer);
    ADD_PUBLIC_FUNC(AIZTornadoPath_State_CatchPlayer);

    // AIZ/Bloominator
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Bloominator_DebugSpawn);
    ADD_PUBLIC_FUNC(Bloominator_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Bloominator_CheckOffScreen);
    ADD_PUBLIC_FUNC(Bloominator_State_Idle);
    ADD_PUBLIC_FUNC(Bloominator_State_Firing);
    ADD_PUBLIC_FUNC(Bloominator_State_Init);
    ADD_PUBLIC_FUNC(Bloominator_State_Spikeball);
#endif

    // AIZ/EncoreIntro
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(EncoreIntro_SetupEntities);
    ADD_PUBLIC_FUNC(EncoreIntro_SetupCutscene);
    ADD_PUBLIC_FUNC(EncoreIntro_SetupCutscenePart2);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_SetupAIZEncore);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_PlayerAppear);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_RubyAppear);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_PortalClose);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_Empty);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_BeginAIZEncore);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_AIZEncore);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_CapsuleFound);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_BuddySelect);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_ViewEncoreTutorial);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_MysticGetRuby);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_MysticStealRuby);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_MysticEscape);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_AIZEncoreTutorial);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_CameraPanToHBHPile);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_MysticPassRuby);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_KingActivate);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_RubyActivated);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_RubyWarp);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_LoadGHZ);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_AwaitSaveFinish);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_FadeOutAndReset);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_FadeInAndStart);
    ADD_PUBLIC_FUNC(EncoreIntro_Cutscene_SkipAndFadeOut);
    ADD_PUBLIC_FUNC(EncoreIntro_SaveGameCB);
    ADD_PUBLIC_FUNC(EncoreIntro_PhantomRuby_OscillateFX);
    ADD_PUBLIC_FUNC(EncoreIntro_PhantomRuby_EscapeRight);
    ADD_PUBLIC_FUNC(EncoreIntro_PhantomRuby_Fall);
    ADD_PUBLIC_FUNC(EncoreIntro_PhantomRuby_CapsuleRiseUp);
    ADD_PUBLIC_FUNC(EncoreIntro_PhantomRuby_CapsuleFallDown);
    ADD_PUBLIC_FUNC(EncoreIntro_PlayerState_BuddySel);
    ADD_PUBLIC_FUNC(EncoreIntro_PlayerState_HandleAir);
    ADD_PUBLIC_FUNC(EncoreIntro_PlayerInput_BuddySel);
#endif

    // AIZ/MonkeyDude
    ADD_PUBLIC_FUNC(MonkeyDude_DebugSpawn);
    ADD_PUBLIC_FUNC(MonkeyDude_State_Init);
    ADD_PUBLIC_FUNC(MonkeyDude_HandleBodyPart);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MonkeyDude_HandleStates);
#endif
    ADD_PUBLIC_FUNC(MonkeyDude_State_Laugh);
    ADD_PUBLIC_FUNC(MonkeyDude_State_MoveArm);
    ADD_PUBLIC_FUNC(MonkeyDude_State_MoveBody);
    ADD_PUBLIC_FUNC(MonkeyDude_StateBody_ArmRaise);
    ADD_PUBLIC_FUNC(MonkeyDude_StateBody_Throw);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MonkeyDude_State_Coconut);
#endif

    // AIZ/Rhinobot
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Rhinobot_DebugSpawn);
    ADD_PUBLIC_FUNC(Rhinobot_CheckTileCollisions);
    ADD_PUBLIC_FUNC(Rhinobot_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Rhinobot_CheckOffScreen);
    ADD_PUBLIC_FUNC(Rhinobot_Delay_Charge);
    ADD_PUBLIC_FUNC(Rhinobot_Delay_Skidding);
    ADD_PUBLIC_FUNC(Rhinobot_Delay_SkidFinish);
    ADD_PUBLIC_FUNC(Rhinobot_State_Init);
    ADD_PUBLIC_FUNC(Rhinobot_State_Moving);
    ADD_PUBLIC_FUNC(Rhinobot_State_Skidding);
    ADD_PUBLIC_FUNC(Rhinobot_State_Idle);
    ADD_PUBLIC_FUNC(Rhinobot_State_Fall);
#endif

    // AIZ/SchrodingersCapsule
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(SchrodingersCapsule_State_Init);
    ADD_PUBLIC_FUNC(SchrodingersCapsule_State_HandleBounds);
    ADD_PUBLIC_FUNC(SchrodingersCapsule_State_Activated);
    ADD_PUBLIC_FUNC(SchrodingersCapsule_State_Explode);
    ADD_PUBLIC_FUNC(SchrodingersCapsule_State_SetupActClear);
#endif

    // AIZ/Sweep
    ADD_PUBLIC_FUNC(Sweep_DebugSpawn);
    ADD_PUBLIC_FUNC(Sweep_CheckOffScreen);
    ADD_PUBLIC_FUNC(Sweep_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Sweep_CheckShoot);
    ADD_PUBLIC_FUNC(Sweep_State_Init);
    ADD_PUBLIC_FUNC(Sweep_State_Idle);
    ADD_PUBLIC_FUNC(Sweep_State_Dash);
    ADD_PUBLIC_FUNC(Sweep_State_Stop);
    ADD_PUBLIC_FUNC(Sweep_State_FiredShot);
    ADD_PUBLIC_FUNC(Sweep_State_Turn);
    ADD_PUBLIC_FUNC(Sweep_State_Projectile);

    // BSS/BSS_HUD
    ADD_PUBLIC_FUNC(BSS_HUD_DrawNumbers);

    // BSS/BSS_Message
    ADD_PUBLIC_FUNC(BSS_Message_State_GetBS);
    ADD_PUBLIC_FUNC(BSS_Message_State_GetBSWait);
    ADD_PUBLIC_FUNC(BSS_Message_State_Finished);
    ADD_PUBLIC_FUNC(BSS_Message_State_Perfect);
    ADD_PUBLIC_FUNC(BSS_Message_State_WaitPerfect);
    ADD_PUBLIC_FUNC(BSS_Message_State_MsgFinished);
    ADD_PUBLIC_FUNC(BSS_Message_TrackProgressCB);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(BSS_Message_State_SaveGameProgress);
#endif
    ADD_PUBLIC_FUNC(BSS_Message_State_LoadPrevScene);

    // BSS/BSS_Player
    ADD_PUBLIC_FUNC(BSS_Player_Input_P1);
    ADD_PUBLIC_FUNC(BSS_Player_Input_P2);

    // BSS/BSS_Setup
    ADD_PUBLIC_FUNC(BSS_Setup_GetStageID);
    ADD_PUBLIC_FUNC(BSS_Setup_SetupPalette);
    ADD_PUBLIC_FUNC(BSS_Setup_SetupFrustum);
    ADD_PUBLIC_FUNC(BSS_Setup_CollectRing);
    ADD_PUBLIC_FUNC(BSS_Setup_GetStartupInfo);
    ADD_PUBLIC_FUNC(BSS_Setup_State_GlobeJettison);
    ADD_PUBLIC_FUNC(BSS_Setup_HandleSteppedObjects);
    ADD_PUBLIC_FUNC(BSS_Setup_HandleCollectableMovement);
    ADD_PUBLIC_FUNC(BSS_Setup_State_GlobeEmerald);
    ADD_PUBLIC_FUNC(BSS_Setup_State_StartGlobeTeleport);
    ADD_PUBLIC_FUNC(BSS_Setup_State_GlobeExit);
    ADD_PUBLIC_FUNC(BSS_Setup_State_GlobeMoveZ);
    ADD_PUBLIC_FUNC(BSS_Setup_State_GlobeTurnLeft);
    ADD_PUBLIC_FUNC(BSS_Setup_State_GlobeTurnRight);
    ADD_PUBLIC_FUNC(BSS_Setup_State_FinishGlobeTeleport);
    ADD_PUBLIC_FUNC(BSS_Setup_CheckSphereValid);
    ADD_PUBLIC_FUNC(BSS_Setup_LaunchSpheres);
    ADD_PUBLIC_FUNC(BSS_Setup_SetupFinishSequence);
    ADD_PUBLIC_FUNC(BSS_Setup_ScanSphereChain_Up);
    ADD_PUBLIC_FUNC(BSS_Setup_ScanSphereChain_Down);
    ADD_PUBLIC_FUNC(BSS_Setup_ScanSphereChain_Left);
    ADD_PUBLIC_FUNC(BSS_Setup_ScanSphereChain_Right);
    ADD_PUBLIC_FUNC(BSS_Setup_GetChainedSphereCount);
    ADD_PUBLIC_FUNC(BSS_Setup_ProcessChain);

    // CPZ/AmoebaDroid
    ADD_PUBLIC_FUNC(AmoebaDroid_HandleSmallBlobMovement);
    ADD_PUBLIC_FUNC(AmoebaDroid_HandleSmallBlobRelease);
    ADD_PUBLIC_FUNC(AmoebaDroid_Hit);
    ADD_PUBLIC_FUNC(AmoebaDroid_Explode);
    ADD_PUBLIC_FUNC(AmoebaDroid_CheckHit);
    ADD_PUBLIC_FUNC(AmoebaDroid_CheckPlayerHit);
    ADD_PUBLIC_FUNC(AmoebaDroid_Draw_AmoebaDroid);
    ADD_PUBLIC_FUNC(AmoebaDroid_Draw_BigBlob);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_SetupArena);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_SetupWaterLevel);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_DropIn);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_DropIntoPool);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_SurfaceFromPool);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_ChooseAttack);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_SwimLeft);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_SwimRight);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_ExitPool);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_BounceAttack);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_GatherBlobs);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_SpinBlobs);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_BigBlob);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_SmallBlob);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_BigBlob_Disappear);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_PoolSplash_Delayed);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_PoolSplash);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_Destroyed);
    ADD_PUBLIC_FUNC(AmoebaDroid_State_DropSignPost);

    // CPZ/Ball
    ADD_PUBLIC_FUNC(Ball_DebugSpawn);
    ADD_PUBLIC_FUNC(Ball_HandleInteractions);
    ADD_PUBLIC_FUNC(Ball_CheckOffScreen);
    ADD_PUBLIC_FUNC(Ball_SpawnSplashes);
    ADD_PUBLIC_FUNC(Ball_State_Init);
    ADD_PUBLIC_FUNC(Ball_State_AwaitPlayer);
    ADD_PUBLIC_FUNC(Ball_State_TargetingPlayer);
    ADD_PUBLIC_FUNC(Ball_State_ChemicalDrop);
    ADD_PUBLIC_FUNC(Ball_State_Splash);
    ADD_PUBLIC_FUNC(Ball_State_StraightMovement);
    ADD_PUBLIC_FUNC(Ball_State_Spawner);

    // CPZ/Bubbler
    ADD_PUBLIC_FUNC(Bubbler_DebugSpawn);
    ADD_PUBLIC_FUNC(Bubbler_HandleInteractions);
    ADD_PUBLIC_FUNC(Bubbler_HandleProjectileInteractions);
    ADD_PUBLIC_FUNC(Bubbler_CheckOffScreen);
    ADD_PUBLIC_FUNC(Bubbler_State_Init);
    ADD_PUBLIC_FUNC(Bubbler_State_MotherPatrol);
    ADD_PUBLIC_FUNC(Bubbler_State_FoundPlayer);
    ADD_PUBLIC_FUNC(Bubbler_State_AttackPlayer);
    ADD_PUBLIC_FUNC(Bubbler_StateProjectile_Seed);
    ADD_PUBLIC_FUNC(Bubbler_StateProjectile_Bubbler);

    // CPZ/CaterkillerJr
    ADD_PUBLIC_FUNC(CaterkillerJr_DebugSpawn);
    ADD_PUBLIC_FUNC(CaterkillerJr_SetupPositions);
    ADD_PUBLIC_FUNC(CaterkillerJr_State_SetupVelocities);
    ADD_PUBLIC_FUNC(CaterkillerJr_State_Move);

    // CPZ/ChemBubble
    ADD_PUBLIC_FUNC(ChemBubble_State_Appear);
    ADD_PUBLIC_FUNC(ChemBubble_State_Rising);
    ADD_PUBLIC_FUNC(ChemBubble_State_Surfaced);

    // CPZ/ChemicalBall
    ADD_PUBLIC_FUNC(ChemicalBall_CheckHit);
    ADD_PUBLIC_FUNC(ChemicalBall_State_MoveArc);
    ADD_PUBLIC_FUNC(ChemicalBall_State_MoveVertical);

    // CPZ/ChemicalPool
    ADD_PUBLIC_FUNC(ChemicalPool_ChangeState);
    ADD_PUBLIC_FUNC(ChemicalPool_ProcessDeformations);
    ADD_PUBLIC_FUNC(ChemicalPool_SetDeform);
    ADD_PUBLIC_FUNC(ChemicalPool_SpawnDebris);
    ADD_PUBLIC_FUNC(ChemicalPool_SetupColors);
    ADD_PUBLIC_FUNC(ChemicalPool_State_HarmfulBlue);
    ADD_PUBLIC_FUNC(ChemicalPool_State_Green);
    ADD_PUBLIC_FUNC(ChemicalPool_State_Cyan);
    ADD_PUBLIC_FUNC(ChemicalPool_State_Changing);

    // CPZ/CPZ1Intro
    ADD_PUBLIC_FUNC(CPZ1Intro_SetupCutscene);
    ADD_PUBLIC_FUNC(CPZ1Intro_Particle_ChemDrop);
    ADD_PUBLIC_FUNC(CPZ1Intro_HandleRubyHover);
    ADD_PUBLIC_FUNC(CPZ1Intro_CheckSonicAnimFinish);
    ADD_PUBLIC_FUNC(CPZ1Intro_CheckTailsAnimFinish);
    ADD_PUBLIC_FUNC(CPZ1Intro_CheckKnuxAnimFinish);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(CPZ1Intro_CheckMightyAnimFinish);
    ADD_PUBLIC_FUNC(CPZ1Intro_CheckRayAnimFinish);
    ADD_PUBLIC_FUNC(CPZ1Intro_Cutscene_RubyWarp);
#endif
    ADD_PUBLIC_FUNC(CPZ1Intro_Cutscene_PostWarpDrop);
    ADD_PUBLIC_FUNC(CPZ1Intro_Cutscene_Waiting);
    ADD_PUBLIC_FUNC(CPZ1Intro_Cutscene_ChemicalDrop);
    ADD_PUBLIC_FUNC(CPZ1Intro_Cutscene_PlayerChemicalReact);
    ADD_PUBLIC_FUNC(CPZ1Intro_Cutscene_ReadyStage);

    // CPZ/CPZ2Outro
    ADD_PUBLIC_FUNC(CPZ2Outro_SetupCutscene);
    ADD_PUBLIC_FUNC(CPZ2Outro_Cutscene_Outro);

    // CPZ/CPZBoss
    ADD_PUBLIC_FUNC(CPZBoss_DrawHook_SetupPuyoHUD);
    ADD_PUBLIC_FUNC(CPZBoss_DrawHook_RemovePuyoHUD);
    ADD_PUBLIC_FUNC(CPZBoss_Explode_Eggman);
    ADD_PUBLIC_FUNC(CPZBoss_Explode_Player);
    ADD_PUBLIC_FUNC(CPZBoss_CheckMatchReset);
    ADD_PUBLIC_FUNC(CPZBoss_State_SetupArena);
    ADD_PUBLIC_FUNC(CPZBoss_State_EnterPlayer);
    ADD_PUBLIC_FUNC(CPZBoss_State_CheckPlayerReady);
    ADD_PUBLIC_FUNC(CPZBoss_State_PlayPlayerEnterAnim);
    ADD_PUBLIC_FUNC(CPZBoss_State_SetupMatch);
    ADD_PUBLIC_FUNC(CPZBoss_State_HandleMatch_Player);
    ADD_PUBLIC_FUNC(CPZBoss_State_HandleMatch_Eggman);
    ADD_PUBLIC_FUNC(CPZBoss_State_HandleMatchFinish_EggmanLose);
    ADD_PUBLIC_FUNC(CPZBoss_State_PlayerWin);
    ADD_PUBLIC_FUNC(CPZBoss_State_HandleMatchFinish_PlayerLose);
    ADD_PUBLIC_FUNC(CPZBoss_State_EggmanFall);
    ADD_PUBLIC_FUNC(CPZBoss_State_PlayerExit);
    ADD_PUBLIC_FUNC(CPZBoss_State_Destroyed);

    // CPZ/CPZSetup
    ADD_PUBLIC_FUNC(CPZSetup_BGSwitch_Act2BG);
    ADD_PUBLIC_FUNC(CPZSetup_BGSwitch_Act1BG);
    ADD_PUBLIC_FUNC(CPZSetup_StageFinish_EndAct1);
    ADD_PUBLIC_FUNC(CPZSetup_StageFinish_EndAct2);

    // CPZ/CPZShutter
    ADD_PUBLIC_FUNC(CPZShutter_State_Open);
    ADD_PUBLIC_FUNC(CPZShutter_State_Close);

    // CPZ/DNARiser
    ADD_PUBLIC_FUNC(DNARiser_State_BubbleBurst);
    ADD_PUBLIC_FUNC(DNARiser_SetupBurst);
    ADD_PUBLIC_FUNC(DNARiser_CalculateScale);
    ADD_PUBLIC_FUNC(DNARiser_State_Init);
    ADD_PUBLIC_FUNC(DNARiser_State_HandleInteractions);
    ADD_PUBLIC_FUNC(DNARiser_State_HelixRise);
    ADD_PUBLIC_FUNC(DNARiser_State_HelixBurst);
    ADD_PUBLIC_FUNC(DNARiser_State_ResetRiser);
    ADD_PUBLIC_FUNC(DNARiser_State_OrbSetup);
    ADD_PUBLIC_FUNC(DNARiser_State_OrbIdle);
    ADD_PUBLIC_FUNC(DNARiser_State_OrbFall);
    ADD_PUBLIC_FUNC(DNARiser_Draw_Main);
    ADD_PUBLIC_FUNC(DNARiser_Draw_Helix);

    // CPZ/Grabber
    ADD_PUBLIC_FUNC(Grabber_DebugSpawn);
    ADD_PUBLIC_FUNC(Grabber_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Grabber_CheckOffScreen);
    ADD_PUBLIC_FUNC(Grabber_HandleExplode);
    ADD_PUBLIC_FUNC(Grabber_State_Init);
    ADD_PUBLIC_FUNC(Grabber_State_CheckForGrab);
    ADD_PUBLIC_FUNC(Grabber_State_GrabDelay);
    ADD_PUBLIC_FUNC(Grabber_State_HandleTurn);
    ADD_PUBLIC_FUNC(Grabber_State_TryToGrab);
    ADD_PUBLIC_FUNC(Grabber_State_RiseUp);
    ADD_PUBLIC_FUNC(Grabber_State_GrabbedPlayer);
    ADD_PUBLIC_FUNC(Grabber_State_Struggle);
    ADD_PUBLIC_FUNC(Grabber_State_PlayerEscaped);

    // CPZ/OneWayDoor
    ADD_PUBLIC_FUNC(OneWayDoor_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(OneWayDoor_State_MoveDown);
    ADD_PUBLIC_FUNC(OneWayDoor_State_MoveUp);
    ADD_PUBLIC_FUNC(OneWayDoor_Draw_MMZ);
    ADD_PUBLIC_FUNC(OneWayDoor_Draw_CPZ);

    // CPZ/Reagent
    ADD_PUBLIC_FUNC(Reagent_State_CheckPoolCollisions);
    ADD_PUBLIC_FUNC(Reagent_State_ChangingPoolType);

    // CPZ/RotatingStair
    ADD_PUBLIC_FUNC(RotatingStair_State_Move);
    ADD_PUBLIC_FUNC(RotatingStair_State_Move_Intervals);

    // CPZ/SpeedBooster
    ADD_PUBLIC_FUNC(SpeedBooster_DebugSpawn);
    ADD_PUBLIC_FUNC(SpeedBooster_DebugDraw);
    ADD_PUBLIC_FUNC(SpeedBooster_State_SpeedBooster);
    ADD_PUBLIC_FUNC(SpeedBooster_HandleInteractions);
    ADD_PUBLIC_FUNC(SpeedBooster_State_SSZFire);
    ADD_PUBLIC_FUNC(SpeedBooster_State_SSZRecoil);
    ADD_PUBLIC_FUNC(SpeedBooster_State_SSZRetract);
    ADD_PUBLIC_FUNC(SpeedBooster_State_SSZBullet);

    // CPZ/Spiny
    ADD_PUBLIC_FUNC(Spiny_DebugSpawn);
    ADD_PUBLIC_FUNC(Spiny_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Spiny_CheckOffScreen);
    ADD_PUBLIC_FUNC(Spiny_State_Init);
    ADD_PUBLIC_FUNC(Spiny_State_Floor);
    ADD_PUBLIC_FUNC(Spiny_State_Shoot_Floor);
    ADD_PUBLIC_FUNC(Spiny_State_Wall);
    ADD_PUBLIC_FUNC(Spiny_State_Shoot_Wall);
    ADD_PUBLIC_FUNC(Spiny_State_Shot);
    ADD_PUBLIC_FUNC(Spiny_State_ShotDisappear);

    // CPZ/Springboard
    ADD_PUBLIC_FUNC(Springboard_DebugSpawn);

    // CPZ/Staircase
    ADD_PUBLIC_FUNC(Staircase_SfxCheck_HitBlocks);
    ADD_PUBLIC_FUNC(Staircase_State_Idle);
    ADD_PUBLIC_FUNC(Staircase_State_Wait);
    ADD_PUBLIC_FUNC(Staircase_State_MoveBlocks);
    ADD_PUBLIC_FUNC(Staircase_State_MovedBlocks);
    ADD_PUBLIC_FUNC(Staircase_Draw_Blocks);
    ADD_PUBLIC_FUNC(Staircase_Draw_Shake);

    // CPZ/StickyPlatform
    ADD_PUBLIC_FUNC(StickyPlatform_Interact);
    ADD_PUBLIC_FUNC(StickyPlatform_State_HandleMovement);
    ADD_PUBLIC_FUNC(StickyPlatform_State_MoveBack);
    ADD_PUBLIC_FUNC(StickyPlatform_State_MoveBackForth);
    ADD_PUBLIC_FUNC(StickyPlatform_State_Oscillating);

    // CPZ/TippingPlatform
    ADD_PUBLIC_FUNC(TippingPlatform_State_Tipping_Boss);
    ADD_PUBLIC_FUNC(TippingPlatform_State_RestorePlatform);
    ADD_PUBLIC_FUNC(TippingPlatform_State_Tipping);
    ADD_PUBLIC_FUNC(TippingPlatform_State_Restore);
    ADD_PUBLIC_FUNC(TippingPlatform_State_Tipping_Delay);

    // CPZ/TransportTube
    ADD_PUBLIC_FUNC(TransportTube_SetupDirections);
    ADD_PUBLIC_FUNC(TransportTube_HandleVelocityChange);
    ADD_PUBLIC_FUNC(TransportTube_State_ChangeDir);
    ADD_PUBLIC_FUNC(TransportTube_State_Entry);
    ADD_PUBLIC_FUNC(TransportTube_State_ToTargetEntity);
    ADD_PUBLIC_FUNC(TransportTube_State_TargetSeqNode);
    ADD_PUBLIC_FUNC(TransportTube_State_ChooseDir);
    ADD_PUBLIC_FUNC(TransportTube_State_Exit);

    // CPZ/TubeSpring
    ADD_PUBLIC_FUNC(TubeSpring_State_Idle);
    ADD_PUBLIC_FUNC(TubeSpring_State_Springing);
    ADD_PUBLIC_FUNC(TubeSpring_State_Pullback);
    ADD_PUBLIC_FUNC(TubeSpring_HandleInteractions);

    // CPZ/TwistedTubes
    ADD_PUBLIC_FUNC(TwistedTubes_State_HandleInteractions);
    ADD_PUBLIC_FUNC(TwistedTubes_State_PlayerEntryL);
    ADD_PUBLIC_FUNC(TwistedTubes_State_PlayerEntryR);
    ADD_PUBLIC_FUNC(TwistedTubes_State_FirstLoopR);
    ADD_PUBLIC_FUNC(TwistedTubes_State_TubeLoops);
    ADD_PUBLIC_FUNC(TwistedTubes_State_FirstLoopL);
    ADD_PUBLIC_FUNC(TwistedTubes_State_ExitL);
    ADD_PUBLIC_FUNC(TwistedTubes_State_ExitR);

    // Common/BreakableWall
    ADD_PUBLIC_FUNC(BreakableWall_State_Tile);
    ADD_PUBLIC_FUNC(BreakableWall_State_FallingTile);
    ADD_PUBLIC_FUNC(BreakableWall_State_Wall);
    ADD_PUBLIC_FUNC(BreakableWall_State_Floor);
    ADD_PUBLIC_FUNC(BreakableWall_State_BurrowFloor);
    ADD_PUBLIC_FUNC(BreakableWall_State_BurrowFloorUp);
    ADD_PUBLIC_FUNC(BreakableWall_State_Ceiling);
    ADD_PUBLIC_FUNC(BreakableWall_Draw_Wall);
    ADD_PUBLIC_FUNC(BreakableWall_Draw_Floor);
    ADD_PUBLIC_FUNC(BreakableWall_Draw_Tile);
    ADD_PUBLIC_FUNC(BreakableWall_CheckBreak_Wall);
    ADD_PUBLIC_FUNC(BreakableWall_CheckBreak_Floor);
    ADD_PUBLIC_FUNC(BreakableWall_CheckBreak_BurrowFloor);
    ADD_PUBLIC_FUNC(BreakableWall_CheckBreak_BurrowFloorUp);
    ADD_PUBLIC_FUNC(BreakableWall_CheckBreak_Ceiling);
    ADD_PUBLIC_FUNC(BreakableWall_Break);
    ADD_PUBLIC_FUNC(BreakableWall_GiveScoreBonus);

    // Common/Button
    ADD_PUBLIC_FUNC(Button_CheckEggmanCollisions);
    ADD_PUBLIC_FUNC(Button_CheckPRiderCollisions);
    ADD_PUBLIC_FUNC(Button_HandleFloor);
    ADD_PUBLIC_FUNC(Button_HandleRoof);
    ADD_PUBLIC_FUNC(Button_HandleRWall);
    ADD_PUBLIC_FUNC(Button_HandleLWall);

    // Common/CollapsingPlatform
    ADD_PUBLIC_FUNC(CollapsingPlatform_State_Left);
    ADD_PUBLIC_FUNC(CollapsingPlatform_State_Right);
    ADD_PUBLIC_FUNC(CollapsingPlatform_State_Center);
    ADD_PUBLIC_FUNC(CollapsingPlatform_State_LeftRight);
    ADD_PUBLIC_FUNC(CollapsingPlatform_State_LeftRightCenter);

    // Common/Decoration
    ADD_PUBLIC_FUNC(Decoration_DrawSprite);

    // Common/Eggman
    ADD_PUBLIC_FUNC(Eggman_State_ProcessAnimation);
    ADD_PUBLIC_FUNC(Eggman_State_ProcessThenSet);
    ADD_PUBLIC_FUNC(Eggman_State_ProcessUntilEnd);
    ADD_PUBLIC_FUNC(Eggman_State_ProcessAirThenSet);
    ADD_PUBLIC_FUNC(Eggman_State_FallUntilTimerReset);
    ADD_PUBLIC_FUNC(Eggman_State_FallAndCollide);
    ADD_PUBLIC_FUNC(Eggman_State_WalkOffScreen);

    // Common/ForceSpin
    ADD_PUBLIC_FUNC(ForceSpin_DrawSprites);
    ADD_PUBLIC_FUNC(ForceSpin_SetPlayerState);

    // Common/ForceUnstick
    ADD_PUBLIC_FUNC(ForceUnstick_DrawSprites);

    // Common/ParallaxSprite
    ADD_PUBLIC_FUNC(ParallaxSprite_State_Normal);
    ADD_PUBLIC_FUNC(ParallaxSprite_State_Emitter);
    ADD_PUBLIC_FUNC(ParallaxSprite_State_Particle);
    ADD_PUBLIC_FUNC(ParallaxSprite_State_FadeIntoHalf);
    ADD_PUBLIC_FUNC(ParallaxSprite_State_FadeOut);

    // Common/Platform
    ADD_PUBLIC_FUNC(Platform_Collision_Platform);
    ADD_PUBLIC_FUNC(Platform_Collision_Solid);
    ADD_PUBLIC_FUNC(Platform_Collision_Solid_NoCrush);
    ADD_PUBLIC_FUNC(Platform_Collision_Solid_Hurt_Sides);
    ADD_PUBLIC_FUNC(Platform_Collision_Solid_Hurt_Bottom);
    ADD_PUBLIC_FUNC(Platform_Collision_Solid_Hurt_Top);
    ADD_PUBLIC_FUNC(Platform_Collision_Solid_Hold);
    ADD_PUBLIC_FUNC(Platform_Collision_Solid_Barrel);
    ADD_PUBLIC_FUNC(Platform_Collision_Sticky);
    ADD_PUBLIC_FUNC(Platform_Collision_Tiles);
    ADD_PUBLIC_FUNC(Platform_Collision_Hurt);
    ADD_PUBLIC_FUNC(Platform_Collision_None);
    ADD_PUBLIC_FUNC(Platform_State_Fixed);
    ADD_PUBLIC_FUNC(Platform_State_Fall);
    ADD_PUBLIC_FUNC(Platform_State_Falling);
    ADD_PUBLIC_FUNC(Platform_State_Falling2);
    ADD_PUBLIC_FUNC(Platform_State_Hold);
    ADD_PUBLIC_FUNC(Platform_State_Linear);
    ADD_PUBLIC_FUNC(Platform_State_Circular);
    ADD_PUBLIC_FUNC(Platform_State_Swing);
    ADD_PUBLIC_FUNC(Platform_State_Clacker);
    ADD_PUBLIC_FUNC(Platform_State_Push_Init);
    ADD_PUBLIC_FUNC(Platform_State_Push);
    ADD_PUBLIC_FUNC(Platform_State_Push_SlideOffL);
    ADD_PUBLIC_FUNC(Platform_State_Push_SlideOffR);
    ADD_PUBLIC_FUNC(Platform_State_Push_Fall);
    ADD_PUBLIC_FUNC(Platform_State_Path);
    ADD_PUBLIC_FUNC(Platform_State_PathStop);
    ADD_PUBLIC_FUNC(Platform_State_Track);
    ADD_PUBLIC_FUNC(Platform_State_React);
    ADD_PUBLIC_FUNC(Platform_State_Hover_React);
    ADD_PUBLIC_FUNC(Platform_State_ReactMove);
    ADD_PUBLIC_FUNC(Platform_State_ReactSlow);
    ADD_PUBLIC_FUNC(Platform_State_Hover);
    ADD_PUBLIC_FUNC(Platform_State_ReactWait);
    ADD_PUBLIC_FUNC(Platform_State_DoorSlide);
    ADD_PUBLIC_FUNC(Platform_State_PathReact);
    ADD_PUBLIC_FUNC(Platform_State_Child);
    ADD_PUBLIC_FUNC(Platform_State_SwingReact);
    ADD_PUBLIC_FUNC(Platform_State_Swing2);
    ADD_PUBLIC_FUNC(Platform_State_SwingWait);
    ADD_PUBLIC_FUNC(Platform_State_SwingReturn);
    ADD_PUBLIC_FUNC(Platform_State_TrackReact);
    ADD_PUBLIC_FUNC(Platform_State_Track2);
    ADD_PUBLIC_FUNC(Platform_State_TrackWait);
    ADD_PUBLIC_FUNC(Platform_State_TrackReturn);
    ADD_PUBLIC_FUNC(Platform_State_DipRock);

    // Common/PlatformControl
    ADD_PUBLIC_FUNC(PlatformControl_ManagePlatformVelocity);

    // Common/Projectile
    ADD_PUBLIC_FUNC(Projectile_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Projectile_State_Move);
    ADD_PUBLIC_FUNC(Projectile_State_MoveGravity);

    // Common/SpinBooster
    ADD_PUBLIC_FUNC(SpinBooster_GetRollDir);
    ADD_PUBLIC_FUNC(SpinBooster_HandleRollDir);
    ADD_PUBLIC_FUNC(SpinBooster_ApplyRollVelocity);
    ADD_PUBLIC_FUNC(SpinBooster_DrawArrow);
    ADD_PUBLIC_FUNC(SpinBooster_DrawSprites);
    ADD_PUBLIC_FUNC(SpinBooster_HandleForceRoll);

    // Common/Water
    ADD_PUBLIC_FUNC(Water_DrawHook_ApplyWaterPalette);
    ADD_PUBLIC_FUNC(Water_DrawHook_RemoveWaterPalette);
    ADD_PUBLIC_FUNC(Water_SetupTagLink);
    ADD_PUBLIC_FUNC(Water_SpawnBubble);
    ADD_PUBLIC_FUNC(Water_SpawnCountDownBubble);
    ADD_PUBLIC_FUNC(Water_GetPlayerBubble);
    ADD_PUBLIC_FUNC(Water_HandleBubbleMovement);
    ADD_PUBLIC_FUNC(Water_State_BtnBigBubble);
    ADD_PUBLIC_FUNC(Water_PopBigBubble);
    ADD_PUBLIC_FUNC(Water_State_Water);
    ADD_PUBLIC_FUNC(Water_State_Pool);
    ADD_PUBLIC_FUNC(Water_State_Splash);
    ADD_PUBLIC_FUNC(Water_State_Bubble);
    ADD_PUBLIC_FUNC(Water_State_BubbleBreathed);
    ADD_PUBLIC_FUNC(Water_State_BigBubble);
    ADD_PUBLIC_FUNC(Water_State_Bubbler);
    ADD_PUBLIC_FUNC(Water_State_Countdown);
    ADD_PUBLIC_FUNC(Water_State_CountdownFollow);
    ADD_PUBLIC_FUNC(Water_State_HeightTrigger);
    ADD_PUBLIC_FUNC(Water_Draw_Water);
    ADD_PUBLIC_FUNC(Water_Draw_Pool);
    ADD_PUBLIC_FUNC(Water_Draw_Splash);
    ADD_PUBLIC_FUNC(Water_Draw_Countdown);
    ADD_PUBLIC_FUNC(Water_Draw_Bubbler);
    ADD_PUBLIC_FUNC(Water_Draw_Bubble);

    // Continue/ContinuePlayer
    ADD_PUBLIC_FUNC(ContinuePlayer_HandleDashAnim);
    ADD_PUBLIC_FUNC(ContinuePlayer_State_Idle);
    ADD_PUBLIC_FUNC(ContinuePlayer_State_ChargeDash);
    ADD_PUBLIC_FUNC(ContinuePlayer_State_DashRelease);

    // Continue/ContinueSetup
    ADD_PUBLIC_FUNC(ContinueSetup_State_FadeIn);
    ADD_PUBLIC_FUNC(ContinueSetup_State_HandleCountdown);
    ADD_PUBLIC_FUNC(ContinueSetup_State_ContinueGame);
    ADD_PUBLIC_FUNC(ContinueSetup_State_ReturnToMenu);

    // Credits/CreditsSetup
    ADD_PUBLIC_FUNC(CreditsSetup_LoadCreditsStrings);

    // Credits/EncoreGoodEnd
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(EncoreGoodEnd_SetupDecorations);
    ADD_PUBLIC_FUNC(EncoreGoodEnd_SetupPlayer);
    ADD_PUBLIC_FUNC(EncoreGoodEnd_StatePlayer_MoveToPos);
    ADD_PUBLIC_FUNC(EncoreGoodEnd_StatePlayer_EndingIdle);
    ADD_PUBLIC_FUNC(EncoreGoodEnd_StatePlayer_EndingSonic);
    ADD_PUBLIC_FUNC(EncoreGoodEnd_Cutscene_MoveToPlace);
    ADD_PUBLIC_FUNC(EncoreGoodEnd_Cutscene_WaitForMovementFinish);
    ADD_PUBLIC_FUNC(EncoreGoodEnd_Cutscene_ClinkGlasses);
    ADD_PUBLIC_FUNC(EncoreGoodEnd_Cutscene_KingAppear);
    ADD_PUBLIC_FUNC(EncoreGoodEnd_Cutscene_ThanksForPlaying);
    ADD_PUBLIC_FUNC(EncoreGoodEnd_Cutscene_FinishCutscene);
    ADD_PUBLIC_FUNC(EncoreGoodEnd_Cutscene_SkipCB);
#endif

    // Credits/TAEmerald
    ADD_PUBLIC_FUNC(TAEmerald_State_Oscillate);
    ADD_PUBLIC_FUNC(TAEmerald_State_MoveCircle);

    // Credits/TryAgain
    ADD_PUBLIC_FUNC(TryAgain_State_Init);
    ADD_PUBLIC_FUNC(TryAgain_State_EnterEggman);
    ADD_PUBLIC_FUNC(TryAgain_State_EggmanLaugh);
    ADD_PUBLIC_FUNC(TryAgain_State_Stinger);

    // Credits/TryAgainE
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(TryAgainE_SetupEmeralds);
    ADD_PUBLIC_FUNC(TryAgainE_State_Stinger);
#endif
}
