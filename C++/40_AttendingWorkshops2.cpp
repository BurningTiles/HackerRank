/**
 * Author  : BurningTiles
 * Created : 2020-09-12 02:33:41
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

class Available_Workshops{
	public:
	int n;
	vector<Workshop> wlist;
};

Available_Workshops* initialize(int s[],int d[], int n){
	Available_Workshops *temp = new Available_Workshops;
	temp->n = n;
	for(int i=0; i<n; i++)
		temp->wlist.push_back(Workshop(s[i],d[i]));
	sort(temp->wlist.begin(), temp->wlist.end());    
	return temp;
}

int CalculateMaxWorkshops(Available_Workshops *temp){
	int ans = 0, e = 0;
	for(auto &a:temp->wlist){
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