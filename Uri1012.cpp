#include <bits/stdc++.h>

using namespace std;

int main(){

	long double a,b,c;
	long double pi = 3.14159;

	scanf("%Lf %Lf %Lf",&a,&b,&c);

	printf("TRINGULO: %.3Lf\n",(a*c)/2.0);
	printf("CIRCULO: %.3Lf\n", pi * (c*c));
	printf("TRAPEZIO: %.3Lf\n",((a+b)*c)/2.0);
	printf("QUADRADO: %.3Lf\n", b * b);
	printf("RETANGULO: %.3Lf\n",(a*b));
	return 0;
}