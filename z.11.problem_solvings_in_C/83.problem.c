# include <stdio.h>
int main()
{
    int num[10],i,n;
    int largest;
    scanf("%d",&n);  // n is how many num ther user want to give the input and ger the output
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n;i++)
    {
    printf("num[%d]=%d\n",num[i],num[i]);
    }
}