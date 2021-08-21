#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define check(x)                cerr << #x << ": " << x << endl;

void solve()
{
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++)
    cin>>arr[i];
 
 sort(arr,arr+n);
 bool flag=false;

 for(int i=0;i<n-1;i++)
 {
    if(arr[i]==arr[i+1])
    {
        flag=true;
        break;
    }
 }
 if(flag)
    cout<<"YES\n";
 else
    cout<<"NO\n";

}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    sync;
    int t = 1;
    cin >> t;
    while(t--) solve();
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;    
}