#include <stdio.h>
int main(){
int age,monthly_income,credit_score;
printf("Enter age ");
scanf("%d",&age);
printf("Enter monthly income in rupees ");
scanf("%d",&monthly_income);
printf("Enter credit score ");
scanf("%d",&credit_score);
if(age>=21 && age<=60){
if(monthly_income>=25000){
if(credit_score>=700)
printf("Loan approved");
else
printf("Loan rejected: credit score below 700");
}
else
printf("Loan rejected: income below ₹25,000");
}
else
printf("Loan rejected: age not in 21 to 60");
return 0;
}