#ifndef MINO_A_H
#define MINO_A_H
#include <iostream>
#include "Mino.h"
using namespace std;

class MinoA: public Mino
{
public:
	MinoA();
	virtual void paint();
};
#endif
