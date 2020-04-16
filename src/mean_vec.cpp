#include <RcppArmadillo.h>

// [[Rcpp::depends(RcppArmadillo)]]

using namespace Rcpp;

//' Vector of means
//'
//' @param x \code{numeric vector}
//'
//' @description Auxiliar function to calculate \eqn{\hat{H_{12}}_i(d)}.
//'
//' @return \code{numeric vector}
//'
// [[Rcpp::export]]
arma::vec mean_vec(arma::vec& x) {
  arma::uvec idx(1);
  arma::vec y(x.size());
  arma::vec ids_aux = arma::linspace(0, x.size());

  for(int i = 0; i < x.size(); i++) {
    idx = arma::find(ids_aux != ids_aux.at(i));
    y.at(i) = arma::mean(x.elem(idx));
  }
  return y;
}
