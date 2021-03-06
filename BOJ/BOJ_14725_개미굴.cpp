#include <bits/stdc++.h>
using namespace std;

int N;
vector<vector<string> > v;
vector<string> element;

void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(int argc, char const *argv[]) {
    init();
    freopen("input.txt", "r", stdin);
    cin >> N;
    for (int i = 0; i < N; i++) {
        int num; cin >> num;
        for (int j = 0; j < num; j++) {
            string str; cin >> str;
            element.push_back(str);
        }
        v.push_back(element);
        element.clear();
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++) {
        string line = "";
        bool check = false;
        for (int j = 0; j < v[i].size(); j++) {
            if (i == 0) {
                cout << line << v[i][j] << endl;
                line += "--";
                continue;
            }
            else {
                if (!check && v[i][j] == v[i-1][j]) {
                    line += "--";
                    continue;
                }
                check = true;
                if (check && v[i][j] != v[i-1][j]) {
                    cout << line << v[i][j] << endl;
                    line += "--";
                }
                else if (check && v[i][j] == v[i-1][j]) {
                    cout << line << v[i][j] << endl;
                    line += "--";
                }
            }
        }
    }
    return 0;
}
