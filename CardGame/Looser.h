#pragma once
#include "Player.h"
class Looser :
	public Player
{
public:
	//! Перегрузка унарного оператора - инкремент.
	void operator ++();
};

