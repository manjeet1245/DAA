#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check(x)                cerr << #x << ": " << x << endl;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  int t;
  cin>>t;
  while(t--)
  {
  int n,k;
  cin>>n>>k;
  vector<int>v;
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    v.emplace_back(a);
  }
    vector<pair<int,int>>aa;
        unordered_map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int tt=k+v[i];
            auto it=find(v.begin(),v.end(),tt);
            if(it==v.end())
                continue;
            else
            {
                int c=abs(it-v.begin());
                int b=v[i];
                int d=v[c];
                aa.push_back({b,d});
            }

        }
        for(auto i:aa)
            cout<<i.first<<" "<<i.second<<"\n";
        cout<<endl;
  }
cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}