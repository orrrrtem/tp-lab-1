#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
void split(char ***result, int *N, char *buf, char ch);

int main() {
    int N=0;
    char buf[]="123,456,789";
    char ch = ',';
    char **result=nullptr;

    split(&result, &N, buf, ch);


    for (int i = 0; i < N; i++){
        int j = 0;
        while (result[i][j] != '\0'){
            cout << result[i][j];
            j++;
        }
        cout << endl;
    }

return 0;
}

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
