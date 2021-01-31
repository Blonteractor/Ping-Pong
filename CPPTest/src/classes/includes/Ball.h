#include <iostream>
using namespace std;

enum eDir;

#pragma once
class cBall
{
private:

	int x, y;
	int orignalX, orignalY;

	eDir direction;
public:

	cBall(int posX, int posY);
	cBall();

	inline int getX() const;
	inline int getY() const;
	inline eDir getDirection() const;

	void Reset();

	void changeDirection(eDir newDirection);
	void randomDirection();
	void Move();

	friend ostream& operator<<(ostream& stream, const cBall& ball);

};

