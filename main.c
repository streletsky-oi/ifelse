#include <stdio.h>
#include <math.h>
int main(){
    int a, b,c;
    float d, x1, x2, D;
    scanf("%d %d %d", &a, &b, &c);
    d = b*b - 4 * a*c;
    D = sqrt(d);
    x1 = (b* -1 - D) / (2 * a);
    x2 = (b*-1 + D) / (2 * a);
    printf("first is %f", x1);
    printf("second is %f", x2);



    
}