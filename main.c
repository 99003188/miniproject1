#include"calculator_operations.h"
#include<stdio.h>
int main()
{
    int operation;
    printf("Enter the operation");
    scanf("%d",&operation);
    switch(operation)
    {
    case 1:
        printf("The area of square = %d",sqaure());
        break;
    case 2:
        printf("The area of rectangle = %d",rectangle());
        break;
    case 3:
        printf("The volume of a cone = %lf",cone());
        break;
    case 4:
        printf("he volume of a cone =%lf",cylinder());
        break;
    case 5:
        printf("The BMI is %0.2lf",BMI());
        break;
    }
    return 0;
}
