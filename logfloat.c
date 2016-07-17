#include <math.h>
#include <logfloat.h>

// negate isfinite
double lfMul(double a, double b) {
  if (isfinite(a) && isfinite(b) && a == -b) return negInf;
  return (a+b);
}

double lfAdd(double a, double b) {
  if (a == b && isfinite(a) && isfinite(b)) return a;
  if (a >= b) return (a + log1p(exp(b - a)));
  return (b + log1p(expm1(a - b) + 1));
}

double lfSub(double a, double b) {
  if (a == negInf && b == negInf) return negInf;
  return (a + log1p(-(expm1(b - a) + 1)));
}

double lfDiv(double a, double b) {
  /* if (a == b && isfinite(a) && isfinite(b)) return a; ERROR */
  if (a == negInf) return negInf;
  return (a-b);
}
