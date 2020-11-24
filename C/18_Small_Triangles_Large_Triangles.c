/**
 * Author  : BurningTiles
 * Created : 2020-11-24 09:48:21
 * Link    : BurningTiles.github.io
 * Program : Small Triangles, Large Triangles
**/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

struct triangle {
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

double area(triangle t) {
	double p = (double)(t.a + t.b + t.c) / 2;
	return sqrt(p * (p - t.a) * (p - t.b) * (p - t.c));
}

void sort_by_area(triangle *tr, int n) {
	triangle t;
	double a[n], p;

	for (int i = 0; i < n; i++)
		a[i] = area(*(tr + i));

	for (int i = 0; i < n - 1; i++)
		for (int j = 0; j < n - i - 1; j++)
			if (a[j] > a[j + 1]) {
				p = a[j];
				a[j] = a[j + 1];
				a[j + 1] = p;
				t = *(tr + j);
				*(tr + j) = *(tr + j + 1);
				*(tr + j + 1) = t;
			}
}

int main() {
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

/**

Question :
https://www.hackerrank.com/challenges/small-triangles-large-triangles/problem

**/