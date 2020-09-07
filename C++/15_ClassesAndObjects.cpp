/**
 * Author  : BurningTiles
 * Created : 2020-09-07 07:29:38
 * Link    : GitHub.com/BurningTiles
 * Program : Classes and Objects
**/

#include <bits/stdc++.h>
using namespace std;

class Student{
	private:
		int score[5];
	public:
		void input(){
			for(int i=0; i<5; i++)	cin >> score[i];
		}
		int calculateTotalScore(){
			return score[0]+score[1]+score[2]+score[3]+score[4];
		}
};

int main(){
	int n; // number of students
	cin >> n;
	Student *s = new Student[n]; // an array of n students
	
	for(int i = 0; i < n; i++){
		s[i].input();
	}

	// calculate kristen's score
	int kristen_score = s[0].calculateTotalScore();

	// determine how many students scored higher than kristen
	int count = 0; 
	for(int i = 1; i < n; i++){
		int total = s[i].calculateTotalScore();
		if(total > kristen_score){
			count++;
		}
	}
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/classes-objects/problem

**/