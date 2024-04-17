#include "Input.h"

void PadInput::Update()
{

	GetJoypadAnalogInput(&stickInputX, &stickInputY, DX_INPUT_PAD1);

	if (InputWest())
	{
		inputButtonNum = 1;
	}
	else if(InputSouth())
	{
		inputButtonNum = 2;
	}
	else if (InputEast())
	{
		inputButtonNum = 3;
	}
	else if (InputNorth())
	{
		inputButtonNum = 4;
	}
	else if (InputLShoulder())
	{
		inputButtonNum = 5;
	}
	else if (InputRShoulder())
	{
		inputButtonNum = 6;
	}
	else if (InputLTrigger())
	{
		inputButtonNum = 7;
	}
	else if (InputRTrigger())
	{
		inputButtonNum = 8;
	}
	else if (InputSELECT())
	{
		inputButtonNum = 9;
	}
	else if (InputSTART())
	{
		inputButtonNum = 10;
	}
	else if (InputLeft())
	{
		inputButtonNum = 11;
	}
	else if (InputDown())
	{
		inputButtonNum = 12;
	}
	else if (InputRight())
	{
		inputButtonNum = 13;
	}
	else if (InputUp())
	{
		inputButtonNum = 14;
	}
	else
	{
		inputButtonNum = 0;
	}

}

void PadInput::DebugDraw()
{
	DrawFormatString(0, 70, GetColor(255, 255, 255), "X:%d,Y:%d", StickX(), StickY());
	DrawFormatString(0, 100, GetColor(255, 255, 255), "ButtonNum:%d", inputButtonNum);
}