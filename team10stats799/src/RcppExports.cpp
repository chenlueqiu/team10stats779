// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// dkmr
NumericVector dkmr(NumericVector x, double a, double b);
RcppExport SEXP team10stats799_dkmr(SEXP xSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    __result = Rcpp::wrap(dkmr(x, a, b));
    return __result;
END_RCPP
}
// pkmr
NumericVector pkmr(NumericVector q, double a, double b);
RcppExport SEXP team10stats799_pkmr(SEXP qSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type q(qSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    __result = Rcpp::wrap(pkmr(q, a, b));
    return __result;
END_RCPP
}
// qkmr
NumericVector qkmr(NumericVector p, double a, double b);
RcppExport SEXP team10stats799_qkmr(SEXP pSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type p(pSEXP);
    Rcpp::traits::input_parameter< double >::type a(aSEXP);
    Rcpp::traits::input_parameter< double >::type b(bSEXP);
    __result = Rcpp::wrap(qkmr(p, a, b));
    return __result;
END_RCPP
}
