//36. Removingvthe first occurrence of a given number  from an array.
// Remove Only that number occurrence:
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int re;
    scanf("%d",&re);  //get removal element
    for(int i=0;i<n;i++)
    {
        if(arr[i]==re)
        {
            for(int j=i;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
            n--;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}