#include <stdio.h>
int main(){
int used_current;
printf("Enter the amount of current: ");
scanf("%d",&used_current);
if (used_current<500){
printf("You are in slab 1= 5 rps/unit");
int bill=used_current*5;
printf("\nAmount to be paid: ");
printf("%d",bill);
}else{
printf("You are in slab 2= 9  rps/unit");
int bill=used_current*9;
printf("\nAmount to be paid: ");
printf("%d",bill);
}
return 0;
}
