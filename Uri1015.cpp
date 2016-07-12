#include <bits/stdc++.h>

using namespace std;

int main(){

	double x1,y1,x2,y2;

	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);

	x1 = pow((x2-x1),2);
	y1 = pow((y2-y1),2);

	printf("%.4lf\n", sqrt(x1+y1));
	return 0;
}