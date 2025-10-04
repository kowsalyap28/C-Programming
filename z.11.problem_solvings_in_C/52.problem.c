# include <stdio.h>
int main()
{
int M,B,P,C,Co;
scanf("%d %d %d %d %d",&M,&B,&P,&C,&Co);
float average=((float)(M+B+P+C+Co)/5),percentage=(((float)M+B+P+C+Co)/500)*100;
printf("%.2f\n",average);
printf("%.2f\n",percentage);
if(percentage>=95)
{
    printf("A");
}
else if(percentage>=85)
{
    printf("B");
}
else if(percentage>=75)
{
    printf("C");
}
else if(percentage>=65)
{
    printf("D");
}
else if(percentage>=45)
{
    printf("E");
}
else
{
    printf("F");
}
}

