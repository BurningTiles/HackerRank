/**
 * Author  : BurninTiles
 * Created : 2020-10-27 23:49:02
 * Link    : GitHub.com/BurninTiles
**/

class Polygon {
	constructor(sides) {
		this.sides = sides;
	}
	perimeter() {
		let ans = 0;
		for (let i = 0; i < this.sides.length; i++) 
			ans += this.sides[i];
		return ans;
	}
}

/**

Question : 
https://www.hackerrank.com/challenges/js10-class/problem

**/
