#include <stdio.h>
#include "calc.h"

int main() {
	int result_add;
	int result_sub;
	int result_mul;
	int result_div;

	// ‘«‚µŽZ
	result_add = add(10, 5);
	printf("%d\n", result_add);

	// ˆø‚«ŽZ
	result_sub = sub(10, 5);
	printf("%d\n", result_sub);

	// Š|‚¯ŽZ
	result_mul = mul(10, 5);
	printf("%d\n", result_mul);

	// Š„‚èŽZ
	result_div = div(10, 5);
	printf("%d\n", result_div);

	printf("Auto Build Test by Jenkins\n");

	return 0;
}