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
	int a[100],n,i,x,h,l,m;
	//cout<<"Enter the size of the array\n";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	//cout<<"Enter the number for search\n";
	cin>>x;
	l=0;
	h=n;
	while(h>=l){
		m=(h+l)/2;
		//cout<<a[i]<<" ";
		if(a[m]==x){
			cout<<"\nFound at position "<<i;
		}
		else{
			if(a[m]>x){
				h=m-1;
			}
			else{
				l=m+1;
			}
		}
	}
}