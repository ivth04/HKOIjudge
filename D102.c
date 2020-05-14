#include <stdio.h>
#include <math.h>
int main()
{
    float fare;
    scanf("%*c%f",&fare);
    int tmp = fare/2*10;
    float truncated = tmp/10.0;
    fare = fare- truncated;
    printf("$%.1lf",fare);
    return 0;
}
//Prototype
/* #include <stdio.h>
#include <math.h>
int main()
{
    float fare,half;
    scanf("%*c%f",&fare);
    printf("$%.1lf",fare/2);
    return 0;
}
*/
