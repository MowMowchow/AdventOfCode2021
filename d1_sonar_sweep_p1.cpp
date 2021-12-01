#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vec1i;
typedef vector<vector<int>> vec2i;
typedef vector<vector<vector<int>>> vec3i;
typedef vector<ll> vec1ll;
typedef vector<vector<ll>> vec2ll;
typedef vector<vector<vector<ll>>> vec3ll;

int ans, prevv, inpi;
string inp;

int main(){

  while (getline(cin, inp)){
    if (inp.empty()) break;
    inpi = stoi(inp);
    if (prevv){
      if (inpi-prevv > 0) ans++;
    }
    prevv = inpi;
  }

  cout << ans << "\n";

  return 0;
}