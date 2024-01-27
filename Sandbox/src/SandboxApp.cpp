#include "Uneasy.hpp"

class SandboxApp : public Uneasy::Application {
public:
	SandboxApp() {}
	~SandboxApp() {}
};

Uneasy::Application* Uneasy::CreateApplication() {
	return new SandboxApp;
}