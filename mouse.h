#pragma once
//ゲームのメインヘッダファイル
#include "game.h"
#include "shape.h"

//マウスのボタン
#define MOUSE_BUTTON_CODE 129

//マウス構造体
struct MOUSE
{
	int InputValue = 0;
	int WheelValue = 0;
	iPOINT Point;
	iPOINT OldPoint;
	int OldButton[MOUSE_BUTTON_CODE];
	int Button[MOUSE_BUTTON_CODE];
};

//マウス入力を取得
extern MOUSE mouse;

extern VOID MouseUpdate(VOID);
extern BOOL MouseDown(int MOUSE_INPUT_);
extern BOOL MouseUp(int MOUSE_INPUT_);
extern BOOL MouseDownKeep(int MOUSE_INPUT_, int milliTime);
extern BOOL MouseClick(int MOUSE_INPUT_);
extern VOID MouseDraw(VOID);

extern BOOL MouseRectClick(RECT rect, int MOUSE_INPUT_);
extern BOOL MouseMaruClick(MARU rect, int MOUSE_INPUT_);