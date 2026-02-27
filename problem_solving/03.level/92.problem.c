//special array(not same parity)
# include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int found=0; 
    for(int i=0;i<n-1;i++){
        if(arr[i]%2==arr[i+1]%2)      //to check its parity (even ,even)(odd,odd)  to print false
        printf("false");
        found=1;
    }
    if(found==0){
        printf("true");
    }
}  