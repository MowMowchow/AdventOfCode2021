#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vec1i;
typedef vector<vector<int> > vec2i;
typedef vector<vector<vector<int> > > vec3i;
typedef vector<ll> vec1ll;
typedef vector<vector<ll> > vec2ll;
typedef vector<vector<vector<ll> > > vec3ll;

int N = 5, a;
string inp;
vector<int> arr;
vector<vector<vector<int>>> grids;
vector<vector<int>> tempGrid;
vector<int> tempRow;

int main(){

  cin >> inp;
  while (inp != "-"){
    if (inp != ",") arr.push_back(stoi(inp));
    cin >> inp;
  }

  cout << "arr.size(): " << arr.size() << "\n";
  inp = "-2";

  while (inp != "-"){
    if (inp != "\n"){
      tempGrid.clear();
      for (int i = 0; i < N; i++){
        tempRow.clear();
        for (int j = 0; j < N; j++){
          cin >> a;
          tempRow.push_back(a);
        }
        tempGrid.push_back(tempRow);
      }
      grids.push_back(tempGrid);
    }
    cin >> inp;
  }

  cout << "grids.size(): " << grids.size() << "\n";

  return 0;
}