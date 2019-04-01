#include <iostream>
#include "CardGame.h"
#include "CardShark.h"
#include "Looser.h"
/*!
	\mainpage Лабораторная работа №4
	\section taskname Полиморфизм. Виртуальные функции
	\author Дорошенко Сергей Э-23
	\version 
	\date Апрель, 2019
	\warning 18+
	\copyright Все права защищены.
	\todo В недалеком будущем в игру будет включена система доната разработчику.

	\subsection goal Цель работы:

	Изучить понятие полиморфизма в объектно-ориентированном программировании и применение виртуальных функций в языке C++.	\subsection task Индивидуальное задание

	\subsection variant Вариант 10
	
	Класс Player сделать абстрактным.
	Наследовать от него класс Looser.
	В классе Looser реализовать метод не прибавления 1 балла за выигрышный раунд с вероятностью 10%.
	Вышеуказанный метод сделать абстракным в классе Player.

*/
int main() {
	CardShark player1;
	Looser player2;
	CardGame game(player1, player2);
	game.startGame();
	int result = game.getResult();
	if (result == 1)
	{
		std::cout << "First player won!";
	}
	else if (result == 2)
	{
		std::cout << "Second player won!";
	}
	else std::cout << "Nobody won!";
	return 0;
}