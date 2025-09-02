// wrote a programm to check if a student has passed (marks>=40) if it they will get distinction marks(marks>=75)

# include <stdio.h>
void main()
{
    int marks;
    printf("entre the marks:");
    scanf("%d",&marks);
    if(marks>=40)
    {
        if(marks>=75)
       {
          printf("passed and get distinction mark");
        }
        else
       {
          printf("passed but no distinction mark");
       }
    }
    else
    {
        printf("fail");
    }
}