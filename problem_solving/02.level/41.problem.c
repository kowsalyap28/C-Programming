# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=1&&n<=26)
    {
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%c",'A'+j);
        }
     printf("\n");
    }
   }
   else{
    printf("%d is Invaid input",n);
   }
}
