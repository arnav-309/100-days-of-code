//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/

#include<stdio.h>
#include<math.h>
int main(){
    float a,b;
    printf("Enter the first number\n");
    scanf("%f",&a);
    printf("Enter the second number\n");
    scanf("%f",&b);
    printf("The sum of the two numbers is %.2f,\nThe difference of the two numbers is %.2f,\nThe product of the two numbers is %.2f,\nThe quotient of the two numbers is %.2f",a+b,a-b,a*b,a/b);
    return 0;
}
