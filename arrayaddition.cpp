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
int n,i;
float zer=0,pos=0,neg=0;
cin>>n;
int arr[n];
for(i=0;i<=n;i++)
{
   cin>>arr[i];
}

for(i=0;i<n;i++)
{
   if (arr[i]==0)
   {
       zer+=1;
   }
   else 
   {
       if(arr[i]>0)
       {
         pos+=1;
       }
       else
       {
         neg+=1;
       }
   }
}
cout<<zer/n<<" "<<neg/n<<" "<<pos/n;
}