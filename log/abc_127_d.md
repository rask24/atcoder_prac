# ABC 127 D

### 問題文
[問題文へのリンク](https://atcoder.jp/contests/abc127/tasks/abc127_d)

$N$枚のカードがあり、$i$ 番目のカードには整数 $A_i$ が書かれています。
あなたは、$j=1,2,...,M$ について順に以下の操作を 1 回ずつ行います。 

操作: カードを $B_j$ 枚まで選ぶ($0$ 枚でもよい)。選んだカードに書かれている整数をそれぞれ $C_j$ に書き換える。

$M$ 回の操作終了後に $N$ 枚のカードに書かれた整数の合計の最大値を求めてください。

### 制約
- 入力は全て整数である。
- $1 \leq N, M \leq 10^5$
- $1 \leq A_i, C_i \leq 10^9$
- $1 \leq B_i \leq N$

### 考察
この問題次のように定式化できる。

```math
\begin{align}
\mathrm{max} & \quad \sum_{i \in \mathcal{I}} A_i + \sum_{j=1}^{M} B_j C_j \quad \\
\mathrm{s.t.} & \quad \mathcal{I} \sub \{i\ |\ 1 \leq i \leq N,\ i \in \mathbb{N} \} \quad \\
& \quad |\mathcal{I}| + \sum_{j=1}^M B_j = N \quad \\
\end{align}
```

制約式$(2)$は書き換えられることなく残った$A_i$の添字の集合を表しており、$(3)$はカードの枚数が合計で$N$枚であることを表している。

この問題は$A_1, \dots, A_N$が1枚ずつ、$C_j$が$B_j$枚ある中から$N$枚を選ぶことと等価である。したがってカードの和を最大化するには、カードの値が大きい順に$N$枚選べばよい。
具体的には番号$x$のカードが$y$枚あることをmapで管理し、map[x] = yと表す。mapのキーが大きい順にmapを操作して、最大値を$O((N + M)\log(N + M))$で求める。


### 提出コード
```c++
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	long long T, U;
	map<long long, long long> m;
	for (int i = 0; i < N; ++i) {
		cin >> T;
		++m[T];
	}
	for (int i = 0; i < M; ++i) {
		cin >> T >> U;
		m[U] += T;
	}
	long long ans = 0, cnt = 0;
	for (auto iter = m.rbegin(); iter != m.rend(); ++iter) {
		long long key = iter->first;
		long long val = iter->second;
		if (cnt + val < N) {
			ans += key * val;
			cnt += val;
		} else {
			ans += key * (N - cnt);
			break;
		}
	}
	cout << ans << endl;
}
```
