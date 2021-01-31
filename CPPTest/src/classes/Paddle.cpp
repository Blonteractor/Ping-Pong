#include "Paddle.h"
#include <iostream>

cPaddle::cPaddle()
	: orignalX(0), orignalY(0), x(0), y(0)
{
}

cPaddle::cPaddle(int posX, int posY)
	: orignalX(posX), orignalY(posY), x(posX), y(posY)
{
}

void cPaddle::moveUp() { y--; }
void cPaddle::moveDown() { y++; }

inline void cPaddle::Reset()
{
	x = orignalX;
	y = orignalY;
}

inline int cPaddle::getX() const { return x; }
inline int cPaddle::getY() const { return y; }

std::ostream& operator<<(std::ostream& stream, const cPaddle& paddle)
{
	stream << "Paddle [" << paddle.x << "," << paddle.y << "]";
	return stream;
}