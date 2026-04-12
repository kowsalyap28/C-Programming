# include <stdio.h>
# include <string.h>
int main()
{
    char str[100];
    char found[100]={0};

    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    
    for(int i=0;str[i]!='\0';i++)
    {
     int count=1;

        if(found[i]==1)                         //if same char is repated just skip to count
        continue;

        for(int j=i+1;str[j]!='\0';j++)
        {
             if(str[i]==str[j])
             {
             count++;
             found[j]=1;
             }
        }
        
        printf("%c - %d frequency\n",str[i],count);
    }
}