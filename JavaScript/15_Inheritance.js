/**
 * Author  : BurninTiles
 * Created : 2020-10-28 00:01:46
 * Link    : GitHub.com/BurninTiles
**/

Rectangle.prototype.area = function () {
  return this.w * this.h;
};

class Square extends Rectangle {
  constructor(l) {
    super(l, l);
  }
}

/**

Question : 
https://www.hackerrank.com/challenges/js10-inheritance/problem

**/
