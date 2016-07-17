#include <stdio.h>
#include <math.h>
#include <logfloat.h>

int main() {
  double x;
  double y;
  double z;
  double result;

  x = toLogfloat(21);
  y = toLogfloat(3);
  z = toLogfloat(22);

  result = lfSub(lfAdd(lfMul(x,y),toLogfloat(1)),z);

  printf("%.17f\n",fromLogfloat(result));
  return 1;
}
