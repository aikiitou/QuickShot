#include "DxLib.h"
#include "GameManager.h"


int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int)
{
	GameManager* gameManager = new GameManager();
	gameManager->Run();
	delete gameManager;

	return 0;
}