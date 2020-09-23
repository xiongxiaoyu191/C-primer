#include<iostream>
#include<fstream>

int main()
{
	using namespace std;
	/*ifstream filetxt;
	filetxt.open("abc.txt");
	if (!filetxt.is_open())
	{
		cout << "Couldn't open the file" << endl;
		exit(EXIT_FAILURE);
	}
	char line[81];
	
	int i = 0;
	while(!filetxt.eof())
	{
			filetxt >> line[i];
			cout << line[i];
			
			i++;
		
	}
	cout << "the end of txt reached" << endl;
	cout << "the number of the char is" << i << endl;
*/
	string str = {};
	
	while (cin>>str)
	{
		cout << str << endl;
		cout << str[0] << endl;
	}
	





	//filetxt.close();
	
}