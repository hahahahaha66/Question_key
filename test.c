#include <stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    void *a[] = {(void *)1, (void *)2, (void *)3, (void *)4, (void *)5};
    printf("%d\n", *((char *)a + 1));
    printf("%d\n", *(int *)(char *)a + 1);
    printf("%d\n", *((int *)a + 2));
    printf("%lld\n", *((long long *)a + 3));
    printf("%d\n", *((short *)a + 4));
    return 0;
#include <string.h>

#define SWAP(a, b, t) t = a; a = b; b = t
#define SQUARE(a) a *a
#define SWAPWHEN(a, b, t, cond) if (cond) SWAP(a, b, t)
int main() {
    int tmp;
    int x = 1;
    int y = 2;
    int z = 3;
    int w = 3;
    SWAP(x, y, tmp);
    printf("x = %d, y = %d, tmp = %d\n", x, y, tmp);
    if (x y) SWAP(x, y, tmp);
    printf("x = %d, y = %d, tmp = %d\n", x, y, tmp);
    SWAPWHEN(x, y, tmp, SQUARE(1 + 2 + z++ + ++w) == 100);
    printf("x = %d, y = %d\n", x, y, tmp);
    printf("z = %d, w = %d, tmp = %d\n", z, w, tmp);
}
