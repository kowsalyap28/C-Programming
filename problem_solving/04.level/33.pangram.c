# include <stdio.h>
# include <string.h>
# include <ctype.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    int alpha[26]={0};              //to store 0 for (a-z);
    
    for(int i=0;str[i]!='\0';i++)         // check for char  
    {
         char ch = tolower(str[i]);

         if(ch >= 'a' && ch <= 'z')
         {
            alpha[ch-'a']=1;                       // if any  value is found btw a t0 z assign as  1  ....,     [ch - a] =if ch =k  [107-97]  and save that k is found in string
         }
    }
    
    int found =1;
    for(int i=0;i<26;i++)  //check for a to z  is present or not
    {
           if(alpha[i]==0)                   // if the alphabet is not found than break it and found as non pangram
           {
            found=0;
              break;
           }
    }

    if(found==0)
    printf("NOT A PANGRAM");
    else 
    printf("PANGRAM");
}