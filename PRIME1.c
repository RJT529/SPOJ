#include<stdio.h>
#include<math.h>
int simpleSieve(int prime[], int n, int *c) 
{
	int sieve[100005] = {0,0};
	int i, j;

	for(i = 2; i <= floor(sqrt(n)); i++) {
		if(sieve[i] == 0) {
			for(j = i*i; j <= n; j = j+i) {
				sieve[j] = 1;
			}
		}
	}

	for(i = 2; i <= n; i++) {
		if(!sieve[i]) {
			prime[*c] = i;
			(*c) +=1;
		}
	}

	return 0;
}



int segmentedSieve(int m, int n) 
{
	int prime[100005];
	int numOfPrime = 0;
	int i ,j;
	simpleSieve(prime, floor(sqrt(n)), &numOfPrime);

	for(i = m ; i <=n ; i++) {
		if(i == 2 || i == 3) {
			printf("%d\n",i);
			continue;
		} else if(i == 1) {
			continue;
		}
		int flag = 0;
		for(j = 0; j < numOfPrime; j++) {
			if(prime[j] <= (int)sqrt(i)) {
				if (i % prime[j] == 0) {
					flag = 1;
					break;
				}
			}			
			
		}		
		if(flag == 0) {
			printf("%d\n",i);
		}
	} 
		
	

	return 0;
}


int main() 
{
	int t;
	scanf("%d",&t);
	while(t--) {
		int n,m;
		scanf("%d %d",&m,&n);
		segmentedSieve(m,n);
	}

	return 0;
}
