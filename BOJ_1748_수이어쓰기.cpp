#include <iostream>
#include <algorithm>
using namespace std;

int input;
long long cnt;


void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(int argc, char const *argv[]) {
    init();
    cin >> input;
    int tmp1 = 9, tmp2 = 1, n = input, digit = 1 ;

    while (n / 10 != 0) {
        digit++;
        n = n / 10;
    }

    for (int i = 1; i < digit; i++) {
        cnt += tmp1 * i;
        tmp1 *= 10;
        tmp2 *= 10;
    }

    cnt += (input - tmp2 + 1) * digit;
    cout << cnt << endl;
    
    return 0;
}
