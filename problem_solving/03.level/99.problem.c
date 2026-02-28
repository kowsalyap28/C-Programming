//ascending and descending order
# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int tem;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                tem=arr[i];
                arr[i]=arr[j];
                arr[j]=tem;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}