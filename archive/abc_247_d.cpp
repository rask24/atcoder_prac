#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int Q;
	cin >> Q;
	queue<pair<long long, long long>> q;
	for (int i = 0; i < Q; ++i)
	{
		int tmp, x, c;
		cin >> tmp;
		if (tmp == 1)
		{
			cin >> x >> c;
			pair<long long, long long> p(x, c);
			q.push(p);
		}
		else if (tmp == 2)
		{
			cin >> c;
			long long sum = 0;
			while (q.front().second < c) 
			{
				sum += q.front().first * q.front().second;
				c -= q.front().second;
				q.pop();
			}
			q.front().second -= c;
			sum += q.front().first * c;
			cout << sum << endl;
		}
	}
}