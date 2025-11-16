#include <stdio.h>

int main()
{
    int m,n;
    int firstperfect=0;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        int sum=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                sum+=j;
            }
        }
        if(sum==i&&i!=0)
        {
            if(firstperfect==0)
            {
                firstperfect=i;
            }
            else
            {
                printf("(%d, %d)\n",firstperfect,i);
               firstperfect=i;
            }
        
        }
    }
    

    return 0;
}