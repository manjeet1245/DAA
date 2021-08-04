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
  int n;
  cin>>n;
  bool flag=true;
  std::vector<int> v;
  for(int i=0;i<n;i++)
  {
    int a;
    cin>>a;
    v.emplace_back(a);
  }
  for(int i=0;i<n-2;i++)
  {
    for(int j=0;j<n-1;j++)
    {
        int t=v[i]+v[j];
        auto it=find(v.begin(),v.end(),t);
        if(it==v.end())
            flag=false;
        else
        {
            flag =true;
            int aa=it-v.begin();
            cout<<"sequence found:"<<i<<" "<<j<<" "<<aa<<"\n";
            break;
        }
    }
    if(flag)
        break;
  }
  if(!flag)
    cout<<"sequence not found\n";
  }
cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}
