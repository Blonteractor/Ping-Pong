#include <iostream>
#include "Ball.h"
using namespace std;

int main()
{
	cBall b(0, 0);

	cout << b << endl;
	b.randomDirection();
	cout << b << endl;
	b.Move();
	cout << b << endl;

	b.randomDirection();
	b.Move();
	cout << b << endl;

	return 0;
}