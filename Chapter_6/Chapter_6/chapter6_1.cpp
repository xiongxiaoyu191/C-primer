#include<iostream>
#include<cctype>

int main()
{
	using namespace std;
	char words[200] = {};
	cin >> words;
	int i = 0;
	while (words[i] != '@')
	{
		if (isdigit(words[i]))
		{
			i++;
			continue;
		}
		else if(islower(words[i]))
		{
			cout << char(toupper(words[i]));
		}
		else
		{
			cout << char(tolower(words[i]));
		}
		i++;
	}
	return 0;
}