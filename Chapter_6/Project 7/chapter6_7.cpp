#include<iostream>
#include<string>

//int main()
//{
//	using namespace std;
//	char str[100];
//	std::cout<< "Enter words(q to quit)" << endl;
//	cin.get(str,100);
//	int vowels_num = 0, consonant_num = 0, others_num = 0;
//	int i = 0;
//	while(i<100)
//	{
//		if (str[i]=='q' and str[i+1]=='\0')
//		{
//			break;
//		}
//		else 
//		{
//			if (isalpha(str[i]))
//			{
//				if (str[i]=='a' or str[i]=='e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u')
//				{
//					while (str[i]!=' ')
//					{
//						i++;
//						continue;	
//					}
//					vowels_num++;
//				}
//				else
//				{
//					while (str[i] != ' ')
//					{
//						i++;
//						continue;
//					}
//					consonant_num++;
//				}
//			}
//			else
//			{
//				while (str[i] != ' ')
//				{
//					i++;
//					continue;
//				}
//				others_num++;
//			}
//		}
//		i++;
//	}
//	std::cout << vowels_num << " words beginning with vowels" << endl;
//	std::cout << consonant_num << " words beginning with consonant" << endl;
//	std::cout << others_num << " others" << endl;
//	return 0;
//
//}



//用string对象另一种方法
int main()
{
	using namespace std;
	string str;
	int vowels_num = 0, consonant_num = 0, others_num = 0;
	cin >> str;
	while (str!="q")
	{
		if (isalpha(str[0]))
		{
			if (str[0] == 'a' or str[0] == 'e' or str[0] == 'i' or str[0] == 'o' or str[0] == 'u')
			{
				vowels_num++;
			}
			else
			{
				consonant_num++;
			}
		}
		else
		{
			others_num++;
		}
		cin >> str;
	}
	std::cout << vowels_num << " words beginning with vowels" << endl;
	std::cout << consonant_num << " words beginning with consonant" << endl;
	std::cout << others_num << " others" << endl;
	return 0;
}