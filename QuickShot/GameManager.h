#pragma once
#include "DxLib.h"
#include "Scene.h"

class GameManager {
	static const int SCREEN_WIDTH = 800;
	static const int SCREEN_HEIGHT = 600;
	static const int SCREEN_COLOR = 32;
	static const int SUCSESS_NUM = 0;
	static const int ERROR_NUM = -1;

	SceneManager* sceneManager = new SceneManager();
	int isError = 0;
public:
	GameManager();
	~GameManager();

	void Run();
};
