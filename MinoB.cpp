#include "MinoB.h"
char B_arr[4][4]={{'0','0','0','0'},
					{'0','0','0','0'},
					{'0','1','1','0'},
					{'0','1','1','0'}};

MinoB::MinoB()
	:Mino(1)
{}

void MinoB::paint()
{
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
			cout << B_arr[i][j];
		cout << endl;
	}
}
