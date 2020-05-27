//D301
#include <stdio.h>
int main()
{
    char name1[256], name2[256], food[256], transport[256], place[256];
    fgets(name1,256,stdin);
    fgets(name2,256,stdin);
    fgets(food,256,stdin);
    fgets(transport,256,stdin);
    fgets(place,256,stdin);
    printf("My name is %s.\nI study at %s Secondary School.\n",name1,place);
    printf("I go to school by %s with my classmate %s.\nWe both like %s.",transport,name2,food);
    return 0;
}
