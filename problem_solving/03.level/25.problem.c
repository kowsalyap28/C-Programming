//Insert  number at beginning
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
    int value,position=0;
    scanf("%d",&value);            //get the value to insert at beginning
    for(int i=n;i>0;i--)
    {
        a[i]=a[i-1];               // shift elements to the  right and create  space at 0 index
    }  
    a[position]=value;                   
    n++;                           //after adding a new element ,array size will be increase
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}