/*
 * calc.c
 *
 *  Created on: 2017年2月20日
 *      Author: lili
 *
 *  Function: Calculate how many eggs in basket.
 *
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	int i = 9;
	while (1) {
		if (i % 1 == 0 &&
			i % 2 == 1 &&
			i % 3 == 0 &&
			i % 4 == 1 &&
			i % 5 == 1 &&
			i % 6 == 3 &&
			i % 7 == 0 &&
			i % 8 == 1 &&
			i % 9 == 0) {

			break;
		}

		i++;
	}

	printf("%d", i);
	return 0;
}
