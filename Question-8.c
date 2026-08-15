//Q8: Write a program to find and display the sum of the first n natural numbers.

/*
Sample Test Cases:
Input 1:
5
Output 1:
Sum=15

Input 2:
10
Output 2:
Sum=55

*/

#include<stdio.h>
int main(){
    float n ,sum;
    printf("Enter a number:\n");
    scanf("%f",&n);
    sum = (n/2)*((2*1)+(n-1));
    printf("The sum of the first n terms is %.0f",sum);
    return 0;
}
