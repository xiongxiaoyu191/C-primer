#include<iostream>
#include<cctype>

int main()
{
	using namespace std;
	char ch;
	while (true)
	{
		cout << "Please enter a c,p,g or g:" << endl;
		cin >> ch;
		if (ch=='c' or ch=='p' or ch=='g' or ch=='t')
		{
			switch (ch)
			{
				case 'c':cout << "carnivore" << endl; 
						break;
				case 'p':cout << "pianist" << endl;
						break;
				case 'g':cout << "game" << endl;
						break;
				case 't':cout << "tree" << endl;
						break;
			}
			break;
		}
		else
		{
			continue;
		}
	}
	return 0;
}