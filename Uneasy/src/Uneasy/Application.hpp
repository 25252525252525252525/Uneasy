#pragma once

#include "Core.hpp"

namespace Uneasy {

	class UNEASY_API Application {
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}