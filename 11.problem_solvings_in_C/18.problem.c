// write a programm to check if a number is even,if it chech it also divide by 5
# include <stdio.h>
void main()
{

int num;
printf(" entre the number:");
scanf("%d",&num);
if(num%2==0)
{
 if(num%5==0)
 {
    printf("number is even and divisible by 5:");
 }
 else
 {
    printf("number is even but not divisible by 5");
 }
}
else
{
    printf(" number is odd");
}

}