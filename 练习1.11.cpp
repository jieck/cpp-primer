#include<iostream>
int main(void)
{
	int lower = 0 , high = 0 ,sum = 0;
	std::cout<<"input a lower number and a high number : "<<std::endl;
	std::cin>>lower>>high;
	if(lower > high)
	{
		int temp = high;
		high = lower;
		lower = temp;
	}
	while(lower <= high)
	{
		sum += lower;
		lower++;
	}
	std::cout<<"The sum of lower to high is : "<<sum<<std::endl;
	return 0;
}
