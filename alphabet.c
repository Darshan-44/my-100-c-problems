#include<stdio.h>
int main(){
char ch;
printf("Enter the character: ");
scanf("%c",&ch);
if ((ch>='A'&& ch<='Z')||(ch>='a' && ch<='z')){
printf("It is an alphabet");
}else{
printf("it is not an alphabet");
}
return 0;
}
