#include<stdio.h>
void main()
 {
      float f, s, temp;
      printf("Enter first number: ");
      scanf("%f", &f);
      printf("Enter second number: ");
      scanf("%f", &s);
      temp = f;
      f = s;
      s = temp;
      printf("\nAfter swapping, First Number = %f\n", f);
      printf("After swapping, Second Number = %f", s);
}

