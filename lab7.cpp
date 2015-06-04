#include <iostream>
#include <cstdlib>
#include <ctime>
#include "genMino.h"
using namespace std;

int main()
{
	Mino* mino_ptr;

	for(int i=0; i<5; i++)
	{
		mino_ptr = genMino(i);
		showType(i);
		mino_ptr->paint();
		delete mino_ptr;
	}
	return 0;
}
