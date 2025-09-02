// problem 2: Area of circle
# include <stdio.h>
void main()
{
float radius,area;
    printf("enter the radius of cirle:");
    scanf("%f",&radius);
if(radius<=0)
{
    printf("give the radius in positive:");
}
else
{
    area=3.14*radius*radius;
    printf("area of circle=%f",area);
}
}