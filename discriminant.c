// cw coleman  Do not copy and pase this code.  Type it. I did!
//compile  gcc inputabc.c -o inputabc -lm
// run ./inputabc
#include <stdio.h>
#include <math.h>
float disc (float a, float b,float c);
float main(){
	float a,b,c,d;
	printf("\n\t ------------- ------------- ------------- ------------- -------------\n");
	printf("\t Type in a value for a,b and c.\n");
	printf("\t Input a:");
	scanf("%f", &a );
	printf("\t Input b:");
	scanf("%f", &b );
	printf("\t Input c:");
	scanf("%f", &c );
	d = disc(a,b,c);
	printf("\n\t a = %f b = %f c = %f",a,b,c);
	printf("\n\t The discriminant of a+b+c is %f ",d);
		printf("\n\t ------------- ------------- ------------- ------------- -------------\n");
	return 0;
}


float disc (float a, float b, float c){
		float d = (b*b)-(4*a*c);
		return d;
}
