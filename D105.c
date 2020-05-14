#include <stdio.h>
int main() {
    int y1,m1,d1,y2,m2,d2;
    scanf("%d %d %d", &y1, &m1, &d1);
    scanf("%d %d %d", &y2, &m2, &d2);
    int c1= y1*1000000+100*m1+d1;
    int c2= y2*1000000+100*m2+d2;
    if (c1<c2) {
        printf("Before");
    }
    else if (c1==c2) {
        printf("Same");
    }
    else {
        printf("After");
    }
    return 0;
}
