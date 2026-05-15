//Reverse Only NON-Palindrome Words in a Sentence
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    char word[100];
    int j=0;
   
     char nonpal[100];

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
          word[j++]=str[i];       //store char in word
        }
        else{ 
            word[j]='\0';          //make it as last word
            int s=0;               //for rever checking starting loop
            int len=j-1;           //for rever checking ending loop
            int found=1;
            while(s<len)
            {
                if(word[s]!=word[len])
                {
                     strcpy(nonpal,word);
                     found=0;
                     break;
                }
                s++;
                len--;
            }
            if(found==0)
            {
                 int slen=strlen(nonpal)-1;   //for reverse checking ending loop
                 int sl=0;                     //for reverse checking starting loop
                 while(sl<slen)
                 {
                    char tem=nonpal[sl];              //reverse swapping concept
                    nonpal[sl]=nonpal[slen];
                    nonpal[slen]=tem;

                    sl++;
                    slen--;
                 }
                 printf("%s ",nonpal);
            }
            else{
                printf("%s ",word);
            }
            j=0;                        //reset next words first character index as 0
        }
    }
    //for last word
     word[j]='\0';
            int s=0;
            int len=j-1;
            int found=1;
            while(s<len)
            {
                if(word[s]!=word[len])
                {
                     strcpy(nonpal,word);
                     found=0;
                     break;
                }
                s++;
                len--;
            }
            if(found==0)
            {
                 int slen=strlen(nonpal)-1;
                 int sl=0;
                 while(sl<slen)
                 {
                    char tem=nonpal[sl];
                    nonpal[sl]=nonpal[slen];
                    nonpal[slen]=tem;

                    sl++;
                    slen--;
                 }
                 printf("%s ",nonpal);
            }
            else{
                printf("%s",word);
            }
}