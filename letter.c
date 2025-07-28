#include<stdio.h>
int main(){
char ch;
printf("Enter the letter:");
scanf("%c",&ch);
if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
printf("It is vowel\n");
}else{
printf("It is consonant\n");
}
return 0;
}
