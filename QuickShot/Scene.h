#pragma once
#include "DxLib.h"
#include "Input.h"
#include <string>

using namespace std;

class Scene {
public:
	enum Type {
		NONE,
		TITLE,
		MATCHING,
		PLAY,
		RESULT
	};
private:
	Type type = NONE;
	bool isNext = false;

public:
	Scene(Type type_);
	~Scene();

	Type getType() { return type; }
	bool getIsNext() { return isNext; }

	void DebugChange(int input_key_num) {
		if (CheckHitKey(input_key_num)) {
			isNext = true;
		}
	}

	virtual void Update() = 0;
	virtual void Draw() = 0;
};

class TitleScene : public Scene {


public:
	TitleScene(Type type_ = TITLE)
		: Scene(type_){}
	~TitleScene(){}

	virtual void Update() override;
	virtual void Draw() override;
};

class PlayScene : public Scene {

	PadInput* input = new PadInput();
public:
	PlayScene(Type type_ = PLAY)
		: Scene(type_) {}
	~PlayScene() {}

	virtual void Update() override;
	virtual void Draw() override;
};

class ResultScene : public Scene {

public:
	ResultScene(Type type_ = RESULT)
		: Scene(type_) {}
	~ResultScene() {}

	virtual void Update() override;
	virtual void Draw() override;
};

class SceneManager {
private:
	Scene* currentScene = nullptr;
	Scene::Type type = Scene::Type::NONE;
	int player01Score = 0;
	int player02Score = 0;

public:
	SceneManager();
	~SceneManager();

	void ChangeScene(Scene::Type next_type);

	void Update();
	void Draw();
};