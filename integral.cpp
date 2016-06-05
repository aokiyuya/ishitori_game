#include<stdio.h>
#include<math.h>
float function(float x){
	return 2*x;
}
int main(void){
	float ans = 0.0;
	float sep = 0.00004;
	float limit = 10.0;
	printf("start Integration\n");
	for(float i = 0.0; i <= limit; i = i + sep){
		ans = ans + 2 * i;
	}
	printf("ans = %lf\n", ans*sep);
	return 0;
}
