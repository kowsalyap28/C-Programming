# include <stdio.h>
int main()
{
         int n,i,c=0,b=0;
         scanf("%d",&n);
         int a[n];
         for(i=0;i<n;i++)
         {
         scanf("%d",&a[i]);
}
         for(i=0;i<n;i++)
         {
            if(a[i]%2==0)
            {
                c=c+a[i];
            }
            else
            {
                b=b+a[i];
            }
         }
         printf("%d %d",c,b);
}