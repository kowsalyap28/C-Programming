//Merge two arrays and sort the result
# include <stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int a[n1+n2];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);     //get first array
    }
    int b[n2];
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);   //get second array
    }
    for(int i=0;i<n2;i++)
    {
        a[n1+i]=b[i];       //mearge b to a
    }
    int tem;
    for(int i=0;i<(n1+n2)-1;i++)
    {
        for(int j=i+1;j<n1+n2;j++)
        {
        if(a[i]>a[j])
        {
            tem=a[i];
            a[i]=a[j];
            a[j]=tem;
        }

        }

    }
    for(int i=0;i<n1+n2;i++)
    {
        printf("%d ",a[i]);
    }
}