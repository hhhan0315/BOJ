#include <iostream>
#include <stack>
using namespace std;

int main() {
	int k;
	cin >> k;

	stack<int> s;
	for (int i = 0; i<k; i++)
	{
		int num;
		cin >> num;

		if (num == 0)
		{
			if (s.empty())
			{
				s.push(num);
			}
			else
			{
				s.pop();
			}
		}
		else
		{
			s.push(num);
		}
	}

	int sum = 0;
	while (!s.empty())
	{
		sum += s.top();
		s.pop();
	}

	cout << sum;
	return 0;
}