
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vec1i;
typedef vector<vector<int>> vec2i;
typedef vector<vector<vector<int>>> vec3i;
typedef vector<ll> vec1ll;
typedef vector<vector<ll>> vec2ll;
typedef vector<vector<vector<ll>>> vec3ll;

int depth = 0, x = 0, aim = 0;
string inp;

int getVal(string s){
  string sNum;
  for (int i = 0; i < s.size(); i++) if (s[i] == ' ') {sNum += s[i+1]; break;}
  return stoi(sNum);
}

int main(){

  while(getline(cin, inp)) {
    if (inp.empty()) break;
    if (inp[0] == 'f') {x += getVal(inp); depth += aim*getVal(inp);}
    else if (inp[0] == 'd') aim += getVal(inp);
    else if (inp[0] == 'u') aim -= getVal(inp);
  }

  cout << depth*x << "\n";

  return 0;
}