#include <bits/stdc++.h>
 
using namespace std;
 
const int N = 1234567;
 
char s[N], res[N];
pair <int, int> e[42];
 
int main() {
  int tt;
  scanf("%d", &tt);
  while (tt--) {
    scanf("%s", s);
    int n = strlen(s);
    int cnt[42];
    for (int j = 0; j < 26; j++) {
      cnt[j] = 0;
    }
    for (int i = 0; i < n; i++) {
      cnt[s[i] - 'a']++;
    }
    for (int j = 0; j < 26; j++) {
      e[j] = make_pair(cnt[j], j);
    }
    sort(e, e + 26);
    reverse(e, e + 26);
    int pos = 0;
    for (int j = 0; j < 26; j++) {
      char c = e[j].second + 'a';
      for (int u = 0; u < e[j].first; u++) {
        res[pos] = c;
        pos += 2;
        if (pos >= n) {
          pos = 1;
        }
      }
    }
    bool ok = true;
    for (int i = 0; i < n - 1; i++) {
      if (res[i] == res[i + 1]) {
        ok = false;
      }
    }
    res[n] = 0;
    if (ok) {
      puts(res);
    } else {
      printf("%d\n", -1);
    }
  }
  return 0;
}
