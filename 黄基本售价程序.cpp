#include<iostream>
int main(void)
{
	std::cout<<"黄基本售价多少？体重多少？"<<std::endl; 
	int w = 0;
	float h = 0;
	std::cin>> w >> h;
	std::cout<<"黄基本售价"<<w<<"   "<<"体重"<<h<<"   "<<float(w/h)<<"元/斤";
	return 0; 
}
