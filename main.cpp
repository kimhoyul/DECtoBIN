#include <iostream>
//#include <bitset>

using namespace std;

int main()
{
	int num = 10;
	/*bitset<8> a;
	a = 10;

	cout << a.to_string() << endl;*/
	for (int i = 0; i < 8; ++i)
	{
		if (num & (1 << (7 - i)))
		{
			cout << 1;
		}
		else
		{
			cout << 0;
		}
	}

	return 0;
}
