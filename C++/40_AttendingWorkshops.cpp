/**
 * Author  : BurningTiles
 * Created : 2020-09-12 02:43:35
 * Link    : GitHub.com/BurningTiles
 * Program : Attending Workshops
**/

#include<bits/stdc++.h>

using namespace std;

struct Workshop{
	int start,duration,end;
};

bool compare(const Workshop& a, const Workshop& b){ return a.end<b.end; }

struct Available_Workshops{
	int n;
	vector<Workshop> list;
};

Available_Workshops* initialize(int s[],int d[], int n){
	Available_Workshops *temp = new Available_Workshops;
	temp->n = n;
	for(int i=0; i<n; i++)
		temp->list.push_back({s[i],d[i],s[i]+d[i]});
	sort(temp->list.begin(), temp->list.end(), compare);    
	return temp;
}

int CalculateMaxWorkshops(Available_Workshops *temp){
	int ans = 0, e = 0;
	for(auto &a:temp->list)
		if(a.start>=e){
			++ans;
			e=a.end;
		}
	return ans;
}

int main(int argc, char *argv[]) {
	int n; // number of workshops
	cin >> n;
	// create arrays of unknown size n
	int* start_time = new int[n];
	int* duration = new int[n];

	for(int i=0; i < n; i++){
		cin >> start_time[i];
	}
	for(int i = 0; i < n; i++){
		cin >> duration[i];
	}

	Available_Workshops * ptr;
	ptr = initialize(start_time,duration, n);
	cout << CalculateMaxWorkshops(ptr) << endl;
	return 0;
}


/**

Question : 
https://www.hackerrank.com/challenges/attending-workshops/problem

**/