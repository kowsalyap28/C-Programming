//to find the difference between sum of even and odd elements.
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
    int earr[n],ec=0,oarr[n],oc=0;                  //earr=even array ,ec=even count , oarr=odd array,oc=odd count
    for(int i=0;i<n;i++) 
    {
        if(arr[i]%2==0)
        {
            earr[ec]=arr[i];           //if even store it in even array
            ec++;
        }
        else
        {
             oarr[oc]=arr[i];
             oc++;
        }
    }
    int sum1=0,sum2=0;
    for(int i=0;i<ec;i++)
    {
        printf("%d is even numbers in array\n",earr[i]);
        sum1+=earr[i];
    }
     for(int i=0;i<oc;i++)
    {
        printf("%d is odd numbers in array\n",oarr[i]);
        sum2+=oarr[i];
    }
    int diff=sum1-sum2;
    if(diff<0)
    diff=-diff;
    printf("%d is diff",diff);
}