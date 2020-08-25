#pragma once

#include "Core.h"

namespace Studious {

	class STUDIOUS_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//Defined in Client
	Application* CreateApplication();
}

