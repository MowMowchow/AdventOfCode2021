#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vec1i;
typedef vector<vector<int> > vec2i;
typedef vector<vector<vector<int> > > vec3i;
typedef vector<ll> vec1ll;
typedef vector<vector<ll> > vec2ll;
typedef vector<vector<vector<ll> > > vec3ll;

int N, z, o, gi, ei;
vector<string> bits;
string inp, gamma = "", epsilon = "";

int main(){

  while(getline(cin, inp)) {
    if (inp.empty()) break;
    else bits.push_back(inp);
  }

  N = bits[0].size();

  for (int i = 0; i < N; i++){
    z = 0; o = 0;
    for (auto s: bits) {
      if (s[i] == '1') o++;
      else z++;
    }
    if (z > o) {gamma += "0"; epsilon += "1";}
    else {epsilon += "0"; gamma += "1";}
  }

  gi = stoi(gamma, nullptr, 2);
  ei = stoi(epsilon, nullptr, 2);

  cout << gi*ei << "\n";

  return 0;
}