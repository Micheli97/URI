#include <iostream>
#include <string.h>

int main()
{
    std::string x;
	std::string home;
	std::string beiju;
	bool y;



	while(std::cin >> x)
	{
		y = false;
		
		home.clear();
		beiju.clear();
		
		for(size_t i = 0; i < x.length(); i++)
		{
			char At = x[i];

			if(At == '[')
			{
				if(y)
					beiju = home + beiju;

			     	y = true;

				home.clear();
			}
			else if(At == ']')
			{
				y = false;

				beiju = home + beiju;
				home.clear();
			}
			else
			{
				if(y)
					home += At;
				else
					beiju += At;
			}

		}

		if(home.length() > 0)
			beiju = home + beiju;

		std::cout << beiju << std::endl;
	}

}
