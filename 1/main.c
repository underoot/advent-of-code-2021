#include <stdio.h>
#include <limits.h>

int main() {
  int prev_depth = INT_MAX;
  int depth = 0;
  int res_scanf = 0;
  int answer = 0;

  freopen("input", "r", stdin);
  freopen("output", "w+", stdout);

  while(res_scanf != EOF) {
    res_scanf = scanf("%d", &depth);

    if (depth > prev_depth) {
      answer++;
    }

    prev_depth = depth;
  }

  printf("%d", answer);

  fclose(stdin);
  fclose(stdout);

  return 0;
}
