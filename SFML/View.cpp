#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"

using namespace sf;

int main() {
	RenderWindow window(VideoMode(1920, 1080), "View", Style::Default); // The window constructor you draw all on
	window.setFramerateLimit(60); // Sets framerate limit

	View mainView;
	mainView.setSize(1920, 1080);

	RectangleShape player;
	player.setSize(Vector2f(50.f, 50.f));

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}

		// Update
		if (Keyboard::isKeyPressed(Keyboard::A)) {
			player.move(-0.5f, 0.f);
		}

		mainView.setCenter(player.getPosition());

		// Draw
		window.setView(mainView); // Everything will be based off this view
		window.clear(); // Clears screen And can be passed a Color

		window.draw(player);
		window.display();
	}

	return 0;
}