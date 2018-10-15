#ifndef _LINEARUTILS_LINUTILS_H_
#define _LINEARUTILS_LINUTILS_H_
#define PI 3.141592653589793238462643383279502884L

#include<vector>

namespace linUtils {

	template <typename M>
	class Mat {

		public:

			std::vector<std::vector<M> > mat;

			Mat(int rows, int cols, M init_val);
		};

}


#endif
