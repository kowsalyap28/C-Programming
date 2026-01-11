//plus one
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]<9)
        {
            a[i]=a[i]+1;                //if digit is less than 9 add 1 to it
            break;
        }
        else
        {
            a[i]=0;                   //if digit = 9 , add 0 
        }
    }
    if(a[0]== 0)
    {
        printf("1 ");                    //and carry is 1
        for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
    else
    {
    for(int i=0;i<n;i++)
        {
            printf("%d ",a[i]);
        }
    }
}