//En realese se usan lo dinamico (no -s, no -d) y en debug si se usan (-s,-d)
#include <SFML/Graphics.hpp>

int main()
{
	// create the window
	sf::RectangleShape rectangle1(sf::Vector2f(50.f, 160.f));
	rectangle1.setPosition(50.f, 200.f);
	rectangle1.setFillColor(sf::Color(100, 250, 50));

	sf::RectangleShape score1(sf::Vector2f(25.f, 800.f));
	score1.setPosition(1.f, 1.f);
	score1.setFillColor(sf::Color(100, 250, 50));

	sf::RectangleShape rectangle2(sf::Vector2f(50.f, 160.f));
	rectangle2.setPosition(720.f, 200.f);
	rectangle2.setFillColor(sf::Color(100, 250, 50));

	sf::RectangleShape score2(sf::Vector2f(25.f, 800.f));
	score2.setPosition(790.f, 1.f);
	score2.setFillColor(sf::Color(100, 250, 50));

	sf::CircleShape ball(25.f);
	ball.setPosition(350.f, 200.f);
	ball.setFillColor(sf::Color::Blue);

	sf::RenderWindow window(sf::VideoMode(800, 600), "My window");
	window.setFramerateLimit(60);


	// run the program as long as the window is open
	while (window.isOpen())
	{
		// check all the window's events that were triggered since the last iteration of the loop
		sf::Event event;
		while (window.pollEvent(event))
		{
			// "close requested" event: we close the window
			if (event.type == sf::Event::Closed)
				window.close();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) //If the user is holding down the key "W"
				rectangle1.move(0, -5);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) //If the user is holding down the key "W"
				rectangle1.move(0, 5);
			if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) //If the user is holding down the key "W"
				rectangle2.move(0, -5);
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) //If the user is holding down the key "W"
				rectangle2.move(0, 5);

			if(rectangle1.getPosition.)
		}

		// clear the window with black color
		window.clear(sf::Color::White);

		window.clear();
		// draw everything here...
		// window.draw(...);
		window.draw(rectangle1);
		window.draw(score1);

		window.draw(rectangle2);
		window.draw(score2);
		window.draw(ball);


		// end the current frame
		window.display();
	}

	return 0;
}