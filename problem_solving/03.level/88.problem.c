//deletion at specific position
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int di;   //the index which we want to delete
    scanf("%d",&di);
     for(int i=di;i<n-1;i++)         //shift element to lift
     {
         arr[i]=arr[i+1];
     }
     n--;  //resize the value
     for(int i=0;i<n;i++)
     {
        printf("%d",arr[i]);
     }

}