//insert an element into an array only if there is space available
# include <stdio.h>
int main()
{
    int max;
    scanf("%d",&max);       //get maximum size of array
    int n;
    scanf("%d",&n);
    int a[n];
    if(n>max)               //Check if initial size exceeds max
    {
        printf("invalid size");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    if(max==n)                     //check if array is full               
    {
      printf("invalid size,array is full");
      return 0;
    }
 
    int value,position;
    scanf("%d %d",&position,&value);     // get position and value
        for(int i=n;i>position;i--)
        {
            a[i]=a[i-1];
        }
     a[position]=value;   
     n++;
    
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}