#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[]) {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N; cin >> N;
  stack<int> s;
  string str;

  for (int i = 0; i < N; i++) {
    cin >> str;

    if(str == "push"){
      int num; cin >> num;
      s.push(num);
    }
    else if(str == "pop"){
      if(!s.empty()){
        cout << s.top() << "\n";
        s.pop();
      }
      else
        cout << "-1" << "\n";
    }
    else if(str == "size"){
      cout << s.size() << "\n";
    }
    else if(str == "empty"){
      if(s.empty())
        cout << "1" << "\n";
      else
        cout << "0" << "\n";
    }
    else if(str == "top"){
      if(!s.empty())
        cout << s.top() << "\n";
      else
        cout << "-1" << "\n";
    }
  }

  return 0;
}
