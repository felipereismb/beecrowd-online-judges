#include <bits/stdc++.h>

using namespace std;

int main(){

	double raio;
	scanf("%lf",&raio);

	double pi = 3.14159 * pow(raio,3) * (4.0/3);

	printf("VOLUME = %.3lf\n",pi);
	return 0;
}