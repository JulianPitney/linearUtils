#include "linUtils.h"

LINUtils::Vector_2D* LINUtils::CreateVector2D(unsigned long int magnitude, double direction_degrees)
{
	LINUtils::Vector_2D *vector_2d = new LINUtils::Vector_2D{magnitude, direction_degrees};
	
	return vector_2d;

}
