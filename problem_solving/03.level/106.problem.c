//remove the given idex by shifting
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int ri;  //index to remove

    
    scanf("%d",&ri);
    for(int i=ri;i<n-1;i++){
       arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

}