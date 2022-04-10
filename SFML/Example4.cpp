/*
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"

using namespace sf;

int main() {
	RenderWindow window(VideoMode(800, 600), "Example 04", Style::Default); // The window constructor you draw all on
	window.setFramerateLimit(60); // Sets framerate limit

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}

		// Update

		// Draw
		window.clear(); // Clears screen And can be passed a Color


		window.display();
	}

	return 0;
}
*/