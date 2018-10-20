#include <task1.h>
int main() {
    unsigned long z;
    unsigned int min=10;
    unsigned max=20;
    z=findValue(5,10);
   // z=findValue(1,2);
   /* unsigned long l=max;
    while(1){
        int k=0;
        for(unsigned long j = min; j < max+1; j++ ){
            if((l%j)==0)
                k++;
        }
        if(k==(max-min+1)) {
            cout << l << endl;
            return 0;
        }
        l++;
    }
    */
    cout << z << endl;

    return 0;
}
