#include <iostream>
#include <algorithm>
using namespace std;

int arr[501][501];
int dp[501][501];

int main() {
	int n;
	cin >> n;
	int max_num = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++) //j<=i라는 조건을 j<=n이라 써서 오류발생
		{
			cin >> arr[i][j];
			if (j == 1)
			{
				dp[i][j] = arr[i][j] + dp[i - 1][j];
			}
			else if (j == i)
			{
				dp[i][j] = arr[i][j] + dp[i - 1][j - 1];
			}
			else
			{
				dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], dp[i - 1][j]);
			}

			if (max_num < dp[i][j])
				max_num = dp[i][j];
		}
	}

	cout << max_num;
	return 0;
}