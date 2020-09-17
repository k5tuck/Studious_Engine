#pragma once

#ifdef STUDIOUS_PLATFORM_WINDOWS

extern Studious::Application* Studious::CreateApplication();

int main(int argc, char** argv)
{
	Studious::Log::Init();
	STUDIOUS_CORE_WARN("Initialized Log!");
	int a = 5;
	STUDIOUS_INFO("Hello! Var={a}", a);

	auto app = Studious::CreateApplication();
	app->Run();
	delete app;
}

#endif