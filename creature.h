//
//  creature.h
//  
//
//  Created by Munger Rufus on 2015-05-09.
//
//

#ifndef ____creature__
#define ____creature__

#include <SFML/Graphics.hpp>
#include <iostream>

class creature::entity
{
private:
    sf::Sprite sprite;
    sf::RectangleShape rect;
    
    // Stats
    int level = 1;
    int hp = 10;
    int str = 5;
    int vit = 5;
    int dex = 5;
    
    // Animation
    int playerAnimationState = 0;
    int walkingAnimationLengthCounter = 0;
    
public:
    void creature(); // Default Constructor
    void attack();
    void setStats();
};

#endif /* defined(____creature__) */
