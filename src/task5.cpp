#include <task5.h>

void split(char ***result, int *N, char *buf, char ch) {
    int n = 0;

    int i = 0;
    while (buf[i] != '\0'){
        if (buf[i] == ch){
            n++;//n=number of ch
        }
        i++;//i=length(buf)
    }
    *N=n+1; //num of words= num of ch + 1

    char *tmp = new char[i+1];
    *result = new char *[n+1];
    int j = 1;
    (*result)[0] = tmp;
    for (i = 0; buf[i]!='\0'; i++) {
        tmp[i] = buf[i];
        if (buf[i] == ch) {
            tmp[i] = '\0';
            (*result)[j] = tmp + 1  + i;
            j++;
        }
    }

    tmp[i] = '\0';

}
