#include <stdio.h>
int main(){
int marks;
printf("Enter marks");
scanf("%d",&marks);
if(marks>=90&&marks<=100)
printf("O Grade");
else if(marks>=80&&marks<=89)
printf("A+");
else if(marks>=70&&marks<=79)
printf("A");
else if(marks>=60&&marks<=69)
printf("B");
else if(marks>=50&&marks<=59)
printf("C");
else if(marks<50 && marks>=0)
printf("Fail");
else 
printf("Invalid Mark");
return 0;
}


    