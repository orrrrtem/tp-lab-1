#include <task3.h>

unsigned long long sumPrime(unsigned int hbound){
    unsigned long long int m = 2;
    unsigned long long s=2;
    while(m < hbound){
        m=nextPrime(m);
        s=s+m;
    }
    s=s-m;
    return s;

}
