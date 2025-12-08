//Count how many times a given number appears in an array
# include <stdio.h>
int main()
{
    int n;                            // n for size of array 
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);           //to get input from the user and store it int a[0] to a[n-1]
    }
    int gn,count=0;
    scanf("%d",&gn);                // gn=for which number want to check how many times repeated in a[n]
    for(int i=0;i<n;i++)
    {
        if(a[i]==gn)
        count++;
    }
   printf("%d",count);
}