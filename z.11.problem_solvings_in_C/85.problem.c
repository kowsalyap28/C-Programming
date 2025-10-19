# include <stdio.h>
int main()
{ 
  int a[10];
  int i;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);  // here scanf is used to get input 
  }
  for(i=0;i<10;i++)
  {
    printf("a[%d]=%d ",a[i],a[i]);

  }
  printf("\n");

 int k;
  for(k=9;k>=0;k--)
  {
    printf("a[%d]=%d ",a[i],a[k]);
  }
 
}
