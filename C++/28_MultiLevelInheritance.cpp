/**
 * Author  : BurningTiles
 * Created : 2020-09-10 15:10:23
 * Link    : GitHub.com/BurningTiles
 * Program : Multi Level Inheritance
**/

#include <bits/stdc++.h>
using namespace std;


class Triangle{
	public:
		void triangle(){
			cout<<"I am a triangle\n";
		}
};

class Isosceles : public Triangle{
  	public:
  		void isosceles(){
			cout<<"I am an isosceles triangle\n";
  		}
};

class Equilateral : public Isosceles {
	public:
		void equilateral(){
			cout << "I am an equilateral triangle\n";
		}
};

int main(){
  
	Equilateral eqr;
	eqr.equilateral();
	eqr.isosceles();
	eqr.triangle();
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/multi-level-inheritance-cpp/problem

**/