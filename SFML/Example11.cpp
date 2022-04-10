/*
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"

using namespace sf;
// FiraCode-Medium.ttf

int main() {
	RenderWindow window(VideoMode(800, 600), "Example 01", Style::Default); // The window constructor you draw all on
	window.setFramerateLimit(60); // Sets framerate limit

	Font font;
	if (!font.loadFromFile("./Fonts/FiraCode-Medium.ttf")) {
		throw("COULD NOT LOAD FONT");
	}

	Text text;
	text.setFont(font);
	text.setCharacterSize(24);
	text.setStyle(Text::Bold);
	text.setString("Hey A String");

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

		window.draw(text);

		window.display();
	}

	return 0;
}
*/