#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define mod 1000000007
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define check(x)  cerr << #x << ": " << x << endl;
void  solve()
{ 
    int n;
    cin>>n;
    vector<char>v;
    set<int>s;
    map<char,int>ma;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        v.push_back(a);
        s.insert(a);
        ma[a]++;
    }
    if(s.size()==n)
    {
        cout<<"NO Duplicates Element\n";
        return;
    }
    int max=INT_MIN;
    char b;
    for(auto i:ma)
    {
        if(i.second>max)
        {
            max=i.second;
            b=i.first;
        }

    }
    cout<<b<<" "<<max<<"\n";
  
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