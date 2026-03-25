#include<stdio.h>
int main(){
        int num1, num2, difference;
    printf("Enter two numbers that you want: ");
    scanf("%d %d", &num1, &num2);
    difference = num1 - num2;
    printf("Difference: %d\n", difference);
    return 0;
}