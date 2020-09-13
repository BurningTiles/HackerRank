/**
 * Author  : BurningTiles
 * Created : 2020-09-12 22:52:26
 * Link    : GitHub.com/BurningTiles
 * Program : Abstract Classes - Polymorphism
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

class Cache {
	protected: 
	map<int,Node*> mp; //map the key to the node in the linked list
	int cp;  //capacity
	Node* tail; // double linked list tail pointer
	Node* head; // double linked list head pointer
	virtual void set(int, int) = 0; //set function
	virtual int get(int) = 0; //get function
};
#include <unordered_map>

class LRUCache : public Cache {
	public:
	unordered_map<int,int> m;
	LRUCache(int capacity){ cp = capacity;}
	void set(int key, int value){
		if(m.find(key)==m.end()){
			if(m.size()==cp)
				m.erase(m.begin());
			m.insert(m.end(),make_pair(key,value));
		}
		else{
			m.erase(key);
			m.insert(m.end(),{key,value});
		}
	}
	int get(int key){
		if(m.find(key)==m.end())
			return -1;
		int value = m[key];
		m.erase(key);
		m.insert(m.end(),{key,value});
		return value;
	}
	void print(){
		cout << "------\n";
		for(auto &a:m) cout << a.first << " ";
		cout << "\n------\n";
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

Only god knows what i was thinking when i created this code.
Don't know how and why, but it's working.

**/