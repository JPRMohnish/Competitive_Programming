#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'
#define int long long int
using namespace std;
#define pii pair <int, int>
#define mii map<int, int>
#define pb push_back
#define deb(x) cout << #x << " " << x << endl
#define deb2(x, y) cout << #x << " " << x << " " << #y << " " << y << endl
#define Loop(s, e, itr) for (int itr = s; itr < e; itr++)
#define loop(n) for(int i = 0; i < n; i++)
#define vin vector<int>
#define w(t) int tc; cin >> tc; for(int t = 1; t <= tc; t++)
#define vec vector
#define mk_arr(n, t, s) t* n = new t[s]; loop(s) cin >> n[i]; 
#define mi_arr(n, s) int* n = new int[s]; loop(s) cin >> n[i]; 
#define arr_out(n, s) Loop(0, s, lout) cout << n[lout] << " ";
#define pi(x) printf("%lld ", x);

int32_t main(){
    fastio;
    w(t){
        int n;
        cin >> n;
        vin arr(n);
        loop(n) cin >> arr[i];
        int ans = 0;
        int diff;
        int c;
        loop(n-1){
            if(arr[i] > arr[i+1]){
                diff = arr[i] - arr[i+1];
                c = 0;
                deb(diff);
                while(diff){
                    c++;
                    diff >>= 1;
                }
                ans = max(c, ans);
                deb(ans);
                arr[i+1] = arr[i];
            }
        }
        cout << ans << endl;
    }
}