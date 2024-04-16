#pragma once
#include "DxLib.h"
#include <string>

using namespace std;

class PadInput
{
private:

	// ’è”
	int INPUT_TRUE = 1;
	int INPUT_FALSE = 0;


	// •Ï”
	int stickInputX;
	int stickInputY;
	int inputButtonNum;

public:

	void Update();
	void DebugDraw();
};