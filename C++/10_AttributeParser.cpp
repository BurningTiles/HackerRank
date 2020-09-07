/**
 * Author  : BurningTiles
 * Created : 2020-09-05 08:28:44
 * Link    : GitHub.com/BurningTiles
 * Program : Attribute Parser
**/

#include <bits/stdc++.h>
using namespace std;

struct Tag{
	string name;
	vector<string> attr;
	vector<string> value;
	vector<Tag*> child;
	Tag* parent;
};
Tag* root;

int findAttr(Tag *t, string s){

	for(int i=0; i<t->attr.size(); i++)
		if(t->attr[i] == s)
			return i;

	return -1;
}

int findSubTag(Tag *t, string s){

	for(int i=0; i<t->child.size(); i++)
		if(t->child[i]->name == s)
			return i;

	return -1;
}

void getRecursive(Tag *t, string str, bool flag){
	int i=0;
	if(flag){
		i = findAttr(t,str);
		if(i==-1)
			cout << "Not Found!\n";
		else
			cout << t->value[i] << "\n";
	}
	else{
		for(;str[i]!='.' && str[i]!='~'; i++);
		char ch=str.at(i);
		string temp = str.substr(0,i);
		str = str.substr(i+1, str.length());
		i = findSubTag(t,temp);
		if(i==-1)
			cout << "Not Found!\n";
		else{
			if(ch=='.')
				getRecursive(t->child[i], str, false);
			else
				getRecursive(t->child[i], str, true);
		}
	}
}

void get(string str){
	getRecursive(root, str, false);
}

int main(){
	int n , q;
	cin >> n >> q;
	char ch;
	string temp, attr, value;

	root = new Tag;
	root->name = "Root";
	root->parent = NULL;
	Tag *current = root, *newTag;
	

	for (int i=0; i<n; i++){
		while(cin.get()!='<');
		
		if(cin.peek() != '/'){
			temp = "";
			while(cin.peek()!=' ' && cin.peek()!='>' && (ch=cin.get()))
				temp.append(1,ch);
			//cout << temp << "\n";
			newTag = new Tag;
			newTag->name = temp;
			newTag->parent = current;
			while(cin.peek() != '>'){
				attr=value="";
				while((ch=cin.get()) && ch==' ');

				do{
					if(ch==' ') continue;
					attr.append(1,ch);
				} while((ch=cin.get()) && ch!='=');
				
				while(cin.get()!='"');
				
				while((ch=cin.get()) && ch!='"')
					value.append(1,ch);

				//cout << attr << ":" << value << "\n";
				newTag->attr.push_back(attr);
				newTag->value.push_back(value);
				while(cin.peek()==' ') cin.get();
			}
			while(cin.get()!='>');
			current->child.push_back(newTag);
			current = newTag;
			newTag  = NULL;
		}
		else{
			current = current->parent;
			while(cin.get()!='>');
		}
	}

	while(q--){
		cin >> temp;
		get(temp);
	}	

	return 0;
}

/**

Question : 
https://www.hackerrank.com/challenges/attribute-parser/problem

**/