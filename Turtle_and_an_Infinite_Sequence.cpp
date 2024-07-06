// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1981/B
#include <iostream>
#include <algorithm>
#include <set>
#include <time.h>
#include <vector>
#include <string>
#include <map>
#include <string>
#include <stack>
#include <iomanip>
#include <bitset>
#include <random>
#include <queue>
#include <unordered_map>
using namespace std;
#define MOD 20020303
#define N 100009
typedef long long ll;
typedef long double ld;
typedef double db;
// typedef unsigned long long ll;

int t;
ll n, m;

int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
     //freopen("STRING.inp", "r", stdin), freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin), freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          cin >> n >> m;
          ll left = max(0ll, n - m), right = n + m, ans = 0;
          for (int i = 62; i >= 0; i--)
          {
               if ((left & (1ll << i)) || (right & (1ll << i)) || (left >> (i + 1)) != (right >> (i + 1)))
                    ans |= (1ll << i);
          }
          cout << ans << '\n';
     }
     return 0;
}
// DINH VAN TUNG
