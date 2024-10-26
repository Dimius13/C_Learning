#include <stdio.h>
#include <math.h>
 
const float PI = 3.1415926535;
 
double cosx(double x)
{
double Xn = 1;
double sum = 0.0;
int i = 1;
    do
    {
        sum += Xn;
        Xn *= -1.0 * x * x / ((2 * i) * (2 * i - 1));
        i++;
    }
    while (fabs(Xn) > 0.001);
        return sum;
    }
 
int main(void)
{
double x;
    scanf("%lf",&x);
    x *= PI/180.0;
    printf("%.3f",cosx(x));
    return 0;
}


//~ sin(x) = x - x3/3! + x5/5! - x7/7! + ...(x в радианах)
//~ cos(x) = 1 - x2/2! + x4/4! - x6/6! + ... (x в радианах)
