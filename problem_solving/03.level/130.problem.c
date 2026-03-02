//remove last occurance
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int re;
    scanf("%d",&re);  //removal element
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]==re)
        {
            for(int j=i;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
            n--;
            i--;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
}