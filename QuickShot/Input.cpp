#include "Input.h"

void PadInput::Update()
{

	GetJoypadAnalogInput(&stickInputX, &stickInputY, DX_INPUT_PAD1);

	if ((GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_1) == TRUE)
	{
		inputButtonNum = 1;
	}
	else if((GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_2) == TRUE)
	{
		inputButtonNum = 2;
	}
	else if ((GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_3) == TRUE)
	{
		inputButtonNum = 3;
	}
	else if ((GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_4) == TRUE)
	{
		inputButtonNum = 4;
	}
	else if ((GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_5) == TRUE)
	{
		inputButtonNum = 5;
	}
	else if ((GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_6) == TRUE)
	{
		inputButtonNum = 6;
	}
	else if ((GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_7) == TRUE)
	{
		inputButtonNum = 7;
	}
	else if ((GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_8) == TRUE)
	{
		inputButtonNum = 8;
	}
	else if ((GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_9) == TRUE)
	{
		inputButtonNum = 9;
	}
	else if ((GetJoypadInputState(DX_INPUT_PAD1) & PAD_INPUT_10) == TRUE)
	{
		inputButtonNum = 10;
	}
	else
	{
		inputButtonNum = 0;
	}

}

void PadInput::DebugDraw()
{
	DrawFormatString(50, 50, GetColor(255, 255, 255), "X:%d,Y:%d", stickInputX, stickInputY);
	DrawFormatString(50, 100, GetColor(255, 255, 255), "ButtonNum:%d", inputButtonNum);
}