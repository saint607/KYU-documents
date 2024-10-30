/*
author:lawrence kipruto koskei
reg no:ct101/G/24773
*/

#include <stdio.h>
#include <math.h>
int main(){
int age;
float salary;
printf("enter the age:");
scanf("%d",&age);

printf("enter the salary:");
scanf("%f",&salary);

if(age>=21&&salary>=21000){
printf("congratulations you qualify for the loan");
}
else{
printf("unfortunately we cannot give you the loan at this time");
}

return 0;

}
