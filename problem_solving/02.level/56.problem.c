# include <stdio.h>
# include <math.h>
int main()
{
    int vx,nt,i;  //vx=value for x ,nt=number of terms
    float sum=0.0;
    scanf("%d %d",&vx,&nt);
    for(i=0;i<nt;i++)
    {
        int a=i*2;
        int power=pow(vx,a);
        float formula=power/tgamma(a+1);
        if(i%2!=0)
        {
            formula=-formula;
        }
        sum=sum+formula;
    }
    printf("%.2f",sum);

}