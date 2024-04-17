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

	// スティックの入力値の取得
	int StickX() { return stickInputX; }
	int StickY() { return stickInputY; }

	void Update();
	void DebugDraw();
};