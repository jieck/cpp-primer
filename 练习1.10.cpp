#include<iostream>
int main(void)
{
	int val = 10;
	int sum = 0 ;
	while(val > 0)
	{
		sum += val;
		val--;
	}
	std::cout<<"sum of val form 10 to 1 is :"<<sum<<std::endl;
	return 0;
}
