# include <stdio.h>
int main()
{
char name[100];
int roll_no,total_class,no_of_attended_class;
float P;
 scanf("%d",&roll_no);
 scanf("%d",&total_class);
 scanf("%d",&no_of_attended_class);
 scanf("%s",name);

P=((float)no_of_attended_class/total_class)*100;
printf("Attendance Percentage:%.0f%%",P);

}