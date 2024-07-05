// DINH VAN TUNG
// https://codeforces.com/problemset/problem/1984/C1
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
#define N 300009
typedef long long ll;
typedef long double ld;
typedef double db;
// typedef unsigned long long ll;

int t, n;
ll a[N];

int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
     //freopen("STRING.inp", "r", stdin), freopen("STRING.out", "w", stdout);
     //freopen("VTung.input", "r", stdin), freopen("VTung.output", "w", stdout);

     cin >> t;
     while (t--)
     {
          cin >> n;
          ll sum = 0, minval = 0;
          for (int i = 1; i <= n; i++) cin >> a[i], sum += a[i], minval = min(minval, sum);
          cout << sum - 2 * minval << '\n';
     }
     return 0;
}
// DINH VAN TUNG
