#include "../Game.h" // Or equivalent main header for function declarations & ModAPI access

#ifndef ADD_PUBLIC_FUNC
#define ADD_PUBLIC_FUNC(func) Mod.AddPublicFunction(#func, (void *)(func))
#endif

void InitPublicFunctions_Part5(void)
{
    // OOZ/Aquis
    ADD_PUBLIC_FUNC(Aquis_DebugSpawn);
    ADD_PUBLIC_FUNC(Aquis_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Aquis_CheckOffScreen);
    ADD_PUBLIC_FUNC(Aquis_State_Init);
    ADD_PUBLIC_FUNC(Aquis_State_Idle);
    ADD_PUBLIC_FUNC(Aquis_State_Moving);
    ADD_PUBLIC_FUNC(Aquis_State_Shoot);
    ADD_PUBLIC_FUNC(Aquis_State_Turning);
    ADD_PUBLIC_FUNC(Aquis_State_Flee);
    ADD_PUBLIC_FUNC(Aquis_State_Shot);

    // OOZ/BallCannon
    ADD_PUBLIC_FUNC(BallCannon_CheckPlayerEntry);
    ADD_PUBLIC_FUNC(BallCannon_State_Idle);
    ADD_PUBLIC_FUNC(BallCannon_State_Inserted);
    ADD_PUBLIC_FUNC(BallCannon_State_Turning);
    ADD_PUBLIC_FUNC(BallCannon_State_EjectPlayer);
    ADD_PUBLIC_FUNC(BallCannon_State_CorkBlocked);
    ADD_PUBLIC_FUNC(BallCannon_State_CorkOpened);
    ADD_PUBLIC_FUNC(BallCannon_State_CorkDebris);

    // OOZ/GasPlatform
    ADD_PUBLIC_FUNC(GasPlatform_PopPlatform);
    ADD_PUBLIC_FUNC(GasPlatform_State_Popped);
    ADD_PUBLIC_FUNC(GasPlatform_State_SpringCooldown);
    ADD_PUBLIC_FUNC(GasPlatform_State_Shaking);

    // OOZ/Hatch
    ADD_PUBLIC_FUNC(Hatch_State_SubEntryHatch);
    ADD_PUBLIC_FUNC(Hatch_State_PlayerEntered);
    ADD_PUBLIC_FUNC(Hatch_State_Descend);
    ADD_PUBLIC_FUNC(Hatch_State_MoveToDestPos);
    ADD_PUBLIC_FUNC(Hatch_State_Surfacing);
    ADD_PUBLIC_FUNC(Hatch_State_OpenHatchReleasePlayer);
    ADD_PUBLIC_FUNC(Hatch_State_CloseHatch);
    ADD_PUBLIC_FUNC(Hatch_State_FadeIn);
    ADD_PUBLIC_FUNC(Hatch_State_SubExit);
    ADD_PUBLIC_FUNC(Hatch_State_FadeOut);
    ADD_PUBLIC_FUNC(Hatch_State_SubExitHatch);

    // OOZ/MegaOctus
    ADD_PUBLIC_FUNC(MegaOctus_CheckPlayerCollisions_Body);
    ADD_PUBLIC_FUNC(MegaOctus_HandleEggmanAnim);
    ADD_PUBLIC_FUNC(MegaOctus_Hit);
    ADD_PUBLIC_FUNC(MegaOctus_Explode);
    ADD_PUBLIC_FUNC(MegaOctus_HandleDirectionChange);
    ADD_PUBLIC_FUNC(MegaOctus_State_SetupBounds);
    ADD_PUBLIC_FUNC(MegaOctus_State_SetupArena);
    ADD_PUBLIC_FUNC(MegaOctus_State_None);
    ADD_PUBLIC_FUNC(MegaOctus_State_EnterMegaOctus);
    ADD_PUBLIC_FUNC(MegaOctus_State_OpenHatchAndLaugh);
    ADD_PUBLIC_FUNC(MegaOctus_State_CloseHatch);
    ADD_PUBLIC_FUNC(MegaOctus_State_DiveIntoOil);
    ADD_PUBLIC_FUNC(MegaOctus_State_SpawnWeapons);
    ADD_PUBLIC_FUNC(MegaOctus_State_CannonThenSpawnOrbs);
    ADD_PUBLIC_FUNC(MegaOctus_State_Destroyed);
    ADD_PUBLIC_FUNC(MegaOctus_State_Finish);
    ADD_PUBLIC_FUNC(MegaOctus_Draw_Body);
    ADD_PUBLIC_FUNC(MegaOctus_CheckPlayerCollisions_Harpoon);
    ADD_PUBLIC_FUNC(MegaOctus_State_HarpoonLeft);
    ADD_PUBLIC_FUNC(MegaOctus_State_HarpoonRight);
    ADD_PUBLIC_FUNC(MegaOctus_Draw_HarpoonLeft);
    ADD_PUBLIC_FUNC(MegaOctus_Draw_HarpoonRight);
    ADD_PUBLIC_FUNC(MegaOctus_CheckPlayerCollisions_Cannon);
    ADD_PUBLIC_FUNC(MegaOctus_StateCannon_RiseUp);
    ADD_PUBLIC_FUNC(MegaOctus_StateCannon_Idle);
    ADD_PUBLIC_FUNC(MegaOctus_StateCannon_FireLaser);
    ADD_PUBLIC_FUNC(MegaOctus_StateCannon_SinkDown);
    ADD_PUBLIC_FUNC(MegaOctus_Draw_Cannon);
    ADD_PUBLIC_FUNC(MegaOctus_CheckPlayerCollisions_Orb);
    ADD_PUBLIC_FUNC(MegaOctus_StateOrb_Wait);
    ADD_PUBLIC_FUNC(MegaOctus_StateOrb_FireShot);
    ADD_PUBLIC_FUNC(MegaOctus_StateOrb_Idle);
    ADD_PUBLIC_FUNC(MegaOctus_StateOrb_Destroyed);
    ADD_PUBLIC_FUNC(MegaOctus_Draw_Orb);
    ADD_PUBLIC_FUNC(MegaOctus_StateArm_WrapAroundPlatform);
    ADD_PUBLIC_FUNC(MegaOctus_StateArm_GrabbedPlatform);
    ADD_PUBLIC_FUNC(MegaOctus_StateArm_PullPlatformDown);
    ADD_PUBLIC_FUNC(MegaOctus_StateArm_RisePlatformUp);
    ADD_PUBLIC_FUNC(MegaOctus_Draw_Arm_WrapAroundPlatformBase);
    ADD_PUBLIC_FUNC(MegaOctus_StateArm_GrabPlatform);
    ADD_PUBLIC_FUNC(MegaOctus_Draw_Arm_WrapAroundPlatformTop);
    ADD_PUBLIC_FUNC(MegaOctus_State_Laser);
    ADD_PUBLIC_FUNC(MegaOctus_State_LaserFire);
    ADD_PUBLIC_FUNC(MegaOctus_Draw_Laser);
    ADD_PUBLIC_FUNC(MegaOctus_State_Shot);
    ADD_PUBLIC_FUNC(MegaOctus_Draw_OrbShot);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MegaOctus_TilePlatformState_RiseOuttaOil);
#endif

    // OOZ/MeterDroid
    ADD_PUBLIC_FUNC(MeterDroid_CheckPlayerCollisions_NoWrench_UseFlip);
    ADD_PUBLIC_FUNC(MeterDroid_CheckPlayerCollisions_Wrench_NoFlip);
    ADD_PUBLIC_FUNC(MeterDroid_CheckPlayerCollisions_NoWrench_NoFlip);
    ADD_PUBLIC_FUNC(MeterDroid_Hit);
    ADD_PUBLIC_FUNC(MeterDroid_Explode);
    ADD_PUBLIC_FUNC(MeterDroid_FindTargetValve);
    ADD_PUBLIC_FUNC(MeterDroid_PopPlatforms);
    ADD_PUBLIC_FUNC(MeterDroid_Draw_Normal);
    ADD_PUBLIC_FUNC(MeterDroid_Draw_SpinningValve);
    ADD_PUBLIC_FUNC(MeterDroid_Draw_ThrownWrench);
    ADD_PUBLIC_FUNC(MeterDroid_State_Init);
    ADD_PUBLIC_FUNC(MeterDroid_State_StartFight);
    ADD_PUBLIC_FUNC(MeterDroid_State_Idle);
    ADD_PUBLIC_FUNC(MeterDroid_State_PickMoveDir);
    ADD_PUBLIC_FUNC(MeterDroid_State_MoveRight);
    ADD_PUBLIC_FUNC(MeterDroid_State_MoveLeft);
    ADD_PUBLIC_FUNC(MeterDroid_State_ThrowWrench);
    ADD_PUBLIC_FUNC(MeterDroid_State_ThrownWrench);
    ADD_PUBLIC_FUNC(MeterDroid_State_CaughtWrench);
    ADD_PUBLIC_FUNC(MeterDroid_State_MoveToValve);
    ADD_PUBLIC_FUNC(MeterDroid_State_MoveIntoBG);
    ADD_PUBLIC_FUNC(MeterDroid_State_TurningValve);
    ADD_PUBLIC_FUNC(MeterDroid_State_StopTurningValve);
    ADD_PUBLIC_FUNC(MeterDroid_State_WatchPlatformsPopUp);
    ADD_PUBLIC_FUNC(MeterDroid_State_Destroyed);
    ADD_PUBLIC_FUNC(MeterDroid_State_FinishAct);

    // OOZ/Octus
    ADD_PUBLIC_FUNC(Octus_DebugSpawn);
    ADD_PUBLIC_FUNC(Octus_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Octus_CheckOffScreen);
    ADD_PUBLIC_FUNC(Octus_State_Init);
    ADD_PUBLIC_FUNC(Octus_State_CheckPlayerInRange);
    ADD_PUBLIC_FUNC(Octus_State_JumpDelay);
    ADD_PUBLIC_FUNC(Octus_State_Jump);
    ADD_PUBLIC_FUNC(Octus_State_Shoot);
    ADD_PUBLIC_FUNC(Octus_State_Fall);
    ADD_PUBLIC_FUNC(Octus_State_Shot);

    // OOZ/OOZ1Outro
    ADD_PUBLIC_FUNC(OOZ1Outro_Cutscene_FadeIn);
    ADD_PUBLIC_FUNC(OOZ1Outro_Cutscene_PostActClearSetup);
    ADD_PUBLIC_FUNC(OOZ1Outro_Cutscene_FallIntoAct2);
    ADD_PUBLIC_FUNC(OOZ1Outro_Cutscene_BeginAct);

    // OOZ/OOZ2Outro
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(OOZ2Outro_StageFinish_EndAct2);
    ADD_PUBLIC_FUNC(OOZ2Outro_State_SubFloat);
    ADD_PUBLIC_FUNC(OOZ2Outro_CheckSkip);
    ADD_PUBLIC_FUNC(OOZ2Outro_State_BoardSub);
    ADD_PUBLIC_FUNC(OOZ2Outro_State_SubActivate);
    ADD_PUBLIC_FUNC(OOZ2Outro_State_SubLaunch);
