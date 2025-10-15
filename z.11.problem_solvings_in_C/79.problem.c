# include <stdio.h>
int main()
{
    int speed_limit,speed_of_vehicle;
    scanf("%d %d",&speed_limit,&speed_of_vehicle);
    if(speed_of_vehicle>speed_limit)
    {
        printf("Warning :: Go slow");
    }
    else{
        printf("you are at correct speed");
    }
    return 0;
}