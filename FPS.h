#pragma once

//ヘッダファイルの読み込み
#include "game.h"

//マクロ定義
#define GAME_FPS   60         //FPS
#define GAME_FPS_MAX     240  //FPSの最大値
#define GAME_FPS_MIN     60   //FPSの最小値

//FPS構造体
struct FPS
{
	BOOL IsInitFlg = FALSE;   //最初の測定開始フラグ
	LONGLONG StarTime = 0;    //測定開始時刻
	LONGLONG NowTime = 0;     //現在の時刻
	LONGLONG OldTime = 0;     //以前の時刻

	int Value = GAME_FPS;     //FPSの値

	float DeltaTime = 0.000001;//０が五個
	int Count = 1;
	float DrawValue = 0.0f;
	int SampleRate = GAME_FPS;
};

//グローバル変数の外部参照
extern FPS fps;  //FPSの管理
//プロトタイプ宣言
VOID FPSUpdate(VOID);
VOID FPSDraw(VOID);
VOID FPSWait(VOID);