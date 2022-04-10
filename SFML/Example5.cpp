/*
#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "SFML/System.hpp"

using namespace sf;

int main(){
	RenderWindow window(VideoMode(800, 600), "Example 05", Style::Default); // The window constructor you draw all on
	window.setFramerateLimit(60); // Sets framerate limit
	//window.setMouseCursorVisible(false); // Makes mouse dissapear

	while(window.isOpen()) {
		Event event;
		while(window.pollEvent(event)) {
			if(event.type == Event::Closed){
				window.close();
			}
			
			//if (event.type == Event::KeyPressed && event.key.code == Keyboard::Escape) {
				//window.close();
			//}
			
			if(Keyboard::isKeyPressed(Keyboard::Escape)){
				window.close();
			}

			if (Mouse::isButtonPressed(Mouse::Left)) {
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