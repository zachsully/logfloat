#include <stdio.h>
#include <math.h>
#include <logfloat.h>

int main() {
  double x;
  double y;
  double z;
  double result;

  x = toLogfloat(21);
  y = toLogfloat(2);
  /* z = toLogfloat(34); */

  result = lfAdd(lfMul(x,y),toLogfloat(1));

  printf("%.17f\n",fromLogfloat(result));
  return 1;
}
