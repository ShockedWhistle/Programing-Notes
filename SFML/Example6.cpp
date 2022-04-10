/*
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"

using namespace sf;

int main(){
	RenderWindow window(VideoMode(640, 480), "Example 06", Style::Default); // The window constructor you draw all on
	window.setFramerateLimit(60); // Sets framerate limit

	RectangleShape rect(Vector2f(50.f, 50.f));
	rect.setFillColor(Color(255, 100, 150, 255));

	while (window.isOpen()) {
		Event event;
		while(window.pollEvent(event)) {
			if(event.type == Event::Closed) {
				window.close();
			}
			if(Keyboard::isKeyPressed(Keyboard::W)){
				rect.move(0.f, -5.f);
			}
			if (Keyboard::isKeyPressed(Keyboard::A)) {
				rect.move(-5.f, 0.f);
			}
			if (Keyboard::isKeyPressed(Keyboard::S)) {
				rect.move(0.f, 5.f);
			}
			if (Keyboard::isKeyPressed(Keyboard::D)) {
				rect.move(5.f, 0.f);
			}
		}

		// Update

		// Draw
		window.clear(); // Clears screen And can be passed a Color

		window.draw(rect);

		window.display();
	}

	return 0;
}
*/