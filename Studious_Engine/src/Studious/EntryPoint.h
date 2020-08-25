#pragma once
#ifdef STUDIOUS_PLATFORM_WINDOWS

extern Studious::Application* Studious::CreateApplication();

int main(int argc, char** argv)
{
	
	auto app = Studious::CreateApplication();
	app->Run();
	delete app;
}

#endif