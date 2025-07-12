#include <stdio.h>
#include <stdlib.h>

int min_val(int x, int y) { return x < y ? x : y; }
int max_val(int x, int y) { return x > y ? x : y; }

void process_case() {
    int n;
    scanf("%d", &n);
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    if (n < 2) {
        printf("-1\n");
        free(arr);
        return;
    }

    for (int i = 0; i < n - 1; ++i) {
        if (abs(arr[i] - arr[i + 1]) <= 1) {
            printf("0\n");
            free(arr);
            return;
        }
    }

    int result = -1;
    for (int start = 0; start < n; ++start) {
        int low = arr[start];
        int high = arr[start];
        for (int end = start + 1; end < n; ++end) {
            low = min_val(low, arr[end]);
            high = max_val(high, arr[end]);
            int changes = end - start;

            if (start > 0) {
                int left = arr[start - 1];
                if (max_val(low, left - 1) <= min_val(high, left + 1)) {
                    if (result == -1 || changes < result) {
                        result = changes;
                    }
                }
            }

            if (end < n - 1) {
                int right = arr[end + 1];
                if (max_val(low, right - 1) <= min_val(high, right + 1)) {
                    if (result == -1 || changes < result) {
                        result = changes;
                    }
                }
            }
        }
    }

    printf("%d\n", result);
    free(arr);
}

int main() {
    int tests;
    scanf("%d", &tests);
    while (tests--) {
        process_case();
    }
  }