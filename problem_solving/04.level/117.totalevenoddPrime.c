//count the total characters in a string and check the number is odd,even,prime
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    printf("length=%d\n",len);
    if(len%2==0)
    {
        printf("%d is even\n",len);
    }
    else if(len%2==1)
    {
        printf("%d is odd\n",len);
    }
    int prime=1;
    if(len<=1)
    {
        prime=0;
    }
    for(int i=2;i*i<=len;i++)
    {
        if(len%i==0)
        {
            prime=0;
            break;
        }
    }
    if(prime==1)
    {
        printf("%d is prime number",len);
    }
    else if(prime==0)
    {
        printf("%d is not a prime number",len);
    }
    return 0;
}