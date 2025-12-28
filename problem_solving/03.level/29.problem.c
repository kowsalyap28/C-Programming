//insert after a given value
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int value,insertvalue,position;
    scanf("%d %d",&value,&insertvalue);
    for(int i=0;i<n;i++)
    {
        if(a[i]==value)
        {                   
            position=i;                  //find the position of given value
        }
    }
    for(int i=n;i>position+1;i--)         
    {
        a[i]=a[i-1];                     //insert value of n=n-1;
    }
    a[position+1]=insertvalue;
    n++;
    for(int i=0;i<n;i++)
    {
         printf("%d ",a[i]);
    }
}