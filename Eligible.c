#include<stdio.h>

 void main (){
 float math, science,percentage;
 printf("enter percentage for math");
 scanf("%f",&math);
 printf("enter percentage for science ");
 scanf("%f",&science );
 percentage=math+science;
 if(percentage>=50){
 printf("you are eligible for admission ");
 }
  if(percentage>=80){
 printf("you are qualify for scholarship ");
 }
 }
 