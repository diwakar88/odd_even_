/*
Student Name:Diwakar kandel
Subject:Programming Fundamental
Roll No:
program:WAP to print largest number.
Lab No:01
Date:21oct,2016
*/
#include<stdio.h>
int main()
{
 int a,b,c;
  printf("Enter the firstNumber:\n");
  scanf("%d",&a);
 
  printf("Enter the SecondNumber:\n");
  scanf("%d",&b);
 
  printf("Enter the ThirdNumber:\n");
  scanf("%d",&c);
  
  if(a>b && a>c){
   printf("The largest value of %d",a);
   }
   
   else if(b>c && b>a){
   printf("The largest value of %d",b);
   }
   
   else if(c>a && c>b){
   printf("The largest value of %d",c);
   }
   
   return 0;
   }
   
   
