# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

rrank <- function(A, tol) {
    .Call('_wbsd_rrank', PACKAGE = 'wbsd', A, tol)
}

rkernel <- function(A, tol) {
    .Call('_wbsd_rkernel', PACKAGE = 'wbsd', A, tol)
}

ctest <- function(umat, Rbmat, Wvec, Bmat, cores, tol) {
    .Call('_wbsd_ctest', PACKAGE = 'wbsd', umat, Rbmat, Wvec, Bmat, cores, tol)
}

