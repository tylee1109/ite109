#include <stdio.h>

int main() {
	int a,b,n;
	scanf("%d", &n);

	printf("a   b   \n");

	for (a=1; a<=500; a++) {
		for (b=1; b<=500; b++) {
			if (a*a - b*b == n)
				printf("%-3d %-3d\n", a,b);
		}
	}

	return 0;
}
