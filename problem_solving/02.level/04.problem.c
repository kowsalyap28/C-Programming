# include <stdio.h>
int main()
{
    int fn,diff,tn,p,sum=0;   //fn=first term ,  diff = comman difference ,  tn=total num of terms p=process,  we want to add total num of values stores in terms so we use sum=0 at first
    scanf("%d %d %d",&fn,&diff,&tn);
    for(int i=0;i<tn;i++)
    {
      p=fn+i*diff;
      printf("%d ",p);
      sum=sum+p;
    }
    printf("\n");
    printf("sum=%d",sum);
}