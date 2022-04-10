/*
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"

using namespace sf;

int main() {
	RenderWindow window(VideoMode(800, 600), "Example 03", Style::Default); // The window constructor you draw all on
	window.setFramerateLimit(60); // Sets framerate limit

	Vector2f vec(10.f, 12.f);

	CircleShape circle(50.f); // Sets a circle with a radius of 50
	circle.setPosition(Vector2f(0.f, 0.f)); // Sets the positon of the shape
	circle.setFillColor(Color(255, 0, 255, 255)); // Color( R, G, B, A )

	RectangleShape rect(Vector2f(50.f, 100.f)); // Sets size to 50by 100
	rect.setPosition(Vector2f(400.f, 200.f));
	rect.setFillColor(Color(0, 225, 0, 255));

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}

		// Update
		circle.move(0.5f, 0.1f);
		circle.rotate(1.f);
		rect.move(-0.5f, -0.1f);
		rect.rotate(5.f); // Rotates around the origin (Front Left)

		// Draw
		window.clear(); // Clears screen And can be passed a Color

		// Draw Everything
		window.draw(circle);
		window.draw(rect);

		window.display();
	}

	return 0;
}
*/