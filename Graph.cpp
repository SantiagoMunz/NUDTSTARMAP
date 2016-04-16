#include "Graph.h"
#include <queue>

Graph::Graph(void){
	this->sizer = 0;
}

Graph::~Graph(void)
{
}

void Graph::addStar(Star toadd){
	Stars[toadd.Index] = toadd;
	sizer++;
}

void Graph::delStar(int Index){
	sizer -=  ADJ[Index].size();
	ADJ[Index].clear();
}

void Graph::attachTo(int f, int s){
	ADJ[f].push_back(s);
}

vector<Star> Graph:: BFS(){
	vector<Star> res;
	bool *marked;
	marked = new bool[sizer];
	for(int i = 0; i < sizer; i++){
		marked[i] = false;
	}
	queue<int> que;
	que.push(0);
	while(!que.empty()){
		int now = que.front(); que.pop();
		marked[now]= true;
		res.push_back(Stars[now]);
		for(int i = 0; i < ADJ[now].size(); i++){
			int next = ADJ[now][i];
			if(!marked[next]){
				que.push(next);
			}
		}
	}
	return res;
}
