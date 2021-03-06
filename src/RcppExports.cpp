// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// rrank
int rrank(Eigen::MatrixXd A, double tol);
RcppExport SEXP _wbsd_rrank(SEXP ASEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(rrank(A, tol));
    return rcpp_result_gen;
END_RCPP
}
// rkernel
Eigen::MatrixXd rkernel(Eigen::MatrixXd A, double tol);
RcppExport SEXP _wbsd_rkernel(SEXP ASEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(rkernel(A, tol));
    return rcpp_result_gen;
END_RCPP
}
// ctest
Eigen::VectorXd ctest(Eigen::MatrixXd umat, Eigen::MatrixXd Rbmat, Eigen::VectorXd Wvec, Eigen::MatrixXd Bmat, int cores, double tol);
RcppExport SEXP _wbsd_ctest(SEXP umatSEXP, SEXP RbmatSEXP, SEXP WvecSEXP, SEXP BmatSEXP, SEXP coresSEXP, SEXP tolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type umat(umatSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Rbmat(RbmatSEXP);
    Rcpp::traits::input_parameter< Eigen::VectorXd >::type Wvec(WvecSEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type Bmat(BmatSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    Rcpp::traits::input_parameter< double >::type tol(tolSEXP);
    rcpp_result_gen = Rcpp::wrap(ctest(umat, Rbmat, Wvec, Bmat, cores, tol));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_wbsd_rrank", (DL_FUNC) &_wbsd_rrank, 2},
    {"_wbsd_rkernel", (DL_FUNC) &_wbsd_rkernel, 2},
    {"_wbsd_ctest", (DL_FUNC) &_wbsd_ctest, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_wbsd(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
