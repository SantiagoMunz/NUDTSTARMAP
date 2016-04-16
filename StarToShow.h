#ifndef STARTOSHOW
#define STARTOSHOW
#include "Graph.h"
#include "Star.h"
#include <vector>
class StarToShow
{
public:
	StarToShow(void);
	~StarToShow(void);
	std::vector<Star> getStars();//返回宽搜序的所有要显示的星。
	void addSonStar(int Index, std::vector<Star> sons);//为显星集下标为index的星添加子星s。
	void deleteStar(int Index);//删除下标为index的星,会将它的所有子星也一并删除
	void deleteSons(int Index);//删除下标为index的星的所有子星
	void click(int Index);//点击Index的星需要调用的函数。 
	int preStartIndex;//储存刚刚点击的星的Index。
private:
	Graph G;
};
#endif
