/**
 * Author  : BurningTiles
 * Created : 2020-09-07 07:09:32
 * Link    : GitHub.com/BurningTiles
 * Program : Struct
**/

#include <bits/stdc++.h>
using namespace std;

struct Student{
	string first_name, last_name;
	int age,standard;
};

int main(){
	Student st;
	
	cin >> st.age >> st.first_name >> st.last_name >> st.standard;
	cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
	
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/c-tutorial-struct/problem

**/