//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/

#include<stdio.h>
#include<math.h>
int main(){
    float pri,ra,ti,si,ci;
    printf("Enter the Principal, Rate and Time respectively:\n");
    scanf("%f %f %f",&pri,&ra,&ti);
    si = (pri*ra*ti)/100;
    ci = pri * pow((1 + ra / 100.0), ti);
    printf("The Simple interest is : %f and the compound interest is : %f",si,ci);
    return 0;
}
