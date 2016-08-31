#include<iostream>

using namespace std;

long long int modular_pow(long long int base, long long int exponent, int modulus)  
{
	long long int result = 1;
	base = base%modulus;
	while (exponent > 0) {
		if(exponent % 2 == 1) {
			result = (result * base) % modulus;
		}
		exponent = exponent >> 1;
		base = (base*base)% modulus;
	}
	return result;
}

int main()
{
	long long int t,a,b;
	cin>>t;
	string num;
	while(t--) {
		cin>>num;
		int l = num.length();
		a = (int)(num[l-1] - 48); 
		cin>>b;
		int result = modular_pow(a,b,10);
		cout<<result<<"\n";	
	}
	return 0;
}
