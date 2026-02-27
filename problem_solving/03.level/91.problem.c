//To find all positive element
# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int found=0 ;       //for if all are negative
    for(int i=0;i<n;i++){
        if(arr[i]>0)              //check greater than 0
        printf("%d",arr[i]);
        found=1;                   //if found make found value to 1
    }
    if(found==0)
    printf("Not found!!");
}