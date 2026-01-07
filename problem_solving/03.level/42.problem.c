//check whether an array is palindrome or not
# include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);         //for array size
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);         //to get input for each array index
    }
    int ispalindrome;
    for(int i=0;i<n/2;i++)
    {
       if(arr[i]!=arr[n-i-1])       //to frome front to end
       {
        ispalindrome=0;
       }
    }
    if(ispalindrome)
    {
        printf("given array is palindrome");
    }
    else{
        printf("given array is not a palindrome");
    }
}