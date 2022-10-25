#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, d;
	cin >> n >> d;

	auto v = vector<int>(n);
	auto sum = int{ 0 };
	for (auto i = 0; i < n; ++i) {
		cin >> v[i];
		sum += v[i];
	}

	for (const auto& p : v) {
		cout << p * (d / sum) << '\n';
	}

	return 0;
}