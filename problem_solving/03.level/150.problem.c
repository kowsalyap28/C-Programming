//. C programto insert an element in an array.
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
    int element,position;
    scanf("%d %d",&element,&position);
    for(int i=n;i>position;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[position]=element;
    n++;
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}