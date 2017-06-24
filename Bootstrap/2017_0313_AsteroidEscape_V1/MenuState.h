#pragma once
#include <memory>
#include "IGameState.h"

class _2017_0313_test2DprojApp;
namespace aie {
	class Font;
	class Renderer2D;
}

class MenuState :
	public IGameState
{
public:
	MenuState(_2017_0313_test2DprojApp* a_app);

	virtual void Initialise();

	virtual void Update(float deltaTime);
	
	virtual void Draw();
private:
	_2017_0313_test2DprojApp* APP = nullptr; // Actual version of application using state manager that equals a static cast of Application
	float elapsedTime;
};
