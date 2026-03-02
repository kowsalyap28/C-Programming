//rotate array k times using new array-right
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int newarray[n];
    int k;
    scanf("%d",&k);  //k for how many times to rotate
    k=k%n;
    for(int i=0;i<n;i++)
    {
        newarray[(i+k)%n]=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",newarray[i]);
    }
}