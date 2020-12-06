#include<calculator_operations.h>
int sqaure()
{
    int side;
    printf("Enter the side");
    scanf("%d",&side);
    return(side*side);
}
int rectangle()
{
    int length,breadth;
    printf("Enter the length and breadth");
    scanf("%d%d",&length,&breadth);
    return(length*breadth);
}
double cone()
{
    double radius,height;
    printf("Enter the height and radius");
    scanf("%lf%lf",&radius,&height);
    return(0.33*3.14*radius*radius*height);
}
double  cylinder()
{
     double radius,height;
    printf("Enter the height and radius");
    scanf("%lf%lf",&radius,&height);
    return(3.14*radius*radius*height);
}
float BMI()
{
    int mass;
    double  height;
    printf("Enter the weight(in Kgs) and height(in meters");
    scanf("%d%lf",&mass,&height);
    if(height>0)
    return(mass/(height*height));
    else if(height<=0)
    {
    printf("enter correct details");
        return 0;
    }
}
