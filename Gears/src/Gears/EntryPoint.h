#pragma once

#ifdef GR_PLATFORM_WINDOWS

extern Gears::Application* Gears::CreateApplication();

int main(int argc,int** argv) {

	auto app = Gears::CreateApplication();
	app->Run();
	delete app;
}

#endif // GR_PLATFORM_WINDOWS

