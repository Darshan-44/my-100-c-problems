#include<stdio.h>
#include<string.h>
int main(){
char  str[100];
int i,j;
printf("Enter the sequence: ");
scanf("%s",&str);
i=0;
j=strlen(str)-1;
 while(i<j){
if (str[i]!=str[j]){
printf("It is not a palindrome");
return 0;
}
i++;
j--;
}
printf("It is palindrome");
return 0;
}
