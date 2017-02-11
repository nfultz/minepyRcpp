
#include <Rcpp.h>
#include "cppmine.h"
using namespace Rcpp;

//' Mine
//' 
//' Calculate the MIC.
//' 
//' @param x a numeric vector
//' @param y another numeric vector
//' @param alpha exponent on (0,1)
//' @param c number of clumps
//'
//' @examples
//' data("iris")
//' mine(iris$Sepal.Length, iris$Sepal.Width)
//'
//' @export
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
