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
	bool InputY() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_1; }
	bool InputB() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_2; }
	bool InputA() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_3; }
	bool InputX() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_4; }
	bool InputL() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_5; }
	bool InputR() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_6; }
	bool InputZL() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_7; }
	bool InputZR() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_8; }
	bool InputMINUS() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_9; }
	bool InputPLUS() { return GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_10; }

	void Update();
	void DebugDraw();
};