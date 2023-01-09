#pragma warning(disable:4996) 
#include <stdio.h>
#include <ctype.h>
void copy_arr (double target[], double source[], int n);
void copy_ptr (double target[], double source[], int n);
void copy_ptrs(double target[], double source[], double* e_source);
void shows(double arr[], int n);
void main(void)
{
	int i;
	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, source, 5);
	copy_ptr(target2, source, 5);
	copy_ptrs(target3, source, source+5);
	shows(target1, 5);
	shows(target2, 5);
	shows(target3, 5);
	return;
}	

void copy_arr(double target[], double source[], int n) {
	int i;
	for (i = 0; i < n; i++)
	{
		target[i] = source[i];
	}
	return;
}

void copy_ptr(double target[], double source[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		*(target + i) = *(source + i);
	}
	return;
}

void copy_ptrs(double target[], double source[],double * e_source)
{
	
	while (source < e_source)
	{
		*target = *source;
		target++;
		source++;
	}
	return;
}


void shows(double arr[],int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%.1f ", arr[i]);
	}
	printf("\n");
	return;
}
