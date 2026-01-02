//merge two arrays without third array
# include <stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int a[n1+n2];                 //assign enough space
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);       //get first array
    }
    int b[n2];
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);        //get second array
    }
    for(int i=0;i<n2;i++)
    {
        a[n1+i]=b[i];             //merge b into a 
    }
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",a[i]); 
    }
}