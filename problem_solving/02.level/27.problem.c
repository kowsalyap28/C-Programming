# include <stdio.h>
# include <ctype.h>
int main()
{
   char ch;

   int c=0,v=0;
   while(1)
   {
    scanf(" %c",&ch);
    if (ch == '0')   // stop condition
    break;

   ch=tolower(ch);
    if(ch>='a'&&ch<='z')
    {
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||c=='u')
    {
    c++;
    }
    else{
        v++;
    }
   }
   else
   {
    printf("invalid input");
   }
   }

if(v==c)
{
    printf("both are equal");
    
}
else if(v==0&&c==0)
{
    printf("invalid input");
}
else if(v>c)
{
    printf("vowel is predominant");
}
else if(c>v)
{
    printf("constant is predominat");
}
else
   {
    printf("invalid input");
   }
return 0;
}
