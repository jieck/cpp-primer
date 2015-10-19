#include<iostream>
int main(void)
{
	int val = 50,sum = 0;
	while(val <= 100)
	{
		sum += val;
		val++;
	}
	std::cout<<"sum is (1 to 10 ) : "<<sum<<std::endl;
	return 0;
}
