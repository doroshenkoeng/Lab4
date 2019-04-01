#pragma once
#include "Player.h"
#include "CardShark.h"
#include "Looser.h"

//! Класс игры
class CardGame
{

public:
	//! Конструктор с параметрами.
	/*!
		\param player1 объект класса Player - игрок 1.
		\param player2 объект класса Player - игрок 2.
	*/
	CardGame(CardShark & player1, Looser & player2);
	//! Метод, в котором симулируется игра.
	void startGame();
	//! Метод возвращающий результат игры.
	/*!
		\retval 1: выигрыш 1-го игрока;
		\retval 2: выигрыш 2-го игрока;
		\retval 0: ничья.
	*/
	int getResult();
private:
	//! Количество карт в колоде.
	int mCardsNumber;
	//! Указатель на  объект класса Player.
	CardShark mPlayer1;
	//! Указатель на  объект класса Player.
	Looser mPlayer2;

};