#endif

    // OOZ/OOZFlames
    ADD_PUBLIC_FUNC(OOZFlames_State_Appear);
    ADD_PUBLIC_FUNC(OOZFlames_State_Rise);

    // OOZ/OOZSetup
    ADD_PUBLIC_FUNC(OOZSetup_SfxCheck_Flame2);
    ADD_PUBLIC_FUNC(OOZSetup_SfxCheck_Slide);
    ADD_PUBLIC_FUNC(OOZSetup_SfxCheck_OilSwim);
    ADD_PUBLIC_FUNC(OOZSetup_Draw_Flames);
    ADD_PUBLIC_FUNC(OOZSetup_HandleActiveFlames);
    ADD_PUBLIC_FUNC(OOZSetup_StartFire);
    ADD_PUBLIC_FUNC(OOZSetup_Trigger_AwardAchievement);
    ADD_PUBLIC_FUNC(OOZSetup_PlayerState_OilPool);
    ADD_PUBLIC_FUNC(OOZSetup_PlayerState_OilStrip);
    ADD_PUBLIC_FUNC(OOZSetup_PlayerState_OilSlide);
    ADD_PUBLIC_FUNC(OOZSetup_PlayerState_OilFall);

    // OOZ/PushSpring
    ADD_PUBLIC_FUNC(PushSpring_Collide_Top);
    ADD_PUBLIC_FUNC(PushSpring_Collide_Bottom);
    ADD_PUBLIC_FUNC(PushSpring_Collide_Left);
    ADD_PUBLIC_FUNC(PushSpring_Collide_Right);
    ADD_PUBLIC_FUNC(PushSpring_Draw_Top);
    ADD_PUBLIC_FUNC(PushSpring_Draw_Bottom);
    ADD_PUBLIC_FUNC(PushSpring_Draw_Left);
    ADD_PUBLIC_FUNC(PushSpring_Draw_Right);
    ADD_PUBLIC_FUNC(PushSpring_State_WaitForPushed);
    ADD_PUBLIC_FUNC(PushSpring_State_BeingPushed);
    ADD_PUBLIC_FUNC(PushSpring_State_PushRecoil);

    // OOZ/Smog
    ADD_PUBLIC_FUNC(Smog_DrawHook_ApplySmogPalette);

    // OOZ/Sol
    ADD_PUBLIC_FUNC(Sol_DebugSpawn);
    ADD_PUBLIC_FUNC(Sol_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(Sol_HandlePlayerHurt);
    ADD_PUBLIC_FUNC(Sol_HandleRotation);
    ADD_PUBLIC_FUNC(Sol_CheckOffScreen);
    ADD_PUBLIC_FUNC(Sol_State_Init);
    ADD_PUBLIC_FUNC(Sol_State_Moving);
    ADD_PUBLIC_FUNC(Sol_State_ShootingOrbs);
    ADD_PUBLIC_FUNC(Sol_State_NoOrbs);
    ADD_PUBLIC_FUNC(Sol_State_SmallFireball);
    ADD_PUBLIC_FUNC(Sol_State_ActiveFireball);
    ADD_PUBLIC_FUNC(Sol_State_FlameDissipate);
    ADD_PUBLIC_FUNC(Sol_State_FireballOilFlame);
    ADD_PUBLIC_FUNC(Sol_State_OilFlame);

    // PGZ/Acetone
    ADD_PUBLIC_FUNC(Acetone_DrawGustFX);
    ADD_PUBLIC_FUNC(Acetone_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Acetone_HandleGustCount);
    ADD_PUBLIC_FUNC(Acetone_HandleGustPos);
    ADD_PUBLIC_FUNC(Acetone_State_AwaitInterval);
    ADD_PUBLIC_FUNC(Acetone_State_Dispensing);
    ADD_PUBLIC_FUNC(Acetone_State_StopDispensing);

    // PGZ/Crate
    ADD_PUBLIC_FUNC(Crate_Break);
    ADD_PUBLIC_FUNC(Crate_MoveY);
    ADD_PUBLIC_FUNC(Crate_Collide);
    ADD_PUBLIC_FUNC(Crate_State_None);
    ADD_PUBLIC_FUNC(Crate_State_ApplyGravity);
    ADD_PUBLIC_FUNC(Crate_State_WaitToFall);
    ADD_PUBLIC_FUNC(Crate_State_Fall);

    // PGZ/Dragonfly
    ADD_PUBLIC_FUNC(Dragonfly_DebugSpawn);
    ADD_PUBLIC_FUNC(Dragonfly_DebugDraw);
    ADD_PUBLIC_FUNC(Dragonfly_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Dragonfly_State_Init);
    ADD_PUBLIC_FUNC(Dragonfly_State_Move);
    ADD_PUBLIC_FUNC(Dragonfly_State_Debris);

    // PGZ/FrostThrower
    ADD_PUBLIC_FUNC(FrostThrower_DrawGustFX);
    ADD_PUBLIC_FUNC(FrostThrower_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(FrostThrower_HandleGustCount);
    ADD_PUBLIC_FUNC(FrostThrower_HandleGustPos);
    ADD_PUBLIC_FUNC(FrostThrower_State_AwaitInterval);
    ADD_PUBLIC_FUNC(FrostThrower_State_Dispensing);
    ADD_PUBLIC_FUNC(FrostThrower_State_StopDispensing);

    // PGZ/HeavyShinobi
    ADD_PUBLIC_FUNC(HeavyShinobi_HandleAfterFX);
    ADD_PUBLIC_FUNC(HeavyShinobi_HandleSlash);
    ADD_PUBLIC_FUNC(HeavyShinobi_StartJump);
    ADD_PUBLIC_FUNC(HeavyShinobi_Explode);
    ADD_PUBLIC_FUNC(HeavyShinobi_State_Init);
    ADD_PUBLIC_FUNC(HeavyShinobi_State_SetupArena);
    ADD_PUBLIC_FUNC(HeavyShinobi_State_StartFight);
    ADD_PUBLIC_FUNC(HeavyShinobi_State_Idle);
    ADD_PUBLIC_FUNC(HeavyShinobi_State_Slash);
    ADD_PUBLIC_FUNC(HeavyShinobi_State_Jump);
    ADD_PUBLIC_FUNC(HeavyShinobi_State_Glitched);
    ADD_PUBLIC_FUNC(HeavyShinobi_State_Destroyed);
    ADD_PUBLIC_FUNC(HeavyShinobi_State_Finished);
    ADD_PUBLIC_FUNC(HeavyShinobi_Draw_Shinobi);
    ADD_PUBLIC_FUNC(HeavyShinobi_StateSlash_Active);
    ADD_PUBLIC_FUNC(HeavyShinobi_Draw_Slash);
    ADD_PUBLIC_FUNC(HeavyShinobi_StateAsteron_Thrown);
    ADD_PUBLIC_FUNC(HeavyShinobi_StateAsteron_Debris);
    ADD_PUBLIC_FUNC(HeavyShinobi_StateAsteron_Explode);
    ADD_PUBLIC_FUNC(HeavyShinobi_Draw_Asteron);
    ADD_PUBLIC_FUNC(HeavyShinobi_State_AsteronSpike);
    ADD_PUBLIC_FUNC(HeavyShinobi_Draw_AsteronSpike);
    ADD_PUBLIC_FUNC(HeavyShinobi_StateBounds_WaitForPlayer);
    ADD_PUBLIC_FUNC(HeavyShinobi_StateBounds_Active);
    ADD_PUBLIC_FUNC(HeavyShinobi_Draw_Bounds);

    // PGZ/Ice
    ADD_PUBLIC_FUNC(Ice_VSSwap_CheckFrozen);
    ADD_PUBLIC_FUNC(Ice_FreezePlayer);
    ADD_PUBLIC_FUNC(Ice_CheckPlayerBlockSmashH);
    ADD_PUBLIC_FUNC(Ice_CheckPlayerBlockSmashV);
    ADD_PUBLIC_FUNC(Ice_PlayerState_Frozen);
    ADD_PUBLIC_FUNC(Ice_ShatterGenerator);
    ADD_PUBLIC_FUNC(Ice_FullShatter);
    ADD_PUBLIC_FUNC(Ice_BreakPlayerBlock);
    ADD_PUBLIC_FUNC(Ice_Shatter);
    ADD_PUBLIC_FUNC(Ice_TimeOver_CheckFrozen);
    ADD_PUBLIC_FUNC(Ice_UpdateBlockGravity);
    ADD_PUBLIC_FUNC(Ice_State_IceBlock);
    ADD_PUBLIC_FUNC(Ice_State_StartBlockFall);
    ADD_PUBLIC_FUNC(Ice_State_BlockFallDelay);
    ADD_PUBLIC_FUNC(Ice_State_IceBlockFall);
    ADD_PUBLIC_FUNC(Ice_State_PlayerBlock);
    ADD_PUBLIC_FUNC(Ice_State_Shard);
    ADD_PUBLIC_FUNC(Ice_Draw_IceBlock);
    ADD_PUBLIC_FUNC(Ice_Draw_PlayerBlock);
    ADD_PUBLIC_FUNC(Ice_Draw_Pillar);
    ADD_PUBLIC_FUNC(Ice_Draw_Shard);

    // PGZ/IceBomba
    ADD_PUBLIC_FUNC(IceBomba_DebugSpawn);
    ADD_PUBLIC_FUNC(IceBomba_CheckOffScreen);
    ADD_PUBLIC_FUNC(IceBomba_HandlePlayerCollisions);
    ADD_PUBLIC_FUNC(IceBomba_State_Init);
    ADD_PUBLIC_FUNC(IceBomba_State_Flying);
    ADD_PUBLIC_FUNC(IceBomba_State_Turning);
    ADD_PUBLIC_FUNC(IceBomba_State_FlyAway);
    ADD_PUBLIC_FUNC(IceBomba_State_Bomb);

    // PGZ/IceSpring
    ADD_PUBLIC_FUNC(IceSpring_Shatter);

    // PGZ/JuggleSaw
    ADD_PUBLIC_FUNC(JuggleSaw_DebugSpawn);
    ADD_PUBLIC_FUNC(JuggleSaw_DebugDraw);
    ADD_PUBLIC_FUNC(JuggleSaw_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(JuggleSaw_CheckOffScreen);
    ADD_PUBLIC_FUNC(JuggleSaw_StateCrab_Setup);
    ADD_PUBLIC_FUNC(JuggleSaw_StateCrab_Handle);
    ADD_PUBLIC_FUNC(JuggleSaw_StateCrab_ThrowSaw);
    ADD_PUBLIC_FUNC(JuggleSaw_StateSaw_Handle);
    ADD_PUBLIC_FUNC(JuggleSaw_StateSaw_Debris);

#if MANIA_USE_PLUS
    // PGZ/Newspaper
    ADD_PUBLIC_FUNC(Newspaper_HandleInteractions);
#endif

    // PGZ/PaperRoller
    ADD_PUBLIC_FUNC(PaperRoller_DrawPaperLines);
    ADD_PUBLIC_FUNC(PaperRoller_DrawRollers);
    ADD_PUBLIC_FUNC(PaperRoller_HandleRollerCollisions);
    ADD_PUBLIC_FUNC(PaperRoller_HandlePrintCollisions);

    // PGZ/PetalPile
    ADD_PUBLIC_FUNC(PetalPile_GetLeafPattern);
    ADD_PUBLIC_FUNC(PetalPile_State_Init);
    ADD_PUBLIC_FUNC(PetalPile_State_HandleInteractions);
    ADD_PUBLIC_FUNC(PetalPile_State_SetupEmitter);
    ADD_PUBLIC_FUNC(PetalPile_State_Emitter);
    ADD_PUBLIC_FUNC(PetalPile_StateLeaf_Setup);
    ADD_PUBLIC_FUNC(PetalPile_StateLeaf_Delay);
    ADD_PUBLIC_FUNC(PetalPile_StateLeaf_HandleVelocity);
    ADD_PUBLIC_FUNC(PetalPile_StateLeaf_Fall);
    ADD_PUBLIC_FUNC(PetalPile_Draw_Leaf);

    // PGZ/Press
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Press_CheckCanSuper);
#endif
    ADD_PUBLIC_FUNC(Press_Move);
    ADD_PUBLIC_FUNC(Press_State_Crush);
    ADD_PUBLIC_FUNC(Press_State_FinalCrush);
    ADD_PUBLIC_FUNC(Press_HandleMovement);
    ADD_PUBLIC_FUNC(Press_State_HandleCrates);
    ADD_PUBLIC_FUNC(Press_DrawHandle);

    // PGZ/PrintBlock
    ADD_PUBLIC_FUNC(PrintBlock_State_Appear);
    ADD_PUBLIC_FUNC(PrintBlock_State_Disappear);

    // PGZ/PSZ1Intro
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(PSZ1Intro_HandleGliderJump);
    ADD_PUBLIC_FUNC(PSZ1Intro_Cutscene_SetupGliders);
    ADD_PUBLIC_FUNC(PSZ1Intro_Cutscene_GlideAndJump);
    ADD_PUBLIC_FUNC(PSZ1Intro_Cutscene_HandleLanding);
#endif

#if MANIA_USE_PLUS
    // PGZ/PSZ1Setup
    ADD_PUBLIC_FUNC(PSZ1Setup_BGSwitch_Inside);
    ADD_PUBLIC_FUNC(PSZ1Setup_BGSwitch_Outside);
    ADD_PUBLIC_FUNC(PSZ1Setup_Trigger_DeactivatePetalBehaviour);
#endif
    ADD_PUBLIC_FUNC(PSZ1Setup_Trigger_ActivatePetalBehaviour);
    ADD_PUBLIC_FUNC(PSZ1Setup_Trigger_AwardAchievement);
    ADD_PUBLIC_FUNC(PSZ1Setup_StageFinish_EndAct1);
    ADD_PUBLIC_FUNC(PSZ1Setup_LevelWrap_Top);
    ADD_PUBLIC_FUNC(PSZ1Setup_LevelWrap_Bottom);

    // PGZ/PSZ2Intro
    ADD_PUBLIC_FUNC(PSZ2Intro_Cutscene_HandleAct1Finish);
    ADD_PUBLIC_FUNC(PSZ2Intro_Cutscene_ShowActClear);
    ADD_PUBLIC_FUNC(PSZ2Intro_Cutscene_RunToAct2);
    ADD_PUBLIC_FUNC(PSZ2Intro_Cutscene_JogIntoPlace);

    // PGZ/PSZ2Outro
    ADD_PUBLIC_FUNC(PSZ2Outro_Cutscene_SetupCameraMove);
    ADD_PUBLIC_FUNC(PSZ2Outro_Cutscene_HandleCameraMovement);
    ADD_PUBLIC_FUNC(PSZ2Outro_Cutscene_WalkIntoPlace);
    ADD_PUBLIC_FUNC(PSZ2Outro_Cutscene_EnterRuby);
    ADD_PUBLIC_FUNC(PSZ2Outro_Cutscene_RubyActivated);
    ADD_PUBLIC_FUNC(PSZ2Outro_Cutscene_RubyWarp);
    ADD_PUBLIC_FUNC(PSZ2Outro_Cutscene_LoadSSZ1);

    // PGZ/PSZ2Setup
    ADD_PUBLIC_FUNC(PSZ2Setup_Trigger_ActivatePetalBehaviour);
    ADD_PUBLIC_FUNC(PSZ2Setup_Trigger_DeactivatePetalBehaviour);
    ADD_PUBLIC_FUNC(PSZ2Setup_ActTransitionLoad);
    ADD_PUBLIC_FUNC(PSZ2Setup_StageFinish_EndAct2);

    // PGZ/PSZDoor
    ADD_PUBLIC_FUNC(PSZDoor_GetRemainingDistance);

    // PGZ/PSZEggman
    ADD_PUBLIC_FUNC(PSZEggman_State_TurnRound);

    // PGZ/PSZLauncher
    ADD_PUBLIC_FUNC(PSZLauncher_DebugSpawn);
    ADD_PUBLIC_FUNC(PSZLauncher_HandlePlayerCollisions);
    ADD_PUBLIC_FUNC(PSZLauncher_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(PSZLauncher_State_Init);
    ADD_PUBLIC_FUNC(PSZLauncher_State_Active);

    // PGZ/Shiversaw
    ADD_PUBLIC_FUNC(Shiversaw_CheckSawHit);
    ADD_PUBLIC_FUNC(Shiversaw_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Shiversaw_SetupSawPos);
    ADD_PUBLIC_FUNC(Shiversaw_Hit);
    ADD_PUBLIC_FUNC(Shiversaw_Explode);
    ADD_PUBLIC_FUNC(Shiversaw_CheckBoxCollisions);
    ADD_PUBLIC_FUNC(Shiversaw_State_Entry);
    ADD_PUBLIC_FUNC(Shiversaw_State_SetupBounds);
    ADD_PUBLIC_FUNC(Shiversaw_State_EnterShiversaw);
    ADD_PUBLIC_FUNC(Shiversaw_State_HitRecoil_Tutorial);
    ADD_PUBLIC_FUNC(Shiversaw_State_Idle);
    ADD_PUBLIC_FUNC(Shiversaw_State_MoveToPlayer);
    ADD_PUBLIC_FUNC(Shiversaw_State_HitRecoil);
    ADD_PUBLIC_FUNC(Shiversaw_State_Destroyed);
    ADD_PUBLIC_FUNC(Shiversaw_State_StageFinishCB);
    ADD_PUBLIC_FUNC(Shiversaw_State_Explode);
    ADD_PUBLIC_FUNC(Shiversaw_State_Explode_NoTransition);
    ADD_PUBLIC_FUNC(Shiversaw_State_DropSignPost);
    ADD_PUBLIC_FUNC(Shiversaw_CheckCrateCollisions);
    ADD_PUBLIC_FUNC(Shiversaw_HandleSawMovement);
    ADD_PUBLIC_FUNC(Shiversaw_StateSaw_Active);
    ADD_PUBLIC_FUNC(Shiversaw_StateSaw_Targeting);
    ADD_PUBLIC_FUNC(Shiversaw_StateSaw_Extend);
    ADD_PUBLIC_FUNC(Shiversaw_StateSaw_Retract);
    ADD_PUBLIC_FUNC(Shiversaw_StateSaw_Destroyed);
    ADD_PUBLIC_FUNC(Shiversaw_StateSaw_Form);
    ADD_PUBLIC_FUNC(Shiversaw_StateSaw_Setup);
    ADD_PUBLIC_FUNC(Shiversaw_ProcessSawMovement);
    ADD_PUBLIC_FUNC(Shiversaw_StateDust_Debris);

    // PGZ/Shuriken
    ADD_PUBLIC_FUNC(Shuriken_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Shuriken_HandleSolidCollisions);
    ADD_PUBLIC_FUNC(Shuriken_State_Init);
    ADD_PUBLIC_FUNC(Shuriken_State_AwaitActivate);
    ADD_PUBLIC_FUNC(Shuriken_State_CheckPlayerInRange);
    ADD_PUBLIC_FUNC(Shuriken_State_ShootDelay);
    ADD_PUBLIC_FUNC(Shuriken_State_FireShuriken);
    ADD_PUBLIC_FUNC(Shuriken_State_ShurikenFired);
    ADD_PUBLIC_FUNC(Shuriken_State_Deactivate);
    ADD_PUBLIC_FUNC(Shuriken_State_InitShuriken);
    ADD_PUBLIC_FUNC(Shuriken_State_ShurikenThrown);
    ADD_PUBLIC_FUNC(Shuriken_State_ShurikenStuck);
    ADD_PUBLIC_FUNC(Shuriken_State_ShurikenFall);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Shuriken_State_ShurikenDebris);
#endif

    // PGZ/Snowflakes
    ADD_PUBLIC_FUNC(Snowflakes_HandleWrap);

    // PGZ/SP500
    ADD_PUBLIC_FUNC(SP500_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(SP500_State_WaitForEntry);
    ADD_PUBLIC_FUNC(SP500_State_Finished);
    ADD_PUBLIC_FUNC(SP500_State_Activate);
    ADD_PUBLIC_FUNC(SP500_State_PrintFailed);
    ADD_PUBLIC_FUNC(SP500_State_PrintDelay);
    ADD_PUBLIC_FUNC(SP500_State_Printing);
    ADD_PUBLIC_FUNC(SP500_State_NextPrintRow);
    ADD_PUBLIC_FUNC(SP500_State_PrintFinished);
    ADD_PUBLIC_FUNC(SP500_State_MoveToTarget);

    // PGZ/SP500MkII
    ADD_PUBLIC_FUNC(SP500MkII_DrawDebugOverlay);
    ADD_PUBLIC_FUNC(SP500MkII_DrawPrinter);
    ADD_PUBLIC_FUNC(SP500MkII_DrawRails);
    ADD_PUBLIC_FUNC(SP500MkII_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(SP500MkII_State_Init);
    ADD_PUBLIC_FUNC(SP500MkII_State_AwaitActivation);
    ADD_PUBLIC_FUNC(SP500MkII_State_PrintRow);
    ADD_PUBLIC_FUNC(SP500MkII_State_NextPrintRow);

    // PGZ/Turntable
    ADD_PUBLIC_FUNC(Turntable_SetupSize);

    // PGZ/WoodChipper
    ADD_PUBLIC_FUNC(WoodChipper_HandlePlayerCollisions);
    ADD_PUBLIC_FUNC(WoodChipper_State_Chipper);
    ADD_PUBLIC_FUNC(WoodChipper_State_Debris);

    // PGZ/Woodrow
    ADD_PUBLIC_FUNC(Woodrow_DebugSpawn);
    ADD_PUBLIC_FUNC(Woodrow_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Woodrow_CheckOffScreen);
    ADD_PUBLIC_FUNC(Woodrow_State_Init);
    ADD_PUBLIC_FUNC(Woodrow_State_Idle);
    ADD_PUBLIC_FUNC(Woodrow_State_MoveUp);
    ADD_PUBLIC_FUNC(Woodrow_State_MoveDown);
    ADD_PUBLIC_FUNC(Woodrow_State_Bomb);
    ADD_PUBLIC_FUNC(Woodrow_State_BombSpawner);

    // Pinball/PBL_Bumper
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(PBL_Bumper_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(PBL_Bumper_State_CheckBumps);
    ADD_PUBLIC_FUNC(PBL_Bumper_State_Bumped);
    ADD_PUBLIC_FUNC(PBL_Bumper_State_FinishedBump);
#endif

    // Pinball/PBL_Camera
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(PBL_Camera_HandleScreenPos);
    ADD_PUBLIC_FUNC(PBL_Camera_State_Normal);
#endif

    // Pinball/PBL_Crane
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(PBL_Crane_HandlePrizes);
    ADD_PUBLIC_FUNC(PBL_Crane_Draw_CraneMachine);
    ADD_PUBLIC_FUNC(PBL_Crane_Draw_PrizeDisplay);
    ADD_PUBLIC_FUNC(PBL_Crane_Draw_Crane);
    ADD_PUBLIC_FUNC(PBL_Crane_State_CreatePrizes);
    ADD_PUBLIC_FUNC(PBL_Crane_State_DisplayPrizes);
    ADD_PUBLIC_FUNC(PBL_Crane_StatePrizeDisplay_Move);
    ADD_PUBLIC_FUNC(PBL_Crane_StateCrane_Lower);
    ADD_PUBLIC_FUNC(PBL_Crane_StateCrane_Move);
    ADD_PUBLIC_FUNC(PBL_Crane_StateCrane_Controlled);
    ADD_PUBLIC_FUNC(PBL_Crane_StateCrane_Drop);
    ADD_PUBLIC_FUNC(PBL_Crane_StateCrane_Grab);
    ADD_PUBLIC_FUNC(PBL_Crane_StateCrane_Rise);
    ADD_PUBLIC_FUNC(PBL_Crane_StatePrize_Bounce);
    ADD_PUBLIC_FUNC(PBL_Crane_StatePrize_Flash);
    ADD_PUBLIC_FUNC(PBL_Crane_StatePrize_PrizeGet);
#endif

    // Pinball/PBL_Flipper
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(PBL_Flipper_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(PBL_Flipper_State_AwaitFlip);
    ADD_PUBLIC_FUNC(PBL_Flipper_State_RiseFlipper);
    ADD_PUBLIC_FUNC(PBL_Flipper_State_LowerFlipper);
#endif

    // Pinball/PBL_HUD
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(PBL_HUD_DisplayMessage);
    ADD_PUBLIC_FUNC(PBL_HUD_StateMessage_ScrollLeftSlow);
    ADD_PUBLIC_FUNC(PBL_HUD_StateMessage_ScrollLeftFast);
    ADD_PUBLIC_FUNC(PBL_HUD_StateMessage_ScrollRightSlow);
    ADD_PUBLIC_FUNC(PBL_HUD_StateMessage_ScrollRightFast);
    ADD_PUBLIC_FUNC(PBL_HUD_StateMessage_ShowMove);
    ADD_PUBLIC_FUNC(PBL_HUD_StateMessage_Flash);
    ADD_PUBLIC_FUNC(PBL_HUD_StateMessage_FlashThenCrane);
    ADD_PUBLIC_FUNC(PBL_HUD_Draw_Basic);
    ADD_PUBLIC_FUNC(PBL_HUD_Draw_Message);
    ADD_PUBLIC_FUNC(PBL_HUD_Draw_Score);
    ADD_PUBLIC_FUNC(PBL_HUD_State_RevealCrane);
    ADD_PUBLIC_FUNC(PBL_HUD_State_HideCrane);
#endif

    // Pinball/PBL_Player
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(PBL_Player_Input_P1);
    ADD_PUBLIC_FUNC(PBL_Player_State_Launcher);
    ADD_PUBLIC_FUNC(PBL_Player_State_Ground);
    ADD_PUBLIC_FUNC(PBL_Player_State_Air);
#endif

    // Pinball/PBL_Ring
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(PBL_Ring_GiveRing);
    ADD_PUBLIC_FUNC(PBL_Ring_State_Ring);
    ADD_PUBLIC_FUNC(PBL_Ring_State_RingSparkle);
#endif

    // Pinball/PBL_Setup
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(PBL_Setup_Scanline_TableLow);
    ADD_PUBLIC_FUNC(PBL_Setup_Scanline_TableHigh);
    ADD_PUBLIC_FUNC(PBL_Setup_Scanline_PinballBG);
    ADD_PUBLIC_FUNC(PBL_Setup_DrawHook_PrepareDrawingFX);
    ADD_PUBLIC_FUNC(PBL_Setup_ExitPinball);
    ADD_PUBLIC_FUNC(PBL_Setup_GiveScore);
    ADD_PUBLIC_FUNC(PBL_Setup_GiveLife);
    ADD_PUBLIC_FUNC(PBL_Setup_State_FadeIn);
    ADD_PUBLIC_FUNC(PBL_Setup_State_ManageStageExit);
    ADD_PUBLIC_FUNC(PBL_Setup_SaveAndChangeScene);
#endif

    // Pinball/PBL_TargetBumper
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(PBL_TargetBumper_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(PBL_TargetBumper_State_Active);
    ADD_PUBLIC_FUNC(PBL_TargetBumper_State_Reced);
    ADD_PUBLIC_FUNC(PBL_TargetBumper_State_Rise);
#endif

    // Puyo/PuyoAI
    ADD_PUBLIC_FUNC(PuyoAI_GetBeanPos);
    ADD_PUBLIC_FUNC(PuyoAI_PrepareAction);
    ADD_PUBLIC_FUNC(PuyoAI_GetChainComboSize);
    ADD_PUBLIC_FUNC(PuyoAI_SetupInputs);
    ADD_PUBLIC_FUNC(PuyoAI_Input_AI);

    // Puyo/PuyoBean
    ADD_PUBLIC_FUNC(PuyoBean_GetPuyoBean);
    ADD_PUBLIC_FUNC(PuyoBean_Input_Player);
    ADD_PUBLIC_FUNC(PuyoBean_DestroyPuyoBeans);
    ADD_PUBLIC_FUNC(PuyoBean_HandleBeanLinks);
    ADD_PUBLIC_FUNC(PuyoBean_CheckBeanLinks);
    ADD_PUBLIC_FUNC(PuyoBean_HandleMoveBounds);
    ADD_PUBLIC_FUNC(PuyoBean_CheckAIRotationDisabled);
    ADD_PUBLIC_FUNC(PuyoBean_CheckCollisions);
    ADD_PUBLIC_FUNC(PuyoBean_GetBeanChainRemovalCount);
    ADD_PUBLIC_FUNC(PuyoBean_GetAvailableLinks);
    ADD_PUBLIC_FUNC(PuyoBean_CheckLinkPosAvailable);
    ADD_PUBLIC_FUNC(PuyoBean_SetupBeanLinkTable);
    ADD_PUBLIC_FUNC(PuyoBean_GetColumnHeight);
    ADD_PUBLIC_FUNC(PuyoBean_CalculateStillPos);
    ADD_PUBLIC_FUNC(PuyoBean_State_PartnerControlled);
    ADD_PUBLIC_FUNC(PuyoBean_State_Controlled);
    ADD_PUBLIC_FUNC(PuyoBean_State_BeanIdle);
    ADD_PUBLIC_FUNC(PuyoBean_State_Falling);
    ADD_PUBLIC_FUNC(PuyoBean_State_BeanLand);
    ADD_PUBLIC_FUNC(PuyoBean_State_JunkLand);
    ADD_PUBLIC_FUNC(PuyoBean_State_JunkIdle);
    ADD_PUBLIC_FUNC(PuyoBean_State_JunkPopped);
    ADD_PUBLIC_FUNC(PuyoBean_State_BeginBeanPop);
    ADD_PUBLIC_FUNC(PuyoBean_State_BeanPop);
    ADD_PUBLIC_FUNC(PuyoBean_State_MatchLoseFall);

    // Puyo/PuyoGame
    ADD_PUBLIC_FUNC(PuyoGame_SetupStartingEntities);
    ADD_PUBLIC_FUNC(PuyoGame_SetLoser);
    ADD_PUBLIC_FUNC(PuyoGame_DestroyPuyoBeans);
    ADD_PUBLIC_FUNC(PuyoGame_SetupGameState);
    ADD_PUBLIC_FUNC(PuyoGame_CheckMatchFinish);
    ADD_PUBLIC_FUNC(PuyoGame_State_Init);
    ADD_PUBLIC_FUNC(PuyoGame_State_Wait);
    ADD_PUBLIC_FUNC(PuyoGame_State_SelectingLevel);
    ADD_PUBLIC_FUNC(PuyoGame_State_SetupRound);
    ADD_PUBLIC_FUNC(PuyoGame_State_SetupEntities);
    ADD_PUBLIC_FUNC(PuyoGame_State_HandleRound);
    ADD_PUBLIC_FUNC(PuyoGame_State_ShowRoundResults);
    ADD_PUBLIC_FUNC(PuyoGame_State_ShowMatchResults);
    ADD_PUBLIC_FUNC(PuyoGame_State_FadeToMenu);

    // Puyo/PuyoIndicator
    ADD_PUBLIC_FUNC(PuyoIndicator_ShowWinner);
    ADD_PUBLIC_FUNC(PuyoIndicator_ShowLoser);
    ADD_PUBLIC_FUNC(PuyoIndicator_ShowReady);

    // Puyo/PuyoLevelSelect
    ADD_PUBLIC_FUNC(PuyoLevelSelect_DrawSprites);
    ADD_PUBLIC_FUNC(PuyoLevelSelect_HandleMenuMovement);

    // Puyo/PuyoMatch
    ADD_PUBLIC_FUNC(PuyoMatch_AddPuyoCombo);
    ADD_PUBLIC_FUNC(PuyoMatch_SetupNextBeans);
    ADD_PUBLIC_FUNC(PuyoMatch_DropNextBeans);
    ADD_PUBLIC_FUNC(PuyoMatch_DropJunkBeans);
    ADD_PUBLIC_FUNC(PuyoMatch_DrawJunkBeanPreviews);
    ADD_PUBLIC_FUNC(PuyoMatch_State_HandleMatch);
    ADD_PUBLIC_FUNC(PuyoMatch_State_HandleCombos);
    ADD_PUBLIC_FUNC(PuyoMatch_State_HandleComboEnd);
    ADD_PUBLIC_FUNC(PuyoMatch_State_Lose);

    // Puyo/PuyoScore
    ADD_PUBLIC_FUNC(PuyoScore_DrawScore);

    // SBZ/Bomb
    ADD_PUBLIC_FUNC(Bomb_DebugSpawn);
    ADD_PUBLIC_FUNC(Bomb_CheckOffScreen);
    ADD_PUBLIC_FUNC(Bomb_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Bomb_State_Init);
    ADD_PUBLIC_FUNC(Bomb_State_Walk);
    ADD_PUBLIC_FUNC(Bomb_State_Idle);
    ADD_PUBLIC_FUNC(Bomb_State_Explode);
    ADD_PUBLIC_FUNC(Bomb_State_Shrapnel);

    // SBZ/Caterkiller
    ADD_PUBLIC_FUNC(Caterkiller_DebugSpawn);
    ADD_PUBLIC_FUNC(Caterkiller_CheckOffScreen);
    ADD_PUBLIC_FUNC(Caterkiller_CheckTileCollisions);
    ADD_PUBLIC_FUNC(Caterkiller_Draw_Body);
    ADD_PUBLIC_FUNC(Caterkiller_Draw_Segment);
    ADD_PUBLIC_FUNC(Caterkiller_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(Caterkiller_CheckTileAngle);
    ADD_PUBLIC_FUNC(Caterkiller_State_Init);
    ADD_PUBLIC_FUNC(Caterkiller_State_Contract);
    ADD_PUBLIC_FUNC(Caterkiller_State_LiftHead);
    ADD_PUBLIC_FUNC(Caterkiller_State_Uncontract);
    ADD_PUBLIC_FUNC(Caterkiller_State_LowerHead);
    ADD_PUBLIC_FUNC(Caterkiller_StateSplit_Head);
    ADD_PUBLIC_FUNC(Caterkiller_StateSplit_Body);

    // SBZ/Orbinaut
    ADD_PUBLIC_FUNC(Orbinaut_DebugSpawn);
    ADD_PUBLIC_FUNC(Orbinaut_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(Orbinaut_HandleRotation);
    ADD_PUBLIC_FUNC(Orbinaut_CheckOffScreen);
    ADD_PUBLIC_FUNC(Orbinaut_State_Init);
    ADD_PUBLIC_FUNC(Orbinaut_State_Moving);
    ADD_PUBLIC_FUNC(Orbinaut_State_ReleasingOrbs);
    ADD_PUBLIC_FUNC(Orbinaut_State_Orbless);
    ADD_PUBLIC_FUNC(Orbinaut_State_Orb);
    ADD_PUBLIC_FUNC(Orbinaut_State_OrbDebris);

    // SPZ/CableWarp
    ADD_PUBLIC_FUNC(CableWarp_State_CablePlug);
    ADD_PUBLIC_FUNC(CableWarp_State_CheckPlayerEntry);
    ADD_PUBLIC_FUNC(CableWarp_StateTransport_BeginEnter);
    ADD_PUBLIC_FUNC(CableWarp_StateTransport_Enter);
    ADD_PUBLIC_FUNC(CableWarp_StateTransport_MoveToNextNode);
    ADD_PUBLIC_FUNC(CableWarp_StateTransport_EndNode);
    ADD_PUBLIC_FUNC(CableWarp_StateTransport_Exit);

    // SPZ/Canista
    ADD_PUBLIC_FUNC(Canista_DebugSpawn);
    ADD_PUBLIC_FUNC(Canista_CheckPlayerBadnikCollisions);
    ADD_PUBLIC_FUNC(Canista_CheckOffScreen);
    ADD_PUBLIC_FUNC(Canista_State_Init);
    ADD_PUBLIC_FUNC(Canista_State_Moving);
    ADD_PUBLIC_FUNC(Canista_State_Idle);
    ADD_PUBLIC_FUNC(Canista_CheckPlayerProjectileCollisions);
    ADD_PUBLIC_FUNC(Canista_StateProjectile_Shot);
    ADD_PUBLIC_FUNC(Canista_StateProjectile_Fall);

    // SPZ/CircleBumper
    ADD_PUBLIC_FUNC(CircleBumper_DebugSpawn);
    ADD_PUBLIC_FUNC(CircleBumper_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(CircleBumper_Collide_Normal);
    ADD_PUBLIC_FUNC(CircleBumper_Collide_Bumped);
    ADD_PUBLIC_FUNC(CircleBumper_Move_Fixed);
    ADD_PUBLIC_FUNC(CircleBumper_Move_Linear);
    ADD_PUBLIC_FUNC(CircleBumper_Move_Circular);
    ADD_PUBLIC_FUNC(CircleBumper_Move_Path);
    ADD_PUBLIC_FUNC(CircleBumper_Move_Track);

    // SPZ/Clapperboard
    ADD_PUBLIC_FUNC(Clapperboard_Collide_Left);
    ADD_PUBLIC_FUNC(Clapperboard_Collide_Right);
    ADD_PUBLIC_FUNC(Clapperboard_State_Idle);
    ADD_PUBLIC_FUNC(Clapperboard_State_ClappingL);
    ADD_PUBLIC_FUNC(Clapperboard_State_ClapReboundL);
    ADD_PUBLIC_FUNC(Clapperboard_State_ClappingR);
    ADD_PUBLIC_FUNC(Clapperboard_State_ClapReboundR);

    // SPZ/DirectorChair
    ADD_PUBLIC_FUNC(DirectorChair_Collide_Chair);
    ADD_PUBLIC_FUNC(DirectorChair_State_Idle);
    ADD_PUBLIC_FUNC(DirectorChair_State_StartExtend);
    ADD_PUBLIC_FUNC(DirectorChair_State_Extend);
    ADD_PUBLIC_FUNC(DirectorChair_State_StartRetract);
    ADD_PUBLIC_FUNC(DirectorChair_State_Retract);

    // SPZ/EggJanken
    ADD_PUBLIC_FUNC(EggJanken_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(EggJanken_HandleMovement);
    ADD_PUBLIC_FUNC(EggJanken_Explode);
    ADD_PUBLIC_FUNC(EggJanken_ResetStates);
    ADD_PUBLIC_FUNC(EggJanken_SwapArmSwingDir);
    ADD_PUBLIC_FUNC(EggJanken_Result_PlayerWins);
    ADD_PUBLIC_FUNC(EggJanken_Result_PlayerLoses);
    ADD_PUBLIC_FUNC(EggJanken_Result_PlayerDraws);
    ADD_PUBLIC_FUNC(EggJanken_State_SetupArena);
    ADD_PUBLIC_FUNC(EggJanken_State_StartFight);
    ADD_PUBLIC_FUNC(EggJanken_State_EnterJanken);
    ADD_PUBLIC_FUNC(EggJanken_State_AwaitButtonPress);
    ADD_PUBLIC_FUNC(EggJanken_State_Opened);
    ADD_PUBLIC_FUNC(EggJanken_State_InitialArmExtend);
    ADD_PUBLIC_FUNC(EggJanken_State_InitialArmRaise);
    ADD_PUBLIC_FUNC(EggJanken_State_None);
    ADD_PUBLIC_FUNC(EggJanken_State_Destroyed);
    ADD_PUBLIC_FUNC(EggJanken_State_ButtonPressed);
    ADD_PUBLIC_FUNC(EggJanken_State_ResultPlayerWinner);
    ADD_PUBLIC_FUNC(EggJanken_State_HitShake);
    ADD_PUBLIC_FUNC(EggJanken_State_FinishedBeingHit);
    ADD_PUBLIC_FUNC(EggJanken_State_RaiseArms);
    ADD_PUBLIC_FUNC(EggJanken_State_SwingDropArms);
    ADD_PUBLIC_FUNC(EggJanken_State_WaitForArmAttackExtend);
    ADD_PUBLIC_FUNC(EggJanken_State_PrepareArmAttack);
    ADD_PUBLIC_FUNC(EggJanken_State_ArmAttack);
    ADD_PUBLIC_FUNC(EggJanken_State_FinishedArmAttack);
    ADD_PUBLIC_FUNC(EggJanken_State_ResultPlayerLoser);
    ADD_PUBLIC_FUNC(EggJanken_State_FlipOver);
    ADD_PUBLIC_FUNC(EggJanken_State_ExtendDropArms);
    ADD_PUBLIC_FUNC(EggJanken_State_DropTarget);
    ADD_PUBLIC_FUNC(EggJanken_State_Drop);
    ADD_PUBLIC_FUNC(EggJanken_State_DropArms);
    ADD_PUBLIC_FUNC(EggJanken_State_Dropped);
    ADD_PUBLIC_FUNC(EggJanken_State_RetractDropArms);
    ADD_PUBLIC_FUNC(EggJanken_State_RiseUp);
    ADD_PUBLIC_FUNC(EggJanken_State_FlipBackOver);
    ADD_PUBLIC_FUNC(EggJanken_Eyes_Setup);
    ADD_PUBLIC_FUNC(EggJanken_Eyes_ChangeSlots);
    ADD_PUBLIC_FUNC(EggJanken_Eyes_None);
    ADD_PUBLIC_FUNC(EggJanken_Arm_None);
    ADD_PUBLIC_FUNC(EggJanken_Arm_Idle);
    ADD_PUBLIC_FUNC(EggJanken_Arm_RetractArm);
    ADD_PUBLIC_FUNC(EggJanken_Arm_ExtendArm);
    ADD_PUBLIC_FUNC(EggJanken_Arm_StretchRetractArm);
    ADD_PUBLIC_FUNC(EggJanken_Arm_SwingArm);
    ADD_PUBLIC_FUNC(EggJanken_Arm_ArmAttack);
    ADD_PUBLIC_FUNC(EggJanken_Arm_Dropping);
    ADD_PUBLIC_FUNC(EggJanken_Draw_Closed);
    ADD_PUBLIC_FUNC(EggJanken_Draw_Active);
    ADD_PUBLIC_FUNC(EggJanken_Draw_Destroyed);

    // SPZ/EggTV
    ADD_PUBLIC_FUNC(EggTV_DrawScanlines);
    ADD_PUBLIC_FUNC(EggTV_DrawTV);

    // SPZ/FilmReel
    ADD_PUBLIC_FUNC(FilmReel_SpinLeft);
    ADD_PUBLIC_FUNC(FilmReel_SpinRight);

    // SPZ/Funnel
    ADD_PUBLIC_FUNC(Funnel_State_None);

    // SPZ/GreenScreen
    ADD_PUBLIC_FUNC(GreenScreen_DrawBG);
    ADD_PUBLIC_FUNC(GreenScreen_DrawBackgrounds);
    ADD_PUBLIC_FUNC(GreenScreen_DrawSprites);

    // SPZ/HeavyGunner
    ADD_PUBLIC_FUNC(HeavyGunner_SfxCheck_HeliProp);
    ADD_PUBLIC_FUNC(HeavyGunner_SfxCheck_HBHSurprise);
    ADD_PUBLIC_FUNC(HeavyGunner_SfxCheck_RocketBurn);
    ADD_PUBLIC_FUNC(HeavyGunner_HandleBGWrap);
    ADD_PUBLIC_FUNC(HeavyGunner_DestroyAllMissiles);
    ADD_PUBLIC_FUNC(HeavyGunner_Draw_Heli);
    ADD_PUBLIC_FUNC(HeavyGunner_Draw_EggRobo);
    ADD_PUBLIC_FUNC(HeavyGunner_Draw_Missile);
    ADD_PUBLIC_FUNC(HeavyGunner_Draw_Simple);
    ADD_PUBLIC_FUNC(HeavyGunner_Draw_FadeOut);
    ADD_PUBLIC_FUNC(HeavyGunner_StateManager_SetupArena);
    ADD_PUBLIC_FUNC(HeavyGunner_StateManager_HandleStageWrap);
    ADD_PUBLIC_FUNC(HeavyGunner_StateManager_HandlePathChange);
    ADD_PUBLIC_FUNC(HeavyGunner_Input_LockedP1);
    ADD_PUBLIC_FUNC(HeavyGunner_Input_LockedP2);
    ADD_PUBLIC_FUNC(HeavyGunner_Input_LockedP2_AI);
    ADD_PUBLIC_FUNC(HeavyGunner_StateEggRobo_Patrolling);
    ADD_PUBLIC_FUNC(HeavyGunner_StateEggRobo_FlyIn);
    ADD_PUBLIC_FUNC(HeavyGunner_StateEggRobo_ThrowGun);
    ADD_PUBLIC_FUNC(HeavyGunner_StateEggRobo_ThrownGun);
    ADD_PUBLIC_FUNC(HeavyGunner_StateGun_Thrown);
    ADD_PUBLIC_FUNC(HeavyGunner_StateGun_Grabbed);
    ADD_PUBLIC_FUNC(HeavyGunner_StateMissile_Launched);
    ADD_PUBLIC_FUNC(HeavyGunner_StateMissile_BlastOff);
    ADD_PUBLIC_FUNC(HeavyGunner_StateMissile_FindFloor);
    ADD_PUBLIC_FUNC(HeavyGunner_StateMissile_AttackPlayer);
    ADD_PUBLIC_FUNC(HeavyGunner_StateMissile_Malfunction);
    ADD_PUBLIC_FUNC(HeavyGunner_StateMissile_ReturnToSender);
    ADD_PUBLIC_FUNC(HeavyGunner_StateMissile_AttackRobo);
    ADD_PUBLIC_FUNC(HeavyGunner_StateMissile_AttackGunner);
    ADD_PUBLIC_FUNC(HeavyGunner_StateHeli_AwaitPlayer);
    ADD_PUBLIC_FUNC(HeavyGunner_StateHeli_WooshIn);
    ADD_PUBLIC_FUNC(HeavyGunner_StateHeli_FindFloor);
    ADD_PUBLIC_FUNC(HeavyGunner_StateHeli_HandleAttacks);
    ADD_PUBLIC_FUNC(HeavyGunner_StateHeli_ShotsFired);
    ADD_PUBLIC_FUNC(HeavyGunner_StateHeli_EscapeMissile);
    ADD_PUBLIC_FUNC(HeavyGunner_StateHeli_IncomingMissile);
    ADD_PUBLIC_FUNC(HeavyGunner_StateHeli_Exploding);
    ADD_PUBLIC_FUNC(HeavyGunner_StateHeli_ExplodeAndFall);
    ADD_PUBLIC_FUNC(HeavyGunner_StateEscapeHBH_Hover);
    ADD_PUBLIC_FUNC(HeavyGunner_StateEscapeHBH_FlyAway);
    ADD_PUBLIC_FUNC(HeavyGunner_StateHeli_FadeOutDestroy);

    // SPZ/LEDPanel
    ADD_PUBLIC_FUNC(LEDPanel_SetupActiveText);
    ADD_PUBLIC_FUNC(LEDPanel_SetupTextPos);
    ADD_PUBLIC_FUNC(LEDPanel_HandleCharacters);
    ADD_PUBLIC_FUNC(LEDPanel_StateText_Move);
    ADD_PUBLIC_FUNC(LEDPanel_StateText_Delay);
    ADD_PUBLIC_FUNC(LEDPanel_StateText_ChangeClipBounds);
    ADD_PUBLIC_FUNC(LEDPanel_StateText_WaitForSignal);

    // SPZ/Letterboard
    ADD_PUBLIC_FUNC(Letterboard_State_Controller);
    ADD_PUBLIC_FUNC(Letterboard_State_CheckPlayerSpin);
    ADD_PUBLIC_FUNC(Letterboard_State_Spun);

    // SPZ/LottoBall
    ADD_PUBLIC_FUNC(LottoBall_CheckOffScreen);
    ADD_PUBLIC_FUNC(LottoBall_State_FallIntoMachine);
    ADD_PUBLIC_FUNC(LottoBall_State_InMachine);
    ADD_PUBLIC_FUNC(LottoBall_State_Collected);
    ADD_PUBLIC_FUNC(LottoBall_State_CollectFall);
    ADD_PUBLIC_FUNC(LottoBall_State_SetupUIBall);
    ADD_PUBLIC_FUNC(LottoBall_State_EnterUIBall);
    ADD_PUBLIC_FUNC(LottoBall_State_ShowUIBall);

    // SPZ/LottoMachine
    ADD_PUBLIC_FUNC(LottoMachine_VSSwap_CheckBusy);
    ADD_PUBLIC_FUNC(LottoMachine_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(LottoMachine_CheckPlayerCollisions_Bottom);
    ADD_PUBLIC_FUNC(LottoMachine_HandleMotor);
    ADD_PUBLIC_FUNC(LottoMachine_SetupBalls);
    ADD_PUBLIC_FUNC(LottoMachine_SetupUIBalls);
    ADD_PUBLIC_FUNC(LottoMachine_GiveRings);
    ADD_PUBLIC_FUNC(LottoMachine_State_Startup);
    ADD_PUBLIC_FUNC(LottoMachine_State_HandleBallCollect);
    ADD_PUBLIC_FUNC(LottoMachine_State_CollectBall);
    ADD_PUBLIC_FUNC(LottoMachine_State_HandleBallCollected);
    ADD_PUBLIC_FUNC(LottoMachine_State_DropPlayers);
    ADD_PUBLIC_FUNC(LottoMachine_State_ReleasePlayers);
    ADD_PUBLIC_FUNC(LottoMachine_State_StopSpinning);

    // SPZ/LoveTester
    ADD_PUBLIC_FUNC(LoveTester_SetupHitboxes);
    ADD_PUBLIC_FUNC(LoveTester_SetupLightOffsets);
    ADD_PUBLIC_FUNC(LoveTester_DrawSprites);
    ADD_PUBLIC_FUNC(LoveTester_DrawTVDisplay);
    ADD_PUBLIC_FUNC(LoveTester_CheckPlayerCollisions_Solid);
    ADD_PUBLIC_FUNC(LoveTester_CheckPlayerCollisions_Entry);
    ADD_PUBLIC_FUNC(LoveTester_GiveScore);
    ADD_PUBLIC_FUNC(LoveTester_CreateHeartParticles);
    ADD_PUBLIC_FUNC(LoveTester_State_Init);
    ADD_PUBLIC_FUNC(LoveTester_State_WaitForActivated);
    ADD_PUBLIC_FUNC(LoveTester_State_SetupTopDisplay);
    ADD_PUBLIC_FUNC(LoveTester_State_SetupMatching);
    ADD_PUBLIC_FUNC(LoveTester_State_UnluckyMatch);
    ADD_PUBLIC_FUNC(LoveTester_State_GoodMatch);
    ADD_PUBLIC_FUNC(LoveTester_State_BadMatch);
    ADD_PUBLIC_FUNC(LoveTester_State_ReleasePlayers);
    ADD_PUBLIC_FUNC(LoveTester_State_HeartParticles);
    ADD_PUBLIC_FUNC(LoveTester_StateLights_FlashSlow);
    ADD_PUBLIC_FUNC(LoveTester_StateLights_FlashMed);
    ADD_PUBLIC_FUNC(LoveTester_StateLights_FlashFast);

    // SPZ/MicDrop
    ADD_PUBLIC_FUNC(MicDrop_DebugSpawn);
    ADD_PUBLIC_FUNC(MicDrop_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(MicDrop_CheckOffScreen);
    ADD_PUBLIC_FUNC(MicDrop_State_Init);
    ADD_PUBLIC_FUNC(MicDrop_State_CheckForPlayer);
    ADD_PUBLIC_FUNC(MicDrop_State_DropDown);
    ADD_PUBLIC_FUNC(MicDrop_State_DropRecoil);
    ADD_PUBLIC_FUNC(MicDrop_State_Idle);
    ADD_PUBLIC_FUNC(MicDrop_State_Swinging);
    ADD_PUBLIC_FUNC(MicDrop_State_Electrify);

    // SPZ/PathInverter
    ADD_PUBLIC_FUNC(PathInverter_HandlePathSwitch);
    ADD_PUBLIC_FUNC(PathInverter_State_Horizontal);
    ADD_PUBLIC_FUNC(PathInverter_State_Vertical);

    // SPZ/PimPom
    ADD_PUBLIC_FUNC(PimPom_State_Single);
    ADD_PUBLIC_FUNC(PimPom_State_Horizontal);
    ADD_PUBLIC_FUNC(PimPom_State_Vertical);
    ADD_PUBLIC_FUNC(PimPom_Move_Fixed);
    ADD_PUBLIC_FUNC(PimPom_Move_Normal);
    ADD_PUBLIC_FUNC(PimPom_Move_Circle);
    ADD_PUBLIC_FUNC(PimPom_Move_Path);
    ADD_PUBLIC_FUNC(PimPom_Move_Track);

    // SPZ/PopcornKernel
    ADD_PUBLIC_FUNC(PopcornKernel_State_BounceAround);
    ADD_PUBLIC_FUNC(PopcornKernel_State_RiseUp);
    ADD_PUBLIC_FUNC(PopcornKernel_State_FallDown);

    // SPZ/PopcornMachine
    ADD_PUBLIC_FUNC(PopcornMachine_LinkPlayer);
    ADD_PUBLIC_FUNC(PopcornMachine_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(PopcornMachine_State_Idle);
    ADD_PUBLIC_FUNC(PopcornMachine_State_ShowDispenser);
    ADD_PUBLIC_FUNC(PopcornMachine_State_Shaking);
    ADD_PUBLIC_FUNC(PopcornMachine_State_HideDispenser);
    ADD_PUBLIC_FUNC(PopcornMachine_StateController_ReadyPlayer);
    ADD_PUBLIC_FUNC(PopcornMachine_StateController_RisePlayer);
    ADD_PUBLIC_FUNC(PopcornMachine_StateController_FirePlayer);
    ADD_PUBLIC_FUNC(PopcornMachine_StateController_HandleFinish);

    // SPZ/RockemSockem
    ADD_PUBLIC_FUNC(RockemSockem_HandleJointPositions);

    // SPZ/ShopWindow
    ADD_PUBLIC_FUNC(ShopWindow_State_Shard);
    ADD_PUBLIC_FUNC(ShopWindow_State_Shattered);
    ADD_PUBLIC_FUNC(ShopWindow_State_Silhouette);
    ADD_PUBLIC_FUNC(ShopWindow_Draw_Normal);
    ADD_PUBLIC_FUNC(ShopWindow_Draw_Shard);
    ADD_PUBLIC_FUNC(ShopWindow_Draw_Shattered);

    // SPZ/Shutterbug
    ADD_PUBLIC_FUNC(Shutterbug_DebugSpawn);
    ADD_PUBLIC_FUNC(Shutterbug_DebugDraw);
    ADD_PUBLIC_FUNC(Shutterbug_CheckOffScreen);
    ADD_PUBLIC_FUNC(Shutterbug_State_Init);
    ADD_PUBLIC_FUNC(Shutterbug_State_FlyAround);
    ADD_PUBLIC_FUNC(Shutterbug_State_ShakeFly);
    ADD_PUBLIC_FUNC(Shutterbug_State_FlyAway);
    ADD_PUBLIC_FUNC(Shutterbug_BounceX);
    ADD_PUBLIC_FUNC(Shutterbug_BounceY);
    ADD_PUBLIC_FUNC(Shutterbug_CheckFocus);
    ADD_PUBLIC_FUNC(Shutterbug_TryTakePicture);
    ADD_PUBLIC_FUNC(Shutterbug_HandleBodyAnim);

    // SPZ/SpinSign
    ADD_PUBLIC_FUNC(SpinSign_DebugSpawn);
    ADD_PUBLIC_FUNC(SpinSign_State_Spinning);
    ADD_PUBLIC_FUNC(SpinSign_State_SlowDown);
    ADD_PUBLIC_FUNC(SpinSign_Draw_SonicH);
    ADD_PUBLIC_FUNC(SpinSign_Draw_SonicV);
    ADD_PUBLIC_FUNC(SpinSign_Draw_ManiaH);
    ADD_PUBLIC_FUNC(SpinSign_Draw_ManiaV);

    // SPZ/SPZ1Intro
    ADD_PUBLIC_FUNC(SPZ1Intro_Cutscene_SetupAct);
    ADD_PUBLIC_FUNC(SPZ1Intro_Cutscene_ExitPipe);
    ADD_PUBLIC_FUNC(SPZ1Intro_Cutscene_BeginAct1);

    // SPZ/SPZ1Setup
    ADD_PUBLIC_FUNC(SPZ1Setup_StageFinish_EndAct1);

    // SPZ/SPZ2Outro
    ADD_PUBLIC_FUNC(SPZ2Outro_StartCutscene);
    ADD_PUBLIC_FUNC(SPZ2Outro_Cutscene_SetupFBZTV);
    ADD_PUBLIC_FUNC(SPZ2Outro_Cutscene_ExitStageRight);
    ADD_PUBLIC_FUNC(SPZ2Outro_DrawHook_PrepareWeatherTV);
    ADD_PUBLIC_FUNC(SPZ2Outro_Cutscene_AsSeenOnTV);
    ADD_PUBLIC_FUNC(SPZ2Outro_Cutscene_FBZFlyAway);

    // SPZ/SPZ2Setup
    ADD_PUBLIC_FUNC(SPZ2Setup_StageFinish_EndAct2);

    // SPZ/Tubinaut
    ADD_PUBLIC_FUNC(Tubinaut_DebugSpawn);
    ADD_PUBLIC_FUNC(Tubinaut_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Tubinaut_CheckAttacking);
    ADD_PUBLIC_FUNC(Tubinaut_OrbHit);
    ADD_PUBLIC_FUNC(Tubinaut_HandleRepel);
    ADD_PUBLIC_FUNC(Tubinaut_HandleOrbs);
    ADD_PUBLIC_FUNC(Tubinaut_CheckOffScreen);
    ADD_PUBLIC_FUNC(Tubinaut_State_Init);
    ADD_PUBLIC_FUNC(Tubinaut_State_Move);
    ADD_PUBLIC_FUNC(Tubinaut_Orb_Relax);
    ADD_PUBLIC_FUNC(Tubinaut_Orb_PrepareAttack);
    ADD_PUBLIC_FUNC(Tubinaut_Orb_Attack);
    ADD_PUBLIC_FUNC(Tubinaut_Orb_Cooldown);
    ADD_PUBLIC_FUNC(Tubinaut_Orb_BodyDeath);

    // SPZ/TVFlyingBattery
    ADD_PUBLIC_FUNC(TVFlyingBattery_DrawSection);
    ADD_PUBLIC_FUNC(TVFlyingBattery_DrawSprites);

    // SPZ/TVPole
    ADD_PUBLIC_FUNC(TVPole_State_CheckGrab);
    ADD_PUBLIC_FUNC(TVPole_State_ForceRelease);

    // SPZ/TVVan
    ADD_PUBLIC_FUNC(TVVan_HandleVanTilt);
    ADD_PUBLIC_FUNC(TVVan_Draw_Van_Low);
    ADD_PUBLIC_FUNC(TVVan_Draw_Van_High);
    ADD_PUBLIC_FUNC(TVVan_Draw_Satellite_NE_SW);
    ADD_PUBLIC_FUNC(TVVan_Draw_Satellite_NW_SE);
    ADD_PUBLIC_FUNC(TVVan_Draw_Satellite_NW_SW);
    ADD_PUBLIC_FUNC(TVVan_Draw_Satellite_NE_SE);
    ADD_PUBLIC_FUNC(TVVan_Draw_Satellite_NE_NW);
    ADD_PUBLIC_FUNC(TVVan_Draw_Satellite_SE_SW);
    ADD_PUBLIC_FUNC(TVVan_Draw_Satellite_SW_N);
    ADD_PUBLIC_FUNC(TVVan_Draw_Satellite_NW_S);
    ADD_PUBLIC_FUNC(TVVan_Draw_Satellite_SE_N);
    ADD_PUBLIC_FUNC(TVVan_Draw_Satellite_NE_S);
    ADD_PUBLIC_FUNC(TVVan_Draw_Radio);
    ADD_PUBLIC_FUNC(TVVan_Draw_ExitTV_Active);
    ADD_PUBLIC_FUNC(TVVan_Draw_ExitTV_Destroyed);
    ADD_PUBLIC_FUNC(TVVan_StateVan_Idle);
    ADD_PUBLIC_FUNC(TVVan_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(TVVan_StateVan_BroadcastRadio);
    ADD_PUBLIC_FUNC(TVVan_StateVan_FinishedBroadcast);
    ADD_PUBLIC_FUNC(TVVan_StateRadio_StartBroadcast);
    ADD_PUBLIC_FUNC(TVVan_StateRadio_HandleMovement);
    ADD_PUBLIC_FUNC(TVVan_StateRadio_EnterSatellite1);
    ADD_PUBLIC_FUNC(TVVan_StateRadio_ExitSatellite2);
    ADD_PUBLIC_FUNC(TVVan_StateTV_Idle);
    ADD_PUBLIC_FUNC(TVVan_StateTV_Exploding);
    ADD_PUBLIC_FUNC(TVVan_StateTV_Destroyed);
    ADD_PUBLIC_FUNC(TVVan_StateRadio_EnterTV);

    // SPZ/WeatherMobile
    ADD_PUBLIC_FUNC(WeatherMobile_HandleAnimations);
    ADD_PUBLIC_FUNC(WeatherMobile_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(WeatherMobile_Hit);
    ADD_PUBLIC_FUNC(WeatherMobile_Explode);
    ADD_PUBLIC_FUNC(WeatherMobile_HandleDefeat);
    ADD_PUBLIC_FUNC(WeatherMobile_Draw_Eggman);
    ADD_PUBLIC_FUNC(WeatherMobile_Draw_Lights);
    ADD_PUBLIC_FUNC(WeatherMobile_Draw_Lightning);
    ADD_PUBLIC_FUNC(WeatherMobile_State_SetupArena);
    ADD_PUBLIC_FUNC(WeatherMobile_State_StartBoss);
    ADD_PUBLIC_FUNC(WeatherMobile_State_EnterEggman);
    ADD_PUBLIC_FUNC(WeatherMobile_State_HandleMovement);
    ADD_PUBLIC_FUNC(WeatherMobile_State_WindAttack);
    ADD_PUBLIC_FUNC(WeatherMobile_State_SunAttack);
    ADD_PUBLIC_FUNC(WeatherMobile_StateLights_EnterLights);
    ADD_PUBLIC_FUNC(WeatherMobile_StateLights_Shine);
    ADD_PUBLIC_FUNC(WeatherMobile_StateLights_DimAndDissapear);
    ADD_PUBLIC_FUNC(WeatherMobile_StateWindManager_SetupWind);
    ADD_PUBLIC_FUNC(WeatherMobile_StateWindManager_StrongWind);
    ADD_PUBLIC_FUNC(WeatherMobile_StateWindManager_FinishWind);
    ADD_PUBLIC_FUNC(WeatherMobile_State_Wind);
    ADD_PUBLIC_FUNC(WeatherMobile_State_RainManager);
    ADD_PUBLIC_FUNC(WeatherMobile_State_RainDrop);
    ADD_PUBLIC_FUNC(WeatherMobile_State_RainDropSplash);
    ADD_PUBLIC_FUNC(WeatherMobile_StateCloud_Idle);
    ADD_PUBLIC_FUNC(WeatherMobile_StateCloud_ShowTell);
    ADD_PUBLIC_FUNC(WeatherMobile_StateCloud_Strike);
    ADD_PUBLIC_FUNC(WeatherMobile_StateCloud_FadeAway);
    ADD_PUBLIC_FUNC(WeatherMobile_State_Defeated);
    ADD_PUBLIC_FUNC(WeatherMobile_State_DefeatFall);
    ADD_PUBLIC_FUNC(WeatherMobile_State_FleeRise);
    ADD_PUBLIC_FUNC(WeatherMobile_State_FleeAdjust);
    ADD_PUBLIC_FUNC(WeatherMobile_State_Flee);

    // SPZ/WeatherTV
    ADD_PUBLIC_FUNC(WeatherTV_ShutdownTV);
    ADD_PUBLIC_FUNC(WeatherTV_DrawTV);
    ADD_PUBLIC_FUNC(WeatherTV_DrawScanlines);
    ADD_PUBLIC_FUNC(WeatherTV_DrawTVBackground);
    ADD_PUBLIC_FUNC(WeatherTV_DrawNumbers);
    ADD_PUBLIC_FUNC(WeatherTV_CheckEggmanBusy);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_Off);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_TurningOn);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_EnterEggTVLogo);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_ExitEggTVLogo);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_ShowWeatherChannel);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_ShowCluckoid);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_SpinningCard);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_ShowCard);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_LightAttack);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_SuperHot);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_WindAttack);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_RainAttack);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_Buzzing);
    ADD_PUBLIC_FUNC(WeatherTV_Draw_Outro);
    ADD_PUBLIC_FUNC(WeatherTV_State_TurnOn);
    ADD_PUBLIC_FUNC(WeatherTV_State_FinishTurningOn);
    ADD_PUBLIC_FUNC(WeatherTV_State_EnterEggTVLogo);
    ADD_PUBLIC_FUNC(WeatherTV_State_ExitEggTVLogo);
    ADD_PUBLIC_FUNC(WeatherTV_State_ShowWeatherChannel);
    ADD_PUBLIC_FUNC(WeatherTV_State_ShowCluckoid);
    ADD_PUBLIC_FUNC(WeatherTV_State_ChooseNextAttack);
    ADD_PUBLIC_FUNC(WeatherTV_State_CardSpinning);
    ADD_PUBLIC_FUNC(WeatherTV_State_ShowCard);
    ADD_PUBLIC_FUNC(WeatherTV_State_BeginLightAttack);
    ADD_PUBLIC_FUNC(WeatherTV_State_HeatingUp);
    ADD_PUBLIC_FUNC(WeatherTV_State_BoilingHot);
    ADD_PUBLIC_FUNC(WeatherTV_State_CoolDown);
    ADD_PUBLIC_FUNC(WeatherTV_State_BeginWindAttack);
    ADD_PUBLIC_FUNC(WeatherTV_State_WindyWeather);
    ADD_PUBLIC_FUNC(WeatherTV_State_FinishWindAttack);
    ADD_PUBLIC_FUNC(WeatherTV_State_BeginRainAttack);
    ADD_PUBLIC_FUNC(WeatherTV_State_StartRaining);
    ADD_PUBLIC_FUNC(WeatherTV_State_StopRaining);
    ADD_PUBLIC_FUNC(WeatherTV_State_Outro);

    // SSZ/Beanstalk
    ADD_PUBLIC_FUNC(Beanstalk_GetNextNodeDistance);
    ADD_PUBLIC_FUNC(Beanstalk_GetRemainingDistance);
    ADD_PUBLIC_FUNC(Beanstalk_GetBezierInc);
    ADD_PUBLIC_FUNC(Beanstalk_DrawNodes);
    ADD_PUBLIC_FUNC(Beanstalk_DrawCreationNode);
    ADD_PUBLIC_FUNC(Beanstalk_HandleNodeMovement);
    ADD_PUBLIC_FUNC(Beanstalk_HandleNodeAppear);
    ADD_PUBLIC_FUNC(Beanstalk_CheckPlayerCollisions_Platform);
    ADD_PUBLIC_FUNC(Beanstalk_CheckPlayerCollisions_Chomper);
    ADD_PUBLIC_FUNC(Beanstalk_State_Init);
    ADD_PUBLIC_FUNC(Beanstalk_StateDirt_WaitForStart);
    ADD_PUBLIC_FUNC(Beanstalk_StateDirt_GrowthDelay);
    ADD_PUBLIC_FUNC(Beanstalk_StateDirt_Grow);
    ADD_PUBLIC_FUNC(Beanstalk_State_Node);
    ADD_PUBLIC_FUNC(Beanstalk_State_Platform);
    ADD_PUBLIC_FUNC(Beanstalk_State_Chomper);

    // SSZ/BouncePlant
    ADD_PUBLIC_FUNC(BoucePlant_SetupNodePositions);
    ADD_PUBLIC_FUNC(BoucePlant_GetNodeStandY);
    ADD_PUBLIC_FUNC(BoucePlant_GetNodeY);

    // SSZ/Constellation
    ADD_PUBLIC_FUNC(Constellation_SetupInfo);

    // SSZ/Dango
    ADD_PUBLIC_FUNC(Dango_DebugSpawn);
    ADD_PUBLIC_FUNC(Dango_CheckOffScreen);
    ADD_PUBLIC_FUNC(Dango_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Dango_HandleMovement);
    ADD_PUBLIC_FUNC(Dango_State_Init);
    ADD_PUBLIC_FUNC(Dango_State_Walking);
    ADD_PUBLIC_FUNC(Dango_State_Turning);
    ADD_PUBLIC_FUNC(Dango_State_Falling_Uncurled);
    ADD_PUBLIC_FUNC(Dango_State_Curling);
    ADD_PUBLIC_FUNC(Dango_State_Rolling);
    ADD_PUBLIC_FUNC(Dango_State_Falling_Curled);
    ADD_PUBLIC_FUNC(Dango_State_Uncurling);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Dango_StateTaunt_Setup);
    ADD_PUBLIC_FUNC(Dango_StateTaunt_RollIn);
    ADD_PUBLIC_FUNC(Dango_StateTaunt_KnockedRuby);
    ADD_PUBLIC_FUNC(Dango_StateTaunt_Taunting);
    ADD_PUBLIC_FUNC(Dango_StateTaunt_Turning);
    ADD_PUBLIC_FUNC(Dango_StateTaunt_RollOut);
#endif

    // SSZ/Fireflies
    ADD_PUBLIC_FUNC(Fireflies_State_Spawner);
    ADD_PUBLIC_FUNC(Fireflies_State_Firefly);

    // SSZ/Firework
    ADD_PUBLIC_FUNC(Firework_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Firework_HandlePlayerTimers);
    ADD_PUBLIC_FUNC(Firework_RemovePlayers);
    ADD_PUBLIC_FUNC(Firework_HandlePlayerRemoval);
    ADD_PUBLIC_FUNC(Firework_HandlePlayerJump);
    ADD_PUBLIC_FUNC(Firework_HandlePlayerControl);
    ADD_PUBLIC_FUNC(Firework_HandleMoveDir);
    ADD_PUBLIC_FUNC(Firework_HandleDebrisSpawn);
    ADD_PUBLIC_FUNC(Firework_HandleTileCollisions);
    ADD_PUBLIC_FUNC(Firework_HandleRideEnd);
    ADD_PUBLIC_FUNC(Firework_CheckOffScreen);
    ADD_PUBLIC_FUNC(Firework_HandleSparkAnimations);
    ADD_PUBLIC_FUNC(Firework_State_Init);
    ADD_PUBLIC_FUNC(Firework_State_AwaitPlayerRide);
    ADD_PUBLIC_FUNC(Firework_State_PlayerGrabDelay);
    ADD_PUBLIC_FUNC(Firework_State_Riding);
    ADD_PUBLIC_FUNC(Firework_State_Explode);
    ADD_PUBLIC_FUNC(Firework_State_ResetOffScreen);
    ADD_PUBLIC_FUNC(Firework_State_SparkSetup);
    ADD_PUBLIC_FUNC(Firework_State_Spark);

    // SSZ/FlowerPod
    ADD_PUBLIC_FUNC(FlowerPod_SpawnSeeds);
    ADD_PUBLIC_FUNC(FlowerPod_State_Pod);
    ADD_PUBLIC_FUNC(FlowerPod_State_Exploding);
    ADD_PUBLIC_FUNC(FlowerPod_State_Destroyed);
    ADD_PUBLIC_FUNC(FlowerPod_State_SeedFall);
    ADD_PUBLIC_FUNC(FlowerPod_State_SpawnBeanstalk);
    ADD_PUBLIC_FUNC(FlowerPod_State_FlowerGrow);
    ADD_PUBLIC_FUNC(FlowerPod_State_Flower);

    // SSZ/GigaMetal
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(GigaMetal_Draw_Cover);
    ADD_PUBLIC_FUNC(GigaMetal_Draw_Head);
    ADD_PUBLIC_FUNC(GigaMetal_Draw_Shoulder);
    ADD_PUBLIC_FUNC(GigaMetal_Draw_Arm);
    ADD_PUBLIC_FUNC(GigaMetal_Draw_LaserEdge);
    ADD_PUBLIC_FUNC(GigaMetal_Draw_Shard);
    ADD_PUBLIC_FUNC(GigaMetal_HandleCameraMovement);
    ADD_PUBLIC_FUNC(GigaMetal_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(GigaMetal_Hit);
    ADD_PUBLIC_FUNC(GigaMetal_StateBody_AwaitPlayer);
    ADD_PUBLIC_FUNC(GigaMetal_StateBody_SetupComponents);
    ADD_PUBLIC_FUNC(GigaMetal_StateBody_Transformed);
    ADD_PUBLIC_FUNC(GigaMetal_StateBody_Roar);
    ADD_PUBLIC_FUNC(GigaMetal_StateBody_Marching);
    ADD_PUBLIC_FUNC(GigaMetal_StateBody_Destroyed);
    ADD_PUBLIC_FUNC(GigaMetal_StateShoulder_Impact);
    ADD_PUBLIC_FUNC(GigaMetal_StateHead_Impact);
    ADD_PUBLIC_FUNC(GigaMetal_State_Laser);
    ADD_PUBLIC_FUNC(GigaMetal_StateLaser_Finish);
    ADD_PUBLIC_FUNC(GigaMetal_State_Shard);
    ADD_PUBLIC_FUNC(GigaMetal_StateHead_PrepareRoar);
    ADD_PUBLIC_FUNC(GigaMetal_StateHead_Roar);
    ADD_PUBLIC_FUNC(GigaMetal_StateHead_FinishRoar);
    ADD_PUBLIC_FUNC(GigaMetal_StateHead_PrepareLaser);
    ADD_PUBLIC_FUNC(GigaMetal_StateHead_ChargeLaser);
    ADD_PUBLIC_FUNC(GigaMetal_StateHead_FiringLaser);
    ADD_PUBLIC_FUNC(GigaMetal_StateHead_TargetingPlayer);
    ADD_PUBLIC_FUNC(GigaMetal_StateHead_ReleasingBombs);
    ADD_PUBLIC_FUNC(GigaMetal_HandleArmCollisions);
    ADD_PUBLIC_FUNC(GigaMetal_StateArm_Idle_Front);
    ADD_PUBLIC_FUNC(GigaMetal_StateArm_Idle_Behind);
    ADD_PUBLIC_FUNC(GigaMetal_StateArm_Marching);
#endif

    // SSZ/HiLoSign
    ADD_PUBLIC_FUNC(HiLoSign_DebugSpawn);
    ADD_PUBLIC_FUNC(HiLoSign_State_Spinning);
    ADD_PUBLIC_FUNC(HiLoSign_State_FinishSpinAdjust);
    ADD_PUBLIC_FUNC(HiLoSign_Draw_Horizontal);
    ADD_PUBLIC_FUNC(HiLoSign_Draw_Vertical);

    // SSZ/Hotaru
    ADD_PUBLIC_FUNC(Hotaru_DebugSpawn);
    ADD_PUBLIC_FUNC(Hotaru_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Hotaru_CheckOffScreen);
    ADD_PUBLIC_FUNC(Hotaru_State_Init);
    ADD_PUBLIC_FUNC(Hotaru_State_CheckPlayerInRange);
    ADD_PUBLIC_FUNC(Hotaru_State_FoundPlayer);
    ADD_PUBLIC_FUNC(Hotaru_State_FlyOnScreen);
    ADD_PUBLIC_FUNC(Hotaru_State_AttachedToScreen);
    ADD_PUBLIC_FUNC(Hotaru_State_Charging);
    ADD_PUBLIC_FUNC(Hotaru_State_Attacking);
    ADD_PUBLIC_FUNC(Hotaru_State_FinishedAttacking);

    // SSZ/HotaruHiWatt
    ADD_PUBLIC_FUNC(HotaruHiWatt_SfxCheck_Zap);
    ADD_PUBLIC_FUNC(HotaruHiWatt_SfxCheck_HHWLaser);
    ADD_PUBLIC_FUNC(HotaruHiWatt_SfxUpdate_HHWLaser);
    ADD_PUBLIC_FUNC(HotaruHiWatt_Hit);
    ADD_PUBLIC_FUNC(HotaruHiWatt_Explode);
    ADD_PUBLIC_FUNC(HotaruHiWatt_CheckPlayerCollisions_Hotaru);
    ADD_PUBLIC_FUNC(HotaruHiWatt_CheckPlayerCollisions_Boss);
    ADD_PUBLIC_FUNC(HotaruHiWatt_CheckPlayerCollisions_MiniLaser);
    ADD_PUBLIC_FUNC(HotaruHiWatt_CheckPlayerCollisions_BossLaser);
    ADD_PUBLIC_FUNC(HotaruHiWatt_Draw_Hotaru);
    ADD_PUBLIC_FUNC(HotaruHiWatt_Draw_HotaruAttacking);
    ADD_PUBLIC_FUNC(HotaruHiWatt_Draw_Boss);
    ADD_PUBLIC_FUNC(HotaruHiWatt_Draw_BossLaserCharging);
    ADD_PUBLIC_FUNC(HotaruHiWatt_Draw_BossLaser);
    ADD_PUBLIC_FUNC(HotaruHiWatt_Draw_FormingHHW);
    ADD_PUBLIC_FUNC(HotaruHiWatt_Draw_FlashAppear);
    ADD_PUBLIC_FUNC(HotaruHiWatt_SpawnPairHotarus);
    ADD_PUBLIC_FUNC(HotaruHiWatt_SetupHHWReappear);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_SetupArena);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_AwaitPlayer);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_Appear);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_FlyUp);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateHotaru_MoveToTarget);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_FlashFadeOut);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_HiddenDimScreen);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_HiddenUndimScreen);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateHotaru_DimScreen);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateHotaru_Charging);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateHotaru_Attacking);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateHotaru_FinishedAttack);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateHotaru_EndAttackSequence);
    ADD_PUBLIC_FUNC(HotaruHiWatt_State_MiniLaser);
    ADD_PUBLIC_FUNC(HotaruHiWatt_State_MiniLaserStrike);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateHotaruPair_DimScreen);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateHotaruPair_PrepareAttack);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateHotaruPair_Charging);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateHotaruPair_AttackDelay);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateHotaruPair_AttackMovingDown);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateHotaruPair_AttackMovingUp);
    ADD_PUBLIC_FUNC(HotaruHiWatt_State_SparkyOrb);
    ADD_PUBLIC_FUNC(HotaruHiWatt_State_SparkyOrb_FadeOut);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_DimScreen);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_CreateSmallHHWs);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_FormingHHW);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_FlashAppear);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_LaserAttackDelay);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_ChargingLaser);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_LaserAttack_Right);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_LaserAttack_Left);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_FinishedLaserAttack);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_Destroyed);
    ADD_PUBLIC_FUNC(HotaruHiWatt_StateBoss_Finished);

    // SSZ/HotaruMKII
    ADD_PUBLIC_FUNC(HotaruMKII_DebugSpawn);
    ADD_PUBLIC_FUNC(HotaruMKII_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(HotaruMKII_CheckOffScreen);
    ADD_PUBLIC_FUNC(HotaruMKII_HandleDistances);
    ADD_PUBLIC_FUNC(HotaruMKII_State_Init);
    ADD_PUBLIC_FUNC(HotaruMKII_State_CheckPlayerInRange);
    ADD_PUBLIC_FUNC(HotaruMKII_State_FlyAway);
    ADD_PUBLIC_FUNC(HotaruMKII_State_FlyOnScreen);
    ADD_PUBLIC_FUNC(HotaruMKII_State_AttackDelay);
    ADD_PUBLIC_FUNC(HotaruMKII_State_Charging);
    ADD_PUBLIC_FUNC(HotaruMKII_State_LaserAttack);
    ADD_PUBLIC_FUNC(HotaruMKII_State_Flash);
    ADD_PUBLIC_FUNC(HotaruMKII_State_Laser);
    ADD_PUBLIC_FUNC(HotaruMKII_State_LaserStrike);

    // SSZ/Kabasira
    ADD_PUBLIC_FUNC(Kabasira_DebugSpawn);
    ADD_PUBLIC_FUNC(Kabasira_HandleAnimations);
    ADD_PUBLIC_FUNC(Kabasira_DrawSegment);
    ADD_PUBLIC_FUNC(Kabasira_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Kabasira_CheckOffScreen);
    ADD_PUBLIC_FUNC(Kabasira_State_Init);
    ADD_PUBLIC_FUNC(Kabasira_State_Moving);
    ADD_PUBLIC_FUNC(Kabasira_State_LaunchedAttack);

    // SSZ/Kanabun
    ADD_PUBLIC_FUNC(Kanabun_DebugSpawn);
    ADD_PUBLIC_FUNC(Kanabun_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(Kanabun_CheckOffScreen);
    ADD_PUBLIC_FUNC(Kanabun_HandleMovement);
    ADD_PUBLIC_FUNC(Kanabun_State_Init);
    ADD_PUBLIC_FUNC(Kanabun_State_Moving);
    ADD_PUBLIC_FUNC(Kanabun_State_Turning);

    // SSZ/MetalSonic
    ADD_PUBLIC_FUNC(MetalSonic_HandleStageWrap);
    ADD_PUBLIC_FUNC(MetalSonic_ProcessBGParallax);
    ADD_PUBLIC_FUNC(MetalSonic_HandleVelocity);
    ADD_PUBLIC_FUNC(MetalSonic_HandleAnimDir);
#if !MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MetalSonic_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(MetalSonic_Hit);
    ADD_PUBLIC_FUNC(MetalSonic_Explode);
#endif
    ADD_PUBLIC_FUNC(MetalSonic_State_SetupArena);
    ADD_PUBLIC_FUNC(MetalSonic_State_AwaitPlayer);
    ADD_PUBLIC_FUNC(MetalSonic_State_WaitForHologram);
    ADD_PUBLIC_FUNC(MetalSonic_State_Appear);
    ADD_PUBLIC_FUNC(MetalSonic_State_Land);
    ADD_PUBLIC_FUNC(MetalSonic_State_Taunt);
    ADD_PUBLIC_FUNC(MetalSonic_State_GetReady);
    ADD_PUBLIC_FUNC(MetalSonic_State_Ready);
    ADD_PUBLIC_FUNC(MetalSonic_State_Start);
    ADD_PUBLIC_FUNC(MetalSonic_State_EnterHoverMode);
    ADD_PUBLIC_FUNC(MetalSonic_State_Hovering);
    ADD_PUBLIC_FUNC(MetalSonic_State_PrepareAttack);
    ADD_PUBLIC_FUNC(MetalSonic_State_StartAttack);
    ADD_PUBLIC_FUNC(MetalSonic_State_SetupBallAttack_Phase1);
    ADD_PUBLIC_FUNC(MetalSonic_State_BallAttack_Phase1);
    ADD_PUBLIC_FUNC(MetalSonic_State_SetupElectricAttack_Phase1);
    ADD_PUBLIC_FUNC(MetalSonic_State_ElectricAttack_Phase1);
    ADD_PUBLIC_FUNC(MetalSonic_State_SetupDashAttack_Phase1);
    ADD_PUBLIC_FUNC(MetalSonic_State_DashAttack_Phase1);
    ADD_PUBLIC_FUNC(MetalSonic_State_EnterPanel);
    ADD_PUBLIC_FUNC(MetalSonic_State_StartPanelSequence);
    ADD_PUBLIC_FUNC(MetalSonic_HandlePanelAttack);
    ADD_PUBLIC_FUNC(MetalSonic_State_OpenFactoryDoor);
    ADD_PUBLIC_FUNC(MetalSonic_State_HandleSilverSonics);
    ADD_PUBLIC_FUNC(MetalSonic_State_PanelExplosion);
    ADD_PUBLIC_FUNC(MetalSonic_State_ExitFactory);
    ADD_PUBLIC_FUNC(MetalSonic_State_PrepareFinalChase);
#if MANIA_USE_PLUS // Phase 3 (VS GigaMetal)
    ADD_PUBLIC_FUNC(MetalSonic_State_WaitForRuby);
    ADD_PUBLIC_FUNC(MetalSonic_State_ObtainRuby);
    ADD_PUBLIC_FUNC(MetalSonic_State_Transform);
    ADD_PUBLIC_FUNC(MetalSonic_State_Defeated);
#else // Phase 3 (VS Metal Sonic)
    ADD_PUBLIC_FUNC(MetalSonic_State_SetupSpikeWall);
    ADD_PUBLIC_FUNC(MetalSonic_State_FlyToSpikeWall);
    ADD_PUBLIC_FUNC(MetalSonic_State_LandNearSpikeWall);
    ADD_PUBLIC_FUNC(MetalSonic_State_Taunt_Phase2);
    ADD_PUBLIC_FUNC(MetalSonic_State_Ready_Phase2);
    ADD_PUBLIC_FUNC(MetalSonic_State_StartSpikeWallMovement);
    ADD_PUBLIC_FUNC(MetalSonic_State_AccelerateSpikeWall);
    ADD_PUBLIC_FUNC(MetalSonic_State_Hover_Phase2);
    ADD_PUBLIC_FUNC(MetalSonic_State_SetupBallAttack_Phase2);
    ADD_PUBLIC_FUNC(MetalSonic_State_BallAttack_Phase2);
    ADD_PUBLIC_FUNC(MetalSonic_State_FinishAttack_Phase2);
    ADD_PUBLIC_FUNC(MetalSonic_State_SetupElectricAttack_Phase2);
    ADD_PUBLIC_FUNC(MetalSonic_State_StartElectricAttack_Phase2);
    ADD_PUBLIC_FUNC(MetalSonic_State_ElectricAttack_Phase2);
    ADD_PUBLIC_FUNC(MetalSonic_State_DashAttack_Phase2);
    ADD_PUBLIC_FUNC(MetalSonic_State_Explode);
    ADD_PUBLIC_FUNC(MetalSonic_State_Defeated);
    ADD_PUBLIC_FUNC(MetalSonic_State_Finish);
    ADD_PUBLIC_FUNC(MetalSonic_State_None);
    ADD_PUBLIC_FUNC(MetalSonic_StateWall_Fall);
    ADD_PUBLIC_FUNC(MetalSonic_StateWall_Move);
#endif

    // SSZ/MSBomb
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(MSBomb_State_EnterBomb);
    ADD_PUBLIC_FUNC(MSBomb_State_SilverSonicExplode);
    ADD_PUBLIC_FUNC(MSBomb_State_Bouncing);
    ADD_PUBLIC_FUNC(MSBomb_State_Projectile);
#endif

    // SSZ/MSFactory
    ADD_PUBLIC_FUNC(MSFactory_State_SetupFactory);
    ADD_PUBLIC_FUNC(MSFactory_State_SetupMetalSonic);
    ADD_PUBLIC_FUNC(MSFactory_State_OpeningDoor);
    ADD_PUBLIC_FUNC(MSFactory_State_CreateSilverSonic);
    ADD_PUBLIC_FUNC(MSFactory_State_CloseDoor);

    // SSZ/MSHologram
    ADD_PUBLIC_FUNC(MSHologram_State_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(MSHologram_State_Explode);
    ADD_PUBLIC_FUNC(MSHologram_State_Destroyed);

    // SSZ/MSOrb
    ADD_PUBLIC_FUNC(MSOrb_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(MSOrb_State_Orb);
    ADD_PUBLIC_FUNC(MSOrb_Draw_Orb);

    // SSZ/MSPanel
    ADD_PUBLIC_FUNC(MSPanel_State_SetupPanel);
    ADD_PUBLIC_FUNC(MSPanel_State_Active);
    ADD_PUBLIC_FUNC(MSPanel_State_Explode);
    ADD_PUBLIC_FUNC(MSPanel_State_Rumbling);

    // SSZ/RTeleporter
    ADD_PUBLIC_FUNC(RTeleporter_State_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(RTeleporter_State_Destroyed);
    ADD_PUBLIC_FUNC(RTeleporter_Draw_Active);
    ADD_PUBLIC_FUNC(RTeleporter_Draw_Exploding);
    ADD_PUBLIC_FUNC(RTeleporter_Draw_Destroyed);

    // SSZ/SDashWheel
    ADD_PUBLIC_FUNC(SDashWheel_SfxCheck_MGZDoor);
    ADD_PUBLIC_FUNC(SDashWheel_SfxUpdate_MGZDoor);

    // SSZ/SilverSonic
    ADD_PUBLIC_FUNC(SilverSonic_HandleNextAttack);
    ADD_PUBLIC_FUNC(SilverSonic_CheckPlayerCollisions_Badnik);
    ADD_PUBLIC_FUNC(SilverSonic_CheckPlayerCollisions_Ball);
    ADD_PUBLIC_FUNC(SilverSonic_CheckPlayerCollisions_Arm);
    ADD_PUBLIC_FUNC(SilverSonic_State_Appear);
    ADD_PUBLIC_FUNC(SilverSonic_State_FinishedAttack);
    ADD_PUBLIC_FUNC(SilverSonic_State_ArmAttack);
    ADD_PUBLIC_FUNC(SilverSonic_State_Crouch);
    ADD_PUBLIC_FUNC(SilverSonic_State_Spindash);
    ADD_PUBLIC_FUNC(SilverSonic_State_Roll);
    ADD_PUBLIC_FUNC(SilverSonic_State_RollJump);
    ADD_PUBLIC_FUNC(SilverSonic_State_RollRebound);
    ADD_PUBLIC_FUNC(SilverSonic_State_BoostReady);
    ADD_PUBLIC_FUNC(SilverSonic_State_Boost_Air);
    ADD_PUBLIC_FUNC(SilverSonic_State_Boost_Ground);
    ADD_PUBLIC_FUNC(SilverSonic_State_FinishedBoost);
    ADD_PUBLIC_FUNC(SilverSonic_State_Explode);

    // SSZ/SpikeFlail
    ADD_PUBLIC_FUNC(SpikeFlail_SetupHitbox);
    ADD_PUBLIC_FUNC(SpikeFlail_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(SpikeFlail_GetScale);

    // SSZ/SSZ1Intro
    ADD_PUBLIC_FUNC(SSZ1Intro_SetupCutscene);
    ADD_PUBLIC_FUNC(SSZ1Intro_HandleRubyHover);
    ADD_PUBLIC_FUNC(SSZ1Intro_Cutscene_FinishRubyWarp);
    ADD_PUBLIC_FUNC(SSZ1Intro_Cutscene_HandleLanding);
    ADD_PUBLIC_FUNC(SSZ1Intro_Cutscene_BeginAct1);

    // SSZ/SSZ1Outro
    ADD_PUBLIC_FUNC(SSZ1Outro_Cutscene_TimeWarpRunway);
    ADD_PUBLIC_FUNC(SSZ1Outro_Cutscene_TimeWarp);
    ADD_PUBLIC_FUNC(SSZ1Outro_DestroyHotaru);
    ADD_PUBLIC_FUNC(SSZ1Outro_Trigger_DestroyHotarus);

    // SSZ/SSZ1Setup
    ADD_PUBLIC_FUNC(SSZ1Setup_StageFinish_EndAct1);

#if MANIA_USE_PLUS
    // SSZ/SSZ2Setup
    ADD_PUBLIC_FUNC(SSZ2Setup_StageFinish_EndAct2);
    ADD_PUBLIC_FUNC(SSZ2Setup_DrawHook_PrepareDrawingFX);
#endif
    ADD_PUBLIC_FUNC(SSZ2Setup_Scanline_BGTower);
    ADD_PUBLIC_FUNC(SSZ2Setup_Trigger_DestroyHotaruMKII);
    ADD_PUBLIC_FUNC(SSZ2Setup_Trigger_AwardAchievement);
    ADD_PUBLIC_FUNC(SSZ2Setup_Trigger_SSZ2BTransition);

#if MANIA_USE_PLUS
    // SSZ/SSZ3Cutscene
    ADD_PUBLIC_FUNC(SSZ3Cutscene_HandleRubyFX);
    ADD_PUBLIC_FUNC(SSZ3Cutscene_CutsceneIntro_EnterStageLeft);
#endif
    ADD_PUBLIC_FUNC(SSZ3Cutscene_CutsceneIntro_PlayerRunLeft);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(SSZ3Cutscene_CutsceneOutro_SetupOutro);
    ADD_PUBLIC_FUNC(SSZ3Cutscene_CutsceneOutro_FollowRuby);
    ADD_PUBLIC_FUNC(SSZ3Cutscene_CutsceneOutro_EnterRuby);
    ADD_PUBLIC_FUNC(SSZ3Cutscene_CutsceneOutro_RubyActivate);
    ADD_PUBLIC_FUNC(SSZ3Cutscene_CutsceneOutro_RubyWarp);
    ADD_PUBLIC_FUNC(SSZ3Cutscene_CutsceneOutro_LoadHCZ1);
#endif

    // SSZ/SSZEggman
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(SSZEggman_State_Init);
    ADD_PUBLIC_FUNC(SSZEggman_State_HoldingRuby);
    ADD_PUBLIC_FUNC(SSZEggman_State_ThrownRuby);
    ADD_PUBLIC_FUNC(SSZEggman_State_WatchMetalTransform);
    ADD_PUBLIC_FUNC(SSZEggman_State_FlyAway);
#endif

    // SSZ/SSZSpikeBall
    ADD_PUBLIC_FUNC(SSZSpikeBall_State_AwaitInterval);
    ADD_PUBLIC_FUNC(SSZSpikeBall_State_H);
    ADD_PUBLIC_FUNC(SSZSpikeBall_State_V);
    ADD_PUBLIC_FUNC(SSZSpikeBall_State_H_Launch);
    ADD_PUBLIC_FUNC(SSZSpikeBall_State_V_Launch);
    ADD_PUBLIC_FUNC(SSZSpikeBall_State_Ball_MoveOut);
    ADD_PUBLIC_FUNC(SSZSpikeBall_State_Ball_Stopped);
    ADD_PUBLIC_FUNC(SSZSpikeBall_State_Ball_MoveBack);

    // SSZ/TimePost
    ADD_PUBLIC_FUNC(TimePost_Spin);
    ADD_PUBLIC_FUNC(TimePost_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(TimePost_Particle_TimeSparkle);
    ADD_PUBLIC_FUNC(TimePost_HandleTimeSparkles);
    ADD_PUBLIC_FUNC(TimePost_State_Init);
    ADD_PUBLIC_FUNC(TimePost_State_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(TimePost_State_Spinning);
    ADD_PUBLIC_FUNC(TimePost_State_FinishedSpin);

    // SSZ/TimeTravelSetup
    ADD_PUBLIC_FUNC(TimeTravelSetup_Particle_TimeSparkle);

    // SSZ/TTCutscene
    ADD_PUBLIC_FUNC(TTCutscene_StartCutscene);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(TTCutscene_Cutscene_SkipCB);
    ADD_PUBLIC_FUNC(TTCutscene_Cutscene_Setup);
#endif
    ADD_PUBLIC_FUNC(TTCutscene_Cutscene_FlyIn);
    ADD_PUBLIC_FUNC(TTCutscene_Cutscene_Wait);
    ADD_PUBLIC_FUNC(TTCutscene_Cutscene_FlyOut);
    ADD_PUBLIC_FUNC(TTCutscene_Cutscene_NextScene);

    // SSZ/UncurlPlant
    ADD_PUBLIC_FUNC(UncurlPlant_CalculateDrawPositions);
    ADD_PUBLIC_FUNC(UncurlPlant_CalculatePositions);

    // SSZ/YoyoPulley
    ADD_PUBLIC_FUNC(YoyoPulley_UpdateHandlePos);
    ADD_PUBLIC_FUNC(YoyoPulley_DrawSprites);
    ADD_PUBLIC_FUNC(YoyoPulley_GetLength);

    // Summary/Summary
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(Summary_State_SetupText);
    ADD_PUBLIC_FUNC(Summary_State_FadeIn);
    ADD_PUBLIC_FUNC(Summary_State_Wait);
    ADD_PUBLIC_FUNC(Summary_State_FadeOut);
    ADD_PUBLIC_FUNC(Summary_SetTextString);
    ADD_PUBLIC_FUNC(Summary_GetPlayTime);
    ADD_PUBLIC_FUNC(Summary_LoadTimes);
#endif

    // Title/TitleBG
    ADD_PUBLIC_FUNC(TitleBG_SetupFX);
    ADD_PUBLIC_FUNC(TitleBG_Scanline_Clouds);
    ADD_PUBLIC_FUNC(TitleBG_Scanline_Island);

    // Title/TitleEggman
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(TitleEggman_State_Dust);
    ADD_PUBLIC_FUNC(TitleEggman_State_Wait);
    ADD_PUBLIC_FUNC(TitleEggman_State_Move);
#endif

    // Title/TitleLogo
    ADD_PUBLIC_FUNC(TitleLogo_SetupPressStart);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(TitleLogo_State_Ribbon);
    ADD_PUBLIC_FUNC(TitleLogo_State_PressButton);
    ADD_PUBLIC_FUNC(TitleLogo_State_HandleSetup);
    ADD_PUBLIC_FUNC(TitleLogo_State_PlusLogo);
    ADD_PUBLIC_FUNC(TitleLogo_State_PlusShine);
#endif

#if MANIA_USE_PLUS
    // Title/TitleSetup
    ADD_PUBLIC_FUNC(TitleSetup_HandleCheatInputs);
    ADD_PUBLIC_FUNC(TitleSetup_CheckCheatCode);
    ADD_PUBLIC_FUNC(TitleSetup_VideoSkipCB);
#endif
    ADD_PUBLIC_FUNC(TitleSetup_State_Wait);
    ADD_PUBLIC_FUNC(TitleSetup_State_AnimateUntilFlash);
    ADD_PUBLIC_FUNC(TitleSetup_State_FlashIn);
    ADD_PUBLIC_FUNC(TitleSetup_State_WaitForSonic);
    ADD_PUBLIC_FUNC(TitleSetup_State_SetupLogo);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(TitleSetup_State_SetupPlusLogo);
    ADD_PUBLIC_FUNC(TitleSetup_State_WaitForEnter);
#endif
    ADD_PUBLIC_FUNC(TitleSetup_State_FadeToMenu);
    ADD_PUBLIC_FUNC(TitleSetup_State_FadeToVideo);
    ADD_PUBLIC_FUNC(TitleSetup_Draw_FadeBlack);
    ADD_PUBLIC_FUNC(TitleSetup_Draw_DrawRing);
    ADD_PUBLIC_FUNC(TitleSetup_Draw_Flash);

    // TMZ/BallHog
    ADD_PUBLIC_FUNC(BallHog_DebugSpawn);
    ADD_PUBLIC_FUNC(BallHog_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(BallHog_CheckOffScreen);
    ADD_PUBLIC_FUNC(BallHog_State_Init);
    ADD_PUBLIC_FUNC(BallHog_State_Idle);
    ADD_PUBLIC_FUNC(BallHog_State_Jump);
    ADD_PUBLIC_FUNC(BallHog_State_Land);
    ADD_PUBLIC_FUNC(BallHog_State_DropBomb);
    ADD_PUBLIC_FUNC(BallHog_State_Bomb);

    // TMZ/CrashTest
    ADD_PUBLIC_FUNC(CrashTest_SetupHitboxes);
    ADD_PUBLIC_FUNC(CrashTest_CheckOffScreen);
    ADD_PUBLIC_FUNC(CrashTest_HandlePlayerCrash);
    ADD_PUBLIC_FUNC(CrashTest_CheckPlayerCollisionsSolid);
    ADD_PUBLIC_FUNC(CrashTest_CheckPlayerRide);
    ADD_PUBLIC_FUNC(CrashTest_CheckPlayerJump);
    ADD_PUBLIC_FUNC(CrashTest_HandleLightAnims);
    ADD_PUBLIC_FUNC(CrashTest_State_Init);
    ADD_PUBLIC_FUNC(CrashTest_State_AwaitPlayer);
    ADD_PUBLIC_FUNC(CrashTest_State_Rev);
    ADD_PUBLIC_FUNC(CrashTest_State_Move);
    ADD_PUBLIC_FUNC(CrashTest_State_Crashed);

    // TMZ/CrimsonEye
    ADD_PUBLIC_FUNC(CrimsonEye_Explode);
    ADD_PUBLIC_FUNC(CrimsonEye_Hit);
    ADD_PUBLIC_FUNC(CrimsonEye_SetupBG2Layer);
    ADD_PUBLIC_FUNC(CrimsonEye_DrawHook_DisableFGSilhouette);
    ADD_PUBLIC_FUNC(CrimsonEye_DrawHook_EnableFGSilhouette);
    ADD_PUBLIC_FUNC(CrimsonEye_SetArrowDir);
    ADD_PUBLIC_FUNC(CrimsonEye_StateContainer_SetupArena);
    ADD_PUBLIC_FUNC(CrimsonEye_StateContainer_AwaitPlayer);
    ADD_PUBLIC_FUNC(CrimsonEye_StateContainer_StartFight);
    ADD_PUBLIC_FUNC(CrimsonEye_StateContainer_CoreActive);
    ADD_PUBLIC_FUNC(CrimsonEye_StateContainer_HandleElevator);
    ADD_PUBLIC_FUNC(CrimsonEye_StateContainer_Explode);
    ADD_PUBLIC_FUNC(CrimsonEye_StateContainer_MoveElevatorToTMZ2Entry);
    ADD_PUBLIC_FUNC(CrimsonEye_Draw_Container);
    ADD_PUBLIC_FUNC(CrimsonEye_StateEye_EnterBalls);
    ADD_PUBLIC_FUNC(CrimsonEye_StateEye_SpinningBalls);
    ADD_PUBLIC_FUNC(CrimsonEye_StateEye_LowerBalls);
    ADD_PUBLIC_FUNC(CrimsonEye_StateEye_LoweredBalls);
    ADD_PUBLIC_FUNC(CrimsonEye_StateEye_ExtendBallAttack);
    ADD_PUBLIC_FUNC(CrimsonEye_StateEye_FinishExtendAttack);
    ADD_PUBLIC_FUNC(CrimsonEye_StateEye_RaiseBalls);
    ADD_PUBLIC_FUNC(CrimsonEye_ShootShot);
    ADD_PUBLIC_FUNC(CrimsonEye_SetupEyePositions);
    ADD_PUBLIC_FUNC(CrimsonEye_DestroyBall);
    ADD_PUBLIC_FUNC(CrimsonEye_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(CrimsonEye_StateCore_ContainerActive);
    ADD_PUBLIC_FUNC(CrimsonEye_StateCore_BreakOut);
    ADD_PUBLIC_FUNC(CrimsonEye_StateCore_BrokenOut);
    ADD_PUBLIC_FUNC(CrimsonEye_StateCore_Hovering);
    ADD_PUBLIC_FUNC(CrimsonEye_StateCore_ImpactLift);
    ADD_PUBLIC_FUNC(CrimsonEye_StateCore_Explode);
    ADD_PUBLIC_FUNC(CrimsonEye_StateCore_SpawnSignPost);
    ADD_PUBLIC_FUNC(CrimsonEye_Draw_Core);
    ADD_PUBLIC_FUNC(CrimsonEye_CheckPlayerCollisions_Ball);
    ADD_PUBLIC_FUNC(CrimsonEye_StateBall_Spinning);
    ADD_PUBLIC_FUNC(CrimsonEye_StateBall_Destroyed);
    ADD_PUBLIC_FUNC(CrimsonEye_Draw_Simple);
    ADD_PUBLIC_FUNC(CrimsonEye_StateSpike_Harmful);
    ADD_PUBLIC_FUNC(CrimsonEye_StateSpike_Debris);
    ADD_PUBLIC_FUNC(CrimsonEye_State_Shot);
    ADD_PUBLIC_FUNC(CrimsonEye_State_Arrow);
    ADD_PUBLIC_FUNC(CrimsonEye_Draw_Arrow);

    // TMZ/EscapeCar
    ADD_PUBLIC_FUNC(EscapeCar_StateMania_AwaitPlayer);
    ADD_PUBLIC_FUNC(EscapeCar_StateMania_EnteredCar);
    ADD_PUBLIC_FUNC(EscapeCar_StateMania_Ride);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(EscapeCar_StateEncore_Setup);
    ADD_PUBLIC_FUNC(EscapeCar_StateEncore_BadEnd);
    ADD_PUBLIC_FUNC(EscapeCar_StateEncore_GoodEnd);
#endif

    // TMZ/FlasherMKII
    ADD_PUBLIC_FUNC(FlasherMKII_DebugSpawn);
    ADD_PUBLIC_FUNC(FlasherMKII_CheckOffScreen);
    ADD_PUBLIC_FUNC(FlasherMKII_HandlePlayerCollisions);
    ADD_PUBLIC_FUNC(FlasherMKII_HandleHarmPlayerCollisions);
    ADD_PUBLIC_FUNC(FlasherMKII_State_Idle);
    ADD_PUBLIC_FUNC(FlasherMKII_State_Moving);
    ADD_PUBLIC_FUNC(FlasherMKII_State_WeakFlash);
    ADD_PUBLIC_FUNC(FlasherMKII_State_StrongFlash);
    ADD_PUBLIC_FUNC(FlasherMKII_State_FinishedFlashing);

    // TMZ/GymBar
    ADD_PUBLIC_FUNC(GymBar_DebugSpawn);
    ADD_PUBLIC_FUNC(GymBar_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(GymBar_HandleSwingJump);
    ADD_PUBLIC_FUNC(GymBar_PlayerState_SwingV);
    ADD_PUBLIC_FUNC(GymBar_PlayerState_Hang);
    ADD_PUBLIC_FUNC(GymBar_PlayerState_SwingH);

    // TMZ/LaunchSpring
    ADD_PUBLIC_FUNC(LaunchSpring_CheckFireworkActive);
    ADD_PUBLIC_FUNC(LaunchSpring_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(LaunchSpring_LaunchPlayer);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Spinning);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Spinning_GrabbedPlayer);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Spinning_ReadyToFire);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Spinning_FiredPlayer);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Spinning_ReadyUp);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Cannon);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Cannon_Fire_Automatic);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Cannon_Fire_Manual);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Cannon_FiredPlayer);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Rotating);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Rotate_Fire_Automatic);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Rotate_Fire_Manual);
    ADD_PUBLIC_FUNC(LaunchSpring_State_Rotating_FiredPlayer);

    // TMZ/MagnetSphere
    ADD_PUBLIC_FUNC(MagnetSphere_DebugSpawn);
    ADD_PUBLIC_FUNC(MagnetSphere_CheckPlayerCollision);
    ADD_PUBLIC_FUNC(MagnetSphere_MovePlayer);

    // TMZ/MetalArm
    ADD_PUBLIC_FUNC(MetalArm_SfxCheck_MetalArm);
    ADD_PUBLIC_FUNC(MetalArm_GetArmPosition);
    ADD_PUBLIC_FUNC(MetalArm_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(MetalArm_State_Idle);
    ADD_PUBLIC_FUNC(MetalArm_State_MoveToHold);
    ADD_PUBLIC_FUNC(MetalArm_State_Holding);
    ADD_PUBLIC_FUNC(MetalArm_State_MoveToStart);

    // TMZ/PopOut
    ADD_PUBLIC_FUNC(PopOut_SetupHitboxes);

    // TMZ/SentryBug
    ADD_PUBLIC_FUNC(SentryBug_DebugSpawn);
    ADD_PUBLIC_FUNC(SentryBug_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(SentryBug_SetupOrbDropVelocity);
    ADD_PUBLIC_FUNC(SentryBug_StateOrbs_Attached);
    ADD_PUBLIC_FUNC(SentryBug_StateOrbs_Dropped);
    ADD_PUBLIC_FUNC(SentryBug_StateOrbs_BeginNetRotation);
    ADD_PUBLIC_FUNC(SentryBug_StateOrbs_RotateAroundNet);
    ADD_PUBLIC_FUNC(SentryBug_StateOrbs_ReturnToSlots);
    ADD_PUBLIC_FUNC(SentryBug_State_AwaitPlayer);
    ADD_PUBLIC_FUNC(SentryBug_State_DropOrbs);
    ADD_PUBLIC_FUNC(SentryBug_State_NetAppear);
    ADD_PUBLIC_FUNC(SentryBug_State_NetShrink);
    ADD_PUBLIC_FUNC(SentryBug_State_NetFlash);
    ADD_PUBLIC_FUNC(SentryBug_State_ReturnToSlots);

    // TMZ/TeeterTotter
    ADD_PUBLIC_FUNC(TeeterTotter_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(TeeterTotter_ProcessSegmentGravity);
    ADD_PUBLIC_FUNC(TeeterTotter_HandleSegmentPositions);
    ADD_PUBLIC_FUNC(TeeterTotter_State_Init);
    ADD_PUBLIC_FUNC(TeeterTotter_State_Teeter);
    ADD_PUBLIC_FUNC(TeeterTotter_State_Fall);

    // TMZ/TMZ1Outro
    ADD_PUBLIC_FUNC(TMZ1Outro_CutsceneAct1_SetupPlayers);
    ADD_PUBLIC_FUNC(TMZ1Outro_CutsceneAct1_ElevatorRide);
    ADD_PUBLIC_FUNC(TMZ1Outro_CutsceneAct1_HeadForEntrance);
    ADD_PUBLIC_FUNC(TMZ1Outro_CutsceneAct1_EnterMonarch);
    ADD_PUBLIC_FUNC(TMZ1Outro_CutsceneAct2_BeginAct2);

    // TMZ/TMZ1Setup
    ADD_PUBLIC_FUNC(TMZ1Setup_BGSwitch_ShowSky);
    ADD_PUBLIC_FUNC(TMZ1Setup_BGSwitch_ShowLift);
    ADD_PUBLIC_FUNC(TMZ1Setup_StageFinish_EndAct1);
    ADD_PUBLIC_FUNC(TMZ1Setup_State_FadeToLift);
    ADD_PUBLIC_FUNC(TMZ1Setup_State_ShowOutsideBGs);
    ADD_PUBLIC_FUNC(TMZ1Setup_State_FadeOutCurrentBG);
    ADD_PUBLIC_FUNC(TMZ1Setup_State_ShowCityBG);
    ADD_PUBLIC_FUNC(TMZ1Setup_State_ShowSkyBG);
    ADD_PUBLIC_FUNC(TMZ1Setup_State_FadeIntoOutsideBGs);

    // TMZ/TMZ2Outro
    ADD_PUBLIC_FUNC(TMZ2Outro_SetupCutscene);
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_SetupOutro);
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_WatchEggman);
    ADD_PUBLIC_FUNC(TMZ2Outro_PlayerStateInput_Escape);
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_EggmanFall);
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_StartAlert);
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_TimeToEscape);
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_HurryToCar);
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_StartFadeOut);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_StartRubyRampage);
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_Panic);
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_OuttaHere_BadEnd);
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_OuttaHere);
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_TeamEscape);
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_FadeOut);
#endif
    ADD_PUBLIC_FUNC(TMZ2Outro_Cutscene_FinishSequence);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(TMZ2Outro_SaveFileCB);
