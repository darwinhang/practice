#include <stdio.h>

#define LOWER 0    /* lower limit of table */
#define UPPER 300  /* upper limit of table */
#define STEP  20   /* step size */

int main() 
{
  int fahr;

  /* heading */
  printf("%3s %6s\n", "F", "C");
  printf("%3s %6s\n", "---", "---");
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
    /* if want to print ints, need to multipe before divide 
     * because integer division truncates
     */
    // printf("%3d %6d\n", fahr, (5 * (fahr-32) / 9));
    printf("%3d %6.2f\n", fahr, (5.0/9) * (fahr-32)); 
    /* I'm guessing the '9' above is converted to a float
     * but if I write (5/9), then I get a compiler error
     * that the 'format' type is specifying a float, but
     * argument has type 'int'
     */
  }
}
