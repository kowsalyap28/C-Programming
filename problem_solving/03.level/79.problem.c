//celsius to kelvin and Fahrenheit
# include <stdio.h>
int main()
{
    float c;
    scanf("%f",&c);
    float k,F;
    float arr[2];
    for(int i=0;i<2;i++)
    {
      if(i==0) 
       arr[i]=c+273.15;  //kelvin
      else
       arr[i]=(c*1.80)+32.00; //Fanrenheit
       printf("%f ",arr[i]);
    }
}