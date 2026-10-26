#include <stdio.h>
int main(){
float mem_type,amount,final_amount;
// 1 for premium , 0 for regular 
printf("Enter membership type 1 for Premium and 0 for regular");
scanf("%f",&mem_type);
printf("Enter amount");
scanf("%f",&amount);
if(mem_type==1){
if(amount>=500){
final_amount=amount-(amount*0.10);
printf("%.2f",final_amount);
}
else if(amount<500){
final_amount=amount+50;
printf("%.2f",final_amount);
}
}
else if(mem_type==0){
if(amount>=500){
final_amount=amount;
printf("%.2f",final_amount);
}
else if(amount<500){
final_amount=amount+50;
printf("%.2f",final_amount);
}
}
else
printf("Invalid Input");
return 0;
}