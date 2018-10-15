#include "linUtils.h"



template <typename M>
linUtils::Mat<M>::Mat(int rows, int cols, M init_val) {

  mat.resize(rows, std::vector<M>(cols, init_val));
}




template class linUtils::Mat<int>;
