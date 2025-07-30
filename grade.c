#include<stdio.h>
int main(){
int phy,chy,mat;
int avg;
printf("Enter the marks you scored in phy,chy,mat: ");
scanf("%d\n",&phy);
scanf("%d\n",&chy);
scanf("%d\n",&mat);
avg=(phy+chy+mat)/3;
printf("%d\n",avg);
if (avg>=95){
printf("Your grade is A");
}else if(avg>=85){
printf("Your grade is B");
}else if (avg>=75) {
printf("Your grade is C");
}else{
printf("Your grade is D");
}
return 0;
}
