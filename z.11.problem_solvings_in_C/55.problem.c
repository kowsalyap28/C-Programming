# include <stdio.h>
int main()
{
  int steps,hour,minute;
  float spm;
  scanf("%d %d",&steps,&hour);
  if(steps<0||hour<0)
  {
  printf("invlaid");
  return 0;
  }
  minute=60*hour;
  spm=((float)steps/minute);
    printf("%.1f\n",spm);
   if(spm<50)
  {
    printf("less fitness");
  }
  else if(spm<100)
  {
    printf("moderate fitness");
  }
  else
  {
    printf("strong fitness");
  }
  return 0;
}
  

