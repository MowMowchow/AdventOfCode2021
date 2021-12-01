#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vec1i;
typedef vector<vector<int>> vec2i;
typedef vector<vector<vector<int>>> vec3i;
typedef vector<ll> vec1ll;
typedef vector<vector<ll>> vec2ll;
typedef vector<vector<vector<ll>>> vec3ll;

int ans, inpi, cSum = 0;
deque<int> d;
string inp;

int main(){

  while (getline(cin, inp)){
    if (inp.empty()) break;
    inpi = stoi(inp);

    if (d.size() == 3){
      int front = d.front(); d.pop_front();
      int ocSum = cSum;
      cSum -= front;
      cSum += inpi;
      d.push_back(inpi);
      if (cSum > ocSum) ans ++;
    } else {
      cSum += inpi;
      d.push_back(inpi);
    }
  }

  cout << ans << "\n";

  return 0;
}