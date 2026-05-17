//Find the largest and smallest word in a string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int max=0;
    int min=100;
    char maxw[100];
    char minw[100];
    char pmax[100],pmin[100];
   int k=0,m=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]!=' ')
        {
             maxw[m++]=str[i];
            minw[k++]=str[i];
        }
        else{
            maxw[m]='\0';
            minw[k]='\0';
            if(m>max)
            {
                max=m;
                strcpy(pmax,maxw);
            }
            if(k<min && k>0)
            {
                min=k;
                strcpy(pmin,minw);
            }
            m=0;
            k=0;
        }
    }
    //for last word
     maxw[m]='\0';
            minw[k]='\0';
            if(m>max)
            {
                max=m;
                strcpy(pmax,maxw);
            }
            if(k<min)
            {
                min=k;
                strcpy(pmin,minw);
            }
            m=0;
            k=0;
            printf("%s %s",pmax,pmin);
}