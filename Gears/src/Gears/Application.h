#pragma once

#include "Core.h"
namespace Gears {

	class GEARS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined by client
	Application* CreateApplication();
}
