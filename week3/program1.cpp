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
int c=0,d=0;
 for(int i=1;i<n;i++)
 {
    int value=arr[i];
    int hole=i;
    while(hole>0 and arr[hole-1]>value)
    {
        arr[hole]=arr[hole-1];
        c++;
        d++;
        hole=hole-1;

    }
    arr[hole]=value;
    d++;
 }

 for(auto i:arr)
    cout<<i<<" ";
 cout<<"\n";
 cout<<"Comparison:"<<c<<"\n"<<"Shifts:"<<d<<"\n";

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