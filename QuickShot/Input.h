#pragma once
#include "DxLib.h"
#include <string>

using namespace std;

class PadInput
{
private:

	// 定数
	int INPUT_TRUE = 1;
	int INPUT_FALSE = 0;


	// 変数
	int stickInputX;
	int stickInputY;
	int inputButtonNum;

public:

	/*
		ボタン番号メモ
		1:WestButton(Switch:Y,PS:□,XBox:X)
		2:SouthButton(Switch:B,PS:×,XBox:A)
		3:EastButton(Switch:A,PS:〇,XBox:B)
		4:NorthButton(Switch:X,PS:△,XBox:Y)
		5:LeftShoulder(Switch:L,PS:L,XBox:L)
		6:RightShoulder(Switch:R,PS:R,XBox:R)
		7:LeftTrigger(Switch:ZL,PS:ZR,XBox:無し)
		8:RightTrigger(Switch:ZR,PS:ZR,XBox:無し)
		9:SELECTButton(Swtich:-,PS:SHARE,XBox:ビューボタン)
		10:STARTButton(Switch:+,PS:OPTIONS,XBox:メニューボタン)
		11:LeftStickButton(左スティック押し込み)
		12:RightStickButton(右スティック押し込み)
	*/

	// 各ボタンの入力状況のチェック
	bool InputWest() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_1; }
	bool InputSouth() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_2; }
	bool InputEast() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_3; }
	bool InputNorth() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_4; }
	bool InputLShoulder() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_5; }
	bool InputRShoulder() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_6; }
	bool InputLTrigger() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_7; }
	bool InputRTrigger() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_8; }
	bool InputSELECT() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_9; }
	bool InputSTART() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_10; }
	bool InputLeft() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_LEFT; }
	bool InputDown() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_DOWN; }
	bool InputRight() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_RIGHT; }
	bool InputUp() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_UP; }

	// スティックの入力値の取得
	int StickX() { return stickInputX; }
	int StickY() { return stickInputY; }

	void Update();
	void DebugDraw();
};