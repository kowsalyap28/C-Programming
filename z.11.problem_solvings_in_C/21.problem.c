// write a programm to assign a grade based on marks;  90> A  , 75-89 :B , 50-74 :C ;below 50 : fail

# include <Stdio.h>
void main()
{
int mark;
printf("entre the mark:");
scanf("%d",&mark);
if(mark>=90)
{
    printf("your grade is A");
}
else if (mark >=75 &&  mark  <= 89)
{
    printf("your grade is B");
}
else if(mark >= 50 && mark<=74)
{
    printf("your grade is C");
}
else if(mark<50)
{
    printf("you are fail");
}
else
{
    printf("invalid operator");
}

}