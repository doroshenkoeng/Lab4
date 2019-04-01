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
