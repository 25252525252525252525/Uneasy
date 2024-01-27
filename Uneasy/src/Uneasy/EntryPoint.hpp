#pragma once

#ifdef UNEASY_PLATFORM_WINDOWS

extern Uneasy::Application* Uneasy::CreateApplication();

int main(int argc, char** argv) {
	auto app = Uneasy::CreateApplication();
	app->Run();
	delete app;
}

#endif