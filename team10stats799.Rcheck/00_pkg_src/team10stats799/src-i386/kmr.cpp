#include <Rcpp.h>
using namespace Rcpp;

// unvectorized basic version example
/*
double dkmr(double x, double a, double b) {
  return a * b * pow(x, a - 1) * pow(1 - pow(x, a), b - 1);
}*/

// [[Rcpp::export]]
NumericVector dkmr(NumericVector x, double a, double b) {
  //NumericVector res = a * b * pow(x, a - 1) * pow(1 - pow(x, a), b - 1);
  int n = x.size();
  NumericVector res(n);
  res = a * b * pow(x, a - 1) * pow(1 - pow(x, a), b - 1);
  return res;
}

// [[Rcpp::export]]
NumericVector pkmr(NumericVector q, double a, double b) {
  int n = q.size();
  NumericVector res(n);
  res = 1 - pow(1 - pow(q, a), b);
  return res;
}

// [[Rcpp::export]]
NumericVector qkmr(NumericVector p, double a, double b) {
  int n = p.size();
  NumericVector res(n);
  res = pow(1 - pow(1 - p, 1 / b), 1 / a);
  return res;
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
#dkumar(x = c(0.2, 0.4, 0.6, 0.8), shape1 = c(2, 3, 4, 5), shape2 = c(5, 2, 1))
dkumar(x = c(0.2, 0.4, 0.6, 0.8), shape1 = 2, shape2 = 5)
#dkumar(x = 0.8, shape1 = 5, shape2 = 5)
dkmr(x = c(0.2, 0.4, 0.6, 0.8), a = 2, b = 5)
pkumar(q = c(0.2, 0.4, 0.6, 0.8), shape1 = 2, shape2 = 5)
pkmr(q = c(0.2, 0.4, 0.6, 0.8), a = 2, b = 5)
qkumar(p = c(0.2, 0.4, 0.6, 0.8), shape1 = 2, shape2 = 5)
qkmr(p = c(0.2, 0.4, 0.6, 0.8), a = 2, b = 5)
*/






