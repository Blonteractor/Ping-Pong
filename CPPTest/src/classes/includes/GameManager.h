#pragma once
#include "Ball.h"
#include "Paddle.h"
class cGameManager
{
private:
	
	const int width, height;
	int score1, score2;
	char up1, down1, up2, down2;
	bool quit;
	
	cBall* ball;
	cPaddle* player1;
	cPaddle* player2;

public:

	cGameManager(int w, int h);
	~cGameManager();

	void scoreUp(cPaddle* player);
};

