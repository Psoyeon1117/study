#include <stdio.h>

void swap(double* pa, double* pb);
void line_up(double* maxp, double* midp, double* minp);

int main(void) {
	double max, mid, min;
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("max:%lf mid:%lf min:%lf", max, mid, min);
	
}

void swap(double* pa, double* pb) {
	double temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
void line_up(double* maxp, double* midp, double* minp) {
	if (*maxp < *midp) { swap(maxp, midp); }	//pa == maxp == &max
	if (*maxp < *minp) { swap(maxp, minp); }
	if (*midp < *minp) { swap(midp, minp); }
}
