#include<iostream>
int main(void)
{
	int currval = 0 , val = 0;
	if(std::cin>>currval)
	{
		int counter = 1;
		while(std::cin>>val)
		{
			if(currval == val){
				counter++;
			}else{
				std::cout<<currval<<"the times is "<<counter<<std::endl;
				currval = val;
				counter = 1;
			}
		}
		std::cout << currval <<  " occurs " << counter << " times" << std::endl;
	}
	return 0;
 } 
