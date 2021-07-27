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
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n-2;i++)
  {
    for(int j=i+1;j<n-1;j++)
    {
        int k=j+1;
       
        
            if(arr[i]+arr[j]==arr[k])
            {
                flag=false;
                cout<<"Sequence found:"<<i<<" "<<j<<" "<<k<<"\n";
            }
        
    }
  }
  if(flag)
    cout<<"Sequence not found.\n";
  }
cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;
}