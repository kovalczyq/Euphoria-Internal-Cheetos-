#include "window/window.hpp"
#include <thread>

int main() {
	ShowWindow(GetConsoleWindow(), SW_HIDE);

	Overlay overlay;

	overlay.SetupOverlay("Jebac cie cwelu");

	while (overlay.shouldRun) {
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
		overlay.StartRender();

		if (overlay.RenderMenu)
			overlay.Render();

		overlay.EndRender();
	}
}