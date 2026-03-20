// # include <stdio.h>
// # include <string.h>
// int main()
// {
//     char str[100];
//     fgets(str,100,stdin);
//     str[strcspn(str,"\n")]='\0';
    
//     int count=0;
//     for(int i=0;str[i]!='\0';i++)
//     {
//        if(str[i]==' ')
//        {
//         printf("%d\n",count);      //print count before space
//         count=0;
//        }
//        else{
//         count++;
//        }
     
//     }
//       printf("%d",count); //print the count of last word
// }
// # include <stdio.h>
// # include <string.h>
// int main()
// {
//     char str[100];
//     char words[100];      //for to print the word
//     char longest[100];   //to print longest word
//     fgets(str,100,stdin);
//     str[strcspn(str,"\n")]='\0';
//     int j=0,count=0,max=0;
//     for(int i=0;str[i]!='\0';i++)
//     {
//         if(str[i]!=' ')
//         {
//             words[j]=str[i];
//             j++;
//             count++;        //to print the count of words
//         }
//         else{
//            words[j]='\0';   // to make the word end
//             // printf("%s-%d",words,count);
//             // printf("\n");

//             if(count>max)
//             {
//                 max=count;
//                 strcpy(longest,words);
              
//             }
//             //reset
//             j=0;
//             count=0;
//         }
//     }
//     //to print last word
//     words[j]='\0';
//     // printf("%s-%d",words,count);
//     if(count>max)
//     {
//         max=count;
//         strcpy(longest,words);
//     }
//   printf("%s",longest);
// }
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100],words[100],longest[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int j=0,count=0,max=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
          words[j]=str[i];
          j++;
          count++;
        }
        else 
        {
            words[j]='\0';
            if(count>max)
            {
               max=count;
               strcpy(longest,words);
            }
                //reset 
                j=0;
                count=0;
        }
    }
    //for last word
    if(count>max)
    {
        max=count;
        strcpy(longest,words);
    }
    printf("%s",longest);
}