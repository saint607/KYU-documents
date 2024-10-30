/*
author:lawrence kipruto koskei
reg no:ct101/G/24773
*/

#include <stdio.h>
#include <math.h>
int main(){
int book_id;
int due_date;
int return_date;
int over_due;
int fine_rate;
int fine_amount;

printf("enter the book_id:");
scanf("%d",&book_id);
printf("enter the due_date:");
scanf("%d",&due_date);
printf("enter return_date:");
scanf("%d",&return_date);

over_due=return_date-due_date;
if(over_due<=7){
fine_rate=20;
fine_amount=fine_rate*over_due;
printf("the fine_amount is:%d",fine_amount);


}
else if(over_due<15){
fine_rate=50;
fine_amount=over_due*fine_rate;
printf("the fine_amount is:%d",fine_amount);

}
else{
fine_rate=100;
fine_amount=fine_rate*over_due;
printf("the fine_amount is :%d",fine_amount);

}
printf("\nthe book_id is:%d",book_id);
printf("\nthe due_date is :%d",due_date);
printf("\nthe return_date is:%d",return_date);
printf("\nthe fine_rate is:%d",fine_rate);
printf("\nthe fine_amount is :%d",fine_amount);
return 0;

}
