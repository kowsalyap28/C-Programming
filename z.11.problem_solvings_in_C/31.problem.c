// Data type conversion 
# include <stdio.h>
void main()
{
    char ch1;
    printf("enter the character: ");
    scanf("%c",&ch1);
    printf("ch=%c\n",ch1);
    int a=ch1;
    printf("a=%d\n",a);
    float f=a;
    printf("f=%f\n",f);
    double lf=f;
    printf("lf=%lf",f);

    // char-->int-->float-->double-->(implict")

}