// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// get_row_cpp
NumericVector get_row_cpp(NumericVector x, int n, int ploidy, double min_maf);
RcppExport SEXP pcadapt_get_row_cpp(SEXP xSEXP, SEXP nSEXP, SEXP ploidySEXP, SEXP min_mafSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< double >::type min_maf(min_mafSEXP);
    rcpp_result_gen = Rcpp::wrap(get_row_cpp(x, n, ploidy, min_maf));
    return rcpp_result_gen;
END_RCPP
}
// lrfunc_cpp
NumericMatrix lrfunc_cpp(NumericMatrix scores, NumericMatrix Geno, int K, int nIND, int nSNP, int ploidy, double min_maf);
RcppExport SEXP pcadapt_lrfunc_cpp(SEXP scoresSEXP, SEXP GenoSEXP, SEXP KSEXP, SEXP nINDSEXP, SEXP nSNPSEXP, SEXP ploidySEXP, SEXP min_mafSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type scores(scoresSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Geno(GenoSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type nIND(nINDSEXP);
    Rcpp::traits::input_parameter< int >::type nSNP(nSNPSEXP);
    Rcpp::traits::input_parameter< int >::type ploidy(ploidySEXP);
    Rcpp::traits::input_parameter< double >::type min_maf(min_mafSEXP);
    rcpp_result_gen = Rcpp::wrap(lrfunc_cpp(scores, Geno, K, nIND, nSNP, ploidy, min_maf));
    return rcpp_result_gen;
END_RCPP
}
