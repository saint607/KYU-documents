/*
author: Lawrence  kipruto koskei
reg no:ct101/G/24773
*/


#include <stdio.h>
#include<math.h>
int main(){
float principle,rate,time, interest ;
printf("enter the principle");
scanf("%f",& principle);

printf("enter the rate:");
scanf("%f",&rate);

printf("enter the time:");
scanf("%f",&time);

interest =principle*rate/100*time;
printf("the interest is:%f",interest);

return 0;




}
