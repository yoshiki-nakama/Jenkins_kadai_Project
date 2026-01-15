#include <stdio.h>
#include "calc.h"

int main() {
	int result_add;
	int result_sub;
	int result_mul;
	int result_div;

	// ‘«‚µZ
	result_add = add(10, 5);
	printf("%d\n", result_add);

	// ˆø‚«Z
	result_sub = sub(10, 5);
	printf("%d\n", result_sub);

	// Š|‚¯Z
	result_mul = mul(10, 5);
	printf("%d\n", result_mul);

	// Š„‚èZ
	result_div = div(10, 5);
	printf("%d\n", result_div);

	printf("ƒI[ƒgƒrƒ‹ƒhƒeƒXƒg\n");
	return 0;
}