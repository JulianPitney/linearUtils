#ifndef _LINEARUTILS_LINUTILS_H_
#define _LINEARUTILS_LINUTILS_H_
#define PI 3.141592653589793238462643383279502884L


namespace linUtils {

	template <class M>
	class Mat {


		public:
			M** mat;
			Mat(int rows, int cols);
		};


		template <class M>
		Mat<M>::Mat(int rows, int cols) {

			mat = new M*[rows];
			for(long long int r = 0; r < rows; r++)
			{
				mat[r] = new M[cols];
			}
		}

}


#endif
