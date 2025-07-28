#include <stdio.h>
int main(){
int n;
int result=0;
printf("Enter the number n: ");
scanf("%d",&n);
for(int i=1;i<=n;i++){
result=result+i;
}
printf("Sum of n natural numbers:%d ",result);
return 0;
}
