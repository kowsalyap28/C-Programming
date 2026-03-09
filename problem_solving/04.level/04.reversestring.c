//reverse by swapping
# include <stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i,j;
    for(i=0;str[i]!='\0';i++);     //loop end

    j=i-1;  //to find length

    for(int i=0;i<j;i++,j--)
    {
        int tem=str[i];
        str[i]=str[j];
        str[j]=tem;
    }
    printf("%s",str);
}