/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int num;
  float sum;
  printf("Enter a number:");
  scanf("%d",&num);
  while(num>=1)
    {
        // calculation
      sum=(num *(num+1)/2.00);
     // printing the sum
      printf("The sum is %.2f\n",sum);
      printf("Enter a number:");
      scanf("%d",&num);
     }
  return 0;
}

