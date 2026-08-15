//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main(){
    float temp,farh;
    printf("Enter the temperature in Celsius:\n");
    scanf("%f",&temp);
    farh = (temp*9/5)+32;
    printf("The temperature in Farhenite is:%f",farh);
    return 0;

}
