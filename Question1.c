
#include <stdio.h>

int main() {
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int n = 6;
    int target = 9;

    int low = 0;
    int high = n - 1;
    int found = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            found = mid;
            break;
        }
        else if (nums[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    printf("%d\n", found);

    return 0;
}
