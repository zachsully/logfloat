#ifndef LOG_FLOAT
#define LOG_FLOAT




#include <math.h>


#define toLogfloat(a) log1p(a-1)
#define fromLogfloat(a) expm1(a)+1

#define inf 1.0/0.0
#define negInf -(inf)
#define nan 0.0/0.0

double lfMul(double a, double b) __attribute__ ((pure));
double lfAdd(double a, double b) __attribute__ ((pure));
double lfSub(double a, double b) __attribute__ ((pure));
double lfDiv(double a, double b) __attribute__ ((pure));

#endif
