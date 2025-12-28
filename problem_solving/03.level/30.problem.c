//insert before a given value
# include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n+1];
  for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  int value,insertvalue,position;
  scanf("%d %d",&value,&insertvalue);
  for(int i=0;i<n;i++)
  {
    if(a[i]==value)                   //find the position of given value
    {
        position=i;
    }
  }
  for(int i=n;i>position;i--)
  {
    a[i]=a[i-1];                      //shift elements to the right
  }
  a[position]=insertvalue;           //insert new value
  n++;                                //increase array size
  for(int i=0;i<n;i++)
 {
    printf("%d",a[i]);
 }

}