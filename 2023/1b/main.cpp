#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pi pair<int, int>
#define pl pair<long long, long long>
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vi>
#define vvl vector<vl>
#define vpi vector<pi>
#define vpl vector<pl>
#define vs vector<string>
#define vb vector<bool>
#define vvb vector<vb>
#define rep(i, n) for(int i = 0; i < n; i++)
#define all(x) x.begin(), x.end()

template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

void setIO(string name = "") {
  cin.tie(0)->sync_with_stdio(0);
  if (name.size()) {
    freopen((name + ".in").c_str(), "r", stdin);
    freopen((name + ".out").c_str(), "w", stdout);
  }
}

int main() {
  setIO("");
  int sum = 0;
  string s;
  map<string, int> m{{"one", 1}, {"two", 2}, {"three", 3}, {"four", 4}, {"five", 5}, {"six", 6}, {"seven", 7}, {"eight", 8}, {"nine", 9}};
  while(cin >> s) {
    int f = -1, l = -1;
    for(int i = 0; i < s.size(); i++) {
      char c = s[i];
      if('0' <= c && c <= '9') {
        if(f == -1) f = c - '0';
        l = c - '0';
      } else {
        string num;
        for(int j = i; j < s.size() && j < i + 5; j++) {
          num += s[j];
          if(m.count(num)) {
            if(f == -1) f = m[num];
            l = m[num];
            break;
          }
        }
      }
    }
    sum += f * 10 + l;
  }
  cout << sum << endl;
}

