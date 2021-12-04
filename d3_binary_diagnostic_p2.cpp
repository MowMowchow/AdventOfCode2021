#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vec1i;
typedef vector<vector<int> > vec2i;
typedef vector<vector<vector<int> > > vec3i;
typedef vector<ll> vec1ll;
typedef vector<vector<ll> > vec2ll;
typedef vector<vector<vector<ll> > > vec3ll;

int bL, o, z; 
vector<string> bits1, bits2, tempo, tempz;
string inp;

int main(){


  while(getline(cin, inp)){
    if (inp.empty()) break;
    else {
      bits1.push_back(inp);
      bits2.push_back(inp);
    }
  }

  bL = bits1[0].length();

  for (int i = 0; i < bL; i++){
    if (bits1.size() == 1) break;
    else {
      tempo.clear(); tempz.clear();
      o = 0; z = 0;
      for (auto s: bits1){
        if (s[i] == '1') {tempo.push_back(s); o++;}
        else {tempz.push_back(s); z++;}
      }
      if (o >= z) bits1 = tempo;
      else bits1 = tempz;
    }
  }

  for (int i = 0; i < bL; i++){
    if (bits2.size() == 1) break;
    else{
      tempo.clear(); tempz.clear();
      o = 0; z = 0;
      for (auto s: bits2){
        if (s[i] == '1') {tempo.push_back(s); o++;}
        else{tempz.push_back(s); z++;}
      }
      if (o >= z) bits2 = tempz;
      else bits2 = tempo;
    }
  }

  cout << stoi(bits1[0], 0, 2)*stoi(bits2[0], 0, 2) << "\n";  

  return 0;
}