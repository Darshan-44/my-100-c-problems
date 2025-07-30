#include<stdio.h>
int main(){
int a,b,c;
printf("Enter the angles: ");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if (a>0&&b>0&&c>0&&(a+b+c)==180){
printf("It is triangle");
}else{
printf("It is not a triangle");
}
return 0;
}
