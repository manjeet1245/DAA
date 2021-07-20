#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define check(x)                cerr << #x << ": " << x << endl;
int jumpSearch(int arr[], int n, int x)
{

    int m = sqrt(n);
    int i = 0;
    while (arr[min(m, n) - 1] < x)
    {
        i = m;
        m += sqrt(n);
        if (i >= n)
            return -1;
    }
    while (arr[i] < x)
    {
        i++;
        if (i == min(m, n))
            return -1;
    }
    if (arr[i] == x)
        return i;

    return -1;
}

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
  int result = jumpSearch(arr, n, num);
    if (result == -1) cout << "Element not found";
    else cout << "Element found at index " << result;
    cout<<"\n";
  }
    return 0;
   
cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
}