-#include <stdio.h>
int main(){
	double x;
	double y;
	double z;
	double e;
	double h;
	scanf("%lf",&x);
	y = x * 8/100;
	x = x + y;
	z = x * 8/100;
	x = x + z;
	e = x * 8/100;
	x = x + e;
	h = x * 8/100;
	x = x + h;
	printf("so tien thu dc la %lf",x );
	return 0 ;
	}
		
