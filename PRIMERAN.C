#include <stdio.h>
#include <conio.h>
void main()
{
 int i, g, first_num, last_num;
 clrscr();
 printf("Enter first number and last number of the range respectively:-\t");
 scanf("%d %d", &first_num, &last_num);
 if(first_num <= 0 || last_num <= 0)
 {
  printf("Please Enter positive integers only");
  getch();
  exit(0);
 }
 for(i = first_num; i <= last_num; i++)
 {
   for(g = 2; g < i; g++)
   {
    if(i % g == 0)
    {
     break;
    }
   }
   if(g == i)
     printf("%d, ", i);
 }
 getch();
 }