/**
 * Author  : BurningTiles
 * Created : 2020-09-10 14:33:51
 * Link    : GitHub.com/BurningTiles
 * Program : Inheritance Introduction
**/

#include <bits/stdc++.h>
using namespace std;

class Triangle{
	public:
	void triangle(){
		cout << "I am a triangle\n";
	}
};

class Isosceles: public Triangle{
	public:
	void isosceles (){
		cout << "I am an isosceles triangle\nIn an isosceles triangle two sides are equal\n";
	}
};

int main(){
	Isosceles i;
	i.isosceles();
	i.triangle();
	return 0;
}

/**

Question :
https://www.hackerrank.com/challenges/inheritance-introduction/problem

**/