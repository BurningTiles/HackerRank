/**
 * Author  : BurningTiles
 * Created : 2020-09-12 02:06:20
 * Link    : GitHub.com/BurningTiles
 * Program : Attending Workshops
**/

#include<bits/stdc++.h>

using namespace std;

class Workshop{
	public:
	int start,end,duration;
	Workshop(int s, int d):start(s), end(s+d), duration(d){}
	bool operator < (const Workshop& w){
		if(duration+start<w.duration+w.start) return true;
		return false;
	}
};
vector<Workshop> wlist;

class Available_Workshops{};

Available_Workshops* initialize(int s[],int d[], int n){
	for(int i=0; i<n; i++)
		wlist.push_back(Workshop(s[i],d[i]));
	Available_Workshops *x;
	return x;
}

int CalculateMaxWorkshops(Available_Workshops *temp){
	sort(wlist.begin(), wlist.end());
	int ans = 0, e = 0;
	for(auto &a:wlist){
		if(a.start>=e){
			++ans;
			e=a.end;
		}
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