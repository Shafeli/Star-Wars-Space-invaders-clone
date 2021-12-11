#pragma once

// TODO: documentation
/////////////////////////////////////////////////
//           Definition
// place for constexpr & globals
// single place for file paths for quick and easy changing out files for anything in project
// format will be Macros for file names
// constexpr for global values
// globals should have g followed by name  
//
/////////////////////////////////////////////////



/////////////////////////////////
//size of window 
constexpr auto gScreenWidth = 768;
constexpr auto gScreenHeight = 1024;
constexpr auto gGameFontFile = "Resources/fonts/ARCADE.TTF";
/////////////////////////////////

/////////////////////////////////
//Splash screen 
constexpr auto gSplashShowTime = 2.5;
constexpr auto gSplahBackgroundFile = "Resources/res/Space.jpg";
constexpr auto gSplashSoundFile = "Resources/res/SplashScreen.wav";
/////////////////////////////////

/////////////////////////////////
//Main menu background
constexpr auto gMainMenuBackgroundFile = "Resources/res/Space.jpg";
//Game Title 
constexpr auto gGameTitleFile = "Resources/res/title1.png";
//Play Button
constexpr auto gPlayButtonFile = "Resources/res/StartButton.png";
constexpr auto gClickSoundFile = "Resources/res/MenuSound.ogg";
/////////////////////////////////

/////////////////////////////////
//Game Background 
constexpr auto gGameBackgroundFile = "Resources/res/Space.jpg";
/////////////////////////////////

/////////////////////////////////
//Game Over Screen
constexpr auto gGameOverFile = "Resources/res/Space.jpg";
/////////////////////////////////


/////////////////////////////////
//Player
constexpr auto gPlayerSpriteFile = "Resources/res/Player.png";
constexpr auto gPlayerSoundFile = "Resources/res/PlayerDeath.wav";
constexpr float gPlayerSpeed = 360.f;
constexpr float gRateOfFire = 1.f / 4;
/////////////////////////////////

/////////////////////////////////
//Bullet
constexpr auto gMultiKillSoundFile = "Resources/res/QuakeKill.wav";
constexpr auto gBulletSpriteFile = "Resources/res/Bullet.png";
constexpr auto gBulletSoundFile = "Resources/res/Lazer.wav";
constexpr float gAIBulletYAxisAmount = 600.f;
constexpr float gPlayerBulletYAxisAmount = 660.f;
/////////////////////////////////

//////////////////////////////////
//AI 
constexpr auto gTargetSpriteFile = "Resources/res/Target.png";
constexpr auto gDeathSoundFile = "Resources/res/Boom.wav";
constexpr float gTargetSpeed = 399.f;
constexpr float gTargetYAxisDecreaseAmount = 30.f;
constexpr float gAIRateOfFireInSeconds = 0.4f;
//////////////////////////////////

// TODO: animation system - save for later quite a lot of work in this
///////////////////////////////////////
//  TODO: prototype animation manager
// 
//#define  ANIMATION_DURATION 0.4f;
///////////////////////////////////////
