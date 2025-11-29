//exploring the growth series
 # include <stdio.h>
int main()
{
    int nt,sn,count=0;      //nt=number of terms  sn=starting number
    scanf("%d %d",&nt,&sn);
    for(int i=sn;count<nt;i++)
    {
        printf("%d ",sn);
        sn=sn*2;
        count++;
    }
}