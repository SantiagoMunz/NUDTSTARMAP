#ifndef GRAPH
#define GRAPH
#include "Star.h"
#include <vector>
#define maxSrars 1000
using namespace std;
class Graph
{
public:
	Graph(void);
	~Graph(void);
	void addStar(Star toadd);
	void delStar(int Index);
	void attachTo(int f, int s);
	vector<Star> BFS();
	vector<int> ADJ[maxSrars];
	Star Stars[maxSrars];
private:
	int sizer;
};
#endif
