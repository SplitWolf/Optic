#include <Optic.h>

class Sandbox : public Optic::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Optic::Application* Optic::CreateApplication()
{
	return new Sandbox();
}