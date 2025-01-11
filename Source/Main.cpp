#include "CAScene.h"
#include "GoLScene.h"
#include <memory>
#include <SDL.h>

int main(int, char**)
{
	std::unique_ptr<GoLScene> scene = std::make_unique<GoLScene>();

	scene->Initialize();
	while (!scene->IsQuit())
	{
		scene->Update();
		scene->Draw();
	}

	return 0;
}