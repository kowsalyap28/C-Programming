#  include <stdio.h>
int main()
{
 char ch;
 scanf(" %c",&ch);
 if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='I'||ch=='O'||ch=='E'||ch=='U')
 {
    printf("%c is vowel",ch);
 }
 else if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
 {
    printf("%c is consonant",ch);
 }
 else{
    printf("enter character Letter");
 }
}