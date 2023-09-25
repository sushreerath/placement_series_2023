1.a)73
2.c)10 min
3.#include <stdio.h>

int main(void) {
int a = 5;

printf("(%d)*(++%d) = %d, a = %d\n", a, a, (++a)*(++a), a);
a = 5;
printf("(%d++)*(%d++) = %d, a = %d\n", a, a, (a++)*(a++), a);
a = 5;
printf("(++%d)*(%d++) = %d, a = %d\n", a, a, (++a)*(a++), a);
a = 5;
printf("(%d++)*(++%d) = %d, a = %d\n", a, a, (a++)*(++a), a);

return 0;
}
  
Output of the code
(7)*(++7) = 49,
a = 7 (7++)*(7++) = 30,
a = 7 (++7)*(7++) = 42, 
a = 7 (7++)*(++7) = 45, a = 7
4. The odd one out in this group is:
    b) Hammer
5.d) Statement II is the cause and statement I is its effect
