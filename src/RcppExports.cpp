// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// iterate_ant
arma::mat iterate_ant(arma::mat X, int iters, int row, int col, std::vector<int> dx, std::vector<int> dy);
RcppExport SEXP _aRtsy_iterate_ant(SEXP XSEXP, SEXP itersSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP dxSEXP, SEXP dySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type row(rowSEXP);
    Rcpp::traits::input_parameter< int >::type col(colSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type dx(dxSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type dy(dySEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_ant(X, iters, row, col, dx, dy));
    return rcpp_result_gen;
END_RCPP
}
// iterate_circlemap
arma::mat iterate_circlemap(arma::mat X, double kmin, double kmax, double phimin, double phimax, int iterations);
RcppExport SEXP _aRtsy_iterate_circlemap(SEXP XSEXP, SEXP kminSEXP, SEXP kmaxSEXP, SEXP phiminSEXP, SEXP phimaxSEXP, SEXP iterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type kmin(kminSEXP);
    Rcpp::traits::input_parameter< double >::type kmax(kmaxSEXP);
    Rcpp::traits::input_parameter< double >::type phimin(phiminSEXP);
    Rcpp::traits::input_parameter< double >::type phimax(phimaxSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_circlemap(X, kmin, kmax, phimin, phimax, iterations));
    return rcpp_result_gen;
END_RCPP
}
// iterate_collatz
std::vector<int> iterate_collatz(int x);
RcppExport SEXP _aRtsy_iterate_collatz(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_collatz(x));
    return rcpp_result_gen;
END_RCPP
}
// draw_line
arma::mat draw_line(arma::mat empty, std::vector<int> series, double even, double odd);
RcppExport SEXP _aRtsy_draw_line(SEXP emptySEXP, SEXP seriesSEXP, SEXP evenSEXP, SEXP oddSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type empty(emptySEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type series(seriesSEXP);
    Rcpp::traits::input_parameter< double >::type even(evenSEXP);
    Rcpp::traits::input_parameter< double >::type odd(oddSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_line(empty, series, even, odd));
    return rcpp_result_gen;
END_RCPP
}
// iterate_planet
arma::mat iterate_planet(arma::mat X, int radius, int xcenter, int ycenter, int threshold, int iterations, double starprob, int ncolors, int colorsused, double fade, int lightright);
RcppExport SEXP _aRtsy_iterate_planet(SEXP XSEXP, SEXP radiusSEXP, SEXP xcenterSEXP, SEXP ycenterSEXP, SEXP thresholdSEXP, SEXP iterationsSEXP, SEXP starprobSEXP, SEXP ncolorsSEXP, SEXP colorsusedSEXP, SEXP fadeSEXP, SEXP lightrightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< int >::type xcenter(xcenterSEXP);
    Rcpp::traits::input_parameter< int >::type ycenter(ycenterSEXP);
    Rcpp::traits::input_parameter< int >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< double >::type starprob(starprobSEXP);
    Rcpp::traits::input_parameter< int >::type ncolors(ncolorsSEXP);
    Rcpp::traits::input_parameter< int >::type colorsused(colorsusedSEXP);
    Rcpp::traits::input_parameter< double >::type fade(fadeSEXP);
    Rcpp::traits::input_parameter< int >::type lightright(lightrightSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_planet(X, radius, xcenter, ycenter, threshold, iterations, starprob, ncolors, colorsused, fade, lightright));
    return rcpp_result_gen;
END_RCPP
}
// iterate_polylines
arma::mat iterate_polylines(arma::mat X, double ratio, int iters, int rows, int cols);
RcppExport SEXP _aRtsy_iterate_polylines(SEXP XSEXP, SEXP ratioSEXP, SEXP itersSEXP, SEXP rowsSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type ratio(ratioSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_polylines(X, ratio, iters, rows, cols));
    return rcpp_result_gen;
END_RCPP
}
// iterate_squares
arma::mat iterate_squares(arma::mat X, Rcpp::DataFrame neighbors, int s, int cuts, double ratio);
RcppExport SEXP _aRtsy_iterate_squares(SEXP XSEXP, SEXP neighborsSEXP, SEXP sSEXP, SEXP cutsSEXP, SEXP ratioSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type neighbors(neighborsSEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< int >::type cuts(cutsSEXP);
    Rcpp::traits::input_parameter< double >::type ratio(ratioSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_squares(X, neighbors, s, cuts, ratio));
    return rcpp_result_gen;
END_RCPP
}
// iterate_strokes
arma::mat iterate_strokes(arma::mat X, Rcpp::DataFrame neighbors, int s, double p);
RcppExport SEXP _aRtsy_iterate_strokes(SEXP XSEXP, SEXP neighborsSEXP, SEXP sSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type neighbors(neighborsSEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_strokes(X, neighbors, s, p));
    return rcpp_result_gen;
END_RCPP
}
// iterate_turmite
arma::mat iterate_turmite(arma::mat X, int iters, int row, int col, double p);
RcppExport SEXP _aRtsy_iterate_turmite(SEXP XSEXP, SEXP itersSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type row(rowSEXP);
    Rcpp::traits::input_parameter< int >::type col(colSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_turmite(X, iters, row, col, p));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_aRtsy_iterate_ant", (DL_FUNC) &_aRtsy_iterate_ant, 6},
    {"_aRtsy_iterate_circlemap", (DL_FUNC) &_aRtsy_iterate_circlemap, 6},
    {"_aRtsy_iterate_collatz", (DL_FUNC) &_aRtsy_iterate_collatz, 1},
    {"_aRtsy_draw_line", (DL_FUNC) &_aRtsy_draw_line, 4},
    {"_aRtsy_iterate_planet", (DL_FUNC) &_aRtsy_iterate_planet, 11},
    {"_aRtsy_iterate_polylines", (DL_FUNC) &_aRtsy_iterate_polylines, 5},
    {"_aRtsy_iterate_squares", (DL_FUNC) &_aRtsy_iterate_squares, 5},
    {"_aRtsy_iterate_strokes", (DL_FUNC) &_aRtsy_iterate_strokes, 4},
    {"_aRtsy_iterate_turmite", (DL_FUNC) &_aRtsy_iterate_turmite, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_aRtsy(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
