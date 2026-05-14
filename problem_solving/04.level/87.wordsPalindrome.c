//Write a program to check whether a sentence is a palindrome at word level (not character level)
# include <stdio.h>
# include <string.h>
int main()
{
    char str[200];
    char words[20][20];
    fgets(str,200,stdin);
    str[strcspn(str,"\n")]='\0';
    int j=0,k=0;           //j to store count of words in str  //k to store char of eacn word in a str
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
            words[j][k++]=str[i];
        }
        else{
            words[j][k] = '\0';       //to store last char of each word 
            j++;           //to increase the count of words
            k=0;          // and reset the index of first char in words as 0
        }
    }
    //for last word
    words[j][k]='\0';
    int totallen=j;
    int found=1;
    int len=totallen;
    for(int i=0;i<len;i++)
    {
        if(strcmp(words[i],words[len])!=0)
        {
           found=0;
           break;
        }
        len--;
    }
    if(found==1)
    {
         printf("%s is palindromic sentence",str);
    }
    else 
    {
         printf("%s not  palindromic sentence",str);
    }
}