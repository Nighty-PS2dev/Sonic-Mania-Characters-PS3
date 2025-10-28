#include "../Game.h" // Or equivalent main header for function declarations & ModAPI access

#ifndef ADD_PUBLIC_FUNC
#define ADD_PUBLIC_FUNC(func) Mod.AddPublicFunction(#func, (void *)(func))
#endif

void InitPublicFunctions_Part2(void)
{
    // Cutscene/ChaosEmerald
    ADD_PUBLIC_FUNC(ChaosEmerald_State_None);
    ADD_PUBLIC_FUNC(ChaosEmerald_State_Rotate);

    // Cutscene/CutsceneHBH
    ADD_PUBLIC_FUNC(CutsceneHBH_SetupColors);
    ADD_PUBLIC_FUNC(CutsceneHBH_SetupPalettes);
    ADD_PUBLIC_FUNC(CutsceneHBH_StorePalette);
    ADD_PUBLIC_FUNC(CutsceneHBH_RestorePalette);
    ADD_PUBLIC_FUNC(CutsceneHBH_LoadSprites);
    ADD_PUBLIC_FUNC(CutsceneHBH_GetEntity);
    ADD_PUBLIC_FUNC(CutsceneHBH_ShinobiJumpSetup);
    ADD_PUBLIC_FUNC(CutsceneHBH_ShinobiBounceSetup);
    ADD_PUBLIC_FUNC(CutsceneHBH_RiderSetup);
    ADD_PUBLIC_FUNC(CutsceneHBH_KingSetup);
    ADD_PUBLIC_FUNC(CutsceneHBH_KingTMZ2Setup);
    ADD_PUBLIC_FUNC(CutsceneHBH_State_GunnerExit);
    ADD_PUBLIC_FUNC(CutsceneHBH_State_ShinobiBounce);
    ADD_PUBLIC_FUNC(CutsceneHBH_State_ShinobiJump);
    ADD_PUBLIC_FUNC(CutsceneHBH_State_MysticExit);
    ADD_PUBLIC_FUNC(CutsceneHBH_State_RiderMove);
    ADD_PUBLIC_FUNC(CutsceneHBH_State_RiderExit);
    ADD_PUBLIC_FUNC(CutsceneHBH_State_KingExit);
    ADD_PUBLIC_FUNC(CutsceneHBH_State_KingFall);
    ADD_PUBLIC_FUNC(CutsceneHBH_State_KingTMZ2_Fall);
    ADD_PUBLIC_FUNC(CutsceneHBH_State_KingTMZ2_Land);

    // Cutscene/CutsceneRules
    ADD_PUBLIC_FUNC(CutsceneRules_SetupEntity);
    ADD_PUBLIC_FUNC(CutsceneRules_DrawCutsceneBounds);

    // Cutscene/CutsceneSeq
    ADD_PUBLIC_FUNC(CutsceneSeq_NewState);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(CutsceneSeq_CheckSkip);
    ADD_PUBLIC_FUNC(CutsceneSeq_SetSkipType);
    ADD_PUBLIC_FUNC(CutsceneSeq_SetSkipTypeCallback);
#endif
    ADD_PUBLIC_FUNC(CutsceneSeq_GetEntity);
    ADD_PUBLIC_FUNC(CutsceneSeq_LockPlayerControl);
    ADD_PUBLIC_FUNC(CutsceneSeq_LockAllPlayerControl);
    ADD_PUBLIC_FUNC(CutsceneSeq_StartSequence);

    // Cutscene/FXExpandRing
    ADD_PUBLIC_FUNC(FXExpandRing_State_FadeIn);
    ADD_PUBLIC_FUNC(FXExpandRing_State_Expand);
    ADD_PUBLIC_FUNC(FXExpandRing_State_FadeOut);

    // Cutscene/FXFade
    ADD_PUBLIC_FUNC(FXFade_StopAll);
    ADD_PUBLIC_FUNC(FXFade_State_FadeOut);
    ADD_PUBLIC_FUNC(FXFade_State_Wait);
    ADD_PUBLIC_FUNC(FXFade_State_FadeIn);
    ADD_PUBLIC_FUNC(FXFade_State_FadeInBlack);

    // Cutscene/FXRuby
    ADD_PUBLIC_FUNC(FXRuby_SetupLayerDeformation);
    ADD_PUBLIC_FUNC(FXRuby_HandleLayerDeform);
    ADD_PUBLIC_FUNC(FXRuby_State_Expanding);
    ADD_PUBLIC_FUNC(FXRuby_State_Shrinking);
    ADD_PUBLIC_FUNC(FXRuby_State_Idle);
    ADD_PUBLIC_FUNC(FXRuby_State_IncreaseStageDeform);
    ADD_PUBLIC_FUNC(FXRuby_State_DecreaseStageDeform);
    ADD_PUBLIC_FUNC(FXRuby_State_ShrinkAndDestroy);

    // Cutscene/FXSpinRay
    ADD_PUBLIC_FUNC(FXSpinRay_State_FadeIn);
    ADD_PUBLIC_FUNC(FXSpinRay_State_Spinning);
    ADD_PUBLIC_FUNC(FXSpinRay_State_FadeOut);

    // Cutscene/FXWaveRing
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(FXWaveRing_State_FadeIn);
    ADD_PUBLIC_FUNC(FXWaveRing_State_Wait);
    ADD_PUBLIC_FUNC(FXWaveRing_State_FadeOut);
#endif

#if MANIA_USE_PLUS
    // Cutscene/RubyPortal
    ADD_PUBLIC_FUNC(RubyPortal_HandleTileDestruction);
    ADD_PUBLIC_FUNC(RubyPortal_State_AwaitOpenTMZ2);
#endif
    ADD_PUBLIC_FUNC(RubyPortal_State_Opening);
    ADD_PUBLIC_FUNC(RubyPortal_State_Opened);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(RubyPortal_State_SaveGameState);
    ADD_PUBLIC_FUNC(RubyPortal_State_Open_WarpDoor);
#endif
    ADD_PUBLIC_FUNC(RubyPortal_State_Open_Cutscene);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(RubyPortal_State_EncoreEnd);
    ADD_PUBLIC_FUNC(RubyPortal_State_EncoreRampage);
#endif

    // ERZ/ERZGunner
    ADD_PUBLIC_FUNC(ERZGunner_HandleDudExhaust);
    ADD_PUBLIC_FUNC(ERZGunner_HandleMalfunctionDudExhaust);
    ADD_PUBLIC_FUNC(ERZGunner_SpawnDust);
    ADD_PUBLIC_FUNC(ERZGunner_HandleRotations);
    ADD_PUBLIC_FUNC(ERZGunner_CheckPlayerMissileCollisions);
    ADD_PUBLIC_FUNC(ERZGunner_CheckPlayerExplosionCollisions);
    ADD_PUBLIC_FUNC(ERZGunner_Hit);
    ADD_PUBLIC_FUNC(ERZGunner_Draw_Gunner);
    ADD_PUBLIC_FUNC(ERZGunner_Draw_RocketLaunch);
    ADD_PUBLIC_FUNC(ERZGunner_Draw_Rocket);
    ADD_PUBLIC_FUNC(ERZGunner_State_Idle);
    ADD_PUBLIC_FUNC(ERZGunner_State_LaunchRockets);
    ADD_PUBLIC_FUNC(ERZGunner_State_LaunchedRocket);
    ADD_PUBLIC_FUNC(ERZGunner_State_Mortar);
    ADD_PUBLIC_FUNC(ERZGunner_State_Napalm);
    ADD_PUBLIC_FUNC(ERZGunner_State_Dud_Active);
    ADD_PUBLIC_FUNC(ERZGunner_State_Dud_HitByPlayer);
    ADD_PUBLIC_FUNC(ERZGunner_State_Dud_Malfunction);
    ADD_PUBLIC_FUNC(ERZGunner_State_Dud_Explode);
    ADD_PUBLIC_FUNC(ERZGunner_State_NapalmExplosion);
    ADD_PUBLIC_FUNC(ERZGunner_State_MortarExplosion);

    // ERZ/ERZKing
    ADD_PUBLIC_FUNC(ERZKing_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(ERZKing_Hit);
    ADD_PUBLIC_FUNC(ERZKing_HandleFrames);
    ADD_PUBLIC_FUNC(ERZKing_Draw_Body);
    ADD_PUBLIC_FUNC(ERZKing_Draw_Arm);
    ADD_PUBLIC_FUNC(ERZKing_State_SetupArena);
    ADD_PUBLIC_FUNC(ERZKing_State_SetupBody);
    ADD_PUBLIC_FUNC(ERZKing_State_EnterKing);
    ADD_PUBLIC_FUNC(ERZKing_State_FlyAround);
    ADD_PUBLIC_FUNC(ERZKing_State_ChangeHBH);
    ADD_PUBLIC_FUNC(ERZKing_State_Arm);
    ADD_PUBLIC_FUNC(ERZKing_State_Explode);

    // ERZ/ERZMystic
    ADD_PUBLIC_FUNC(ERZMystic_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(ERZMystic_Hit);
    ADD_PUBLIC_FUNC(ERZMystic_SetupNewCupSwap);
    ADD_PUBLIC_FUNC(ERZMystic_Draw_CupSetup);
    ADD_PUBLIC_FUNC(ERZMystic_Draw_CupSwap);
    ADD_PUBLIC_FUNC(ERZMystic_State_Init);
    ADD_PUBLIC_FUNC(ERZMystic_State_SetupInitialCupPos);
    ADD_PUBLIC_FUNC(ERZMystic_State_MoveCupsDownwards);
    ADD_PUBLIC_FUNC(ERZMystic_State_RotateMiddleCup);
    ADD_PUBLIC_FUNC(ERZMystic_State_MoveMiddleCupToFloor);
    ADD_PUBLIC_FUNC(ERZMystic_State_PrepareCupSwap);
    ADD_PUBLIC_FUNC(ERZMystic_State_CupSwapping);
    ADD_PUBLIC_FUNC(ERZMystic_State_RevealMystic);
    ADD_PUBLIC_FUNC(ERZMystic_State_CupBlast);
    ADD_PUBLIC_FUNC(ERZMystic_State_MoveCupsToMystic);

    // ERZ/ERZOutro
    ADD_PUBLIC_FUNC(ERZOutro_SetEmeraldStates);
    ADD_PUBLIC_FUNC(ERZOutro_HandleRubyHover);
    ADD_PUBLIC_FUNC(ERZOutro_Cutscene_AttackEggman);
    ADD_PUBLIC_FUNC(ERZOutro_Cutscene_AttackRecoil);
    ADD_PUBLIC_FUNC(ERZOutro_Cutscene_LoseEmeralds);
    ADD_PUBLIC_FUNC(ERZOutro_Cutscene_OpenPortal);
    ADD_PUBLIC_FUNC(ERZOutro_Cutscene_EnterPortal);
    ADD_PUBLIC_FUNC(ERZOutro_Cutscene_FadeOut);
    ADD_PUBLIC_FUNC(ERZOutro_Cutscene_ShowEnding);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(ERZOutro_SaveFileCB);
#else
    ADD_PUBLIC_FUNC(ERZOutro_SaveFileCB);
#endif

    // ERZ/ERZRider
    ADD_PUBLIC_FUNC(ERZRider_Draw_Rider);

    // ERZ/ERZSetup
    ADD_PUBLIC_FUNC(ERZSetup_Scanline_Sky);

    // ERZ/ERZShinobi
    ADD_PUBLIC_FUNC(ERZShinobi_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(ERZShinobi_Hit);
    ADD_PUBLIC_FUNC(ERZShinobi_HandleTileCollisions);
    ADD_PUBLIC_FUNC(ERZShinobi_State_Moving);

    // ERZ/ERZStart
    ADD_PUBLIC_FUNC(ERZStart_SetupObjects);
    ADD_PUBLIC_FUNC(ERZStart_HandlePlayerHover);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_FadeIn);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_ShrinkRubyWarpFX);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_EnterKing);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_KingMovingRuby);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_KingAttachHornRuby);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_SetupEggmanReveal);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_EnterEggman);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_EggmanKingWrestling);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_PostWrestleFadeIn);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_ReturnCamToSonic);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_PreparePlayerTransform);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_PlayerTransform);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_StartFight);
    ADD_PUBLIC_FUNC(ERZStart_Cutscene_Fight);
    ADD_PUBLIC_FUNC(ERZStart_RubyHover);
    ADD_PUBLIC_FUNC(ERZStart_RubyMove);
    ADD_PUBLIC_FUNC(ERZStart_Player_HandleSuperDash);
    ADD_PUBLIC_FUNC(ERZStart_State_PlayerSuperFly);
    ADD_PUBLIC_FUNC(ERZStart_Player_StartSuperFly);
    ADD_PUBLIC_FUNC(ERZStart_State_PlayerRebound);

    // ERZ/KleptoMobile
    ADD_PUBLIC_FUNC(KleptoMobile_HandleAnimations);
    ADD_PUBLIC_FUNC(KleptoMobile_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(KleptoMobile_Hit);
    ADD_PUBLIC_FUNC(KleptoMobile_Explode);
    ADD_PUBLIC_FUNC(KleptoMobile_HandleFrames);
    ADD_PUBLIC_FUNC(KleptoMobile_SwitchToKing);
    ADD_PUBLIC_FUNC(KleptoMobile_Draw_KleptoMobile);
    ADD_PUBLIC_FUNC(KleptoMobile_State_SetupArena);
    ADD_PUBLIC_FUNC(KleptoMobile_State_CutsceneControlled);
    ADD_PUBLIC_FUNC(KleptoMobile_State_MoveAround);
    ADD_PUBLIC_FUNC(KleptoMobile_State_Hover);
    ADD_PUBLIC_FUNC(KleptoMobile_HandleArmPositions);
    ADD_PUBLIC_FUNC(KleptoMobile_HandleChargeFinish);
    ADD_PUBLIC_FUNC(KleptoMobile_State_FirstChargeAttack);
    ADD_PUBLIC_FUNC(KleptoMobile_State_NextChargeAttacks);
    ADD_PUBLIC_FUNC(KleptoMobile_State_Switch);
    ADD_PUBLIC_FUNC(KleptoMobile_State_HitFall);
    ADD_PUBLIC_FUNC(KleptoMobile_StateHand_Cutscene);
    ADD_PUBLIC_FUNC(KleptoMobile_StateHand_Boss);
    ADD_PUBLIC_FUNC(KleptoMobile_Draw_Hand);
    ADD_PUBLIC_FUNC(KleptoMobile_CheckPlayerCollisions_Arm);
    ADD_PUBLIC_FUNC(KleptoMobile_StateArm_Cutscene);
    ADD_PUBLIC_FUNC(KleptoMobile_StateArm_Idle);
    ADD_PUBLIC_FUNC(KleptoMobile_StateArm_BashAttack);
    ADD_PUBLIC_FUNC(KleptoMobile_StateArm_ChargeAttack);
    ADD_PUBLIC_FUNC(KleptoMobile_Draw_Arm);
    ADD_PUBLIC_FUNC(KleptoMobile_State_Destroyed);
    ADD_PUBLIC_FUNC(KleptoMobile_State_Explode);
    ADD_PUBLIC_FUNC(KleptoMobile_State_CutsceneExplode);

    // ERZ/PhantomEgg
    ADD_PUBLIC_FUNC(PhantomEgg_HandleAnimations);
    ADD_PUBLIC_FUNC(PhantomEgg_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(PhantomEgg_Hit);
    ADD_PUBLIC_FUNC(PhantomEgg_Explode);
    ADD_PUBLIC_FUNC(PhantomEgg_HandleNextAttack);
    ADD_PUBLIC_FUNC(PhantomEgg_SetupWarpFX);
    ADD_PUBLIC_FUNC(PhantomEgg_HandlePhantomWarp);
    ADD_PUBLIC_FUNC(PhantomEgg_HandleReturnWarp);
    ADD_PUBLIC_FUNC(PhantomEgg_Scanline_WarpFX);
    ADD_PUBLIC_FUNC(PhantomEgg_Draw_Normal);
    ADD_PUBLIC_FUNC(PhantomEgg_Draw_Cracked);
    ADD_PUBLIC_FUNC(PhantomEgg_State_SetupArena);
    ADD_PUBLIC_FUNC(PhantomEgg_State_DimArena);
    ADD_PUBLIC_FUNC(PhantomEgg_State_EnterEggman);
    ADD_PUBLIC_FUNC(PhantomEgg_State_AdjustStartingPos);
    ADD_PUBLIC_FUNC(PhantomEgg_State_IntroHover);
    ADD_PUBLIC_FUNC(PhantomEgg_State_BeginFight);
    ADD_PUBLIC_FUNC(PhantomEgg_State_MoveAround);
    ADD_PUBLIC_FUNC(PhantomEgg_State_Attack_Jumped);
    ADD_PUBLIC_FUNC(PhantomEgg_State_Attack_JumpLand);
    ADD_PUBLIC_FUNC(PhantomEgg_State_Attack_JumpAttack);
    ADD_PUBLIC_FUNC(PhantomEgg_State_Attack_CableShock);
    ADD_PUBLIC_FUNC(PhantomEgg_State_Attack_PrepareWarp);
    ADD_PUBLIC_FUNC(PhantomEgg_State_Attack_GrabPlayers);
    ADD_PUBLIC_FUNC(PhantomEgg_State_Attack_HandleWarp);
    ADD_PUBLIC_FUNC(PhantomEgg_State_Attack_WarpAway);
    ADD_PUBLIC_FUNC(PhantomEgg_State_Attack_WarpReturn);
    ADD_PUBLIC_FUNC(PhantomEgg_State_Destroyed);
    ADD_PUBLIC_FUNC(PhantomEgg_State_Exploding);
    ADD_PUBLIC_FUNC(PhantomEgg_State_StartBadEnd);
    ADD_PUBLIC_FUNC(PhantomEgg_State_CrackOpen);
    ADD_PUBLIC_FUNC(PhantomEgg_State_CrackedExploding);
    ADD_PUBLIC_FUNC(PhantomEgg_State_StartGoodEnd);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(PhantomEgg_SaveGameCB);
#else
    ADD_PUBLIC_FUNC(PhantomEgg_SaveGameCB);
#endif

    // ERZ/PhantomGunner
    ADD_PUBLIC_FUNC(PhantomGunner_HandleDudExhaust);
    ADD_PUBLIC_FUNC(PhantomGunner_HandleMalfunctionDudExhaust);
    ADD_PUBLIC_FUNC(PhantomGunner_SpawnDust);
    ADD_PUBLIC_FUNC(PhantomGunner_HandleRotations);
    ADD_PUBLIC_FUNC(PhantomGunner_CheckPlayerMissileCollisions);
    ADD_PUBLIC_FUNC(PhantomGunner_CheckPlayerExplosionCollisions);
    ADD_PUBLIC_FUNC(PhantomGunner_Hit);
    ADD_PUBLIC_FUNC(PhantomGunner_Draw_Gunner);
    ADD_PUBLIC_FUNC(PhantomGunner_Draw_RocketLaunch);
    ADD_PUBLIC_FUNC(PhantomGunner_Draw_Rocket);
    ADD_PUBLIC_FUNC(PhantomGunner_State_ResetState);
    ADD_PUBLIC_FUNC(PhantomGunner_State_Idle);
    ADD_PUBLIC_FUNC(PhantomGunner_State_LaunchRockets);
    ADD_PUBLIC_FUNC(PhantomGunner_State_LaunchedRocket);
    ADD_PUBLIC_FUNC(PhantomGunner_State_Mortar);
    ADD_PUBLIC_FUNC(PhantomGunner_State_Napalm);
    ADD_PUBLIC_FUNC(PhantomGunner_State_Dud_Active);
    ADD_PUBLIC_FUNC(PhantomGunner_State_Dud_HitByPlayer);
    ADD_PUBLIC_FUNC(PhantomGunner_State_Dud_Malfunction);
    ADD_PUBLIC_FUNC(PhantomGunner_State_Dud_Explode);
    ADD_PUBLIC_FUNC(PhantomGunner_State_NapalmExplosion);
    ADD_PUBLIC_FUNC(PhantomGunner_State_MortarExplosion);

    // ERZ/PhantomHand
    ADD_PUBLIC_FUNC(PhantomHand_CheckPlayerGrab);
    ADD_PUBLIC_FUNC(PhantomHand_State_Summon);
    ADD_PUBLIC_FUNC(PhantomHand_State_Appear);
    ADD_PUBLIC_FUNC(PhantomHand_State_GrabbedPlayer);
    ADD_PUBLIC_FUNC(PhantomHand_State_Clasp);
    ADD_PUBLIC_FUNC(PhantomHand_State_Crystalize);
    ADD_PUBLIC_FUNC(PhantomHand_State_Shine);
    ADD_PUBLIC_FUNC(PhantomHand_State_BreakApart);
    ADD_PUBLIC_FUNC(PhantomHand_State_Disappear);

    // ERZ/PhantomKing
    ADD_PUBLIC_FUNC(PhantomKing_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(PhantomKing_Oscillate);
    ADD_PUBLIC_FUNC(PhantomKing_Hit);
    ADD_PUBLIC_FUNC(PhantomKing_Explode);
    ADD_PUBLIC_FUNC(PhantomKing_HandleFrames);
    ADD_PUBLIC_FUNC(PhantomKing_HandleAttacks);
    ADD_PUBLIC_FUNC(PhantomKing_SwitchToEggman);
    ADD_PUBLIC_FUNC(PhantomKing_SetupKing);
    ADD_PUBLIC_FUNC(PhantomKing_Draw_Body);
    ADD_PUBLIC_FUNC(PhantomKing_Draw_Arm);
    ADD_PUBLIC_FUNC(PhantomKing_State_Initialize);
    ADD_PUBLIC_FUNC(PhantomKing_State_SetupArms);
    ADD_PUBLIC_FUNC(PhantomKing_State_EnterKing);
    ADD_PUBLIC_FUNC(PhantomKing_State_InitialHover);
    ADD_PUBLIC_FUNC(PhantomKing_State_TakeRubyAway);
    ADD_PUBLIC_FUNC(PhantomKing_State_RubyHoldHover);
    ADD_PUBLIC_FUNC(PhantomKing_State_WrestleEggman);
    ADD_PUBLIC_FUNC(PhantomKing_State_FlyAround);
    ADD_PUBLIC_FUNC(PhantomKing_State_Switch);
    ADD_PUBLIC_FUNC(PhantomKing_State_HitFall);
    ADD_PUBLIC_FUNC(PhantomKing_StateArm_Idle);
    ADD_PUBLIC_FUNC(PhantomKing_StateArm_WrestleEggman);
    ADD_PUBLIC_FUNC(PhantomKing_HandleArmMovement);
    ADD_PUBLIC_FUNC(PhantomKing_StateArm_PullBack);
    ADD_PUBLIC_FUNC(PhantomKing_StateArm_Point);
    ADD_PUBLIC_FUNC(PhantomKing_DestroyEntity);
    ADD_PUBLIC_FUNC(PhantomKing_State_Explode);
    ADD_PUBLIC_FUNC(PhantomKing_State_Destroyed);

    // ERZ/PhantomMissile
    ADD_PUBLIC_FUNC(PhantomMissile_GetTargetPos);
    ADD_PUBLIC_FUNC(PhantomMissile_HandleExhaust);
    ADD_PUBLIC_FUNC(PhantomMissile_State_Attached);
    ADD_PUBLIC_FUNC(PhantomMissile_State_PrepareLaunch);
    ADD_PUBLIC_FUNC(PhantomMissile_State_Launched);
    ADD_PUBLIC_FUNC(PhantomMissile_State_Attacking);
    ADD_PUBLIC_FUNC(PhantomMissile_State_Explode);
    ADD_PUBLIC_FUNC(PhantomMissile_State_Reattach);
    ADD_PUBLIC_FUNC(PhantomMissile_State_Destroyed);

    // ERZ/PhantomMystic
    ADD_PUBLIC_FUNC(PhantomMystic_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(PhantomMystic_Hit);
    ADD_PUBLIC_FUNC(PhantomMystic_SetupNewCupSwap);
    ADD_PUBLIC_FUNC(PhantomMystic_Draw_CupSetup);
    ADD_PUBLIC_FUNC(PhantomMystic_Draw_CupSwap);
    ADD_PUBLIC_FUNC(PhantomMystic_State_Init);
    ADD_PUBLIC_FUNC(PhantomMystic_State_SetupInitialCupPos);
    ADD_PUBLIC_FUNC(PhantomMystic_State_MoveCupsDownwards);
    ADD_PUBLIC_FUNC(PhantomMystic_State_RotateMiddleCup);
    ADD_PUBLIC_FUNC(PhantomMystic_State_MoveMiddleCupToFloor);
    ADD_PUBLIC_FUNC(PhantomMystic_State_PrepareCupSwap);
    ADD_PUBLIC_FUNC(PhantomMystic_State_CupSwapping);
    ADD_PUBLIC_FUNC(PhantomMystic_State_RevealMystic);
    ADD_PUBLIC_FUNC(PhantomMystic_State_CupBlast);
    ADD_PUBLIC_FUNC(PhantomMystic_State_MoveCupsToMystic);

    // ERZ/PhantomRider
    ADD_PUBLIC_FUNC(PhantomRider_ProcessAutoScroll);
    ADD_PUBLIC_FUNC(PhantomRider_Hit);
    ADD_PUBLIC_FUNC(PhantomRider_Draw_Rider);
    ADD_PUBLIC_FUNC(PhantomRider_State_HandleBegin);
    ADD_PUBLIC_FUNC(PhantomRider_State_EnterRider);
    ADD_PUBLIC_FUNC(PhantomRider_State_InitialRace);
    ADD_PUBLIC_FUNC(PhantomRider_State_RacePlayer);
    ADD_PUBLIC_FUNC(PhantomRider_State_ExitRider);
    ADD_PUBLIC_FUNC(PhantomRider_State_Jimmy);

    // ERZ/PhantomRuby
    ADD_PUBLIC_FUNC(PhantomRuby_PlaySfx);
    ADD_PUBLIC_FUNC(PhantomRuby_SetupFlash);
    ADD_PUBLIC_FUNC(PhantomRuby_State_FinishedFlash);
    ADD_PUBLIC_FUNC(PhantomRuby_State_PlaySfx);
    ADD_PUBLIC_FUNC(PhantomRuby_State_Oscillate);
    ADD_PUBLIC_FUNC(PhantomRuby_State_MoveGravity);
    ADD_PUBLIC_FUNC(PhantomRuby_State_MoveRotateGravity);
    ADD_PUBLIC_FUNC(PhantomRuby_State_MoveRotateGravity_CheckGround);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(PhantomRuby_State_MoveToPos);
    ADD_PUBLIC_FUNC(PhantomRuby_State_RotateToOrigin);
#endif

    // ERZ/PhantomShield
    ADD_PUBLIC_FUNC(PhantomShield_State_Appear);
    ADD_PUBLIC_FUNC(PhantomShield_State_Active);
    ADD_PUBLIC_FUNC(PhantomShield_State_Disappear);

    // ERZ/PhantomShinobi
    ADD_PUBLIC_FUNC(PhantomShinobi_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(PhantomShinobi_Hit);
    ADD_PUBLIC_FUNC(PhantomShinobi_HandleTileCollisions);
    ADD_PUBLIC_FUNC(PhantomShinobi_ResetStates);
    ADD_PUBLIC_FUNC(PhantomShinobi_State_EnterShinobi);
    ADD_PUBLIC_FUNC(PhantomShinobi_State_AttackDelay);
    ADD_PUBLIC_FUNC(PhantomShinobi_State_SetupAttack);
    ADD_PUBLIC_FUNC(PhantomShinobi_State_Moving);
    ADD_PUBLIC_FUNC(PhantomShinobi_State_PrepareFinAttack);
    ADD_PUBLIC_FUNC(PhantomShinobi_State_ExtendFins);
    ADD_PUBLIC_FUNC(PhantomShinobi_State_RetractFins);
    ADD_PUBLIC_FUNC(PhantomShinobi_State_FinishedAttack);
    ADD_PUBLIC_FUNC(PhantomShinobi_SfxCheck_ShinobiBlade);

    // ERZ/PKingAttack
    ADD_PUBLIC_FUNC(PKingAttack_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(PKingAttack_State_OrbitAppear);
    ADD_PUBLIC_FUNC(PKingAttack_State_Orbiting);
    ADD_PUBLIC_FUNC(PKingAttack_State_OrbitLaunched);
    ADD_PUBLIC_FUNC(PKingAttack_State_Trail);
    ADD_PUBLIC_FUNC(PKingAttack_State_SmallBullet);

    // ERZ/RingField
    ADD_PUBLIC_FUNC(RingField_GetRingSpawnPos);

    // FBZ/BigSqueeze
    ADD_PUBLIC_FUNC(BigSqueeze_SfxCheck_Rumble);
    ADD_PUBLIC_FUNC(BigSqueeze_HandleWallCollisions);
    ADD_PUBLIC_FUNC(BigSqueeze_CheckPlayerCollisions_Vulnerable);
    ADD_PUBLIC_FUNC(BigSqueeze_CheckPlayerCollisions_Electrified);
    ADD_PUBLIC_FUNC(BigSqueeze_Hit);
    ADD_PUBLIC_FUNC(BigSqueeze_Explode);
    ADD_PUBLIC_FUNC(BigSqueeze_HandleBossMovement);
    ADD_PUBLIC_FUNC(BigSqueeze_SpawnDebris);
    ADD_PUBLIC_FUNC(BigSqueeze_Draw_Boss);
    ADD_PUBLIC_FUNC(BigSqueeze_Draw_Crusher);
    ADD_PUBLIC_FUNC(BigSqueeze_StateManager_SetupIntro);
    ADD_PUBLIC_FUNC(BigSqueeze_StateManager_SetupEggman);
    ADD_PUBLIC_FUNC(BigSqueeze_StateManager_SetupArena);
    ADD_PUBLIC_FUNC(BigSqueeze_StateManager_SetupBoss);
    ADD_PUBLIC_FUNC(BigSqueeze_StateBoss_Idle);
    ADD_PUBLIC_FUNC(BigSqueeze_StateBoss_Electrified);
    ADD_PUBLIC_FUNC(BigSqueeze_StateBoss_Destroyed);
    ADD_PUBLIC_FUNC(BigSqueeze_StateBoss_DropSignPost);
    ADD_PUBLIC_FUNC(BigSqueeze_StateManager_HandleOutro);
    ADD_PUBLIC_FUNC(BigSqueeze_StateManager_HandleBoss);
    ADD_PUBLIC_FUNC(BigSqueeze_StateCrusher_BeginCrushing);
    ADD_PUBLIC_FUNC(BigSqueeze_StateCrusher_Crushing);

    // FBZ/Blaster
    ADD_PUBLIC_FUNC(Blaster_DebugSpawn);
    ADD_PUBLIC_FUNC(Blaster_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(Blaster_CheckOffScreen);
    ADD_PUBLIC_FUNC(Blaster_State_Init);
    ADD_PUBLIC_FUNC(Blaster_State_Move);
    ADD_PUBLIC_FUNC(Blaster_State_HandleTurn);
    ADD_PUBLIC_FUNC(Blaster_State_AttackPlayer);
    ADD_PUBLIC_FUNC(Blaster_State_MagnetAttract);
    ADD_PUBLIC_FUNC(Blaster_State_MagnetReleased);
    ADD_PUBLIC_FUNC(Blaster_State_BeginShot);
    ADD_PUBLIC_FUNC(Blaster_State_Shot);
    ADD_PUBLIC_FUNC(Blaster_State_Fall);
    ADD_PUBLIC_FUNC(Blaster_State_Shell);

    // FBZ/Clucker
    ADD_PUBLIC_FUNC(Clucker_DebugSpawn);
    ADD_PUBLIC_FUNC(Clucker_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(Clucker_CheckOffScreen);
    ADD_PUBLIC_FUNC(Clucker_State_Init);
    ADD_PUBLIC_FUNC(Clucker_State_CheckForPlayer);
    ADD_PUBLIC_FUNC(Clucker_State_Appear);
    ADD_PUBLIC_FUNC(Clucker_State_ShootDelay);
    ADD_PUBLIC_FUNC(Clucker_State_Shoot);
    ADD_PUBLIC_FUNC(Clucker_State_Turn);
    ADD_PUBLIC_FUNC(Clucker_State_Destroyed);
    ADD_PUBLIC_FUNC(Clucker_State_Egg);

    // FBZ/Crane
    ADD_PUBLIC_FUNC(Crane_DebugSpawn);
    ADD_PUBLIC_FUNC(Crane_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(Crane_CheckOffScreen);
    ADD_PUBLIC_FUNC(Crane_State_CheckOffScreen);
    ADD_PUBLIC_FUNC(Crane_State_Init);
    ADD_PUBLIC_FUNC(Crane_State_CheckForPlayers);
    ADD_PUBLIC_FUNC(Crane_State_LowerToGrab);
    ADD_PUBLIC_FUNC(Crane_State_CheckGrab);
    ADD_PUBLIC_FUNC(Crane_State_RiseUp);
    ADD_PUBLIC_FUNC(Crane_State_ToDest1stHalf);
    ADD_PUBLIC_FUNC(Crane_State_ToDest2ndHalf);
    ADD_PUBLIC_FUNC(Crane_State_DropDelay);
    ADD_PUBLIC_FUNC(Crane_State_ToStart1stHalf);
    ADD_PUBLIC_FUNC(Crane_State_ToStart2ndHalf);

    // FBZ/Cylinder
    ADD_PUBLIC_FUNC(Cylinder_State_TubeH);
    ADD_PUBLIC_FUNC(Cylinder_State_TubeV);
    ADD_PUBLIC_FUNC(Cylinder_State_Spiral);
    ADD_PUBLIC_FUNC(Cylinder_State_InkRoller);
    ADD_PUBLIC_FUNC(Cylinder_State_Pillar);
    ADD_PUBLIC_FUNC(Cylinder_PlayerState_InkRoller_Stand);
    ADD_PUBLIC_FUNC(Cylinder_PlayerState_InkRoller_Roll);
    ADD_PUBLIC_FUNC(Cylinder_PlayerState_Pillar);
    ADD_PUBLIC_FUNC(Cylinder_PlayerState_Spiral);

    // FBZ/ElectroMagnet
    ADD_PUBLIC_FUNC(ElectroMagnet_State_AwaitInterval);
    ADD_PUBLIC_FUNC(ElectroMagnet_State_MagnetActive);

    // FBZ/FBZ1Outro
    ADD_PUBLIC_FUNC(FBZ1Outro_StartCutscene);
    ADD_PUBLIC_FUNC(FBZ1Outro_HandleTrash);
    ADD_PUBLIC_FUNC(FBZ1Outro_DispenseTrash);
    ADD_PUBLIC_FUNC(FBZ1Outro_Cutscene_CrushTrash);
    ADD_PUBLIC_FUNC(FBZ1Outro_Cutscene_TrashDrop);
    ADD_PUBLIC_FUNC(FBZ1Outro_Cutscene_CraneRide);
    ADD_PUBLIC_FUNC(FBZ1Outro_Cutscene_PrepareFBZ2);

    // FBZ/FBZ2Outro
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(FBZ2Outro_StartCutscene);
    ADD_PUBLIC_FUNC(FBZ2Outro_Cutscene_SetupGliders);
    ADD_PUBLIC_FUNC(FBZ2Outro_Cutscene_RunToGlider);
    ADD_PUBLIC_FUNC(FBZ2Outro_Cutscene_GlideAway);
#endif

    // FBZ/FBZMissile
    ADD_PUBLIC_FUNC(FBZMissile_StateLauncherV_Delay);
    ADD_PUBLIC_FUNC(FBZMissile_StateLauncherV_Launch);
    ADD_PUBLIC_FUNC(FBZMissile_StateLauncherH_Fire);
    ADD_PUBLIC_FUNC(FBZMissile_StateLauncherH_Prepare);
    ADD_PUBLIC_FUNC(FBZMissile_StateVertical_Rise);
    ADD_PUBLIC_FUNC(FBZMissile_StateVertical_Fall);
    ADD_PUBLIC_FUNC(FBZMissile_StateHorizontal_Move);
    ADD_PUBLIC_FUNC(FBZMissile_State_Hull);

    // FBZ/FBZSetup
    ADD_PUBLIC_FUNC(FBZSetup_ActTransitionLoad);
    ADD_PUBLIC_FUNC(FBZSetup_AddDynamicBG);
    ADD_PUBLIC_FUNC(FBZSetup_Scanline_BGInside);
    ADD_PUBLIC_FUNC(FBZSetup_BGSwitch_ShowInside1);
    ADD_PUBLIC_FUNC(FBZSetup_BGSwitch_ShowInside2);
    ADD_PUBLIC_FUNC(FBZSetup_BGSwitch_ShowInside1_NoStorm);
    ADD_PUBLIC_FUNC(FBZSetup_Trigger_ShowExterior);
    ADD_PUBLIC_FUNC(FBZSetup_Trigger_ShowInterior);
    ADD_PUBLIC_FUNC(FBZSetup_StageFinish_EndAct1);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(FBZSetup_StageFinish_EndAct2);
#endif

    // FBZ/FBZStorm
    ADD_PUBLIC_FUNC(FBZStorm_State_WaitForActive);
    ADD_PUBLIC_FUNC(FBZStorm_State_StormStart);
    ADD_PUBLIC_FUNC(FBZStorm_State_StormFinish);
    ADD_PUBLIC_FUNC(FBZStorm_State_Storming);
    ADD_PUBLIC_FUNC(FBZStorm_State_Thunder);

    // FBZ/FBZTrash
    ADD_PUBLIC_FUNC(FBZTrash_SummonOrbinautOrbs);
    ADD_PUBLIC_FUNC(FBZTrash_SummonOrbinaut);
    ADD_PUBLIC_FUNC(FBZTrash_State_LooseTrash);
    ADD_PUBLIC_FUNC(FBZTrash_State_ReactMagnet);
    ADD_PUBLIC_FUNC(FBZTrash_State_MoveToTarget);
    ADD_PUBLIC_FUNC(FBZTrash_State_OrbinautOrb);
    ADD_PUBLIC_FUNC(FBZTrash_State_OrbinautMove);

    // FBZ/FlameSpring
    ADD_PUBLIC_FUNC(FlameSpring_State_Spring);
    ADD_PUBLIC_FUNC(FlameSpring_State_Flame);
    ADD_PUBLIC_FUNC(FlameSpring_Draw_Spring);
    ADD_PUBLIC_FUNC(FlameSpring_Draw_Flame);

    // FBZ/FoldingPlatform
    ADD_PUBLIC_FUNC(FoldingPlatform_State_Appear);
    ADD_PUBLIC_FUNC(FoldingPlatform_State_Disappear);

    // FBZ/HangGlider
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(HangGlider_State_CheckGrab);
    ADD_PUBLIC_FUNC(HangGlider_State_Glide);
#endif

    // FBZ/HangPoint
    ADD_PUBLIC_FUNC(HangPoint_HandlePlayerMovement);

    // FBZ/Launcher
    ADD_PUBLIC_FUNC(Launcher_Collide_Normal);
    ADD_PUBLIC_FUNC(Launcher_State_Idle);
    ADD_PUBLIC_FUNC(Launcher_State_HandleLaunch);
    ADD_PUBLIC_FUNC(Launcher_State_ReturnToStart);

    // FBZ/MagPlatform
    ADD_PUBLIC_FUNC(MagPlatform_Collide_SolidAllHazardBottom);
    ADD_PUBLIC_FUNC(MagPlatform_State_Idle);
    ADD_PUBLIC_FUNC(MagPlatform_State_Rise);
    ADD_PUBLIC_FUNC(MagPlatform_State_Fall);

#if MANIA_USE_PLUS
    // FBZ/Mine
    ADD_PUBLIC_FUNC(Mine_CheckMightyHit);
#endif

    // FBZ/SpiderMobile
    ADD_PUBLIC_FUNC(SpiderMobile_HandleFallingMovement);
    ADD_PUBLIC_FUNC(SpiderMobile_HandleRisingMovement);
    ADD_PUBLIC_FUNC(SpiderMobile_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(SpiderMobile_CheckSpikeHit);
    ADD_PUBLIC_FUNC(SpiderMobile_Hit);
    ADD_PUBLIC_FUNC(SpiderMobile_Explode);
    ADD_PUBLIC_FUNC(SpiderMobile_HandlePlatformMovement);
    ADD_PUBLIC_FUNC(SpiderMobile_HandleWebClimbArmMovement);
    ADD_PUBLIC_FUNC(SpiderMobile_HandleDestroyedArmMovement);
    ADD_PUBLIC_FUNC(SpiderMobile_HandleIdleArmMovement);
    ADD_PUBLIC_FUNC(SpiderMobile_UpdateLimbPositions);
    ADD_PUBLIC_FUNC(SpiderMobile_Draw_Body);
    ADD_PUBLIC_FUNC(SpiderMobile_Draw_Bumper);
    ADD_PUBLIC_FUNC(SpiderMobile_Draw_Cockpit);
    ADD_PUBLIC_FUNC(SpiderMobile_StateBody_AwaitPlayer);
    ADD_PUBLIC_FUNC(SpiderMobile_StateBody_SetupArena);
    ADD_PUBLIC_FUNC(SpiderMobile_StateBody_InitialDrop);
    ADD_PUBLIC_FUNC(SpiderMobile_StateBody_Rise);
    ADD_PUBLIC_FUNC(SpiderMobile_StateBody_Climb);
    ADD_PUBLIC_FUNC(SpiderMobile_StateBody_HandleOrbAttack);
    ADD_PUBLIC_FUNC(SpiderMobile_StateBody_Destroyed);
    ADD_PUBLIC_FUNC(SpiderMobile_StateBody_CockpitExplode);
    ADD_PUBLIC_FUNC(SpiderMobile_StateBody_MovePlatformToEnd);
    ADD_PUBLIC_FUNC(SpiderMobile_StateBody_FinishedMovingPlatform);
    ADD_PUBLIC_FUNC(SpiderMobile_State_Bumper);
    ADD_PUBLIC_FUNC(SpiderMobile_State_Eggman);
    ADD_PUBLIC_FUNC(SpiderMobile_StateOrb_Charge);
    ADD_PUBLIC_FUNC(SpiderMobile_StateOrb_Fired);
    ADD_PUBLIC_FUNC(SpiderMobile_SfxCheck_Elevator);

    // FBZ/SpiralPlatform
    ADD_PUBLIC_FUNC(SpiralPlatform_State_Move);

    // FBZ/SwitchDoor
    ADD_PUBLIC_FUNC(SwitchDoor_DrawSprites);

    // FBZ/Technosqueek
    ADD_PUBLIC_FUNC(Technosqueek_DebugSpawn);
    ADD_PUBLIC_FUNC(Technosqueek_HandlePlayerCollisions);
    ADD_PUBLIC_FUNC(Technosqueek_CheckOffScreen);
    ADD_PUBLIC_FUNC(Technosqueek_State_Init);
    ADD_PUBLIC_FUNC(Technosqueek_State_MoveHorizontal);
    ADD_PUBLIC_FUNC(Technosqueek_State_TurnHorizontal);
    ADD_PUBLIC_FUNC(Technosqueek_State_MoveVertical);
    ADD_PUBLIC_FUNC(Technosqueek_State_TurnVertical);
    ADD_PUBLIC_FUNC(Technosqueek_State_Fall);

    // FBZ/TetherBall
    ADD_PUBLIC_FUNC(TetherBall_State_CheckPlayerAttach);
    ADD_PUBLIC_FUNC(TetherBall_State_SwingBall);
    ADD_PUBLIC_FUNC(TetherBall_State_FinishedSwing);

    // FBZ/Tuesday
    ADD_PUBLIC_FUNC(Tuesday_Hit);
    ADD_PUBLIC_FUNC(Tuesday_Explode);
    ADD_PUBLIC_FUNC(Tuesday_DrawElectricity);
    ADD_PUBLIC_FUNC(Tuesday_State_Controller);
    ADD_PUBLIC_FUNC(Tuesday_State_Node);
    ADD_PUBLIC_FUNC(Tuesday_State_Destroyed);
    ADD_PUBLIC_FUNC(Tuesday_State_Debris);

    // FBZ/TwistingDoor
    ADD_PUBLIC_FUNC(TwistingDoor_State_CheckOpen);
    ADD_PUBLIC_FUNC(TwistingDoor_State_Opening);
    ADD_PUBLIC_FUNC(TwistingDoor_State_Opened);
    ADD_PUBLIC_FUNC(TwistingDoor_State_Closing);

    // FBZ/WarpDoor
    ADD_PUBLIC_FUNC(WarpDoor_SetupPlayerCamera);
    ADD_PUBLIC_FUNC(WarpDoor_SetStageBounds);
    ADD_PUBLIC_FUNC(WarpDoor_SetWarpBounds);
    ADD_PUBLIC_FUNC(WarpDoor_CheckAllBounds);
    ADD_PUBLIC_FUNC(WarpDoor_SetupBoundaries);
    ADD_PUBLIC_FUNC(WarpDoor_DrawDebug);
    ADD_PUBLIC_FUNC(WarpDoor_SetupHitbox);

    // GHZ/Batbrain
    ADD_PUBLIC_FUNC(Batbrain_DebugSpawn);
    ADD_PUBLIC_FUNC(Batbrain_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Batbrain_CheckOffScreen);
    ADD_PUBLIC_FUNC(Batbrain_State_Init);
    ADD_PUBLIC_FUNC(Batbrain_State_CheckPlayerInRange);
    ADD_PUBLIC_FUNC(Batbrain_State_DropToPlayer);
    ADD_PUBLIC_FUNC(Batbrain_State_Fly);
    ADD_PUBLIC_FUNC(Batbrain_State_FlyToCeiling);

    // GHZ/Bridge
    ADD_PUBLIC_FUNC(Bridge_Burn);
    ADD_PUBLIC_FUNC(Bridge_HandleCollisions);

    // GHZ/BuzzBomber
    ADD_PUBLIC_FUNC(BuzzBomber_DebugSpawn);
    ADD_PUBLIC_FUNC(BuzzBomber_CheckOffScreen);
    ADD_PUBLIC_FUNC(BuzzBomber_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(BuzzBomber_State_Init);
    ADD_PUBLIC_FUNC(BuzzBomber_State_Flying);
    ADD_PUBLIC_FUNC(BuzzBomber_State_Idle);
    ADD_PUBLIC_FUNC(BuzzBomber_State_DetectedPlayer);
    ADD_PUBLIC_FUNC(BuzzBomber_State_ProjectileCharge);
    ADD_PUBLIC_FUNC(BuzzBomber_State_ProjectileShot);

    // GHZ/CheckerBall
    ADD_PUBLIC_FUNC(CheckerBall_DebugSpawn);
    ADD_PUBLIC_FUNC(CheckerBall_HandlePhysics);
    ADD_PUBLIC_FUNC(CheckerBall_HandlePlayerMovement);
    ADD_PUBLIC_FUNC(CheckerBall_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(CheckerBall_BadnikBreak);
    ADD_PUBLIC_FUNC(CheckerBall_HandleObjectCollisions);

    // GHZ/Chopper
    ADD_PUBLIC_FUNC(Chopper_DebugSpawn);
    ADD_PUBLIC_FUNC(Chopper_CheckOffScreen);
    ADD_PUBLIC_FUNC(Chopper_CheckPlayerCollisions_Jump);
    ADD_PUBLIC_FUNC(Chopper_CheckPlayerCollisions_Swim);
    ADD_PUBLIC_FUNC(Chopper_State_Init);
    ADD_PUBLIC_FUNC(Chopper_State_Jump);
    ADD_PUBLIC_FUNC(Chopper_State_Swim);
    ADD_PUBLIC_FUNC(Chopper_State_ChargeDelay);
    ADD_PUBLIC_FUNC(Chopper_State_Charge);

    // GHZ/Crabmeat
    ADD_PUBLIC_FUNC(Crabmeat_DebugSpawn);
    ADD_PUBLIC_FUNC(Crabmeat_CheckOffScreen);
    ADD_PUBLIC_FUNC(Crabmeat_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Crabmeat_State_Init);
    ADD_PUBLIC_FUNC(Crabmeat_State_Moving);
    ADD_PUBLIC_FUNC(Crabmeat_State_Shoot);
    ADD_PUBLIC_FUNC(Crabmeat_State_Projectile);

    // GHZ/DDWrecker
    ADD_PUBLIC_FUNC(DDWrecker_State_SetupArena);
    ADD_PUBLIC_FUNC(DDWrecker_State_InitChildren);
    ADD_PUBLIC_FUNC(DDWrecker_State_Assemble);
    ADD_PUBLIC_FUNC(DDWrecker_State_EnterWreckers);
    ADD_PUBLIC_FUNC(DDWrecker_State_AttackDelay);
    ADD_PUBLIC_FUNC(DDWrecker_State_SwingRight);
    ADD_PUBLIC_FUNC(DDWrecker_State_SwingLeft);
    ADD_PUBLIC_FUNC(DDWrecker_State_SwingMoveToCenter);
    ADD_PUBLIC_FUNC(DDWrecker_State_HandleSpinning);
    ADD_PUBLIC_FUNC(DDWrecker_State_SwingSlowDown);
    ADD_PUBLIC_FUNC(DDWrecker_State_PrepareBounceAttack);
    ADD_PUBLIC_FUNC(DDWrecker_State_SignalBounceAttackStart);
    ADD_PUBLIC_FUNC(DDWrecker_State_HandleBounceAttack);
    ADD_PUBLIC_FUNC(DDWrecker_State_EndBounceAttack);
    ADD_PUBLIC_FUNC(DDWrecker_StateBall_Vulnerable);
    ADD_PUBLIC_FUNC(DDWrecker_StateBall_Spiked);
    ADD_PUBLIC_FUNC(DDWrecker_StateBall_Partnerless);
    ADD_PUBLIC_FUNC(DDWrecker_Hit);
    ADD_PUBLIC_FUNC(DDWrecker_Spin);
    ADD_PUBLIC_FUNC(DDWrecker_Swing);
    ADD_PUBLIC_FUNC(DDWrecker_Explode);
    ADD_PUBLIC_FUNC(DDWrecker_State_Debris);
    ADD_PUBLIC_FUNC(DDWrecker_State_Die);
    ADD_PUBLIC_FUNC(DDWrecker_State_SpawnSignpost);

    // GHZ/DERobot
    ADD_PUBLIC_FUNC(DERobot_HandleScreenBounds);
    ADD_PUBLIC_FUNC(DERobot_HandleLegMovement);
    ADD_PUBLIC_FUNC(DERobot_HandleLegMovement2);
    ADD_PUBLIC_FUNC(DERobot_HandleArmMovement);
    ADD_PUBLIC_FUNC(DERobot_HandleTerrainDestruction);
    ADD_PUBLIC_FUNC(DERobot_DestroyTerrainFinal);
    ADD_PUBLIC_FUNC(DERobot_Hit);
    ADD_PUBLIC_FUNC(DERobot_Explode);
    ADD_PUBLIC_FUNC(DERobot_CheckPlayerCollisions_Body);
    ADD_PUBLIC_FUNC(DERobot_CheckPlayerCollisions_ArmExtend);
    ADD_PUBLIC_FUNC(DERobot_CheckPlayerCollisions_Hand);
    ADD_PUBLIC_FUNC(DERobot_CheckRubyGrabbed);
    ADD_PUBLIC_FUNC(DERobot_CheckPlayerCollisions_Bomb);
    ADD_PUBLIC_FUNC(DERobot_Draw_RelativeToParent);
    ADD_PUBLIC_FUNC(DERobot_Draw_Arm);
    ADD_PUBLIC_FUNC(DERobot_Draw_Simple);
    ADD_PUBLIC_FUNC(DERobot_Draw_FrontLeg);
    ADD_PUBLIC_FUNC(DERobot_Draw_Target);
    ADD_PUBLIC_FUNC(DERobot_State_ArmIdle);
    ADD_PUBLIC_FUNC(DERobot_State_ArmExtendPrepare);
    ADD_PUBLIC_FUNC(DERobot_State_ArmExtending);
    ADD_PUBLIC_FUNC(DERobot_State_ArmRetracting);
    ADD_PUBLIC_FUNC(DERobot_State_ArmDestroyed);
    ADD_PUBLIC_FUNC(DERobot_Cutscene_ActivateArm);
    ADD_PUBLIC_FUNC(DERobot_Cutscene_ReachForRuby);
    ADD_PUBLIC_FUNC(DERobot_Cutscene_GrabbedRuby);
    ADD_PUBLIC_FUNC(DERobot_Cutscene_ArmDeactivate);
    ADD_PUBLIC_FUNC(DERobot_State_CloseHeadHatch);
    ADD_PUBLIC_FUNC(DERobot_State_BombLaunched);
    ADD_PUBLIC_FUNC(DERobot_State_BombLanded);
    ADD_PUBLIC_FUNC(DERobot_State_BombExplode);
    ADD_PUBLIC_FUNC(DERobot_State_SetupArena);
    ADD_PUBLIC_FUNC(DERobot_State_SetupBoss);
    ADD_PUBLIC_FUNC(DERobot_State_Target);
    ADD_PUBLIC_FUNC(DERobot_State_SurpriseFall);
    ADD_PUBLIC_FUNC(DERobot_State_FallLand);
    ADD_PUBLIC_FUNC(DERobot_State_Walk);
    ADD_PUBLIC_FUNC(DERobot_State_ArmAttack);
    ADD_PUBLIC_FUNC(DERobot_State_Explode);
    ADD_PUBLIC_FUNC(DERobot_State_ExplodeTerrain);
    ADD_PUBLIC_FUNC(DERobot_State_Finish);
    ADD_PUBLIC_FUNC(DERobot_State_DebrisFall);
    ADD_PUBLIC_FUNC(DERobot_State_FinishBounds);
    ADD_PUBLIC_FUNC(DERobot_State_CutsceneExplode);

    // GHZ/Fireball
    ADD_PUBLIC_FUNC(Fireball_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(Fireball_State_Spawner);
    ADD_PUBLIC_FUNC(Fireball_State_LauncherStatic);
    ADD_PUBLIC_FUNC(Fireball_State_LauncherGravity);
    ADD_PUBLIC_FUNC(Fireball_StateFireball_Spawner);
    ADD_PUBLIC_FUNC(Fireball_StateFireball_LauncherStatic);
    ADD_PUBLIC_FUNC(Fireball_StateFireball_LauncherGravity);
    ADD_PUBLIC_FUNC(Fireball_StateFireball_Dissipate);
    ADD_PUBLIC_FUNC(Fireball_Draw_Simple);

    // GHZ/GHZ2Outro
    ADD_PUBLIC_FUNC(GHZ2Outro_Cutscene_FinishActClear);
    ADD_PUBLIC_FUNC(GHZ2Outro_Cutscene_JumpIntoHole);
    ADD_PUBLIC_FUNC(GHZ2Outro_Cutscene_HoleSceneFadeIn);
    ADD_PUBLIC_FUNC(GHZ2Outro_Cutscene_SpyOnEggman);
    ADD_PUBLIC_FUNC(GHZ2Outro_Cutscene_BreakupGroup);
    ADD_PUBLIC_FUNC(GHZ2Outro_Cutscene_RubyHover);
    ADD_PUBLIC_FUNC(GHZ2Outro_Cutscene_StartRubyWarp);
    ADD_PUBLIC_FUNC(GHZ2Outro_Cutscene_HandleRubyWarp);
    ADD_PUBLIC_FUNC(GHZ2Outro_Cutscene_LoadCPZ1);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(GHZ2Outro_Cutscene_SkipCB);
#endif

    // GHZ/GHZCutsceneK
    ADD_PUBLIC_FUNC(GHZCutsceneK_Cutscene_None);

    // GHZ/GHZCutsceneST
    ADD_PUBLIC_FUNC(GHZCutsceneST_SetupObjects);
    ADD_PUBLIC_FUNC(GHZCutsceneST_SetupKnuxCutscene);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(GHZCutsceneST_Cutscene_SkipCB);
    ADD_PUBLIC_FUNC(GHZCutsceneST_Cutscene_FadeIn);
#endif
    ADD_PUBLIC_FUNC(GHZCutsceneST_Cutscene_FinishRubyWarp);
    ADD_PUBLIC_FUNC(GHZCutsceneST_Cutscene_ExitHBH);
    ADD_PUBLIC_FUNC(GHZCutsceneST_Cutscene_SetupGHZ1);

    // GHZ/GHZSetup
    ADD_PUBLIC_FUNC(GHZSetup_SetupAct1BG);
    ADD_PUBLIC_FUNC(GHZSetup_StageFinish_EndAct1);
    ADD_PUBLIC_FUNC(GHZSetup_HandleActTransition);
    ADD_PUBLIC_FUNC(GHZSetup_BGSwitch_Outside_Act2);
    ADD_PUBLIC_FUNC(GHZSetup_BGSwitch_Caves_Act2);
    ADD_PUBLIC_FUNC(GHZSetup_BGSwitch_Outside_Act1);
    ADD_PUBLIC_FUNC(GHZSetup_BGSwitch_Caves_Act1);
    ADD_PUBLIC_FUNC(GHZSetup_StageFinish_EndAct2);

    // GHZ/Motobug
    ADD_PUBLIC_FUNC(Motobug_DebugSpawn);
    ADD_PUBLIC_FUNC(Motobug_CheckOffScreen);
    ADD_PUBLIC_FUNC(Motobug_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Motobug_State_Fall);
    ADD_PUBLIC_FUNC(Motobug_State_Move);
    ADD_PUBLIC_FUNC(Motobug_State_Idle);
    ADD_PUBLIC_FUNC(Motobug_State_Init);
    ADD_PUBLIC_FUNC(Motobug_State_Smoke);
    ADD_PUBLIC_FUNC(Motobug_State_Turn);

    // GHZ/Newtron
    ADD_PUBLIC_FUNC(Newtron_DebugSpawn);
    ADD_PUBLIC_FUNC(Newtron_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Newtron_CheckOffScreen);
    ADD_PUBLIC_FUNC(Newtron_GetTargetDir);
    ADD_PUBLIC_FUNC(Newtron_State_Init);
    ADD_PUBLIC_FUNC(Newtron_State_CheckPlayerInRange);
    ADD_PUBLIC_FUNC(Newtron_State_Appear);
    ADD_PUBLIC_FUNC(Newtron_State_StartFly);
    ADD_PUBLIC_FUNC(Newtron_State_Fly);
    ADD_PUBLIC_FUNC(Newtron_State_Shoot);
    ADD_PUBLIC_FUNC(Newtron_State_FadeAway);
    ADD_PUBLIC_FUNC(Newtron_State_Projectile);

    // GHZ/SpikeLog
    ADD_PUBLIC_FUNC(SpikeLog_State_Main);
    ADD_PUBLIC_FUNC(SpikeLog_State_Burn);

    // GHZ/Splats
    ADD_PUBLIC_FUNC(Splats_DebugSpawn);
    ADD_PUBLIC_FUNC(Splats_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Splats_CheckOffScreen);
    ADD_PUBLIC_FUNC(Splats_State_Init);
    ADD_PUBLIC_FUNC(Splats_State_BounceAround);
    ADD_PUBLIC_FUNC(Splats_State_SetupInkJar);
    ADD_PUBLIC_FUNC(Splats_State_InkJarSpawner);
    ADD_PUBLIC_FUNC(Splats_State_JumpOutOfJar);
    ADD_PUBLIC_FUNC(Splats_State_HandleBouncing);
    ADD_PUBLIC_FUNC(Splats_State_HandleLanding);
    ADD_PUBLIC_FUNC(Splats_State_NoMoreJumps);
    ADD_PUBLIC_FUNC(Splats_State_InkSplat);

    // GHZ/WaterfallSound
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(WaterfallSound_SfxCheck_WaterfallLoop);
    ADD_PUBLIC_FUNC(WaterfallSound_SfxUpdate_WaterfallLoop);
#endif

    // GHZ/ZipLine
    ADD_PUBLIC_FUNC(ZipLine_VSSwap_CheckBusy);
    ADD_PUBLIC_FUNC(ZipLine_GrabHandle);
    ADD_PUBLIC_FUNC(ZipLine_ForceReleasePlayers);
    ADD_PUBLIC_FUNC(ZipLine_GetJoinPos);
    ADD_PUBLIC_FUNC(ZipLine_State_Moving);

#if MANIA_USE_PLUS
    // Global/ActClear
    ADD_PUBLIC_FUNC(ActClear_DrawTime);
    ADD_PUBLIC_FUNC(ActClear_DrawNumbers);
#endif
    ADD_PUBLIC_FUNC(ActClear_CheckPlayerVictory);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(ActClear_SaveGameCallback);
#else
    ADD_PUBLIC_FUNC(ActClear_SaveGameCallback);
    ADD_PUBLIC_FUNC(ActClear_SetupRecoverPlayers);
#endif
    ADD_PUBLIC_FUNC(ActClear_State_EnterText);
    ADD_PUBLIC_FUNC(ActClear_State_AdjustText);
    ADD_PUBLIC_FUNC(ActClear_State_EnterResults);
    ADD_PUBLIC_FUNC(ActClear_State_ScoreShownDelay);
    ADD_PUBLIC_FUNC(ActClear_State_TallyScore);
    ADD_PUBLIC_FUNC(ActClear_State_SaveGameProgress);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(ActClear_State_ShowResultsTA);
    ADD_PUBLIC_FUNC(ActClear_State_WaitForSave);
#endif
    ADD_PUBLIC_FUNC(ActClear_State_ExitActClear);
    ADD_PUBLIC_FUNC(ActClear_State_RecoverPlayers);

    // Global/Animals
    ADD_PUBLIC_FUNC(Animals_CheckDirection);
    ADD_PUBLIC_FUNC(Animals_CheckPlatformCollision);
    ADD_PUBLIC_FUNC(Animals_CheckGroundCollision);
    ADD_PUBLIC_FUNC(Animals_State_Fall);
    ADD_PUBLIC_FUNC(Animals_State_Bounce);
    ADD_PUBLIC_FUNC(Animals_State_Fly);
    ADD_PUBLIC_FUNC(Animals_State_Placed);

    // Global/Announcer
    ADD_PUBLIC_FUNC(Announcer_StartCountdown);
    ADD_PUBLIC_FUNC(Announcer_AnnounceGoal);
    ADD_PUBLIC_FUNC(Announcer_Draw_Countdown);
    ADD_PUBLIC_FUNC(Announcer_Draw_Finished);
    ADD_PUBLIC_FUNC(Announcer_State_Countdown);
    ADD_PUBLIC_FUNC(Announcer_State_Finished);
    ADD_PUBLIC_FUNC(Announcer_State_AnnounceWinner);
    ADD_PUBLIC_FUNC(Announcer_State_AnnounceWinPlayer);

    // Global/APICallback
#if !MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(APICallback_SetRichPresence);
    ADD_PUBLIC_FUNC(APICallback_GetUserLanguage);
    ADD_PUBLIC_FUNC(APICallback_GetConfirmButtonFlip);
    ADD_PUBLIC_FUNC(APICallback_SetNoSaveEnabled);
    ADD_PUBLIC_FUNC(APICallback_SetNoSaveDisabled);
    ADD_PUBLIC_FUNC(APICallback_SaveUserFile);
    ADD_PUBLIC_FUNC(APICallback_SaveCB);
    ADD_PUBLIC_FUNC(APICallback_SaveSettingsINI);
    ADD_PUBLIC_FUNC(APICallback_ReadLeaderboardEntry);
    ADD_PUBLIC_FUNC(APICallback_NotifyAutoSave_OK);
    ADD_PUBLIC_FUNC(APICallback_NotifyAutoSave_CB);
    ADD_PUBLIC_FUNC(APICallback_PromptSavePreference_CB);
    ADD_PUBLIC_FUNC(APICallback_PromptSavePreference);
    ADD_PUBLIC_FUNC(APICallback_LoadUserFile);
    ADD_PUBLIC_FUNC(APICallback_LoadCB);
    ADD_PUBLIC_FUNC(APICallback_LeaderboardStatus);
    ADD_PUBLIC_FUNC(APICallback_LeaderboardEntryCount);
    ADD_PUBLIC_FUNC(APICallback_LaunchManual);
    ADD_PUBLIC_FUNC(APICallback_HandleCallback);
    ADD_PUBLIC_FUNC(APICallback_GetUserAuthStatus);
    ADD_PUBLIC_FUNC(APICallback_GetStorageStatus);
    ADD_PUBLIC_FUNC(APICallback_GetSaveStatus);
    ADD_PUBLIC_FUNC(APICallback_GetControllerType);
    ADD_PUBLIC_FUNC(APICallback_FetchLeaderboardData);
    ADD_PUBLIC_FUNC(APICallback_ExitGame);
    ADD_PUBLIC_FUNC(APICallback_ClearPrerollErrors);
    ADD_PUBLIC_FUNC(APICallback_CheckInputDisconnected);
    ADD_PUBLIC_FUNC(APICallback_InputIDIsDisconnected);
    ADD_PUBLIC_FUNC(APICallback_ControllerIDForInputID);
    ADD_PUBLIC_FUNC(APICallback_MostRecentActiveControllerID);
    ADD_PUBLIC_FUNC(APICallback_AssignControllerID);
    ADD_PUBLIC_FUNC(APICallback_ResetControllerAssignments);
    ADD_PUBLIC_FUNC(APICallback_TrackActClear);
    ADD_PUBLIC_FUNC(APICallback_TrackTAClear);
    ADD_PUBLIC_FUNC(APICallback_TrackEnemyDefeat);
    ADD_PUBLIC_FUNC(APICallback_TrackGameProgress);
    ADD_PUBLIC_FUNC(APICallback_TryAuth_No);
    ADD_PUBLIC_FUNC(APICallback_TryAuth_Yes);
    ADD_PUBLIC_FUNC(APICallback_TryAuth_CB);
    ADD_PUBLIC_FUNC(APICallback_TryAuth);
    ADD_PUBLIC_FUNC(APICallback_TryInitStorage);
    ADD_PUBLIC_FUNC(APICallback_GetUsername);
    ADD_PUBLIC_FUNC(APICallback_ClearAchievements);
    ADD_PUBLIC_FUNC(APICallback_UnlockAchievement);
    ADD_PUBLIC_FUNC(APICallback_CheckUserAuth_OK);
    ADD_PUBLIC_FUNC(APICallback_CheckUserAuth_CB);
    ADD_PUBLIC_FUNC(APICallback_TrackGameProgressCB);
    ADD_PUBLIC_FUNC(APICallback_GetNextNotif);
    ADD_PUBLIC_FUNC(APICallback_ManageNotifs);
    ADD_PUBLIC_FUNC(APICallback_CheckUnreadNotifs);
    ADD_PUBLIC_FUNC(APICallback_NotifyAutosave);
#endif

    // Global/BoundsMarker
    ADD_PUBLIC_FUNC(BoundsMarker_ApplyBounds);
    ADD_PUBLIC_FUNC(BoundsMarker_ApplyAllBounds);

    // Global/Camera
    ADD_PUBLIC_FUNC(Camera_SetCameraBounds);
    ADD_PUBLIC_FUNC(Camera_SetTargetEntity);
    ADD_PUBLIC_FUNC(Camera_ShakeScreen);
    ADD_PUBLIC_FUNC(Camera_HandleHBounds);
    ADD_PUBLIC_FUNC(Camera_HandleVBounds);
    ADD_PUBLIC_FUNC(Camera_SetupLerp);
    ADD_PUBLIC_FUNC(Camera_State_MapView);
    ADD_PUBLIC_FUNC(Camera_State_FollowXY);
    ADD_PUBLIC_FUNC(Camera_State_FollowX);
    ADD_PUBLIC_FUNC(Camera_State_FollowY);
    ADD_PUBLIC_FUNC(Camera_State_HandleLerp);

    // Global/Competition
    ADD_PUBLIC_FUNC(Competition_State_Manager);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Competition_ResetOptions);
    ADD_PUBLIC_FUNC(Competition_ClearMatchData);
    ADD_PUBLIC_FUNC(Competition_DeriveWinner);
    ADD_PUBLIC_FUNC(Competition_WinMatchFor);
#endif

    // Global/COverlay
    ADD_PUBLIC_FUNC(COverlay_DebugSpawn);
    ADD_PUBLIC_FUNC(COverlay_DrawTile);

    // Global/Debris
    ADD_PUBLIC_FUNC(Debris_CreateFromEntries);
    ADD_PUBLIC_FUNC(Debris_CreateFromEntries_UseOffset);
    ADD_PUBLIC_FUNC(Debris_State_Move);
    ADD_PUBLIC_FUNC(Debris_State_Fall);
    ADD_PUBLIC_FUNC(Debris_State_FallAndFlicker);

    // Global/DebugMode
    ADD_PUBLIC_FUNC(DebugMode_NullState);
    ADD_PUBLIC_FUNC(DebugMode_AddObject);

    // Global/DialogRunner
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(DialogRunner_HandleCallback);
    ADD_PUBLIC_FUNC(DialogRunner_NotifyAutoSave_CB);
    ADD_PUBLIC_FUNC(DialogRunner_NotifyAutoSave);
    ADD_PUBLIC_FUNC(DialogRunner_SetNoSaveDisabled);
    ADD_PUBLIC_FUNC(DialogRunner_SetNoSaveEnabled);
    ADD_PUBLIC_FUNC(DialogRunner_PromptSavePreference_CB);
    ADD_PUBLIC_FUNC(DialogRunner_CheckUserAuth_CB);
    ADD_PUBLIC_FUNC(DialogRunner_ManageNotifs);
    ADD_PUBLIC_FUNC(DialogRunner_TrackGameProgressCB);
    ADD_PUBLIC_FUNC(DialogRunner_GetNextNotif);
    ADD_PUBLIC_FUNC(DialogRunner_CheckUnreadNotifs);
    ADD_PUBLIC_FUNC(DialogRunner_NotifyAutosave);
    ADD_PUBLIC_FUNC(DialogRunner_GetUserAuthStatus);
    ADD_PUBLIC_FUNC(DialogRunner_PromptSavePreference);
    ADD_PUBLIC_FUNC(DialogRunner_CheckUserAuth_OK);
#endif

    // Global/Dust
    ADD_PUBLIC_FUNC(Dust_State_SpinDash);
    ADD_PUBLIC_FUNC(Dust_State_DustTrail);
    ADD_PUBLIC_FUNC(Dust_State_GlideTrail);
    ADD_PUBLIC_FUNC(Dust_State_DustPuff);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Dust_State_DustPuff_Collide);
#endif
    ADD_PUBLIC_FUNC(Dust_State_DustPuff_Friction);

    // Global/EggPrison
    ADD_PUBLIC_FUNC(EggPrison_HandleMovement);
    ADD_PUBLIC_FUNC(EggPrison_State_Opened);
    ADD_PUBLIC_FUNC(EggPrison_State_Init);
    ADD_PUBLIC_FUNC(EggPrison_State_Idle);
    ADD_PUBLIC_FUNC(EggPrison_State_Explode);
    ADD_PUBLIC_FUNC(EggPrison_State_SetupActClear);
    ADD_PUBLIC_FUNC(EggPrison_State_FlyOffScreen);

    // Global/GameOver
    ADD_PUBLIC_FUNC(GameOver_SaveGameCallback);
    ADD_PUBLIC_FUNC(GameOver_State_EnterLetters);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(GameOver_State_WaitComp);
#endif
    ADD_PUBLIC_FUNC(GameOver_State_Wait);
    ADD_PUBLIC_FUNC(GameOver_State_ExitLetters);

    // Global/HUD
    ADD_PUBLIC_FUNC(HUD_DrawNumbersBase10);
    ADD_PUBLIC_FUNC(HUD_DrawNumbersBase16);
    ADD_PUBLIC_FUNC(HUD_DrawNumbersHyperRing);
#if GAME_VERSION != VER_100
    ADD_PUBLIC_FUNC(HUD_GetButtonFrame);
    ADD_PUBLIC_FUNC(HUD_GetActionButtonFrames);
#endif
    ADD_PUBLIC_FUNC(HUD_State_MoveIn);
    ADD_PUBLIC_FUNC(HUD_State_MoveOut);
    ADD_PUBLIC_FUNC(HUD_MoveIn);
    ADD_PUBLIC_FUNC(HUD_MoveOut);
    ADD_PUBLIC_FUNC(HUD_EnableRingFlash);
    ADD_PUBLIC_FUNC(HUD_CharacterIndexFromID);

    // Global/InvisibleBlock
    ADD_PUBLIC_FUNC(InvisibleBlock_DrawSprites);

    // Global/ItemBox
    ADD_PUBLIC_FUNC(ItemBox_DebugSpawn);
    ADD_PUBLIC_FUNC(ItemBox_CheckHit);
    ADD_PUBLIC_FUNC(ItemBox_GivePowerup);
    ADD_PUBLIC_FUNC(ItemBox_Break);
    ADD_PUBLIC_FUNC(ItemBox_HandleFallingCollision);
    ADD_PUBLIC_FUNC(ItemBox_HandlePlatformCollision);
    ADD_PUBLIC_FUNC(ItemBox_HandleObjectCollisions);
    ADD_PUBLIC_FUNC(ItemBox_State_Broken);
    ADD_PUBLIC_FUNC(ItemBox_State_Break);
    ADD_PUBLIC_FUNC(ItemBox_State_IconFinish);
    ADD_PUBLIC_FUNC(ItemBox_State_Idle);
    ADD_PUBLIC_FUNC(ItemBox_State_Falling);
    ADD_PUBLIC_FUNC(ItemBox_State_Conveyor);

    // Global/Localization
    ADD_PUBLIC_FUNC(Localization_LoadStrings);
    ADD_PUBLIC_FUNC(Localization_GetString);
    ADD_PUBLIC_FUNC(Localization_GetZoneName);
    ADD_PUBLIC_FUNC(Localization_GetZoneInitials);

    // Global/Music
    ADD_PUBLIC_FUNC(Music_SetMusicTrack);
    ADD_PUBLIC_FUNC(Music_State_PlayOnLoad);
    ADD_PUBLIC_FUNC(Music_PlayJingle);
    ADD_PUBLIC_FUNC(Music_PlayTrack);
    ADD_PUBLIC_FUNC(Music_PlayTrackPtr);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Music_PlayAutoMusicQueuedTrack);
    ADD_PUBLIC_FUNC(Music_HandleMusicStack_Powerups);
    ADD_PUBLIC_FUNC(Music_CheckMusicStack_Active);
    ADD_PUBLIC_FUNC(Music_GetNextTrackStartPos);
    ADD_PUBLIC_FUNC(Music_JingleFadeOut);
#endif
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Music_FinishJingle);
    ADD_PUBLIC_FUNC(Music_ClearMusicStack);
    ADD_PUBLIC_FUNC(Music_TransitionTrack);
#endif
    ADD_PUBLIC_FUNC(Music_FadeOut);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Music_State_Jingle);
    ADD_PUBLIC_FUNC(Music_State_JingleFade);
    ADD_PUBLIC_FUNC(Music_State_FadeTrackIn);
#endif
    ADD_PUBLIC_FUNC(Music_State_StopOnFade);
    ADD_PUBLIC_FUNC(Music_State_PlayOnFade);
#if !MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Music_State_1UPJingle);
#endif

    // Global/PauseMenu
    ADD_PUBLIC_FUNC(PauseMenu_SetupMenu);
    ADD_PUBLIC_FUNC(PauseMenu_SetupTintTable);
    ADD_PUBLIC_FUNC(PauseMenu_AddButton);
    ADD_PUBLIC_FUNC(PauseMenu_ClearButtons);
    ADD_PUBLIC_FUNC(PauseMenu_HandleButtonPositions);
    ADD_PUBLIC_FUNC(PauseMenu_PauseSound);
    ADD_PUBLIC_FUNC(PauseMenu_ResumeSound);
    ADD_PUBLIC_FUNC(PauseMenu_StopSound);
    ADD_PUBLIC_FUNC(PauseMenu_FocusCamera);
    ADD_PUBLIC_FUNC(PauseMenu_UpdateCameras);
    ADD_PUBLIC_FUNC(PauseMenu_CheckAndReassignControllers);
    ADD_PUBLIC_FUNC(PauseMenu_IsDisconnected);
    ADD_PUBLIC_FUNC(PauseMenu_GetPlayerCount);
    ADD_PUBLIC_FUNC(PauseMenu_ResumeButtonCB);
    ADD_PUBLIC_FUNC(PauseMenu_RestartButtonCB);
    ADD_PUBLIC_FUNC(PauseMenu_ExitButtonCB);
    ADD_PUBLIC_FUNC(PauseMenu_RestartDialog_YesCB);
    ADD_PUBLIC_FUNC(PauseMenu_ExitDialog_YesCB);
    ADD_PUBLIC_FUNC(PauseMenu_RestartFadeCB);
    ADD_PUBLIC_FUNC(PauseMenu_ExitFadeCB);
    ADD_PUBLIC_FUNC(PauseMenu_ActionCB_Button);
    ADD_PUBLIC_FUNC(PauseMenu_State_SetupButtons);
    ADD_PUBLIC_FUNC(PauseMenu_State_StartPause);
    ADD_PUBLIC_FUNC(PauseMenu_State_StartPauseCompetition);
    ADD_PUBLIC_FUNC(PauseMenu_State_Paused);
    ADD_PUBLIC_FUNC(PauseMenu_State_ForcedPause);
    ADD_PUBLIC_FUNC(PauseMenu_State_ForcedPauseCompetition);
    ADD_PUBLIC_FUNC(PauseMenu_State_Resume);
    ADD_PUBLIC_FUNC(PauseMenu_State_ResumeCompetition);
    ADD_PUBLIC_FUNC(PauseMenu_State_ForcedResumeCompetition);
    ADD_PUBLIC_FUNC(PauseMenu_State_SetupTitleFade);
    ADD_PUBLIC_FUNC(PauseMenu_State_FadeToTitle);
    ADD_PUBLIC_FUNC(PauseMenu_State_HandleFadeout);
    ADD_PUBLIC_FUNC(PauseMenu_DrawPauseMenu);
    ADD_PUBLIC_FUNC(PauseMenu_Draw_RegularPause);
    ADD_PUBLIC_FUNC(PauseMenu_Draw_ForcePause);

    // Global/PlaneSwitch
    ADD_PUBLIC_FUNC(PlaneSwitch_DrawSprites);
    ADD_PUBLIC_FUNC(PlaneSwitch_CheckCollisions);

    // Global/Player
    ADD_PUBLIC_FUNC(Player_LoadSprites);
    ADD_PUBLIC_FUNC(Player_LoadSpritesVS);
    ADD_PUBLIC_FUNC(Player_SaveValues);
    ADD_PUBLIC_FUNC(Player_GiveScore);
    ADD_PUBLIC_FUNC(Player_GiveRings);
    ADD_PUBLIC_FUNC(Player_GiveLife);
    ADD_PUBLIC_FUNC(Player_ApplyShield);
    ADD_PUBLIC_FUNC(Player_ChangeCharacter);
    ADD_PUBLIC_FUNC(Player_TryTransform);
    ADD_PUBLIC_FUNC(Player_BlendSuperSonicColors);
    ADD_PUBLIC_FUNC(Player_BlendSuperTailsColors);
    ADD_PUBLIC_FUNC(Player_BlendSuperKnuxColors);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Player_BlendSuperMightyColors);
    ADD_PUBLIC_FUNC(Player_BlendSuperRayColors);
    ADD_PUBLIC_FUNC(Player_HandleSuperForm);
#endif
    ADD_PUBLIC_FUNC(Player_CheckP2KeyPress);
    ADD_PUBLIC_FUNC(Player_GetNearestPlayerX);
    ADD_PUBLIC_FUNC(Player_GetNearestPlayer);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Player_RemoveEncoreLeader);
    ADD_PUBLIC_FUNC(Player_ResetBoundaries);
#endif
    ADD_PUBLIC_FUNC(Player_HandleDeath);
    ADD_PUBLIC_FUNC(Player_HandleQuickRespawn);
    ADD_PUBLIC_FUNC(Player_GetHitbox);
    ADD_PUBLIC_FUNC(Player_GetAltHitbox);
    ADD_PUBLIC_FUNC(Player_CheckCollisionTouch);
    ADD_PUBLIC_FUNC(Player_CheckCollisionBox);
    ADD_PUBLIC_FUNC(Player_CheckCollisionPlatform);
    ADD_PUBLIC_FUNC(Player_Hurt);
    ADD_PUBLIC_FUNC(Player_HurtFlip);
    ADD_PUBLIC_FUNC(Player_ElementHurt);
    ADD_PUBLIC_FUNC(Player_CheckAttacking);
    ADD_PUBLIC_FUNC(Player_CheckAttackingNoInvTimer);
    ADD_PUBLIC_FUNC(Player_CheckBadnikTouch);
    ADD_PUBLIC_FUNC(Player_CheckBadnikBreak);
    ADD_PUBLIC_FUNC(Player_CheckBossHit);
    ADD_PUBLIC_FUNC(Player_ProjectileHurt);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Player_CheckMightyShellHit);
#endif
    ADD_PUBLIC_FUNC(Player_CheckItemBreak);
    ADD_PUBLIC_FUNC(Player_UpdatePhysicsState);
    ADD_PUBLIC_FUNC(Player_HandleGroundMovement);
    ADD_PUBLIC_FUNC(Player_HandleGroundRotation);
    ADD_PUBLIC_FUNC(Player_HandleAirRotation);
    ADD_PUBLIC_FUNC(Player_HandleAirMovement);
    ADD_PUBLIC_FUNC(Player_HandleAirFriction);
    ADD_PUBLIC_FUNC(Player_Action_Jump);
    ADD_PUBLIC_FUNC(Player_Action_Roll);
    ADD_PUBLIC_FUNC(Player_Action_Spindash);
    ADD_PUBLIC_FUNC(Player_Action_Peelout);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Player_SwapMainPlayer);
#endif
    ADD_PUBLIC_FUNC(Player_HandleRollDeceleration);
    ADD_PUBLIC_FUNC(Player_Hit);
    ADD_PUBLIC_FUNC(Player_CheckValidState);
    ADD_PUBLIC_FUNC(Player_HandleFlyCarry);
    ADD_PUBLIC_FUNC(Player_HandleSidekickRespawn);
    ADD_PUBLIC_FUNC(Player_State_StartSuper);
    ADD_PUBLIC_FUNC(Player_State_Static);
    ADD_PUBLIC_FUNC(Player_State_Ground);
    ADD_PUBLIC_FUNC(Player_State_Air);
    ADD_PUBLIC_FUNC(Player_State_Roll);
    ADD_PUBLIC_FUNC(Player_State_TubeRoll);
    ADD_PUBLIC_FUNC(Player_State_TubeAirRoll);
    ADD_PUBLIC_FUNC(Player_State_LookUp);
    ADD_PUBLIC_FUNC(Player_State_Crouch);
    ADD_PUBLIC_FUNC(Player_State_Spindash);
    ADD_PUBLIC_FUNC(Player_State_Peelout);
    ADD_PUBLIC_FUNC(Player_State_OuttaHere);
    ADD_PUBLIC_FUNC(Player_State_Transform);
    ADD_PUBLIC_FUNC(Player_State_Hurt);
    ADD_PUBLIC_FUNC(Player_State_Death);
    ADD_PUBLIC_FUNC(Player_State_Drown);
    ADD_PUBLIC_FUNC(Player_State_DropDash);
    ADD_PUBLIC_FUNC(Player_State_BubbleBounce);
    ADD_PUBLIC_FUNC(Player_State_TailsFlight);
    ADD_PUBLIC_FUNC(Player_State_FlyCarried);
    ADD_PUBLIC_FUNC(Player_State_KnuxGlideLeft);
    ADD_PUBLIC_FUNC(Player_State_KnuxGlideRight);
    ADD_PUBLIC_FUNC(Player_State_KnuxGlideDrop);
    ADD_PUBLIC_FUNC(Player_State_KnuxGlideSlide);
    ADD_PUBLIC_FUNC(Player_State_KnuxWallClimb);
    ADD_PUBLIC_FUNC(Player_State_KnuxLedgePullUp);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Player_State_MightyHammerDrop);
    ADD_PUBLIC_FUNC(Player_State_MightyUnspin);
    ADD_PUBLIC_FUNC(Player_SpawnMightyHammerdropDust);
    ADD_PUBLIC_FUNC(Player_CheckMightyUnspin);
    ADD_PUBLIC_FUNC(Player_State_RayGlide);
    ADD_PUBLIC_FUNC(Player_State_FlyToPlayer);
#endif
    ADD_PUBLIC_FUNC(Player_State_ReturnToPlayer);
    ADD_PUBLIC_FUNC(Player_State_HoldRespawn);
    ADD_PUBLIC_FUNC(Player_FinishedReturnToPlayer);
    ADD_PUBLIC_FUNC(Player_State_EncoreRespawn);
    ADD_PUBLIC_FUNC(Player_State_Victory);
    ADD_PUBLIC_FUNC(Player_State_Bubble);
    ADD_PUBLIC_FUNC(Player_State_WaterSlide);
    ADD_PUBLIC_FUNC(Player_State_TransportTube);
    ADD_PUBLIC_FUNC(Player_Gravity_False);
    ADD_PUBLIC_FUNC(Player_Gravity_True);
    ADD_PUBLIC_FUNC(Player_JumpAbility_Sonic);
    ADD_PUBLIC_FUNC(Player_JumpAbility_Tails);
    ADD_PUBLIC_FUNC(Player_JumpAbility_Knux);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Player_JumpAbility_Mighty);
    ADD_PUBLIC_FUNC(Player_JumpAbility_Ray);
    ADD_PUBLIC_FUNC(Player_SfxCheck_RayDive);
    ADD_PUBLIC_FUNC(Player_SfxCheck_RaySwoop);
    ADD_PUBLIC_FUNC(Player_SfxUpdate_RayDive);
    ADD_PUBLIC_FUNC(Player_SfxUpdate_RaySwoop);
    ADD_PUBLIC_FUNC(Player_Input_P1);
    ADD_PUBLIC_FUNC(Player_Input_P2_Delay);
    ADD_PUBLIC_FUNC(Player_Input_P2_AI);
    ADD_PUBLIC_FUNC(Player_Input_AI_SpindashPt1);
    ADD_PUBLIC_FUNC(Player_Input_AI_SpindashPt2);
    ADD_PUBLIC_FUNC(Player_Input_P2_Player);
#endif

    // Global/ReplayRecorder
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(ReplayRecorder_TitleCardCB);
    ADD_PUBLIC_FUNC(ReplayRecorder_Resume);
    ADD_PUBLIC_FUNC(ReplayRecorder_StartCB);
    ADD_PUBLIC_FUNC(ReplayRecorder_FinishCB);
    ADD_PUBLIC_FUNC(ReplayRecorder_Buffer_Move);
    ADD_PUBLIC_FUNC(ReplayRecorder_SaveReplayDLG_NoCB);
    ADD_PUBLIC_FUNC(ReplayRecorder_SaveReplayDLG_YesCB);
    ADD_PUBLIC_FUNC(ReplayRecorder_SaveReplayDLG_CB);
    ADD_PUBLIC_FUNC(ReplayRecorder_SaveReplay);
    ADD_PUBLIC_FUNC(ReplayRecorder_SaveFile_Replay);
    ADD_PUBLIC_FUNC(ReplayRecorder_SaveCallback_ReplayDB);
    ADD_PUBLIC_FUNC(ReplayRecorder_SaveCallback_TimeAttackDB);
    ADD_PUBLIC_FUNC(ReplayRecorder_Buffer_PackInPlace);
    ADD_PUBLIC_FUNC(ReplayRecorder_Buffer_Unpack);
    ADD_PUBLIC_FUNC(ReplayRecorder_Buffer_LoadFile);
    ADD_PUBLIC_FUNC(ReplayRecorder_Buffer_SaveFile);
    ADD_PUBLIC_FUNC(ReplayRecorder_LoadReplayCallback);
    ADD_PUBLIC_FUNC(ReplayRecorder_SaveReplayCallback);
    ADD_PUBLIC_FUNC(ReplayRecorder_ConfigureGhost_CB);
    ADD_PUBLIC_FUNC(ReplayRecorder_SetupActions);
    ADD_PUBLIC_FUNC(ReplayRecorder_SetupWriteBuffer);
    ADD_PUBLIC_FUNC(ReplayRecorder_DrawGhostDisplay);
    ADD_PUBLIC_FUNC(ReplayRecorder_Record);
    ADD_PUBLIC_FUNC(ReplayRecorder_StartRecording);
    ADD_PUBLIC_FUNC(ReplayRecorder_Play);
    ADD_PUBLIC_FUNC(ReplayRecorder_Rewind);
    ADD_PUBLIC_FUNC(ReplayRecorder_Seek);
    ADD_PUBLIC_FUNC(ReplayRecorder_SeekFunc);
    ADD_PUBLIC_FUNC(ReplayRecorder_Stop);
    ADD_PUBLIC_FUNC(ReplayRecorder_SetGimmickState);
    ADD_PUBLIC_FUNC(ReplayRecorder_ForceApplyFramePtr);
    ADD_PUBLIC_FUNC(ReplayRecorder_ApplyFramePtr);
    ADD_PUBLIC_FUNC(ReplayRecorder_CheckPlayerGimmickState);
    ADD_PUBLIC_FUNC(ReplayRecorder_PackFrame);
    ADD_PUBLIC_FUNC(ReplayRecorder_PlayBackInput);
    ADD_PUBLIC_FUNC(ReplayRecorder_Pause);
    ADD_PUBLIC_FUNC(ReplayRecorder_PlayerState_PlaybackReplay);
    ADD_PUBLIC_FUNC(ReplayRecorder_State_SetupPlayback);
    ADD_PUBLIC_FUNC(ReplayRecorder_State_Playback);
    ADD_PUBLIC_FUNC(ReplayRecorder_State_Record);
    ADD_PUBLIC_FUNC(ReplayRecorder_Late_Playback);
    ADD_PUBLIC_FUNC(ReplayRecorder_Late_RecordFrames);
#endif

    // Global/Ring
    ADD_PUBLIC_FUNC(Ring_DebugSpawn);
    ADD_PUBLIC_FUNC(Ring_Collect);
    ADD_PUBLIC_FUNC(Ring_LoseRings);
    ADD_PUBLIC_FUNC(Ring_LoseHyperRings);
    ADD_PUBLIC_FUNC(Ring_FakeLoseRings);
    ADD_PUBLIC_FUNC(Ring_CheckPlatformCollisions);
    ADD_PUBLIC_FUNC(Ring_CheckObjectCollisions);
    ADD_PUBLIC_FUNC(Ring_State_Normal);
    ADD_PUBLIC_FUNC(Ring_State_Linear);
    ADD_PUBLIC_FUNC(Ring_State_Circular);
    ADD_PUBLIC_FUNC(Ring_State_Path);
    ADD_PUBLIC_FUNC(Ring_State_Track);
    ADD_PUBLIC_FUNC(Ring_State_Lost);
    ADD_PUBLIC_FUNC(Ring_State_LostFX);
    ADD_PUBLIC_FUNC(Ring_State_Big);
    ADD_PUBLIC_FUNC(Ring_State_Attracted);
    ADD_PUBLIC_FUNC(Ring_State_Sparkle);
    ADD_PUBLIC_FUNC(Ring_Draw_Normal);
    ADD_PUBLIC_FUNC(Ring_Draw_Oscillating);
    ADD_PUBLIC_FUNC(Ring_Draw_Sparkle);

#if MANIA_USE_PLUS
    // Global/SaveGame
    ADD_PUBLIC_FUNC(SaveGame_GetSaveRAM);
    ADD_PUBLIC_FUNC(SaveGame_GetDataPtr);
#else
    ADD_PUBLIC_FUNC(SaveGame_GetDataPtr);
    ADD_PUBLIC_FUNC(SaveGame_LoadSaveData);
#endif
    ADD_PUBLIC_FUNC(SaveGame_LoadFile);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(SaveGame_SaveFile);
#else
    ADD_PUBLIC_FUNC(SaveGame_SaveFile);
    ADD_PUBLIC_FUNC(SaveGame_SaveLoadedCB);
#endif
    ADD_PUBLIC_FUNC(SaveGame_SaveGameState);
    ADD_PUBLIC_FUNC(SaveGame_SaveProgress);
    ADD_PUBLIC_FUNC(SaveGame_ClearRestartData);
    ADD_PUBLIC_FUNC(SaveGame_SavePlayerState);
    ADD_PUBLIC_FUNC(SaveGame_LoadPlayerState);
    ADD_PUBLIC_FUNC(SaveGame_ResetPlayerState);
    ADD_PUBLIC_FUNC(SaveGame_LoadFile_CB);
    ADD_PUBLIC_FUNC(SaveGame_SaveFile_CB);
    ADD_PUBLIC_FUNC(SaveGame_AllChaosEmeralds);
    ADD_PUBLIC_FUNC(SaveGame_GetEmerald);
    ADD_PUBLIC_FUNC(SaveGame_SetEmerald);
    ADD_PUBLIC_FUNC(SaveGame_ClearCollectedSpecialRings);
    ADD_PUBLIC_FUNC(SaveGame_GetCollectedSpecialRing);
    ADD_PUBLIC_FUNC(SaveGame_SetCollectedSpecialRing);

    // Global/Shield
    ADD_PUBLIC_FUNC(Shield_State_Default);
    ADD_PUBLIC_FUNC(Shield_State_BubbleDrop);
    ADD_PUBLIC_FUNC(Shield_State_BubbleBounced);
    ADD_PUBLIC_FUNC(Shield_State_FireDash);
    ADD_PUBLIC_FUNC(Shield_State_LightningSparks);
    ADD_PUBLIC_FUNC(Shield_State_Insta);

    // Global/SignPost
    ADD_PUBLIC_FUNC(SignPost_DebugSpawn);
    ADD_PUBLIC_FUNC(SignPost_HandleSpin);
    ADD_PUBLIC_FUNC(SignPost_HandleSparkles);
    ADD_PUBLIC_FUNC(SignPost_HandleCamBounds);
    ADD_PUBLIC_FUNC(SignPost_CheckTouch);
    ADD_PUBLIC_FUNC(SignPost_State_Init);
    ADD_PUBLIC_FUNC(SignPost_State_AwaitTouch);
    ADD_PUBLIC_FUNC(SignPost_State_Spin);
    ADD_PUBLIC_FUNC(SignPost_State_SpinVS);
    ADD_PUBLIC_FUNC(SignPost_State_Launched);
    ADD_PUBLIC_FUNC(SignPost_State_Falling);
    ADD_PUBLIC_FUNC(SignPost_State_Done);

    // Global/Soundboard
    ADD_PUBLIC_FUNC(Soundboard_LoadSfx);

    // Global/SpecialRing
    ADD_PUBLIC_FUNC(SpecialRing_DebugSpawn);
    ADD_PUBLIC_FUNC(SpecialRing_State_Warp);
    ADD_PUBLIC_FUNC(SpecialRing_State_Flash);
    ADD_PUBLIC_FUNC(SpecialRing_State_Idle);

    // Global/SpeedGate
    ADD_PUBLIC_FUNC(SpeedGate_State_WaitForStart);
    ADD_PUBLIC_FUNC(SpeedGate_State_ProcessGate);
    ADD_PUBLIC_FUNC(SpeedGate_State_HandleFinished);

    // Global/Spikes
    ADD_PUBLIC_FUNC(Spikes_Draw_Global);
    ADD_PUBLIC_FUNC(Spikes_Draw_Glint);
    ADD_PUBLIC_FUNC(Spikes_Shatter);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Spikes_CheckHit);
#endif

    // Global/Spring
    ADD_PUBLIC_FUNC(Spring_State_Vertical);
    ADD_PUBLIC_FUNC(Spring_State_Horizontal);
    ADD_PUBLIC_FUNC(Spring_State_Diagonal);

    // Global/StarPost
    ADD_PUBLIC_FUNC(StarPost_DebugSpawn);
    ADD_PUBLIC_FUNC(StarPost_ResetStarPosts);
    ADD_PUBLIC_FUNC(StarPost_CheckBonusStageEntry);
    ADD_PUBLIC_FUNC(StarPost_CheckCollisions);
    ADD_PUBLIC_FUNC(StarPost_State_Idle);
    ADD_PUBLIC_FUNC(StarPost_State_Spinning);

    // Global/TimeAttackGate
    ADD_PUBLIC_FUNC(TimeAttackGate_HandleSpin);
    ADD_PUBLIC_FUNC(TimeAttackGate_HandleStart);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(TimeAttackGate_AddRecord);
    ADD_PUBLIC_FUNC(TimeAttackGate_WaitSave_Leaderboards);
    ADD_PUBLIC_FUNC(TimeAttackGate_CheckTouch);
#endif
    ADD_PUBLIC_FUNC(TimeAttackGate_State_Gate);
    ADD_PUBLIC_FUNC(TimeAttackGate_State_Restarter);
    ADD_PUBLIC_FUNC(TimeAttackGate_State_Fadeout);
    ADD_PUBLIC_FUNC(TimeAttackGate_Draw_Gate);
    ADD_PUBLIC_FUNC(TimeAttackGate_Draw_Restarter);

#if MANIA_USE_PLUS
    // Global/TitleCard
    ADD_PUBLIC_FUNC(TitleCard_SetupColors);
    ADD_PUBLIC_FUNC(TitleCard_SetupVertices);
#endif
    ADD_PUBLIC_FUNC(TitleCard_SetupTitleWords);
    ADD_PUBLIC_FUNC(TitleCard_HandleWordMovement);
    ADD_PUBLIC_FUNC(TitleCard_HandleZoneCharMovement);
    ADD_PUBLIC_FUNC(TitleCard_HandleCamera);
    ADD_PUBLIC_FUNC(TitleCard_State_SetupBGElements);
    ADD_PUBLIC_FUNC(TitleCard_State_OpeningBG);
    ADD_PUBLIC_FUNC(TitleCard_State_EnterTitle);
    ADD_PUBLIC_FUNC(TitleCard_State_ShowingTitle);
    ADD_PUBLIC_FUNC(TitleCard_State_SlideAway);
    ADD_PUBLIC_FUNC(TitleCard_State_Supressed);
    ADD_PUBLIC_FUNC(TitleCard_Draw_SlideIn);
    ADD_PUBLIC_FUNC(TitleCard_Draw_ShowTitleCard);
    ADD_PUBLIC_FUNC(TitleCard_Draw_SlideAway);

    // Global/Zone
    ADD_PUBLIC_FUNC(Zone_GetZoneID);
    ADD_PUBLIC_FUNC(Zone_StoreEntities);
    ADD_PUBLIC_FUNC(Zone_ReloadStoredEntities);
    ADD_PUBLIC_FUNC(Zone_StartFadeOut);
    ADD_PUBLIC_FUNC(Zone_StartFadeIn);
    ADD_PUBLIC_FUNC(Zone_StartFadeOut_MusicFade);
    ADD_PUBLIC_FUNC(Zone_StartFadeOut_Competition);
    ADD_PUBLIC_FUNC(Zone_RotateOnPivot);
    ADD_PUBLIC_FUNC(Zone_ReloadScene);
    ADD_PUBLIC_FUNC(Zone_StartTeleportAction);
    ADD_PUBLIC_FUNC(Zone_ApplyWorldBounds);
    ADD_PUBLIC_FUNC(Zone_IsZoneLastAct);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Zone_GetListPos_EncoreMode);
    ADD_PUBLIC_FUNC(Zone_GetListPos_ManiaMode);
    ADD_PUBLIC_FUNC(Zone_Draw_Fade);
    ADD_PUBLIC_FUNC(Zone_State_FadeOut);
    ADD_PUBLIC_FUNC(Zone_State_FadeIn);
    ADD_PUBLIC_FUNC(Zone_State_FadeOut_Competition);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Zone_TitleCard_SupressCB);
    ADD_PUBLIC_FUNC(Zone_State_ReloadScene);
    ADD_PUBLIC_FUNC(Zone_State_FadeOut_Destroy);
#endif
    ADD_PUBLIC_FUNC(Zone_HandlePlayerSwap);
    ADD_PUBLIC_FUNC(Zone_State_SwapPlayers);
    ADD_PUBLIC_FUNC(Zone_State_HandleSwapFadeIn);
#endif
}
