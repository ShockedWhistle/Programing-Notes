/*
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"

using namespace sf;
void update(int &keyTime, RectangleShape &square, RenderWindow &window);
void draw(RenderWindow &window, RectangleShape &square);

int main(){
	int keyTime = 8;
	RenderWindow window(VideoMode(800, 600), "Textures and Sprites", Style::Default); // The window constructor you draw all on
	window.setFramerateLimit(60); // Sets framerate limit

	// Cat
	Texture catTex;
	Sprite cat;
	if(!catTex.loadFromFile("./Test.jpg")) {
		throw "Err\n";
	}

	cat.setTexture(catTex);
	cat.setScale(Vector2f(0.04f, 0.04f));
	int catSpawnTimer = 0;

	std::vector<Sprite> cats;
	cats.push_back(Sprite(cat));


	// Doge
	Texture dogeTex;
	Sprite doge;
	int hp = 10;
	RectangleShape hpBar;
	hpBar.setFillColor(Color::Red);
	hpBar.setSize(Vector2f((float)hp * 20.f, 20.f));
	hpBar.setPosition(200.f, 10.f);

	if (!dogeTex.loadFromFile("./Test2")) {
		throw "Err\n";
	}

	doge.setTexture(dogeTex);
	doge.setScale(Vector2f(.04f, .04f));

	while(window.isOpen() && hp > 0){
		Event event;
		while(window.pollEvent(event)){
			if(event.type == Event::Closed){
				window.close();
			}
			if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape) {
				window.close();
			}
		}

		// Update
		hpBar.setSize(Vector2f((float)hp * 20.f, 20.f));

		doge.setPosition(doge.getPosition().x, Mouse::getPosition(window).y);
		if (doge.getPosition().y > window.getSize().y - doge.getGlobalBounds().height) {
			doge.setPosition(doge.getPosition().x, window.getSize().y - doge.getGlobalBounds().height);
		}
		if (doge.getPosition().y < 0) {
			doge.setPosition(doge.getPosition().x, 0.f);
		}


		for (size_t i = 0; i < cats.size(); i++) {
			cats[i].move(-7.f, 0.f);

			if (cats[i].getPosition().x < 0 - cat.getGlobalBounds().width) {
				cats.erase(cats.begin() + i);
			}
		}
		if (catSpawnTimer < 40) {
			catSpawnTimer++;
		}
		else{
			cat.setPosition(window.getSize().x, rand() %int(window.getSize().y - cat.getGlobalBounds().height));
			catSpawnTimer = 0;
			cats.push_back(Sprite(cat));
		}

		// Collision
		for (size_t i = 0; i < cats.size(); i++) {
			if (doge.getGlobalBounds().intersects(cats[i].getGlobalBounds())) {
				cats.erase(cats.begin() + i);
				hp--;
			}
		}

		// Draw
		window.clear(Color::Black);

		window.draw(doge);

		for (size_t i = 0; i < cats.size(); i++) {
			window.draw(cats[i]);
		}

		window.draw(hpBar);

		window.display();

	}

	return 0;
}
*/