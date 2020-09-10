/**
 * Author  : BurningTiles
 * Created : 2020-09-10 14:51:46
 * Link    : GitHub.com/BurningTiles
 * Program : Rectangle Area
**/

#include <bits/stdc++.h>
using namespace std;

class Rectangle{
	protected:
	int a,b;
	public:
	void read_input(){
		cin >> a >> b;
	}
	void display(){
		cout << a << " " << b << "\n";
	}
};

class RectangleArea: public Rectangle{
	public:
	void display() { 
		cout << a*b << "\n";
	}
};

int main(){
	RectangleArea r_area;
	r_area.read_input();
	r_area.Rectangle::display();
	r_area.display();
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/rectangle-area/problem

**/