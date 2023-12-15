#include <iostream>
using namespace std;

int main()
{
	int score;

	cout << "请输入你对此电影的评分" << endl;
	cin >> score;

	switch (score)
	{ 
		case 10: cout << "本次电影非常完美" << endl;
		break;

		case 9: cout << "本电影还可以" << endl;
		break;

		default: cout << "您认为这是烂片" << endl;
	}

	system("pause");

	return 0;
}