#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;	
	while(t--) {
		int n;
		cin>>n;
		if(n==1) {
			cout<<"1 0"<<endl;
		} else if(n % 4 == 0) {
                        cout<<"-"<<((n)/4)*2<<" -"<<((n)/4)*2<<endl;
		} else if(n %4 == 1) {
			cout<<(((n-1)/4)*2)+1 <<" -"<<(((n-1)/4)*2)<<endl;
		} else if(n % 4 == 2) {
			cout<<(((n+2)/4)*2)-1<<" "<<(((n+2)/4)*2)<<endl;
		} else if(n %4 == 3) {
			cout<<"-"<<((n+1)/4)*2<<" "<<((n+1)/4)*2<<endl;
		}
	}
	return 0;
}
