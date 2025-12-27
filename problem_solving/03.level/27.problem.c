// insert at middel
# include <stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int a[n+1];                       //extra space for insertion
 for(int i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 int value,position;               //get value to insert at middle
 scanf("%d",&value);
   for(int i=n;i>n/2;i--)
   {
    a[i]=a[i-1];                  //shift element to right untill middle position
   } 

a[n/2]=value;                     //assign value to middel index
n++;                              //increase array size
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
 
}