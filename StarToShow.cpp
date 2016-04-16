#include "StarToShow.h"


StarToShow::StarToShow(void)
{
	Star myself(0,"ÌÕ³çÃ÷", 0);
	G.addStar(myself);
}


StarToShow::~StarToShow(void)
{
}

std::vector <Star> StarToShow::getStars(){
	return G.BFS();
}
void StarToShow::addSonStar(int Index, std::vector<Star> sons){
	for (int i = 0; i < sons.size(); i++)
	{
		G.addStar(sons[i]);
		G.attachTo(Index, sons[i].Index);
	}
}
void StarToShow::deleteStar(int Index){

}
void StarToShow::deleteSons(int Index){
	G.delStar(Index);
}
void  StarToShow::click(int Index){
	Star temp = G.Stars[Index];
	string key = temp.get_name();
	int kind = temp.get_kind();
}
