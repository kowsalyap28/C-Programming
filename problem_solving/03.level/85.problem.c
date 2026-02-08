//remove duplicate
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;i++)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<n-1;k++)
                {
                    arr[k]=arr[k+1];
                }
            
            j--;
            n--;
            }
        }
    }

}