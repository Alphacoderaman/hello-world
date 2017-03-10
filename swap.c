#include<stdio.h>
#include<conio.h>
void main()
  { clrscr();
   float a,b;  
   printf("Enter any 2 values:");
   scanf("%f%f",&a,&b);
   a=a*b;
   b=a/b;
   a=a/b;
   printf("\nSwapped!");
  getch();
  }
