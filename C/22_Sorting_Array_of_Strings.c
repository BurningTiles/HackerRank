/**
 * Author  : BurningTiles
 * Created : 2020-11-24 10:55:01
 * Link    : BurningTiles.github.io
 * Program : Sorting Array of Strings
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int dist(const char *s) {
	int ans = 0, c[26] = {0};
	for (int i = 0; s[i] != '\0'; i++)
		if (c[s[i] - 'a'] == 0) {
			++c[s[i] - 'a'];
			++ans;
		}
	return ans;
}

int lexicographic_sort(const char *a, const char *b) {
	return strcmp(a, b) <= 0;
}

int lexicographic_sort_reverse(const char *a, const char *b) {
	return strcmp(a, b) >= 0;
}

int sort_by_length(const char *a, const char *b) {
	int la = strlen(a), lb = strlen(b);
	return la == lb ? strcmp(a, b) <= 0 : la < lb;
}

int sort_by_number_of_distinct_characters(const char *a, const char *b) {
	int da = dist(a), db = dist(b);
	return da == db ? strcmp(a, b) <= 0 : da < db;
}

void string_sort(char **arr, const int len,
                 int (*cmp_func)(const char *a, const char *b)) {
	for (int i = 0; i < len - 1; i++)
		for (int j = 0; j < len - i - 1; j++)
			if (!cmp_func(arr[j], arr[j + 1])) {
				char *tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
}

int main() {
	int n;
	scanf("%d", &n);

	char **arr;
	arr = (char **)malloc(n * sizeof(char *));

	for (int i = 0; i < n; i++) {
		*(arr + i) = malloc(1024 * sizeof(char));
		scanf("%s", *(arr + i));
		*(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
	}

	string_sort(arr, n, lexicographic_sort);
	for (int i = 0; i < n; i++)
		printf("%s\n", arr[i]);
	printf("\n");

	string_sort(arr, n, lexicographic_sort_reverse);
	for (int i = 0; i < n; i++)
		printf("%s\n", arr[i]);
	printf("\n");

	string_sort(arr, n, sort_by_length);
	for (int i = 0; i < n; i++)
		printf("%s\n", arr[i]);
	printf("\n");

	string_sort(arr, n, sort_by_number_of_distinct_characters);
	for (int i = 0; i < n; i++)
		printf("%s\n", arr[i]);
	printf("\n");
}

/**

Question :
https://www.hackerrank.com/challenges/sorting-array-of-strings/problem

**/