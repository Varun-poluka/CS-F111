#include <stdio.h>

int main()
{
    double a, b, sq;
    printf("what are the values of a and b: ");
    scanf("%lf%lf", &a, &b);
    sq = (a*a)+(b*b)+(2*a*b);
    printf("(a+b)^2 is %lf\n", sq);
    return 0;
}    
    
