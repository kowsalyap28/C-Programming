//time format
# include <stdio.h>
# include <string.h>
int main()
{
    char time[9];
    scanf("%8s",time);
    int hour,min,sec;
    if( sscanf(time,"%d:%d:%d",&hour,&min,&sec)==3)
    {
        printf("%d:%d:%d",hour,min,sec);
    }
    else{
        printf("invalid format");
    }
}