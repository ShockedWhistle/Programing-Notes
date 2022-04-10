/*
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"

using namespace sf;

int main() {
	RenderWindow window(VideoMode(800, 600), "Example 07", Style::Default); // The window constructor you draw all on
	window.setFramerateLimit(60); // Sets framerate limit

	CircleShape hoop;
	int dir = 0;
	hoop.setRadius(50.f);
	hoop.setFillColor(Color::Black);
	hoop.setOutlineThickness(2.f);
	hoop.setOutlineColor(Color::Blue);
	hoop.setPosition(Vector2f(0.f, 10.f));

	CircleShape ball;
	bool isShot = false;
	ball.setRadius(20.f);
	ball.setFillColor(Color::Red);
	ball.setPosition(Vector2f(0.f, window.getSize().y - ball.getRadius()*3));

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}

		// Update hoop
		if (hoop.getPosition().x <= 0) {
			dir = 1;
		}
		else if (hoop.getPosition().x + hoop.getRadius()*2 >= window.getSize().x) {
			dir = 0;
		}
		if (dir == 0) {
			hoop.move(-5.f, 0.f);
		}
		else {
			hoop.move(5.f, 0.f);
		}

		// Update Ball

		window.clear(Color::White); // Clears screen And can be passed a Color

		if (Mouse::isButtonPressed(Mouse::Left) && !isShot) {
			ball.setPosition(Mouse::getPosition(window).x, ball.getPosition().y);
			isShot = true;
		}
		if (isShot) {
			ball.move(0.f, -5.f);
		}
		else {
			ball.setPosition(Mouse::getPosition(window).x, ball.getPosition().y);
		}

		//Collision
		if (ball.getPosition().y < 0 || ball.getGlobalBounds().intersects(hoop.getGlobalBounds())) {
			isShot = false;
			ball.setPosition(Vector2f(0.f, window.getSize().y - ball.getRadius() * 3));
		}

		// Draw
		window.draw(hoop);
		window.draw(ball);

		window.display();
	}

	return 0;
}
*/