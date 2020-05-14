#include <stdio.h>
#include <math.h>
int main()
{
    double degree,side1,side2;
    scanf("%lf",&side1);
    scanf("%lf",&side2);
    scanf("%lf",&degree);
    printf("%.3lf",0.5*side1*side2*sin(3.141592653*degree/180));
    return 0;
}
