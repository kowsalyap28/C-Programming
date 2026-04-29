//longest and shortest word
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100],words[100],maxword[100],minword[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int j=0,count=0,min=100,max=0;
    for(int i=0;str[i]!='\0';i++)
    {
       if(str[i]!=' ')
       {
        words[j]=str[i];
        j++;
       }
       else
       {  
          words[j]='\0';
          count=j;
          if(count>max)
          {
            max=count;
            strcpy(maxword,words);
             
          }
          if(count<min)
          {
            min=count;
            strcpy(minword,words);
          }
          //reset the value
          j=0;
          count=0;
       }
    }
    //for last word
    words[j]='\0';
          count=j; 

          if(count>max)
          {
            max=count;
            strcpy(maxword,words);
             
          }
          if(count<min)
          {
            min=count;
            strcpy(minword,words);
          }
    printf("%s,%s",maxword,minword);

}