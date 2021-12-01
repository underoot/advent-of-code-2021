#include <stdio.h>
#include <limits.h>

#define WINDOW_LENGTH 3

int get_sum(int *depths) {
  int res = 0;

  for (int i = 0; i < WINDOW_LENGTH; i++) {
    res += depths[i];
  }

  return res;
}

int main() {
  int prev_depth = INT_MAX;
  int depths[WINDOW_LENGTH] = { 0, 0, 0 };
  int res_scanf = 0;
  int answer = 0;

  freopen("input", "r", stdin);
  freopen("output", "w+", stdout);

  for (int i = 0; i < WINDOW_LENGTH; i++) {
    scanf("%d", &depths[i]);
  }

  prev_depth = get_sum(depths);

  int index = 0;

  while(res_scanf != EOF) {
    res_scanf = scanf("%d", &depths[index++]);

    if (get_sum(depths) > prev_depth) {
      answer++;
    }

    prev_depth = get_sum(depths);

    if (index >= WINDOW_LENGTH) {
      index = 0;
    }
  }

  printf("%d", answer);

  fclose(stdin);
  fclose(stdout);

  return 0;
}
