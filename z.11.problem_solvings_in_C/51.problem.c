# include <stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,s6;
scanf("%d %d %d %d %d %d",&s1,&s2,&s3,&s4,&s5,&s6);
float average,percentage;
percentage=(((float)s1+s2+s3+s4+s5+s6)/600)*100;
printf("%f\n",percentage);
if(percentage>=95)
{
    printf("A");
}
else if(percentage>=85)
{
    printf("B");
}
else if(percentage>=75)
{
    printf("C");
}
else if(percentage>=65)
{
    printf("D");
}
else if(percentage>=45)
{
    printf("E");
}
else
{
    printf("F");
}
}