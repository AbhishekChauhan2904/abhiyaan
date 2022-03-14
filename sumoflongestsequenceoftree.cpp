#include<bits/stdc++.h>
using namespace std;
#include"treenode1.h"
treenode1<int>* takeinputlevelwise(){
	int rootdata;
	cin>>rootdata;
	treenode1<int>* root=new treenode1<int>(rootdata);
	queue<treenode1<int>*> pendingnodes;
	pendingnodes.push(root);
	while(pendingnodes.size()!=0){
		treenode1<int>* front=pendingnodes.front();
		pendingnodes.pop();
		int numchild;
		cin>>numchild;
		for(int i=0;i<numchild;i++){
			int childdata;
		    cin>>childdata;
		    treenode1<int>* child=new treenode1<int>(childdata);
		    front->children.push_back(child);
		    pendingnodes.push(child);
		}
	}
	return root;
}
int main(){
	treenode1<int> * root=takeinputlevelwise();
	return 0;
}