#include "CardShark.h"

void CardShark::operator++()
{
	std::random_device generator;
	std::mt19937 mt(generator());
	std::uniform_int_distribution<int> distribution(1, 10);
	if (distribution(mt) == 1) {
		Player::increment();
	}
	Player::increment();
}

int CardShark::operator<(Looser  player)
{
	if (this->getCurrentScore() > player.getCurrentScore()) return 1;
	else if (this->getCurrentScore() < player.getCurrentScore()) return 2;
	else return 0;
}
