//insertion in descending order 
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
    int value,tem,j;             //tem---to store temporary value
    scanf("%d",&value);          //get value to insert
    a[n]=value;                  //insert value at the end
    n++;                         //increase array size
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)   //sort in descending order
        {
            if(a[i]<a[j])
            {
                tem=a[i];
                a[i]=a[j];
                a[j]=tem;
            }
        }
       
    }
   for(int i=0;i<n;i++)
   {
    printf("%d ",a[i]);
   }
}