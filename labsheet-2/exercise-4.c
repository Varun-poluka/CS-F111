#include <stdio.h>

int main()
{
    float a, b, diff, pro;
    printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
    printf("enter beginning odometer reading? ");
    scanf("%f", &a);
    printf("enter ending odometer reading? ");
    scanf("%f", &b);
    diff = b-a;
    printf("you travelled %f miles at Rs 25 per mile,\n", diff);
    pro = diff*25;
    printf("your reimbursement is Rs %f\n", pro);
}