//find if count is equal to same integer
# include <stdio.h>
int main()
{
  int arrSize,i;
  scanf("%d",&arrSize);
  int arr[arrSize];
   for(int i=0;i<arrSize;i++)
   {
    scanf("%d",&arr[i]);
   }
    int count;
    for(int i=0;i<arrSize;i++){
        count=0;
        for (int j = i + 1; j < arrSize; j++) {
            if (arr[i] == arr[j])
                count++;
        }
    }
    printf("%d",count);
    printf("%d %d",arr[i],count);
    for(int i=0;i<arrSize;i++)
    {
        if (count == arr[i])
            printf("%d",count);
    }
}