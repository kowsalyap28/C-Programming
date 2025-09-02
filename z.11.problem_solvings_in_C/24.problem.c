 /* write a programm to calculate electricity bill : up to 100 unit(rupee 1 per unit )  101-200units(rupee 2 per unit)
  above 200 units (rupee 3 per unit) */
  # include <stdio.h>
  void main()
  {
    int unit,amount;
    printf("enter the unit(1 - 200):");
    scanf("%d",&unit);
  
{
if(unit<=100)
{
amount = unit *1;
printf("amount = %d",amount);
}
 else if (unit >=100 && unit<=200)
{

amount = unit *2;
printf("amount =%d",amount);
}
else if (unit>200)
{
amount = unit *3;
printf("amount=%d",amount);
}
else
{
printf("invalid input");
}

  }
}