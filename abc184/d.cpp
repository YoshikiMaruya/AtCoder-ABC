#include<bits/stdc++.h>

using namespace std;

double dp[101][101][101];

double solve(int x, int y, int z) {
	if (dp[x][y][z]) {
		return dp[x][y][z];
	}
	if (x == 100 || y == 100 || z == 100) {
		return 0;
	}
	double ans = 0;
	ans += (solve(x + 1, y, z) + 1) * x / (x + y + z);
	ans += (solve(x, y + 1, z) + 1) * y / (x + y + z);
	ans += (solve(x, y, z + 1) + 1) * z / (x + y + z);
	dp[x][y][z] = ans;
	return ans;
}

int main(void) {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout << fixed << setprecision(9);
  int x, y, z;
  cin >> x >> y >> z;
  cout << solve(x, y, z);
  return 0;
}
