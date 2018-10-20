#include <task2.h>


bool checkPrime(unsigned int value){
    if(value!=1) {
        for (int i = 2; i < value; i++)
            if ((value % i) == 0)
                return FALSE;
        return TRUE;
    }
    return FALSE;
}

unsigned long long nPrime(unsigned n){
    unsigned k=n;
    unsigned long long i=2;
    while(k) {
        if (checkPrime(i))
            k--;
        i++;
    }
    i--;
    return i;
}

unsigned long long nextPrime(unsigned long long value){
    unsigned long long i = value+1;
    while(!(checkPrime(i)))
        i++;
    return i;

}
