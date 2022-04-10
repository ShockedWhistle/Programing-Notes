/*
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"
#include <math.h>

using namespace sf;

class Bullet {
	public:
		CircleShape bullet;
		Vector2f currVelocity;
		float maxSpeed;

		Bullet(float radius = 5.f) : currVelocity(0.f, 0.f), maxSpeed(15.f) {
			this->bullet.setRadius(radius);
			this->bullet.setFillColor(Color::Red);
		}
};

int main() {
	RenderWindow window(VideoMode(800, 600), "360 Shooter", Style::Default); // The window constructor you draw all on
	window.setFramerateLimit(60); // Sets framerate limit

	CircleShape player(25.f);
	player.setFillColor(Color::White);

	Vector2f playerCenter;
	Vector2f mousePosWindow;
	Vector2f aimDir;
	Vector2f aimDirNorm;

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}

		// Update
		playerCenter = Vector2f(player.getPosition().x + player.getRadius(), player.getPosition().y + player.getRadius());
		mousePosWindow = Vector2f(Mouse::getPosition(window));
		aimDir = mousePosWindow - playerCenter;
		aimDirNorm = aimDir / sqrt(pow(aimDir.x, 2) + pow(aimDir.y, 2));

		std::cout << aimDirNorm.x << " " << aimDirNorm.y << "\n";

		// Draw
		window.clear(); // Clears screen And can be passed a Color

		window.draw(player);


		window.display();
	}

	return 0;
}
*/