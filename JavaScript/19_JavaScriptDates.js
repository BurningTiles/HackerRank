/**
 * Author  : BurninTiles
 * Created : 2020-10-30 00:32:25
 * Link    : GitHub.com/BurninTiles
**/

var days = [ "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" ];
function getDayName(dateString) {
	return days[new Date(dateString).getDay()];
}

/**

Question : 
https://www.hackerrank.com/challenges/js10-date/problem

**/
