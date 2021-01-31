#include "GameManager.h"
#include <time.h>
#include <conio.h>

cGameManager::cGameManager(int w, int h)
	: width(w), height(h)
{

	srand(time(NULL));
	quit = false;

	up1 = 'w'; up2 = 'i';
	down1 = 's'; down2 = 'j';
	
	score1 = score2 = 0;

	ball = new cBall(w / 2, h / 2);
	player1 = new cPaddle(1, h / 2 - 3);
	player2 = new cPaddle(w - 2, h / 2 - 3);

}

cGameManager::~cGameManager()
{
	delete ball, player1, player2;
}

void cGameManager::scoreUp(cPaddle* player)
{
	if (player == player1) score1++;
	else if (player == player2) score2++;

	ball->Reset();
	player1->Reset();
	player2->Reset();
}