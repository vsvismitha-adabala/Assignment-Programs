#include <stdio.h>
int main() {
char X;
printf("Enter X");
scanf("%c",&X);
if((X>='a'&& X<='z')||(X>= 'A'&&X<='Z')){
if(X=='a'||X =='e'||X=='i'||X =='o'|| X =='u'|| X=='A'||X=='E'||X=='I'|| X=='O'||X=='U')
printf("vowel");
else
printf("consonant");
}
else
printf("Neither vowel nor consonant");
return 0;
}