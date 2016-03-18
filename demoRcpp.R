setwd("F:/StatsAuckland/stats779/Rcpp/")

#install.packages("devtools")
#install.packages("roxygen2")
library(devtools)
library(roxygen2)

#install.packages("VGAM")
library(VGAM)

dkumar(x = 0.5, shape1 = 2, shape2 = 2)

#install.packages("Rcpp")
library(Rcpp)

cppFunction('int add(int x, int y, int z) {
  int sum = x + y + z;
  return sum;
}')

add
add(5, 1, 3)



sourceCpp("F:/StatsAuckland/stats779/Rcpp/cpp/kmr.cpp")

timesTwo(c(5, 7))




#creating Rcpp package
Rcpp.package.skeleton(name = "team10stats799",
                      author = "Lueqiu, Divya, Jan",
                      cpp_files = "F:/StatsAuckland/stats779/Rcpp/cpp/kmr.cpp",
                      example_code = FALSE)
install.packages('team10stats799')
library(team10stats799)



