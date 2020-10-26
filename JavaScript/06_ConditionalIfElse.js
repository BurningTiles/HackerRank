/**
 * Author  : BurninTiles
 * Created : 2020-10-26 23:34:54
 * Link    : GitHub.com/BurninTiles
**/

function getGrade(score) {
	let grade;
	
	if (score > 25) grade = "A";
	else if (score > 20) grade = "B";
	else if (score > 15) grade = "C";
	else if (score > 10) grade = "D";
	else if (score > 5) grade = "E";
	else grade = "F";
	
	return grade;
}

/**

Question : 
https://www.hackerrank.com/challenges/js10-if-else/problem

**/
