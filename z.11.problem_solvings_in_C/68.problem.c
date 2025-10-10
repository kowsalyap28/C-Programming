# include <stdio.h>
int main()
{
    int no_of_hours,hourly_rate;
    float salary;
    scanf("%d %d",&no_of_hours,&hourly_rate);
    if(no_of_hours<=40)
    {
        
        printf("%d",no_of_hours*hourly_rate);
    }
    else 
    {
        salary=(40*hourly_rate)+(((hourly_rate-40))*(float)hourly_rate*1.5);
        printf("%.2f",salary);
    }
    
}