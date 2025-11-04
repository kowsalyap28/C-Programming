# include <stdio.h>
int main()
{
    int month;
    scanf("%d",&month);
    if(month==1 || 2 || 10|| 11||12)
    {
        printf("sunrise: 7:00AM\n");
        printf("sunset: 5:30PM");
    }
    else if(month==3)
    {
        printf("sunrise: 6:30AM\n");
        printf("sunset: 6:30PM");
    }
    else if(month==4 ||5 ||6 ||7 ||8)
    {
        printf("sunrise: 5:30AM\n");
        printf("sunset: 7:30PM");
    }
    else if(month==9)
    {
        printf("sunrise: 6:30AM\n");
        printf("sunset: 6:00PM");
    }
    else
    {
        printf("invalide input");
    }
    return 0;
}