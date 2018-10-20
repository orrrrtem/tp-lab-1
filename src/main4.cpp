#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
char * sum(char *x, char *y);

int main() {
    char *x = new char[10000];
    char *y = new char[10000];
    cin >> x >> y;
    char *ans = new char[10000];
    ans=sum(x,y);

    cout  << ans << endl;


    return 0;
}

char * sum(char *x, char *y){

    vector<int> tx;
    vector<int> ty;
    vector<int> t;

    int i = 0;
    while (x[i] != '\0'){
        tx.push_back(x[i] - 48);
        i++;
    }
    reverse(tx.begin(), tx.end());

    i = 0;
    while (y[i] != '\0'){
        ty.push_back(y[i] - 48);
        i++;
    }
    reverse(ty.begin(), ty.end());

    int ex = 0;
    int n = max(tx.size(), ty.size());

    for (int i = 0; i < n; i++){
        int sum = 0;

        if (i < ty.size())
            sum = ty[i];

        if (i < tx.size())
            sum =sum + tx[i];

        t.push_back((ex + sum) % 10);
        ex = (ex + sum) / 10;

    }

    if (ex != 0)
        t.push_back(1);
    n = t.size();
    char *ans =  new char[n+1];

    for (int i = t.size() - 1; i >= 0; i--)
        ans[n - 1 - i] = (char)(t[i] + 48);

    ans[n] = '\0';

     return ans;

}
