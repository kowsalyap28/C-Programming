# include <stdio.h>
int main()
{
    int sn,en;
    scanf("%d %d",&sn,&en);
      if(sn%2!=0&& en%2!=0){
            printf("%d and %d are not Even",sn,en);
            return 0;
          }
    for(int i=sn;i<=en;i++)
    {
        if(sn%2==0&&en%2==0)
        {
        int a=i+1;
        if(a%2==0)
        {
           printf("%d",a);
           break;
        }
        }
   
}}