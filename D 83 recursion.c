#include <stdio.h>
int honey(int n){
if(n==1||n==0)
    return 1;
else
    return n*honey(n-1);
}
int main(){
int n;
printf("Enter a number to find it's factorial: ");
scanf("%d",&n);
printf("The factorial if %d is: %d",n,honey(n));
return 0;

}
