#include <stdio.h>
int kom(int n){
if(n==0)
    return 0;
else
    return n+kom(n-1);
}
int main(){
int n;
printf("Enter the number to find sum upto it: ");
scanf("%d",&n);
printf("The sum is: %d",kom(n));
}
