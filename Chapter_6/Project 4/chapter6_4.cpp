#include<iostream>

int main()
{
	using namespace std;
	const int strsize = 20;
	struct bop
	{
		char fullname[strsize];
		char jobname[strsize];
		char secert_name[strsize];
		int preference;
	};
	char choice;
	bop BOP_name[5] = { {"Wimp mach","aa","bb",0},
						{"Raki Rhodes","Junior Programmer","bb",1},
						{"Celi","bbb","MIPS",2},
						{"hoppy Hipman","Analyst Trainee","bb",1},
						{"Pat Hand","ee","LOOPY",2} };
	cout << "Benevoent Order of Programmers report" << endl << "a. display by name     b. display by title" << endl
		<< "c. display by bopname      d. display by preference" << endl << "q. quit" << endl;
	cout << "Enter your choice:" << endl;
	cin >> choice;
	while (true)
	{
		if (choice == 'a') 
		{
			for (int i = 0; i < 5; i++)
			{
				cout << BOP_name[i].fullname << endl;
			}
		}
		else if (choice=='b')
		{
			for (int i = 0; i < 5; i++)
			{
				cout << BOP_name[i].jobname << endl;
			}
		}
		else if (choice=='c')
		{
			for (int i = 0; i < 5; i++)
			{
				cout << BOP_name[i].secert_name << endl;
			}
		}
		else if (choice=='d')
		{
			for (int i = 0; i < 5; i++)
			{
				switch (BOP_name[i].preference)
				{
				case 0:cout << BOP_name[i].fullname << endl; break;
				case 1:cout << BOP_name[i].jobname << endl; break;
				case 2:cout << BOP_name[i].secert_name << endl; break;
				}
			}
		}
		else if(choice=='q')
		{
			cout << "Bye!" << endl;
			break;
		}
		cout << "Next choice:" << endl;
		cin >> choice;
	}
	return 0;
}