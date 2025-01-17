// Copyright (C) 2021-2022 Koen Derks

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]

int neighbor(int L, int i)
{
  if (i < 0)
    return 0;
  if (i >= L)
    return L - 1;
  return i;
}

// [[Rcpp::export]]
arma::mat draw_squares(arma::mat X,
                       Rcpp::DataFrame neighbors,
                       int s,
                       int cuts,
                       double ratio) {
  int m = X.n_rows;
  int n = X.n_cols;
  int row = m;
  int col = n;
  Rcpp::IntegerVector dx = neighbors["x"];
  Rcpp::IntegerVector dy = neighbors["y"];
  for (int i = 0; i < cuts; i++) {
    Rcpp::checkUserInterrupt();
    int cutx = ceil(row / ratio);
    int cuty = ceil(col / ratio);
    double cutfromtop = R::runif(0, 1);
    double cutfromleft = R::runif(0, 1);
    int color = ceil(R::runif(0, s)); // Sample color from 1 to s
    if (cutfromtop >= 0.5 && cutfromleft >= 0.5) {
      for (int x = 0; x < cutx; x++) {
        for (int y = 0; y < cuty; y++) {
          X(y, x) = color;
        }
      }
    } else if (cutfromtop >= 0.5 && cutfromleft < 0.5) {
      for (int x = 0; x < cutx; x++) {
        for (int y = cuty; y < m; y++) {
          X(y, x) = color;
        }
      }
    } else if (cutfromtop < 0.5 && cutfromleft >= 0.5) {
      for (int x = cutx; x < n; x++) {
        for (int y = 0; y < cuty; y++) {
          X(y, x) = color;
        }
      }
    } else if (cutfromtop < 0.5 && cutfromleft < 0.5) {
      for (int x = cutx; x < n; x++) {
        for (int y = cuty; y < m; y++) {
          X(y, x) = color;
        }
      }
    }
    row = floor(R::runif(0, m));
    col = floor(R::runif(0, n));
  }
  arma::mat X_new = X;
  for (int x = 0; x < n; x++) {
    Rcpp::checkUserInterrupt();
    for (int y = 0; y < m; y++) {
      std::vector<int> colors;
      for (int z = 0; z < dx.size(); z++) {
        int ix  = neighbor(n, x + dx[z]);
        int iy  = neighbor(m, y + dy[z]);
        int color = X(iy, ix);
        colors.push_back (color);
      }
      std::sort(colors.begin(), colors.end());
      int uniqueCount = std::unique(colors.begin(), colors.end()) - colors.begin();
      if (uniqueCount > 1) {
        X_new(y, x) = 0;
      }
    }
  }
  return X_new;
}