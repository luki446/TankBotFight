//
//  TankClass.hpp
//  TankBotFight
//
//  Created by Emil Panecki on 10/06/2021.
//  Copyright © 2021 Emil Panecki. All rights reserved.
//

#pragma once

#include <SFML/Graphics.hpp>

enum class Direction;

class Tank
{

public:
  Tank(int x, int y, float speed);

  void move(Direction direction);

  void dead();

  sf::Sprite& getSprite();

private:
  int mHp = 100;
  float mSpeed = 0.f;

  sf::Texture txt;
  sf::Sprite sprite;
};
