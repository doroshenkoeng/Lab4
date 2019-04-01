#pragma once
#include "Looser.h"
class CardShark :
	public Player
{
public:
	//! Метод, увеличивающий баллы шуллера на 2 с вероятностью 10%.
	void operator ++();
	int operator <(Looser player);
};

