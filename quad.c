// cw coleman  Do not copy and pase this code.  Type it. I did!
//compile  gcc inputabc.c -o inputabc -lm
// run ./inputabc
#include <stdio.h>
#include <math.h>
float disc (float a, float b,float c);
float main()
	{
		float a,b,c,d,x1,x2;
		float a1,b1,a2,b2;
		printf("\n\t ------------- ------------- ------------- ------------- -------------\n");
		printf("\t Type in a value for a,b and c.\n");
		printf("\t Input a:");
		scanf("%f", &a );
		printf("\t Input b:");
		scanf("%f", &b );
		printf("\t Input c:");
		scanf("%f", &c );
		d = disc(a,b,c);
		printf("\t the discriminant &f\n",d);
		if (d < 0){
			printf("\tImaginary Roots\n");
			d = d * -1;
			a1 = (-1 * b)/ (2 * a);
			b1 = sqrt(d) / (2*a);
		
			a2 = (-1 * b)/ (2 * a);
			b2 = -1 * sqrt(d) / (2*a);
			
			printf("\tImgaginary Root %f + %f i\n",a1,b1);
			printf("\tImgaginary Root %f + %f i\n",a2,b2);
		}else{
			x1= (-1 * b) + sqrt(d)/(2*a);
			x2= (-1 * b) + sqrt(d)/(2*a);
			printf("\t Roots %f and %f\n",x1,x2);
		 
		}



	}




float disc (float a, float b, float c){
		float d = (b*b)-(4*a*c);
		return d;
}
