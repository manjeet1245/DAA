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
  int n,num;
  cin>>n>>num;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
   int first = 0;
   int  last = n-1;
   int middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<num)
            first = middle+1;
        else if(arr[middle]==num)
        {
            cout<<middle+1;
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        cout<<"element is not present "<<n;
    cout<<endl;
    return 0;
}
   
cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
}