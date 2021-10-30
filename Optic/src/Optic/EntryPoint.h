#pragma once

#ifdef OC_PLATFORM_WINDOWS

extern Optic::Application* Optic::CreateApplication();

int main(int arc, char** argv) 
{
	auto app = Optic::CreateApplication();
	app->Run();
	delete app;
}
#endif