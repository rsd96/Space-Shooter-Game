#pragma once

#include "Screens.h"
#include "tutorial.h"
#include "Ship.h"
#include "Shot.h"
#include "EndGame.h"
#include "Screens.h"
#include "Background.h"
#include "SFML\Audio.hpp"
#include <list>
#include "SFML\Graphics.hpp"

class Tutorial : public Screens {
public:
	Tutorial();
	~Tutorial();

	int Run(sf::RenderWindow &window);

private: 

	Background background;
	// List containing all the bullets shot by the ships, used to iterate through and move, check for collision all at once 
	std::list <Shot> shots;
	std::list <Shot>::iterator shots_it;
	sf::SoundBuffer shotBuffer;
	sf::SoundBuffer jetMoveBuffer;
	sf::SoundBuffer explosionBuffer;
	sf::Sound shotSound;
	sf::Sound jetSound;
	sf::Sound explosionSound;
	EndGame endGame;
};

