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
  int n,num;
  cin>>n>>num;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  for(int i=0;i<n;i++)
  {
    if(arr[i]==num)
    {
      cout<<i<<" "<<num;
      break;
    }
     else if(i==n-1 and arr[i]!=num)
      cout<<"element not present"<<" "<<n;

  }
   
cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
}