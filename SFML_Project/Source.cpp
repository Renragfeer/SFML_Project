#include "SFML/include/SFML/Graphics.hpp"
//#include <conio.h>
//#include <string>
//#include <array>
//#include <cstdlib>

sf::Vector2f viewSize(1024, 768);
sf::VideoMode vm(viewSize.x, viewSize.y);
sf::RenderWindow window(vm, "You Are Dead", sf::Style::Default);

int main()
{
	//Initialise Game Object
	sf::RectangleShape rect(sf::Vector2f(500.0f, 300.0f));
	rect.setFillColor(sf::Color::Blue);
	rect.setPosition(viewSize.x/2, viewSize.y/2);
	rect.setOrigin(sf::Vector2f(rect.getSize().x/2, rect.getSize().y/2));

	sf::CircleShape circ(100);
	circ.setFillColor(sf::Color::Black);
	circ.setPosition(viewSize.x / 2, viewSize.y / 2);
	circ.setOrigin(circ.getRadius(), circ.getRadius());

	sf::ConvexShape tri;
	tri.setPointCount(3);
	tri.setPoint(0, sf::Vector2f(-100, 0));
	tri.setPoint(1, sf::Vector2f(0, -100));
	tri.setPoint(2, sf::Vector2f(100, 0));
	tri.setFillColor(sf::Color(192, 0, 64, 255));
	tri.setPosition(viewSize.x / 2, viewSize.y / 2);

	while (window.isOpen())
	{
		//handle keyboard Event

		//update game objects
		window.clear(sf::Color::White);
		//render game objects
		window.draw(rect);
		window.draw(circ);
		window.draw(tri);
		window.display();
		
	}

	return 0;
}