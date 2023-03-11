// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    if (n == 0) {
      return 1;
    }
    else {
      double a = 1;
      for (uint16_t i = 1; i <= n; i++) {
        a = value * a;
      }
      return a;
    }
}

uint64_t fact(uint16_t n) {
  if (n == 0) {
    return 1
  }
  else {
    return n * fact(n-1);
  }
}

double calcItem(double x, uint16_t n) {

}

double expn(double x, uint16_t count) {

}

double sinn(double x, uint16_t count) {

}

double cosn(double x, uint16_t count) {

}
