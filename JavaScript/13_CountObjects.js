/**
 * Author  : BurninTiles
 * Created : 2020-10-27 23:39:26
 * Link    : GitHub.com/BurninTiles
**/

function getCount(obj) {
	let ans = 0;
	for (let i = 0; i < obj.length; i++) 
		if (obj[i].x == obj[i].y) 
			++ans;
	return ans;
}

/**

Question : 
https://www.hackerrank.com/challenges/js10-count-objects/problem

**/
