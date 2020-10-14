#include<stdio.h>
int main(void){
    int a, b, sum;
    scanf("%d %d",&a , &b);
    if(a > b){
        sum = a + b;
        printf("%d",sum);
    }
    else
    {
        sum = a - b; 
        printf("%d",sum);
    }
    return 0;
}