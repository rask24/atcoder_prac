#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <map>
#include <unordered_map>
#include <set>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <limits>
#include <climits>
using namespace std;
using namespace std::literals;

int main(void)
{
	long long N, K;
	cin >> N >> K;
	vector<tuple<long long, long long, long long>> a(N);
	for (long long i = 0; i < N; ++i)
	{
		long long tmp;
		cin >> tmp;
		a[i] = make_tuple(tmp, i, K / N);
	}
	sort(a.begin(), a.end());
	for (long long i = 0; i < K % N; ++i)
		++get<2>(a[i]);	
	auto id_comp = [](tuple<long long, long long, long long> t1, tuple<long long, long long, long long> t2) -> bool
	{ return get<1>(t1) < get<1>(t2); };
	sort(a.begin(), a.end(), id_comp);
	for (auto i : a)
		cout << get<2>(i) << endl;
}