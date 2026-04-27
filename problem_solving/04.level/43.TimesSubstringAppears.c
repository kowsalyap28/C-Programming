// Count how many times a substring appears in a string
# include <stdio.h>
# include <string.h>
int main()
{
    char str[100],sub[100];
    
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';

    fgets(sub,100,stdin);
    sub[strcspn(sub,"\n")]='\0';

    int count=0;               
    int len1=strlen(str),len2=strlen(sub);

    int stop=len1-len2;    //stop the loop before the num of char less than len2


    for(int i=0;i<=stop;i++)
    {
        int j=0;
        for(j=0;j<len2;j++)
        {
            if(str[i+j]!=sub[j])
            break;                    //if single char in str is not equal to char in sub stop the j loop and iterate the i
        }
        if(j==len2)                    // if len2  is equal to j,new substring was found and than iterate the count
        count++;
    }
    printf("Time appears=%d",count);
}