//number of digit one
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;            //set count=0
    for(int i=1;i<=n;i++) //check 1 to n
    {
      int  digit=i;
      while(digit>0)
      {
        if(digit%10==1)         //extract last digit and check whether it is 1 if it 1 count it
        count++;

        digit/=10;
      }
    }                            //check until n
    printf("%d",count);
}