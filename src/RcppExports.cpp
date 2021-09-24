// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// draw_ant
arma::mat draw_ant(arma::mat X, int iters, int row, int col, std::vector<int> dx, std::vector<int> dy);
RcppExport SEXP _aRtsy_draw_ant(SEXP XSEXP, SEXP itersSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP dxSEXP, SEXP dySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type row(rowSEXP);
    Rcpp::traits::input_parameter< int >::type col(colSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type dx(dxSEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type dy(dySEXP);
    rcpp_result_gen = Rcpp::wrap(draw_ant(X, iters, row, col, dx, dy));
    return rcpp_result_gen;
END_RCPP
}
// draw_circlemap
arma::mat draw_circlemap(arma::mat X, double kmin, double kmax, double phimin, double phimax, int iterations);
RcppExport SEXP _aRtsy_draw_circlemap(SEXP XSEXP, SEXP kminSEXP, SEXP kmaxSEXP, SEXP phiminSEXP, SEXP phimaxSEXP, SEXP iterationsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type kmin(kminSEXP);
    Rcpp::traits::input_parameter< double >::type kmax(kmaxSEXP);
    Rcpp::traits::input_parameter< double >::type phimin(phiminSEXP);
    Rcpp::traits::input_parameter< double >::type phimax(phimaxSEXP);
    Rcpp::traits::input_parameter< int >::type iterations(iterationsSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_circlemap(X, kmin, kmax, phimin, phimax, iterations));
    return rcpp_result_gen;
END_RCPP
}
// get_collatz_sequence
std::vector<int> get_collatz_sequence(int x);
RcppExport SEXP _aRtsy_get_collatz_sequence(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(get_collatz_sequence(x));
    return rcpp_result_gen;
END_RCPP
}
// draw_collatz
arma::mat draw_collatz(arma::mat empty, std::vector<int> series, double even, double odd);
RcppExport SEXP _aRtsy_draw_collatz(SEXP emptySEXP, SEXP seriesSEXP, SEXP evenSEXP, SEXP oddSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type empty(emptySEXP);
    Rcpp::traits::input_parameter< std::vector<int> >::type series(seriesSEXP);
    Rcpp::traits::input_parameter< double >::type even(evenSEXP);
    Rcpp::traits::input_parameter< double >::type odd(oddSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_collatz(empty, series, even, odd));
    return rcpp_result_gen;
END_RCPP
}
// iterate_flow
Rcpp::DataFrame iterate_flow(arma::mat angles, int j, int iters, int left, int right, int top, int bottom, double step, int width, int height, int resolution);
RcppExport SEXP _aRtsy_iterate_flow(SEXP anglesSEXP, SEXP jSEXP, SEXP itersSEXP, SEXP leftSEXP, SEXP rightSEXP, SEXP topSEXP, SEXP bottomSEXP, SEXP stepSEXP, SEXP widthSEXP, SEXP heightSEXP, SEXP resolutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type angles(anglesSEXP);
    Rcpp::traits::input_parameter< int >::type j(jSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type left(leftSEXP);
    Rcpp::traits::input_parameter< int >::type right(rightSEXP);
    Rcpp::traits::input_parameter< int >::type top(topSEXP);
    Rcpp::traits::input_parameter< int >::type bottom(bottomSEXP);
    Rcpp::traits::input_parameter< double >::type step(stepSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    Rcpp::traits::input_parameter< int >::type resolution(resolutionSEXP);
    rcpp_result_gen = Rcpp::wrap(iterate_flow(angles, j, iters, left, right, top, bottom, step, width, height, resolution));
    return rcpp_result_gen;
END_RCPP
}
// draw_planet
arma::mat draw_planet(arma::mat X, int radius, int xcenter, int ycenter, int threshold, int iterations, double starprob, int ncolors, int colorsused, double fade, int lightright);
RcppExport SEXP _aRtsy_draw_planet(SEXP XSEXP, SEXP radiusSEXP, SEXP xcenterSEXP, SEXP ycenterSEXP, SEXP thresholdSEXP, SEXP iterationsSEXP, SEXP starprobSEXP, SEXP ncolorsSEXP, SEXP colorsusedSEXP, SEXP fadeSEXP, SEXP lightrightSEXP) {
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
    rcpp_result_gen = Rcpp::wrap(draw_planet(X, radius, xcenter, ycenter, threshold, iterations, starprob, ncolors, colorsused, fade, lightright));
    return rcpp_result_gen;
END_RCPP
}
// draw_polylines
arma::mat draw_polylines(arma::mat X, double ratio, int iters, int rows, int cols);
RcppExport SEXP _aRtsy_draw_polylines(SEXP XSEXP, SEXP ratioSEXP, SEXP itersSEXP, SEXP rowsSEXP, SEXP colsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< double >::type ratio(ratioSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type rows(rowsSEXP);
    Rcpp::traits::input_parameter< int >::type cols(colsSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_polylines(X, ratio, iters, rows, cols));
    return rcpp_result_gen;
END_RCPP
}
// draw_squares
arma::mat draw_squares(arma::mat X, Rcpp::DataFrame neighbors, int s, int cuts, double ratio);
RcppExport SEXP _aRtsy_draw_squares(SEXP XSEXP, SEXP neighborsSEXP, SEXP sSEXP, SEXP cutsSEXP, SEXP ratioSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type neighbors(neighborsSEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< int >::type cuts(cutsSEXP);
    Rcpp::traits::input_parameter< double >::type ratio(ratioSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_squares(X, neighbors, s, cuts, ratio));
    return rcpp_result_gen;
END_RCPP
}
// draw_strokes
arma::mat draw_strokes(arma::mat X, Rcpp::DataFrame neighbors, int s, double p);
RcppExport SEXP _aRtsy_draw_strokes(SEXP XSEXP, SEXP neighborsSEXP, SEXP sSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type neighbors(neighborsSEXP);
    Rcpp::traits::input_parameter< int >::type s(sSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_strokes(X, neighbors, s, p));
    return rcpp_result_gen;
END_RCPP
}
// draw_turmite
arma::mat draw_turmite(arma::mat X, int iters, int row, int col, double p);
RcppExport SEXP _aRtsy_draw_turmite(SEXP XSEXP, SEXP itersSEXP, SEXP rowSEXP, SEXP colSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type iters(itersSEXP);
    Rcpp::traits::input_parameter< int >::type row(rowSEXP);
    Rcpp::traits::input_parameter< int >::type col(colSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(draw_turmite(X, iters, row, col, p));
    return rcpp_result_gen;
END_RCPP
}
// deform
Rcpp::DataFrame deform(Rcpp::DataFrame canvas, int maxdepth, int width, int height);
RcppExport SEXP _aRtsy_deform(SEXP canvasSEXP, SEXP maxdepthSEXP, SEXP widthSEXP, SEXP heightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame >::type canvas(canvasSEXP);
    Rcpp::traits::input_parameter< int >::type maxdepth(maxdepthSEXP);
    Rcpp::traits::input_parameter< int >::type width(widthSEXP);
    Rcpp::traits::input_parameter< int >::type height(heightSEXP);
    rcpp_result_gen = Rcpp::wrap(deform(canvas, maxdepth, width, height));
    return rcpp_result_gen;
END_RCPP
}
// c_noise_knn
std::vector<double> c_noise_knn(arma::rowvec x, arma::rowvec y, arma::rowvec z, arma::rowvec newx, arma::rowvec newy, int k, int n);
RcppExport SEXP _aRtsy_c_noise_knn(SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP newxSEXP, SEXP newySEXP, SEXP kSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::rowvec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type newx(newxSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type newy(newySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(c_noise_knn(x, y, z, newx, newy, k, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_aRtsy_draw_ant", (DL_FUNC) &_aRtsy_draw_ant, 6},
    {"_aRtsy_draw_circlemap", (DL_FUNC) &_aRtsy_draw_circlemap, 6},
    {"_aRtsy_get_collatz_sequence", (DL_FUNC) &_aRtsy_get_collatz_sequence, 1},
    {"_aRtsy_draw_collatz", (DL_FUNC) &_aRtsy_draw_collatz, 4},
    {"_aRtsy_iterate_flow", (DL_FUNC) &_aRtsy_iterate_flow, 11},
    {"_aRtsy_draw_planet", (DL_FUNC) &_aRtsy_draw_planet, 11},
    {"_aRtsy_draw_polylines", (DL_FUNC) &_aRtsy_draw_polylines, 5},
    {"_aRtsy_draw_squares", (DL_FUNC) &_aRtsy_draw_squares, 5},
    {"_aRtsy_draw_strokes", (DL_FUNC) &_aRtsy_draw_strokes, 4},
    {"_aRtsy_draw_turmite", (DL_FUNC) &_aRtsy_draw_turmite, 5},
    {"_aRtsy_deform", (DL_FUNC) &_aRtsy_deform, 4},
    {"_aRtsy_c_noise_knn", (DL_FUNC) &_aRtsy_c_noise_knn, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_aRtsy(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
