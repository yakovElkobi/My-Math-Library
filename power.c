#include <stdio.h>
#include "myMath.h"
#define EXP 2.71828

double Power(double x , int y){
    double ans = 1;
    
    if(y < 0){
        y = -y;
    }
    for( int i = 0;i < y;i++){
       ans *= x;
   }
    return ans;
}
double Exponent(int x){
	double ans = Power(EXP,x);
	return ans;
}
