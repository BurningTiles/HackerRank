/**
 * Author  : BurninTiles
 * Created : 2020-10-26 23:41:55
 * Link    : GitHub.com/BurninTiles
**/

function vowelsAndConsonants(s) {
	let n=s.length;

	for(let i=0; i<n; i++)
		if("aeiou".includes(s[i]))
			console.log(s[i]);

	for(let i=0; i<n; i++)
		if(!"aeiou".includes(s[i]))
			console.log(s[i]);
}

/**

Question : 
https://www.hackerrank.com/challenges/js10-loops/problem

**/