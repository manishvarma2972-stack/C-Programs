#include <stdio.h>

int main()
{
  int count, counter;
  
  printf("Upto which number you want to print natural numbers?\n");
  scanf("%i", &count);
  counter = 1;
  printf("The natural numbers up to %i are ", count);
  printf("%i", counter);
  while (counter < count)
  {
    printf(", ");
    counter = counter + 1;
    printf("%i", counter);
  }
    printf(".\n");

    return 0;
}
