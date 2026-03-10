// to and SecondLargest Number in array.
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int firstmax=arr[0];
    int secondmax=arr[0];
    for(int i=1;i<n;i++)
    {
       if(arr[i]>firstmax)            //to check all element are greater than a[0]
       {
            secondmax=firstmax;
            firstmax=arr[i];
       }
       else if(arr[i]>secondmax && arr[i]!=firstmax)
       {
        secondmax=arr[i];
       }
    }
    printf("%d",secondmax);
}