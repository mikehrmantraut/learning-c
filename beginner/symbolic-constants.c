/** 
 * Symbolic Constant is a name that substitutes for a sequence of characters 
 * or a numeric constant, a character constant or a string constant.
 * #define name replacement text
 * (Symbolic constant names are conventionally written in upper case.)
 */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
  int fahr;
  
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
    printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
  return 0;
}
