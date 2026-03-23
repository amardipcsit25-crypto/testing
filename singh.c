#include<stdio.h>
int main()
{
    int a, b;
    printf("enter the two numbers that you want to add: ");
    scanf("%d %d", &a, &b);
    printf("the sum of %d and %d is %d", a, b, a+b);
    printf("the product of %d and %d is %d", a, b, a*b);
    return 0;
}