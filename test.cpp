#include "linUtils.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {


	int x = 2000000;
	int y = 2000000;
	linUtils::Mat<int> *mat = new linUtils::Mat<int>(x,y);

	for(int i = 0; i < x; i++)
	{
		for(int c = 0; c < y; c++)
		{
			cout << mat->mat[i][c];
		}
		cout << endl;
	}


	return 0;
}
