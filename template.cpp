#include<bits/stdc++.h>
using namespace std;

struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

#define int ll
#define endl '\n'
#define pb(e) push_back(e)
#define mp(a,b) make_pair(a,b)
#define all(a) a.begin(), a.end()

#define x first
#define y second

// #pragma GCC optimize("Ofast")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,popcnt,abm,mmx,tune=native")
#pragma GCC optimize("fast-math")

typedef long long   ll;
typedef long double ld;

const ll inf = LLONG_MAX;
const ld pi = 3.1415926535897932384626;
const ld ep = 1e-9;

int32_t main()
{   
    ios::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
    srand(time(0));

    //#ifdef ONLINE_JUDGE
    //freopen("file.in", "r", stdin);
    //freopen("file.out", "w", stdout);
    //#endif
    
    int ____; cin >> ____; while (____--)
    {


        
    }    
}
