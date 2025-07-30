#include<stdio.h>
int main(){
int n,sum=0;
printf("Enter the number: ");
scanf("%d",&n);
if (n<=1){
printf("Not a perfect number\n");
return 0;
}
for (int i=1;i<n/2;i++){
if (n%i==0){
sum=sum+i;
}
}
printf("Sum value:%d ",sum);

if (sum==n){
printf("It is perfect number");
}else{
printf("It is not perfect number");
}
return 0;
}
