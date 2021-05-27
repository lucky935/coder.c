#include <stdio.h>

int main(void) {
 char c;
 int flag;
 printf("enter a alphabet to check: ");
 scanf("%c",&c);

 flag = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

 if(flag){
	 printf("%c is a vowel.", c);

 }
 else{
	 printf("%c is a consonant.",c);
return 0;


 }

}
