#include <cstdio>
const int N = 10001;
int n, m;
int a[N];
int s[N];
int main() {
  scanf("%d%d", &n, &m);
  for (int i = 1; i <= n; i++)
    scanf("%d", &a[i]);
  for (int i = 1; i <= m; i++)
    s[i] = a[i];
  int ans, cnt = m, k = m + 1;
  for (ans = 0; cnt > 0; ) {
    int min_ = 101;
    for (int i = 1; i <= m; i++)
      if(s[i] > 0 && s[i] < min_)
        min_ = s[i];
    ans += min_;
    for (int i = 1; i <= m; i++) {
      s[i] -= min_;
      if (s[i] == 0) {
        cnt--;
        if (k <= n) {
          s[i] = a[k++];
          cnt++;
        }
      }
    }
  }
  printf("%d\n", ans);
  return 0;
}
