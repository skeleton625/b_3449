#include <cstdio>

int main() {
	char i1[101], i2[101];
	int t, r, i;
	scanf_s("%d%*c", &t);	
	while (t--) {
		scanf_s("%s %s", i1,101, i2,101);
		for (r = i = 0; i1[i]; i++) if (i1[i] != i2[i]) r++;
		printf("Hamming distance is %d.\n", r);
	}
	return 0;
}