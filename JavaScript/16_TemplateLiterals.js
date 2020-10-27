/**
 * Author  : BurninTiles
 * Created : 2020-10-28 00:22:21
 * Link    : GitHub.com/BurninTiles
**/

function sides(literals, ...expressions) {
	let [a, p] = expressions;
	let tmp = Math.sqrt(p * p - 16 * a);
	let s1 = (p + tmp) / 4;
	let s2 = (p - tmp) / 4;
	return [s2, s1].sort();
}

/**

Question : 
https://www.hackerrank.com/challenges/js10-template-literals/problem

**/
