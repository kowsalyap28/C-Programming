// write a programm to check if  the temperature is greater than 30 degee C (printf"hot day")
# include <stdio.h>
void main()
{
    int temperature;
    printf("enter the temperature");
    scanf("%d",&temperature);
    if(temperature>30)
    {
        printf("hot day");
    }
}