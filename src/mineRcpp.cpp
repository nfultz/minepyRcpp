
#include <Rcpp.h>
#include "cppmine.h"
using namespace Rcpp;

// [[Rcpp::export]]
double mine(NumericVector x, NumericVector y, 
  double alpha=.6, double c=15) {
        int n = 7;
        /* build the MINE object */
        MINE mine(alpha, c);
        /* compute score */
        mine.compute_score(x.begin(), y.begin(), x.size());
        /* print MIC */
        return mine.mic();
}
