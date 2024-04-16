#include "Input.h"

void PadInput::Update()
{

	GetJoypadAnalogInput(&stickInputX, &stickInputY, DX_INPUT_PAD1);

	if (InputY())
	{
		inputButtonNum = 1;
	}
	else if(InputB())
	{
		inputButtonNum = 2;
	}
	else if (InputA())
	{
		inputButtonNum = 3;
	}
	else if (InputX())
	{
		inputButtonNum = 4;
	}
	else if (InputL())
	{
		inputButtonNum = 5;
	}
	else if (InputR())
	{
		inputButtonNum = 6;
	}
	else if (InputZL())
	{
		inputButtonNum = 7;
	}
	else if (InputZR())
	{
		inputButtonNum = 8;
	}
	else if (InputMINUS())
	{
		inputButtonNum = 9;
	}
	else if (InputPLUS())
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
	DrawFormatString(0, 70, GetColor(255, 255, 255), "X:%d,Y:%d", stickInputX, stickInputY);
	DrawFormatString(0, 100, GetColor(255, 255, 255), "ButtonNum:%d", inputButtonNum);
}