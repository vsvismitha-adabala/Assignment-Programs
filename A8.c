#include <stdio.h>
int main(){
float weight,height,BMI ;
printf("Enter height in meters and weight in kg");
scanf("%f%f",&height,&weight);
BMI=weight/(height*height);
if(BMI<18.5)
printf("BMI value is %f and category : underweight",BMI);
else if(BMI<25&&BMI>=18.5)
printf("BMI value is %f and category : Normal",BMI);
else if(BMI<30&&BMI>=25)
printf("BMI value is %f and category : overweight",BMI);
else if(BMI>=30)
printf("BMI value is %f and category : obese",BMI);
return 0;
}


    