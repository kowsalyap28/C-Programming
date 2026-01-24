//pivot integer
# include <stdio.h>
int main()
{
    int ns,i;
    scanf("%d",&ns);
    int arr[ns];
    for(i=0;i<ns;i++)
    {
        scanf("%d",&arr[i]);
    }
    int index;
    scanf("%d",&index);                    //indes for which integer we want to check
    int left,sum1=0,sum2=0;
    for(int i=0;i<index;i++)
    {     
       sum1+=arr[i];
    }
    for(int i=index+1;i<ns;i++)
    {
        sum2+=arr[i];
    }
    printf("%d %d",sum1,sum2);
    if(sum1==sum2)
    printf("pivot integer");
    else
    printf("not a pivot integer");
    return 0;
}