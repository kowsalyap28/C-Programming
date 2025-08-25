// write a programm to check if the entered character is a vowel

# include <stdio.h>
void main()
{

    char ch;
    printf("enter the ch:");
    scanf("%c",&ch);

    if(ch=='A' || ch=='a' || ch =='E' || ch == 'e'|| ch=='I'|| ch=='i'|| ch=='O'||ch=='o'|| ch == 'u'|| ch =='U' )
    {
    
        printf(" the charcter is vowel:");   
    }
} 