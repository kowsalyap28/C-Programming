//minimium cuts to divide a circle
# include <stdio.h>
int main()
{
    int n,res;
    scanf("%d",&n);
    if(n==1)
    res=0;
    else if(n%2==0)   //if parts of circle is even then the no of cut is n/2
    res=n/2;
    else
    res=n;
    printf("%d",res);
    return 0;
}