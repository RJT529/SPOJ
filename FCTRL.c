#include<stdio.h>

int main()
{

	int t;
	scanf("%d",&t);
	while(t--) {
		int n;
		scanf("%d",&n);
		long int counter = 0;
		int i;
		for(i = 5; i <= n; i = i*5) {
			counter += (int)(n/i);
		}
		printf("%ld\n",counter);
	}
	return 0;
}
