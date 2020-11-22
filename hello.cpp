#include<iostream>
int f(int x)
{
	if (x<5)
	{
		std::cout << "less than 5 \n";
	}
	else
	{
		std::cout << "not less than 5 \n";
	}
	return 0;
}

int main()
{
std::cout << "hello world , dude \n";
std::cout << "update 1 \n";
f(3);
return 0;
}