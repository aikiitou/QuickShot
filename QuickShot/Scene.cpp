#include "Scene.h"

Scene::Scene(Type type_) {
	type = type_;
}

Scene::~Scene() {

}

void TitleScene::Update() {
	DebugChange(KEY_INPUT_SPACE);
}

void TitleScene::Draw() {
	DrawString(0, 0, "TITLE\nInput Space to Next", GetColor(255, 255, 255));
}

void PlayScene::Update() {
	input->Update();
	DebugChange(KEY_INPUT_RETURN);
}

void PlayScene::Draw() {
	input->DebugDraw();
	DrawString(0, 0, "PLAY\nInput Enter to Next", GetColor(255, 255, 255));
}

void ResultScene::Update() {
	DebugChange(KEY_INPUT_TAB);
}

void ResultScene::Draw() {
	DrawString(0, 0, "RESULT\nInput Tab to Next", GetColor(255, 255, 255));
}

void SceneManager::ChangeScene(Scene::Type type_) {
	delete currentScene;
	switch (type_) {
		case Scene::TITLE:
			currentScene = new PlayScene();
			break;
		case Scene::PLAY:
			currentScene = new ResultScene();
			break;
		case Scene::RESULT:
			currentScene = new TitleScene();
			break;
	}
}

SceneManager::SceneManager() {
	currentScene = new TitleScene();
}

SceneManager::~SceneManager() {
	delete currentScene;
}

void SceneManager::Update() {
	currentScene->Update();

	if (currentScene->getIsNext()) {
		ChangeScene(currentScene->getType());
	}
}

void SceneManager::Draw() {
	currentScene->Draw();
}