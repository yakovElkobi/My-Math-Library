#include <stdio.h>
#include "myMath.h"


int main()
{

 double x;
 char c;
 
 
  printf("please insert a real number: \n");
  while(scanf("%lf",&x)!=1);
  scanf("%c",&c);
  double first_ans = add(Exponent((int)(x)),Power(x,3));
  first_ans = sub(first_ans,2);
  printf("The value of f(x) = e^x + 3x - 2 at the point %0.4lf is: %0.4lf\n",x,(float)first_ans);
  double second_1 = mul(3,x);
  double second_2 = Power(x,2);
  double second_ans = mul(second_2,x);
  second_ans = add(second_1,second_ans);
  printf("The value of f(x) = 3x + 2x^2 at the point %0.4lf is: %0.4lf\n",x,(float)second_ans);
  double third_1 = Power(x,3);
  double third_2 = mul(4,third_1);
  double third_3 = mul(x,2);
  double third_ans = div(third_2,5);
  third_ans = sub(third_ans,third_3);
  printf("The value of f(x) = (4x^3)/5 - 2x at the point %0.4lf is: %0.4lf\n",x,(float)third_ans);
  return 0;
}
