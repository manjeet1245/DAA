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
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        m[a]++;
    }
    int key;
    cin>>key;
    map<int, int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); ++itr) {
      if(itr->first==key)
         cout<<itr->first<<"-"<<itr->second;
    }
    cout<<endl;
 }
    return 0;
}