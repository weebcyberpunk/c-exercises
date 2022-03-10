#include<stdio.h>
#include<stdlib.h>

/*
 * author GG weebcyberpunk@gmail.com
 * version 1.0.0
 * since Mar 07, 2022
 */

/*
 * Reads stdin, breaks lines based on args
 */
int main(int argv, char *argc[]) {

	char c;
	int x = 0;
	int lw;

	if (argv > 1) {
		lw = atoi(argc[1]);

	} else {
		printf("Please specify a number of chars to break the line.\n");
		return(1);

	}
	
	for (;;) {
		c = getchar();
		if (c == EOF) break;
		if (c == '\n') continue;
		printf("%c", c);
		x++;
		if (x == lw) {
			printf("\n");
			x = 0;

		}
	}
	
	printf("\n");
	
	return(0);
}
