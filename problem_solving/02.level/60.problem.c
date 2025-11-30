# include <stdio.h>
# include <ctype.h>
int main()
{
    char ch;
    int count=0;
    while((ch=getchar())!='\n')
    {
       ch=tolower(ch);
       if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
       {
       count++;
       }
    }
    printf("%d",count);
}