#else
    ADD_PUBLIC_FUNC(TMZ2Outro_SaveFileCB);
#endif

    // TMZ/TMZ2Setup
    ADD_PUBLIC_FUNC(TMZ2Setup_DrawHook_ApplyDynTilesPalette);
    ADD_PUBLIC_FUNC(TMZ2Setup_DrawHook_RemoveDynTilesPalette);
    ADD_PUBLIC_FUNC(TMZ2Setup_DrawDynTiles_Eggman);
    ADD_PUBLIC_FUNC(TMZ2Setup_DrawDynTiles_Ruby);

    // TMZ/TMZ3Setup
    ADD_PUBLIC_FUNC(TMZ3Setup_DrawHook_ApplyDynTilesPalette);
    ADD_PUBLIC_FUNC(TMZ3Setup_DrawHook_RemoveDynTilesPalette);

    // TMZ/TMZAlert
    ADD_PUBLIC_FUNC(TMZAlert_State_Activating);
    ADD_PUBLIC_FUNC(TMZAlert_State_Alerting);
    ADD_PUBLIC_FUNC(TMZAlert_State_ShuttingDown);

    // TMZ/TMZCable
    ADD_PUBLIC_FUNC(TMZCable_HandleDrawPositions);
    ADD_PUBLIC_FUNC(TMZCable_State_Idle);
    ADD_PUBLIC_FUNC(TMZCable_State_Charge);
    ADD_PUBLIC_FUNC(TMZCable_State_Live);
    ADD_PUBLIC_FUNC(TMZCable_State_Fade);
    ADD_PUBLIC_FUNC(TMZCable_State_Destroyed);

    // TMZ/TMZFlames
    ADD_PUBLIC_FUNC(TMZFlames_State_Delay);
    ADD_PUBLIC_FUNC(TMZFlames_State_EnterFlames);
    ADD_PUBLIC_FUNC(TMZFlames_State_FlamesEnlarge);

    // TMZ/TurboTurtle
    ADD_PUBLIC_FUNC(TurboTurtle_DebugSpawn);
    ADD_PUBLIC_FUNC(TurboTurtle_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(TurboTurtle_SetupState);
    ADD_PUBLIC_FUNC(TurboTurtle_HandleFans);
    ADD_PUBLIC_FUNC(TurboTurtle_HandleFanParticles);
    ADD_PUBLIC_FUNC(TurboTurtle_SfxCheck_SmallFan);
    ADD_PUBLIC_FUNC(TurboTurtle_State_Init);
    ADD_PUBLIC_FUNC(TurboTurtle_State_Walking);
    ADD_PUBLIC_FUNC(TurboTurtle_State_TurnFanUp);
    ADD_PUBLIC_FUNC(TurboTurtle_State_FanTop);
    ADD_PUBLIC_FUNC(TurboTurtle_State_TurnFanRight);
    ADD_PUBLIC_FUNC(TurboTurtle_State_FanRight);
    ADD_PUBLIC_FUNC(TurboTurtle_State_TurnFanLeft);
    ADD_PUBLIC_FUNC(TurboTurtle_State_FanLeft);

    // TMZ/WallBumper
    ADD_PUBLIC_FUNC(WallBumper_DebugSpawn);
    ADD_PUBLIC_FUNC(WallBumper_HandleInteractions);

    // UFO/SpecialClear
    ADD_PUBLIC_FUNC(SpecialClear_DrawNumbers);
    ADD_PUBLIC_FUNC(SpecialClear_GiveScoreBonus);
#if MANIA_USE_PLUS
    ADD_PUBLIC_FUNC(SpecialClear_SaveCB);
#else
    ADD_PUBLIC_FUNC(SpecialClear_SaveCB);
    ADD_PUBLIC_FUNC(SpecialClear_State_SetupDelay);
#endif
    ADD_PUBLIC_FUNC(SpecialClear_State_EnterText);
    ADD_PUBLIC_FUNC(SpecialClear_State_AdjustText);
    ADD_PUBLIC_FUNC(SpecialClear_HandleEmeraldAppear);
    ADD_PUBLIC_FUNC(SpecialClear_State_EnterBonuses);
    ADD_PUBLIC_FUNC(SpecialClear_State_ScoreShownDelay);
    ADD_PUBLIC_FUNC(SpecialClear_State_TallyScore);
    ADD_PUBLIC_FUNC(SpecialClear_State_ShowTotalScore_Continues);
    ADD_PUBLIC_FUNC(SpecialClear_State_ShowTotalScore_NoContinues);
    ADD_PUBLIC_FUNC(SpecialClear_State_ExitFinishMessage);
    ADD_PUBLIC_FUNC(SpecialClear_State_EnterSuperMessage);
    ADD_PUBLIC_FUNC(SpecialClear_State_ShowSuperMessage);
    ADD_PUBLIC_FUNC(SpecialClear_State_ExitFadeOut);
    ADD_PUBLIC_FUNC(SpecialClear_State_ExitResults);

    // UFO/UFO_Camera
    ADD_PUBLIC_FUNC(UFO_Camera_HandleCamPos);
    ADD_PUBLIC_FUNC(UFO_Camera_State_Normal);
    ADD_PUBLIC_FUNC(UFO_Camera_State_CourseOut);
    ADD_PUBLIC_FUNC(UFO_Camera_State_UFOCaught);

    // UFO/UFO_Circuit
    ADD_PUBLIC_FUNC(UFO_Circuit_HandleSpeedSetup);
    ADD_PUBLIC_FUNC(UFO_Circuit_HandleNodeSpeeds);
    ADD_PUBLIC_FUNC(UFO_Circuit_CheckNodeChange);
    ADD_PUBLIC_FUNC(UFO_Circuit_State_UFO);
    ADD_PUBLIC_FUNC(UFO_Circuit_State_Caught);

    // UFO/UFO_HUD
    ADD_PUBLIC_FUNC(UFO_HUD_CheckLevelUp);
    ADD_PUBLIC_FUNC(UFO_HUD_LevelUpMach);
    ADD_PUBLIC_FUNC(UFO_HUD_DrawNumbers);

    // UFO/UFO_ItemBox
    ADD_PUBLIC_FUNC(UFO_ItemBox_State_HasContents);
    ADD_PUBLIC_FUNC(UFO_ItemBox_State_ShowContents);

    // UFO/UFO_Message
    ADD_PUBLIC_FUNC(UFO_Message_State_Appear);
    ADD_PUBLIC_FUNC(UFO_Message_State_ShowMsg);
    ADD_PUBLIC_FUNC(UFO_Message_State_Exit);

    // UFO/UFO_Player
    ADD_PUBLIC_FUNC(UFO_Player_Input_P1);
    ADD_PUBLIC_FUNC(UFO_Player_ChangeMachState);
    ADD_PUBLIC_FUNC(UFO_Player_HandleBumperTiles);
    ADD_PUBLIC_FUNC(UFO_Player_HandleSpeedUp);
    ADD_PUBLIC_FUNC(UFO_Player_State_Run);
    ADD_PUBLIC_FUNC(UFO_Player_State_Jump);
    ADD_PUBLIC_FUNC(UFO_Player_State_Springboard);
    ADD_PUBLIC_FUNC(UFO_Player_State_Trip);
    ADD_PUBLIC_FUNC(UFO_Player_State_CourseOut);
    ADD_PUBLIC_FUNC(UFO_Player_State_UFOCaught_Charge);
    ADD_PUBLIC_FUNC(UFO_Player_State_UFOCaught_Released);

    // UFO/UFO_Ring
    ADD_PUBLIC_FUNC(UFO_Ring_PlayRingSfx);
    ADD_PUBLIC_FUNC(UFO_Ring_LoseRings);
    ADD_PUBLIC_FUNC(UFO_Ring_State_NormalRing);
    ADD_PUBLIC_FUNC(UFO_Ring_State_Sparkle);
    ADD_PUBLIC_FUNC(UFO_Ring_State_LoseRing);

    // UFO/UFO_Setup
    ADD_PUBLIC_FUNC(UFO_Setup_DrawHook_PrepareDrawingFX);
    ADD_PUBLIC_FUNC(UFO_Setup_Scanline_Playfield);
    ADD_PUBLIC_FUNC(UFO_Setup_Scanline_3DFloor);
    ADD_PUBLIC_FUNC(UFO_Setup_Scanline_3DRoof);
    ADD_PUBLIC_FUNC(UFO_Setup_PlaySphereSfx);
    ADD_PUBLIC_FUNC(UFO_Setup_Finish_Win);
    ADD_PUBLIC_FUNC(UFO_Setup_Finish_Fail);
    ADD_PUBLIC_FUNC(UFO_Setup_Deform_UFO3);
    ADD_PUBLIC_FUNC(UFO_Setup_Deform_UFO4);
    ADD_PUBLIC_FUNC(UFO_Setup_Deform_UFO5);
    ADD_PUBLIC_FUNC(UFO_Setup_State_ShowStartMessage);
    ADD_PUBLIC_FUNC(UFO_Setup_State_FinishFadeout);
    ADD_PUBLIC_FUNC(UFO_Setup_State_HandleRingDrain);
    ADD_PUBLIC_FUNC(UFO_Setup_State_TimedOver);

    // UFO/UFO_Sphere
    ADD_PUBLIC_FUNC(UFO_Sphere_State_Fixed);
    ADD_PUBLIC_FUNC(UFO_Sphere_State_Bouncing);
    ADD_PUBLIC_FUNC(UFO_Sphere_State_Moving);
    ADD_PUBLIC_FUNC(UFO_Sphere_State_Collected);
    ADD_PUBLIC_FUNC(UFO_Sphere_State_HandleRespawn);
    ADD_PUBLIC_FUNC(UFO_Sphere_State_AnimateAndDestroy);

    // Unused/SpearBlock
    ADD_PUBLIC_FUNC(SpearBlock_DebugSpawn);
    ADD_PUBLIC_FUNC(SpearBlock_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(SpearBlock_State_SetupSpears);
    ADD_PUBLIC_FUNC(SpearBlock_State_SpearRetracted);
    ADD_PUBLIC_FUNC(SpearBlock_State_ExtendSpears);
    ADD_PUBLIC_FUNC(SpearBlock_State_SpearExtended);
    ADD_PUBLIC_FUNC(SpearBlock_State_RetractSpears);

    // Unused/TargetBumper
    ADD_PUBLIC_FUNC(TargetBumper_DebugSpawn);
    ADD_PUBLIC_FUNC(TargetBumper_CheckPlayerCollisions);
    ADD_PUBLIC_FUNC(TargetBumper_State_Idle);
    ADD_PUBLIC_FUNC(TargetBumper_State_Hit);

    // Unused/WallCrawl
    ADD_PUBLIC_FUNC(WallCrawl_DebugSpawn);
    ADD_PUBLIC_FUNC(WallCrawl_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(WallCrawl_CheckOffScreen);
    ADD_PUBLIC_FUNC(WallCrawl_State_Init);
    ADD_PUBLIC_FUNC(WallCrawl_State_Moving);
    ADD_PUBLIC_FUNC(WallCrawl_State_Idle);
    ADD_PUBLIC_FUNC(WallCrawl_State_Projectile);

    // Unused/Wisp
    ADD_PUBLIC_FUNC(Wisp_DebugSpawn);
    ADD_PUBLIC_FUNC(Wisp_HandlePlayerInteractions);
    ADD_PUBLIC_FUNC(Wisp_CheckOffScreen);
    ADD_PUBLIC_FUNC(Wisp_State_Init);
    ADD_PUBLIC_FUNC(Wisp_State_Idle);
    ADD_PUBLIC_FUNC(Wisp_State_FlyTowardTarget);
    ADD_PUBLIC_FUNC(Wisp_State_FlyAway);
}
