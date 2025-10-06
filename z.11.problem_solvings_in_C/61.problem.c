  # include <stdio.h>
int main()
{
 int totalc,eat,plannedday,remaining;
 scanf("%d %d %d",&totalc,&eat,&plannedday);
 int totaleat=eat*plannedday;
 if(totalc>=totaleat)
 {
    printf("1");
 }
 else if(totalc<totaleat)
 {
   remaining=plannedday/eat;
    printf("0\n");
   printf("%d",remaining);
 }
}