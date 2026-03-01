// Get two user arrays, the sum of the first array should be less than
// the sum of the second array, add the elements of the second array, and
// print the min count of the number of elements that can be added to get
// the sum of the first array.
# include <stdio.h>
int main()
{
    int n1;
    scanf("%d",&n1);
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    int n2;
    scanf("%d",&n2);
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n1;i++)
    {
        sum1=sum1+arr1[i];
    }
    for(int i=0;i<n2;i++)
    {
        sum2=sum2+arr2[i];
    }
    int min;
    if(sum1<sum2)
    {
        min=(sum2-sum1+1)/2;
        printf("%d",min);
    }
    else{
        printf("no lesser element found!");
    }
}
  
    



