#include <bits/stdc++.h>

using namespace std;

int main(){
	int x;
	scanf("%d",&x);

	//int n100 = x/100;
	int n50 = (x%100)/50;
	int n20 = ((x%100)- n50*50)/20 ;
	int n10 = ((((x%100)- n50*50)) - n20*20)/10 ;
	int n5 =  ((((((x%100)- n50*50)) - n20*20)) - n10*10)/5;
	int n2 =  ((((((((x%100)- n50*50)) - n20*20)) - n10*10)) - n5*5)/2;
	int n1 =  ((((((((x%100)- n50*50)) - n20*20)) - n10*10)) - n5*5) - n2*2;



	printf("%d\n",x);
	printf("%d nota(s) de R$ 100,00\n",x/100);
	printf("%d nota(s) de R$ 50,00\n",n50);
	printf("%d nota(s) de R$ 20,00\n",n20);
	printf("%d nota(s) de R$ 10,00\n",n10);
	printf("%d nota(s) de R$ 5,00\n",n5);
	printf("%d nota(s) de R$ 2,00\n",n2);
	printf("%d nota(s) de R$ 1,00\n",n1);


	return 0;
}