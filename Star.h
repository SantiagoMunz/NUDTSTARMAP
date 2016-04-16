#ifndef STAR
#define STAR
#include <utility>
#include <string>
class Star
{
public:
	Star(int Index, int x, int y, std::string name, int kind);
	Star(int Index, std::string name, int kind);
	Star(void);
	~Star(void);
	std::string get_name();
	std::pair<int, int> get_coordinate();//返回星的坐标
	int get_weight();//返回星权重（决定要显示的大小）
	int get_kind();//返回星的重要程度（决定要显示的特效：高亮、闪烁）
	void is_edited();//右键编辑响应函数
	void set_weight(int we);//修改权重
	int Index;//星号
private:
	int x;
	int y;
	int weight;
	int kind;
	bool extended;
	std::string name;
};
#endif
