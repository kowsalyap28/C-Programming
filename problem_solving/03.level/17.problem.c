// finding the middle digit
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
        if(n%2==0)                                   // if n is even digit the middle no will be two
        {

           int  middle1=(n/2)-1,middle2=n/2;          // middle=(n/2)-1 because array index start from 0 to n-1 
            printf("%d %d",a[middle1],a[middle2]);
        }
        else
        {
            int middle=(n/2);                        // if toatl number is 5 and the index will be 0 to 4,the middle index is 2 ,when we divide 5/2 the divisor is 2 and the middle index is also 2
          printf("%d",a[middle]);
        }
    
}