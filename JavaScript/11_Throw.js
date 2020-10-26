/**
 * Author  : BurninTiles
 * Created : 2020-10-27 00:06:54
 * Link    : GitHub.com/BurninTiles
**/

function isPositive(a) {
	if(a>0)
		return "YES";
	else if(a==0)
		throw Error("Zero Error");
	else
		throw Error("Negative Error");
}

/**

Question : 
https://www.hackerrank.com/challenges/js10-throw/problem

**/