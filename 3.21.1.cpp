#include<iostream>
#include"Sales_item.h"
int main(void)
{
	Sales_item book1, book2,sum;
	//while(std::cin>>book1!=)
	std::cin>>book1>>book2;
	if(book1.isbn() == book2.isbn())
	{
		std::cout<<book1+book2<<std::endl;
		return 0;
	}else
	{
		std::cerr<<"deffer"<<std::endl;
		return -1;
	}
	std::cout<<book1+book2<<std::endl;
	return 0;
}
