# include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<0||b<0)
    {
        printf("Negative Input");
        return 0;
    }
   for(int i=1;i<=a*b;i++)
   {
    if(i%a==0&&i%b==0)
    {
     printf("%d",i);
     break;
    }
   }
    


}