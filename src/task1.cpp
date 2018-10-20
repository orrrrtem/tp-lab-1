#include <task1.h>
unsigned long findValue(unsigned int min,unsigned max){
    unsigned long long l=max;
    while(1){
        int k=0;
        for(unsigned long j = min; j < max+1; j++ ){
            if((l%j)==0)
                k++;
        }
        if(k==(max-min+1)) {

            return l;
        }
        l++;
    }
}
