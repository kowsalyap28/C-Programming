//count occurence of specific number
# include <stdio.h>
int main()
{
    int n,count=0,nc;              //nc = which number you want to check
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&nc);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==nc)
        count++;
    }
   printf("%d",count);
}