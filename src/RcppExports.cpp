// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// boolsAndInterveawe
LogicalVector boolsAndInterveawe(LogicalVector b, LogicalVector other);
RcppExport SEXP _koR_boolsAndInterveawe(SEXP bSEXP, SEXP otherSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type b(bSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type other(otherSEXP);
    rcpp_result_gen = Rcpp::wrap(boolsAndInterveawe(b, other));
    return rcpp_result_gen;
END_RCPP
}
// copyInts
void copyInts(IntegerVector src, size_t srcPos, IntegerVector dest, size_t destPos, size_t length);
RcppExport SEXP _koR_copyInts(SEXP srcSEXP, SEXP srcPosSEXP, SEXP destSEXP, SEXP destPosSEXP, SEXP lengthSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type src(srcSEXP);
    Rcpp::traits::input_parameter< size_t >::type srcPos(srcPosSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dest(destSEXP);
    Rcpp::traits::input_parameter< size_t >::type destPos(destPosSEXP);
    Rcpp::traits::input_parameter< size_t >::type length(lengthSEXP);
    copyInts(src, srcPos, dest, destPos, length);
    return R_NilValue;
END_RCPP
}
// copyDoubles
void copyDoubles(DoubleVector src, size_t srcPos, DoubleVector dest, size_t destPos, size_t length);
RcppExport SEXP _koR_copyDoubles(SEXP srcSEXP, SEXP srcPosSEXP, SEXP destSEXP, SEXP destPosSEXP, SEXP lengthSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DoubleVector >::type src(srcSEXP);
    Rcpp::traits::input_parameter< size_t >::type srcPos(srcPosSEXP);
    Rcpp::traits::input_parameter< DoubleVector >::type dest(destSEXP);
    Rcpp::traits::input_parameter< size_t >::type destPos(destPosSEXP);
    Rcpp::traits::input_parameter< size_t >::type length(lengthSEXP);
    copyDoubles(src, srcPos, dest, destPos, length);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_koR_boolsAndInterveawe", (DL_FUNC) &_koR_boolsAndInterveawe, 2},
    {"_koR_copyInts", (DL_FUNC) &_koR_copyInts, 5},
    {"_koR_copyDoubles", (DL_FUNC) &_koR_copyDoubles, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_koR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}