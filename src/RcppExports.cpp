// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// eho
double eho(NumericVector param, NumericVector numbuys, NumericVector numsells);
RcppExport SEXP pinbasic_eho(SEXP paramSEXP, SEXP numbuysSEXP, SEXP numsellsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type param(paramSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type numbuys(numbuysSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type numsells(numsellsSEXP);
    rcpp_result_gen = Rcpp::wrap(eho(param, numbuys, numsells));
    return rcpp_result_gen;
END_RCPP
}
// linke
double linke(NumericVector param, NumericVector numbuys, NumericVector numsells);
RcppExport SEXP pinbasic_linke(SEXP paramSEXP, SEXP numbuysSEXP, SEXP numsellsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type param(paramSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type numbuys(numbuysSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type numsells(numsellsSEXP);
    rcpp_result_gen = Rcpp::wrap(linke(param, numbuys, numsells));
    return rcpp_result_gen;
END_RCPP
}
// simBS
NumericMatrix simBS(NumericVector param, int ndays);
RcppExport SEXP pinbasic_simBS(SEXP paramSEXP, SEXP ndaysSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type param(paramSEXP);
    Rcpp::traits::input_parameter< int >::type ndays(ndaysSEXP);
    rcpp_result_gen = Rcpp::wrap(simBS(param, ndays));
    return rcpp_result_gen;
END_RCPP
}
