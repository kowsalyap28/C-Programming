//total palindrome words in a string
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    char words[100];
    int  j=0;

    int count=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
          words[j++]=str[i];
        }
        else
        {
            words[j]='\0';
            int len=j-1;
            int s=0;
            int found=1;
           while(s<len)    
           {
              if(words[s]!=words[len])
              {
                 found=0;
                 break;
              }
              s++;
              len--;
           } 
           if(found==1)
           {
             printf("%s",words);
             count++;
           }
           j=0;
        }
    }

words[j]='\0';
            int len=j-1;
            int s=0;
            int found=1;
           while(s<len)    
           {
              if(words[s]!=words[len])
              {
                 found=0;
                 break;
              }
              s++;
              len--;
           } 
           if(found==1)
           {
             printf("%s",words);
             count++;
           }
   printf("\n");
   printf("%d",count);
}

