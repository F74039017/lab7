#include <cstdlib>
#include <cstdio>
#include "genMino.h"
#define NUM_MINO 5
#define MINO_S 0
#define MINO_I 1
#define MINO_L 2
#define MINO_A 3
#define MINO_B 4

Mino* genMino(int type)
{
	Mino* ptr;

	switch(type)
	{
	case MINO_S:
		ptr = new MinoS;
		break;
	case MINO_I:
		ptr = new MinoI;
		break;
	case MINO_L:
		ptr = new MinoL;
		break;
	case MINO_A:
		ptr = new MinoA;
		break;
	case MINO_B:
		ptr = new MinoB;
		break;
	}
	return ptr;
}

void showType(int type)
{	
	printf("This is type ");
	switch(type)
	{
	case MINO_S:
		printf("S\n");
		break;
	case MINO_I:
		printf("I\n");
		break;
	case MINO_L:
		printf("L\n");
		break;
	case MINO_A:
		printf("A\n");
		break;
	case MINO_B:
		printf("B\n");
		break;
	}
}
