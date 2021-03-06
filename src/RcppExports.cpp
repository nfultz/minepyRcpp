// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// mine
double mine(NumericVector x, NumericVector y, double alpha, double c);
RcppExport SEXP minepyRcpp_mine(SEXP xSEXP, SEXP ySEXP, SEXP alphaSEXP, SEXP cSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type c(cSEXP);
    __result = Rcpp::wrap(mine(x, y, alpha, c));
    return __result;
END_RCPP
}
