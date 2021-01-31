#include <iostream>
using namespace std;

enum eDir;

#pragma once
class cBall
{
private:
	// current position of ball
	int x, y;

	// starting position of ball
	int orignalX, orignalY;

	// current direction of ball
	eDir direction;
public:

	// initializes the ball at position (posX, posY)
	cBall(int posX, int posY);

	// initializes the ball at position (0, 0)
	cBall();

	// gets current X co ordinate of ball
	inline int getX() const;

	// gets current Y co ordinate of ball
	inline int getY() const;

	// gets current direction of ball
	inline eDir getDirection() const;


	// resets the state of the ball
	void Reset();

	// changes the direction of ball
	void changeDirection(eDir newDirection);

	// sets ball to random direction
	void randomDirection();

	//moves the ball
	void Move();

	friend ostream& operator<<(ostream& o, cBall c);

};

