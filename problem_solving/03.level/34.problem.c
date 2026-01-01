//insert multiple values at beginning
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);           //get input for first array
    }
    int n1;
    scanf("%d",&n1);
    int b[n1];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&b[i]);            //get input for second array
    }
    int fn=n+n1,c[fn];                //fn=first  array size + second array size 
    for(int i=0;i<n1;i++)
    {
        c[i]=b[i];                    //shift the second set elements to the array at first
    }
    for(int i=0;i<n;i++)
    {
        c[n1+i]=a[i];                 //shift the first set elements after the second set
    }
    for(int i=0;i<fn;i++)
    {
        printf("%d ",c[i]);
    }
}
