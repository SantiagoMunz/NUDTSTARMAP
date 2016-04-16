#include "Star.h"


Star::Star(int Index, int x, int y, std::string name, int kind)
{
	this->Index = Index;
	this->x = x;
	this->y = y;
	this->name = name;
	this->weight = 0;
}
Star::Star(int Index, std::string name, int kind)
{
	this->Index = Index;
	this->x = 0;
	this->y = 0;
	this->name = name;
	this->weight = 0;
}

Star::~Star(void)
{
}

int Star::get_weight(){
	return weight;
}
void Star::set_weight(int we){
	weight = we;
}
int Star::get_kind(){
	return kind;
}
std::pair<int, int> Star::get_coordinate(){
	std::pair<int, int> cor;
	cor.first = x;
	cor.second = y;
	return cor;
}
std::string Star::get_name(){
	return name;
}

