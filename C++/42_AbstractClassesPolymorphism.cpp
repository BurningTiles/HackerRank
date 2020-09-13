/**
 * Author  : BurningTiles
 * Created : 2020-09-13 13:51:38
 * Link    : GitHub.com/BurningTiles
 * Program : Abstract Classes Polymorphism
**/

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
	Node* next;
	Node* prev;
	int value;
	int key;
	Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
	Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
	protected: 
	map<int,Node*> mp; //map the key to the node in the linked list
	int cp;  //capacity
	Node* tail; // double linked list tail pointer
	Node* head; // double linked list head pointer
	virtual void set(int, int) = 0; //set function
	virtual int get(int) = 0; //get function
};

struct LRUCache : Cache {
	vector<pair<int, int> > mem;
	LRUCache(int cp_) {cp=cp_;}
	void set(int k, int v) {
		int p = -1;
		for (int i=0, i_len=mem.size(); i<i_len; ++i) 
			if (mem[i].first == k) p = i;
		if (p == -1) {
			if ((int)mem.size() >= cp) mem.pop_back();
		}
		else
			mem.erase(mem.begin() + p);
		mem.insert(mem.begin(), make_pair(k, v));
	}
	int get(int k) {
		int p = -1;
		for (int i=0, i_len=mem.size(); i<i_len; ++i) 
			if (mem[i].first == k) 
				p = mem[i].second;
		return p;
	}
};

int main() {
	int n, capacity,i;
	cin >> n >> capacity;
	LRUCache l(capacity);
	for(i=0;i<n;i++) {
		string command;
		cin >> command;
		if(command == "get") {
			int key;
			cin >> key;
			cout << l.get(key) << endl;
		} 
		else if(command == "set") {
			int key, value;
			cin >> key >> value;
			l.set(key,value);
		}
	}
	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/abstract-classes-polymorphism/problem

**/