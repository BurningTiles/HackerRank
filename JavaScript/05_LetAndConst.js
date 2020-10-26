/**
 * Author  : BurninTiles
 * Created : 2020-10-26 23:32:13
 * Link    : GitHub.com/BurninTiles
**/

function main() {
	let r = readLine();
	const PI = Math.PI;
	console.log(PI * r * r);
	console.log(2 * PI * r);

	try {    
		// Attempt to redefine the value of constant variable PI
		PI = 0;
		// Attempt to print the value of PI
		console.log(PI);
	} catch(error) {
		console.error("You correctly declared 'PI' as a constant.");
	}
}

/**

Question : 
https://www.hackerrank.com/challenges/js10-let-and-const/problem

**/