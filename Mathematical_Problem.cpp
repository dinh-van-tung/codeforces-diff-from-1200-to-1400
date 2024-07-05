// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1986/D
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
#define N 29
typedef long long ll;
typedef long double ld;
typedef double db;
// typedef unsigned long long ll;

int t, n, ans, tmp, prefix[N];
char a[N];
vector<int> zerov;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     //freopen("STRING.inp", "r", stdin); freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin); freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          ans = 1e8, tmp = 0;
          for (int i = 0; i <= 20; i++) prefix[i] = 0;
          zerov.clear();
          
          cin >> n;
          for (int i = 1; i <= n; i++)
          {
               cin >> a[i];
               if (a[i] == '0') zerov.push_back(i);
               if (a[i] != '1') prefix[i] = prefix[i - 1] + (a[i] - '0');
               else prefix[i] = prefix[i - 1];
          }
          for (int i = 1; i < n; i++)
          {
               tmp = 10 * (a[i] - '0') + (a[i + 1] - '0');
               for (int j = 0; j < zerov.size(); j++) 
                    if (zerov[j] != i && zerov[j] != i + 1) tmp = 0;
               if (tmp == 1) tmp = max(tmp, prefix[n]);
               else if (tmp > 1) tmp += (prefix[n] - prefix[i + 1]) + prefix[i - 1];
               ans = min(ans, tmp);
          }
          cout << ans << '\n';
     }
     return 0;
}
// DINH VAN TUNG
