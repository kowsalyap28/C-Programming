// Insert at the end
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
    int value;
    scanf("%d",&value);                  //get value to inset at end
    a[n]=value;                          //insert at end                          
    n++;                                 //increase array size   
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}