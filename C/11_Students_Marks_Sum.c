/**
 * Author  : BurningTiles
 * Created : 2020-11-22 16:28:11
 * Link    : BurningTiles.github.io
 * Program : Students Marks Sum
**/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int *marks, int number_of_students, char gender){
	int ans = 0, i = gender == 'g' ? 1 : 0;
	for (; i < number_of_students; i += 2)
		ans += marks[i];
	return ans;
}

int main() {
	int number_of_students;
	char gender;
	int sum;

	scanf("%d", &number_of_students);
	int *marks = (int *)malloc(number_of_students * sizeof(int));

	for (int student = 0; student < number_of_students; student++)
		scanf("%d", (marks + student));

	scanf(" %c", &gender);
	sum = marks_summation(marks, number_of_students, gender);
	printf("%d", sum);
	free(marks);

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/students-marks-sum/problem

**/