//anagram 
//concept (sort and compare)
# include <stdio.h>
# include <string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    //to store it to use at last to print anagram
     char a[100] ,b[100];
    strcpy(a, str1);
    strcpy(b, str2);

    if (strlen(str1) != strlen(str2)) {
        printf("%s and %s are not anagram", a, b);
        return 0;
    }
    for(int i=0;str1[i]!='\0';i++)
    {
      for(int j=i+1;str1[j]!='\0';j++)
      {
        if(str1[i]>str1[j])
        {
              char tem=str1[i];
              str1[i]=str1[j];
              str1[j]=tem;                 //sort str1
        }
      }
    }
    for(int i=0;str2[i]!='\0';i++)
    {
        for(int j=i+1;str2[j]!='\0';j++)
        {
            if(str2[i]>str2[j])
            {
                char tem=str2[i];             //sort str2
                str2[i]=str2[j];
                str2[j]=tem;
            }
        }
    }
    int equal=1;
    for(int i=0;str1[i]!='\0'&& str2[i]!='\0';i++)
    {
        if(str1[i]!=str2[i])                      //check both str1 and str2 are equal
        {
            equal=0;
            break;
        }
    }
    if(equal==1)
    printf("%s and %s are anagram",a,b);
    else 
        printf("%s and %s not a anagram",a,b);
}