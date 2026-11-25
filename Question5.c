
#include <stdio.h>

int main() {
    int nums[] = {1, 3, 5, 6};
    int n = 4;
    int target = 5;

    int low = 0;
    int high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            ans = mid;
            break;
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            ans = mid;
            high = mid - 1;
        }
    }

    printf("Index: %d\n", ans);

    return 0;
}
