#include <iostream>


using namespace std;

#define TRUE 1
#define FALSE 0

bool checkPrime(unsigned int value);
unsigned long long nPrime(unsigned n);
unsigned long long nextPrime(unsigned long long value);
unsigned long long sumPrime(unsigned int hbound);

int main() {
    unsigned int z;
    bool fl;
    unsigned long long ds;
    ds=sumPrime(2000000);
   //fl=checkPrime(4);
    cout << ds << endl;

    return 0;
}

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
unsigned long long sumPrime(unsigned int hbound){
    unsigned int m = 2;
    unsigned long long s=2;
    while(m<hbound){
        m=nextPrime(m);
        s=s+m;
    }
    s=s-m;
    return s;

}
