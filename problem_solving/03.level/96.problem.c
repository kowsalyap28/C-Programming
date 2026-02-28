//to remove all elements from an array that are greater than a given target value. Store the remaining elements in a new array and print the result
# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;    //get target value
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]>target)
        {
            continue;
        }
        printf("%d ",arr[i]);
    }

}