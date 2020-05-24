#include <stdio.h>
int main(void)
{
    int input;
    scanf("%d", &input);
    if (input/10%10==1 || input%10 == 0 || input%10 >=4 && input%10 <= 9)
    {
        printf("%dth",input);
    }else
    {
        if(input%10 == 3){
            printf("%drd",input);
        }
        if(input%10 == 2){
            printf("%dnd",input);
        }
        if(input%10 == 1)
        {
            printf("%dst",input);
        }
        
    }
    return 0;
}