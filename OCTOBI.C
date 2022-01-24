// Octal Number to binary
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
 int val, box, remain, g = 0, i = 0, sum1 = 0, dec, r = 0, q = 1, arr[100];

 printf("Enter Octal Number using 0 to 7 digits:-\t");
 scanf("%d", &val);
 if(val == 0)
 {
   printf("0 is not an octal number");
   getch();
   exit(0);
 }
 box = val;
 while(val != 0)
 {
  remain = val % 10;
  sum1 += pow(8, i) * remain;
  i++;
  val = val/10;
 }
 dec = sum1;
 i = 0; // to count the length of array
 while(dec != 0)
 {
   q = dec / 2;
   r = (dec % 2);
   arr[g] = r; // storing r in array
   dec = q;
   g++;
   i++;
 }
  printf("Binary Equivalent of %d is:-  ",box);
  for(g = i; g > 0; g--) // iterate over arr reversely
  {
   printf("%d", arr[g - 1]);
  }
 
}
