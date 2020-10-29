/**
 * Author  : BurninTiles
 * Created : 2020-10-30 00:00:09
 * Link    : GitHub.com/BurninTiles
**/

function getMaxLessThanK(n, k) {
  let max = 0;
  for (let i = 1; i <= n; i++) {
    for (let j = i + 1; j <= n; j++) {
      let tmp = i & j;
      if (tmp > max && tmp < k) max = tmp;
    }
  }
  return max;
}

/**

Question : 
https://www.hackerrank.com/challenges/js10-bitwise/problem

**/
