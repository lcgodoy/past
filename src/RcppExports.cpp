// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// shift_aux
S4 shift_aux(S4 obj_sp, S4 obj_sp2, S4 obj_sp3, S4 obj_sp4, int n_poly, double range_x, double range_y);
RcppExport SEXP _pat_shift_aux(SEXP obj_spSEXP, SEXP obj_sp2SEXP, SEXP obj_sp3SEXP, SEXP obj_sp4SEXP, SEXP n_polySEXP, SEXP range_xSEXP, SEXP range_ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type obj_sp(obj_spSEXP);
    Rcpp::traits::input_parameter< S4 >::type obj_sp2(obj_sp2SEXP);
    Rcpp::traits::input_parameter< S4 >::type obj_sp3(obj_sp3SEXP);
    Rcpp::traits::input_parameter< S4 >::type obj_sp4(obj_sp4SEXP);
    Rcpp::traits::input_parameter< int >::type n_poly(n_polySEXP);
    Rcpp::traits::input_parameter< double >::type range_x(range_xSEXP);
    Rcpp::traits::input_parameter< double >::type range_y(range_ySEXP);
    rcpp_result_gen = Rcpp::wrap(shift_aux(obj_sp, obj_sp2, obj_sp3, obj_sp4, n_poly, range_x, range_y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_pat_shift_aux", (DL_FUNC) &_pat_shift_aux, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_pat(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
