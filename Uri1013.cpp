#include <bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	scanf("%d",&a);

	scanf("%d",&b);

	if(b>a){
		a = b;
	}

	scanf("%d",&c);

	if(c>a){
		a = c;
	}

	printf("%d eh o maior\n",a);
	return 0;
}