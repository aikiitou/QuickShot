#include "GameManager.h"

GameManager::GameManager() {
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLOR);

	ChangeWindowMode(TRUE);
	isError = DxLib_Init();

	//マウスカーソルの表示をOFF
	SetMouseDispFlag(FALSE);
	SetDrawScreen(DX_SCREEN_BACK);

	SetFontSize(32);
	SetFontThickness(3);
}

GameManager::~GameManager() {
	delete sceneManager;
	DxLib_End();
}

void GameManager::Run() {
	while (!ProcessMessage() && isError != ERROR_NUM) {
		ClearDrawScreen();

		if (CheckHitKey(KEY_INPUT_ESCAPE)) {
			break;
		}

		sceneManager->Update();
		sceneManager->Draw();

		ScreenFlip();
	}
}