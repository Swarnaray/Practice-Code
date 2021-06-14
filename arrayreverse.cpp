#include<bits/stdc++.h>
using namespace std;

#define ul unsigned long
#define ull unsigned long long

void solve();
int main() 
{ 
   ios_base::sync_with_stdio(false);cin.tie(NULL); 
   #ifndef ONLINE_JUDGE 
   freopen("input.txt", "r", stdin); 
   freopen("error.txt", "w", stderr); 
   freopen("output.txt", "w", stdout); 
   #endif 

   solve();
   cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl; 
   return 0; 
} 
void solve()
{
int n,i,j;
cin>>n;
int x[n];

for(i=0;i<n;i++)
{
		cin>>x[i];
}

for(i=0;i<n;i++)
{
      cout<<x[i];
}
for(i=n-1;i>=0;i--)
{
		cout<<x[i]<<" ";	
}

}