#ifndef _LINEARUTILS_LINUTILS_H_
#define _LINEARUTILS_LINUTILS_H_

#define PI 3.141592653589793238462643383279502884L


namespace LINUtils {

	struct Vector_2D {
		
		unsigned long int magnitude;
		double  direction_degrees;
	};

	Vector_2D *CreateVector2D(unsigned long int, double);

}


#endif
