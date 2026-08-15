//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include<stdio.h>
int main(){
    float a,b,area,perimeter;
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%f %f",&a,&b);
    area = b*a;
    perimeter = 2*(a+b);
    printf("The area is %f",area);
    printf("\nThe perimeter is %f",perimeter);
    return 0;
}
