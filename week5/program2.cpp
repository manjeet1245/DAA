#include<bits/stdc++.h>
#define ll long long int
using namespace std;
#define mod 1000000007
#define sync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define check(x)  cerr << #x << ": " << x << endl;
void merge(int ar[],int l,int mid,int h)
{
    int a=l,b=mid+1;
    int cur=0;
    int n=h-l+1;
    int temp[n];
    while(a<=mid&&b<=h)
    {
        if(ar[a]<=ar[b])
     {   temp[cur++]=ar[a++]; 
     }
        else
        {
            temp[cur++]=ar[b++];
        }
    }
   while(a<=mid)
    {
        temp[cur]=ar[a];    
        a++;
        cur++;
    }
    while(b<=h)
    {
        temp[cur]=ar[b];
        b++;
        cur++;
    } 
      int z=0;
    for(int i=l;i<=h;i++)
    {
       
    ar[i]=temp[z++];
    }

}
void mSort(int ar[],int l, int h)
{
    if(l<h)
    {
    int mid=(l+h)/2;
    mSort(ar,l,mid);
    mSort(ar,mid+1,h);
    merge(ar,l,mid,h);
    }
}
void  solve()
{ 
   int siz,numb,fl=1;
    cin>>siz;
    int ar[siz];
    for(int j=0;j<siz;j++)
        cin>>ar[j];
    cin>>numb;
    mSort(ar,0,(siz-1));
    int start=0,end=siz-1;
    while(start<end)
    {
        if(ar[start]+ar[end]>numb)
        {
            end--;
        }
        else
        {
            if(ar[start]+ar[end]==numb)
            {
                cout << ar[start] << " " << ar[end] << ", ";
                fl = 0;
            }
            start++;
        }
    }
    if(fl==1)
        cout<<"No pairs"<<endl;
  
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