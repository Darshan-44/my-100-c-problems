#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the numbers a,b,c: ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if (a>b&&a>c){
printf("a is largest");
}else if(b>a&&b>c) {
printf("b is largest");
}else{
printf("c is largest");
}
return 0;
}
