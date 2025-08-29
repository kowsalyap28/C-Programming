// write a programm to display month name based on month number (1 january)(2  febuary)
# include <stdio.h>
void main()
{
    int num;
    printf("entre the num of the month(1-12):");
    scanf("%d",&num);
    switch(num)
{
case 1:
printf("january");
break;
case 2:
printf("february");
break;
case 3:
printf("march");
break;
case 4:
printf("april");
break;
case 5:
printf("may");
break;
case 6:
printf("june");
break;
case 7:
printf("july");
break;
case 8:
printf("August");
break;
case 9:
printf("september");
break;
case 10:
printf("october");
break;
case 11:
printf("november");
break;
case 12:
printf("december");
break;
default :
printf("default input");
break;
}
}