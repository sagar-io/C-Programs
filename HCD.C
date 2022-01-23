// Find HCD using Euclid theorem
#include <stdio.h>
#include <conio.h>
void main()
{
 char choice;
 int a, b, c, r, hcd;

 do{
 r = 1;
 printf("\nEnter two Numbers:- \t");
 scanf("%d %d", &a ,&b);

 if(a == 0 && b == 0)
  hcd = 0;
 else if(a == 0 || b == 0)
  hcd = a + b;
 else{
  // swaping for storing greater value in var a
  c = a;
  a = b;
  b = c;

  while(r != 0){
   r = a % b;
   a = b;
   b = r;
   hcd = a;
  }
 }
 printf("HCD of given two numbers ->\t %d\n", hcd);

 printf("Do you want to continue(y \\ n)\n");
 fflush(stdin);
 scanf("%c", &choice);
} while(choice == 'Y' || choice == 'y');

 getch();
}












