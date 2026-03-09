//check palindrome
# include <stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int i,j;        //i time loop run j for length
    for(i=0;str[i]!='\0';i++);

    
    j=i-1;               //to find lenght of str

    int ispalindrome=1;
    for(i=0;i<j;i++,j--)
    {
        if(str[i]!=str[j])
        {
        ispalindrome=0;
        break;
        }

    }
    if(ispalindrome)
    {
        printf("%s is palindrome",str);
    }
    else
     printf("%s is not a palindrome",str);
}