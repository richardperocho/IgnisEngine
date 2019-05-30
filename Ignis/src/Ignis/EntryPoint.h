#pragma once
#ifdef IG_PLATFORM_WINDOWS
extern Ignis::Application* Ignis::CreateApplication();
int main(int argc, char** argv) {
	printf("Ignis Engine");
	auto app = Ignis::CreateApplication();
	app->Run();
	delete app;
}
#endif
