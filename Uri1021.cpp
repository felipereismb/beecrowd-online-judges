#include <bits/stdc++.h>

using namespace std;

int main(){
	double d;

	scanf("%lf",&d);

	int n100 = (d/100);
	int n50 = (d%100)/50;
	int n20 = 0;
	int n10 = 0;
	int n5 = 0;
	int n2 = 0;
	int n1 = 0;

	int m50 = 0;
	int m25 = 0;
	int m10 = 0;
	int m5 = 0;
	int m1 = 0;


	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n",n100);
	printf("%d nota(s) de R$ 50.00\n",n50);
	printf("%d nota(s) de R$ 20.00\n",n20);
	printf("%d nota(s) de R$ 10.00\n",n10);
	printf("%d nota(s) de R$ 5.00\n",n5);
	printf("%d nota(s) de R$ 2.00\n",n2);

	printf("MOEDAS:\n");

	printf("%d moeda(s) de R$ 1.00\n",n1);
	printf("%d moeda(s) de R$ 0.50\n",m50);
	printf("%d moeda(s) de R$ 0.25\n",m25);
	printf("%d moeda(s) de R$ 0.10\n",m10);
	printf("%d moeda(s) de R$ 0.05\n",m5);
	printf("%d moeda(s) de R$ 0.01\n",m1);
	return 0;
}