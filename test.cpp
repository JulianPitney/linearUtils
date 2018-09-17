#include "linUtils.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {


	for(unsigned int i = 0; i < 10000000; i++)
	{

		LINUtils::Vector_2D *vec = LINUtils::CreateVector2D(4, 2.0);
	}

	return 0;
}
