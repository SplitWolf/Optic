#pragma once

#include "Core.h"

namespace Optic {
	class OPTIC_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};


	// To be defined in CLIENT
	Application* CreateApplication();
}


