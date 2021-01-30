#include "Ball.h"

enum eDir { STOP = 0, LEFT = 1, UPLEFT = 2, DOWNLEFT = 3, RIGHT = 4, UPRIGHT = 5, DOWNRIGHT = 6 };

cBall::cBall(int posX, int posY)
{
	orignalX = posX;
	orignalY = posY;

	x = posX; y = posY;
	direction = STOP;
}

cBall::cBall()
{
	orignalX = 0;
	orignalY = 0;

	x = 0; y = 0;
	direction = STOP;
}

inline int cBall::getX() { return x; }
inline int cBall::getY() { return y; }
inline eDir cBall::getDirection() { return direction; }

void cBall::Reset()
{
	x = orignalX; y = orignalY;
	direction = STOP;
}

void cBall::changeDirection(eDir newDirection)
{
	direction = newDirection;
}

void cBall::randomDirection()
{
	srand(time(NULL));
	int randomNumber = (rand() % 6) + 1;
	direction = (eDir)randomNumber;
}

void cBall::Move()
{
	switch (direction)
	{
	case STOP:
		break;

	case LEFT:
		x--;
		break;

	case RIGHT:
		x++;
		break;

	case UPLEFT:
		x--;
		y++;
		break;

	case DOWNLEFT:
		x--;
		y--;
		break;

	case UPRIGHT:
		x++;
		y--;
		break;

	case DOWNRIGHT:
		x++;
		y++;
		break;

	default:
		break;
	}
}

ostream& operator<<(ostream& o, cBall c)
{
	o << "Ball [" << c.x << "," << c.y << "][" << c.direction << "]";
	return o;
}