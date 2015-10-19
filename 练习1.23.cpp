#include<iostream>
#include"Sales_item.h"
int main(void)
{
	Sales_item aBook,bBook;
	int val = 0,cerrval = 0;
	int counter = 1; 
	std::cout<<"Enter two item"<<std::endl;
	std::cin>>aBook;
	while(std::cin>>bBook){
	if(aBook.isbn() == bBook.isbn())
	{
		counter++;
	}else{
	
		std::cout<<aBook<<"  counter  : "<<counter<<std::endl;
		counter = 1;
	}
}
	return 0;
}
