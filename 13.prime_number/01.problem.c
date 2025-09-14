# include <stdio.h>
void main()
{
 int i, n,flag=0;
 printf("enter the number:");
 scanf("%d",&n);
 for(i=2;i<n;i++)
{
    if(n%i != 0)
    continue;
    else
    {
        flag=1;
        printf("not a prime number");
        break;
    }
}

if(flag==0)
  {

    printf("prime number");
    
  }

}