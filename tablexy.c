// cw coleman  Do not copy and pase this code.  Type it. I did!
//compile  gcc inputabc.c -o inputabc -lm
// run ./inputabc
#include <stdio.h>
#include <math.h>
float disc (float a, float b,float c);
float main()
	{
		float a,b,c;
		printf("\n\t ------------- ------------- ------------- ------------- -------------\n");
		printf("\t Type in a value for a,b and c.\n");
		printf("\t this will output a x, f (x) table of values.\n");
		printf("\t Input a:");
		scanf("%f", &a );
		printf("\t Input b:");
		scanf("%f", &b );
		printf("\t Input c:");
		scanf("%f", &c ); 
		table(a,b,c);
	}


float table(float a, float b, float c){
		int x;
		float y = 0;
		for (x = -20; x < 21;x++){
		y = ((x*x)*a) + (b*x) + c;
		printf("%d | %f\n",x,y);
	}
}
