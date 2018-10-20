#include <task3.h>

unsigned long long sumPrime(unsigned int hbound) {
    bool *fl = new bool[hbound]{false};
    unsigned long long int s = 0;
    unsigned int i = 2, j;
    while (i < hbound) {
        if (!fl[i]) {
            s += i;
            for (j=i; j < (hbound); j += i)
                fl[j] = true;
        }
        i++;
    }
    return s;
}
