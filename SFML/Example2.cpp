/*
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"

using namespace sf;

int main(){
	RenderWindow window(VideoMode(800, 600), "Example 02", Style::Default); // The window constructor you draw all on
	window.setFramerateLimit(60); // Sets framerate limit

	CircleShape shape(50.f); // Sets a circle with a radius of 50

	while(window.isOpen()){
		Event event;
		while(window.pollEvent(event)){
			if(event.type == Event::Closed){
				window.close();
			}
		}

		// Update
		shape.move(0.1f, 0.f); // Moves the shape .1 on the x axis and 0 on Y

		// Draw
		window.clear(Color::Red); // Clears screen And can be passed a Color

		// Draw Everything
		window.draw(shape);

		window.display();
	}
	
	return 0;
}
*/