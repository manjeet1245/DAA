#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define mod 1000000007
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define check(x)  cerr << #x << ": " << x << endl;
void  solve()
{ 
   int num,num2;
    int i, j;
    i = j = 0;
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; ++i)
        cin >> arr[i];
    cin >> num2;
    int arr2[num2];
    for (int i = 0; i < num2; ++i)
        cin >> arr2[i];
    
    while (i != num && j != num2)
    {
        if (arr[i] == arr2[j])
        {
            cout << arr[i++] << " ";
            j++;
        }
        else if (arr[i] < arr2[j])
            i++;
        else
            j++;
    }
  
}


                                                                                                          
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    sync;
   
    int t = 1;
   // cin >> t;
   
    while(t--) solve();
    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";
    return 0;    
}