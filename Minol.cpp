#include "Minol.h"
char l_arr[2][4][4]={{{'0','0','1','0'},
					{'0','0','1','0'}, 
					{'0','0','1','0'},
					{'0','0','1','0'}},
					{{'0','0','0','0'},
					{'0','0','0','0'},
					{'1','1','1','1'},
					{'0','0','0','0'}}};

Minol::Minol()
	:Mino(1)
{}

void Minol::paint()
{
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
			cout << l_arr[rotate_index][i][j];
		cout << endl;
	}
}
