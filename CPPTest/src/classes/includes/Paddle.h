#pragma once
#include <iostream>

class cPaddle
{
private:

	int x, y;
	const int orignalX, orignalY;
public:
	
	cPaddle();
	cPaddle(int posX, int posY);

	void moveUp();
	void moveDown();

	inline void Reset();

	inline int getX() const;
	inline int getY() const;

	friend std::ostream& operator<<(std::ostream& stream, const cPaddle& paddle);
};

