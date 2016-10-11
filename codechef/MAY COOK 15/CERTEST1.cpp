#include <bits/stdc++.h>
 using namespace std;
 
int main() {
  int tt;
  scanf("%d", &tt);
  while (tt--) {
    int n;
    scanf("%d", &n);
    set <int> s;
    for (int i = 0; i < n; i++) {
      int foo;
      scanf("%d", &foo);
      s.insert(foo);
    }
    printf("%d\n", s.size());
  }
  return 0;
}
