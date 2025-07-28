#include <stdio.h>
int main(){
int n;
printf("Enter the number: ");
scanf("%d",&n);
if(n%5==0||n%11==0){
printf("It is divisible by 5 and 11");
}else{
printf("It is not divisile by 5&11");
}
return 0;
}
