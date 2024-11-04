#include<stdio.h>

 void main (){
 float units,billamount;
 printf("enter the number of units");
 scanf("%f",&units);
 if(units<=100){
 billamount=0;
 }
 else if (units>=101<=200){
 billamount=(units-100 )*5;
 }
 else if (units >=201<=300){
 billamount=(units-100)*8;
 }
 else if (units <=300){
 billamount=(units-100)*10;
 }
 printf("total electricity bill:%.2f ruppess\n",billamount);
 }