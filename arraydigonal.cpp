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
int x[n][n],ele1=0,ele2=0;

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
   {
        cin>>x[i][j];    
    }
}

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
   {
        cout<<x[i][j];    
    }
}
for(i=0;i<n;i++)
{
   for(j=0;j<=n;j++)
   {
      if(i==j)
      {
         ele1+=x[i][j];    
      }
   }
}
cout<<ele1<<"\n";
for(i=0;i<n;i++)
{
   for(j=0;j<=n;j++)
   {
      if(i+j==n-1)
      {
         ele2+=x[i][j];  
      }
   }
}
if(ele1>ele2)
{
   cout<<ele1-ele2;   
}
else if(ele2>ele1)
{
   cout<<ele2-ele1;
}
else
{
   cout<<ele2-ele1;
}
}