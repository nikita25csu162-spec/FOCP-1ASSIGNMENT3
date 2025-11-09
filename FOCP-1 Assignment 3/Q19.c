int searchInsert(int* nums, int numsize, int target) {
    int a = 0;
    int b = numsize - 1;
    int m;

    while (a <= b) {
        m = (a + b) / 2;

        if (nums[m] == target)
            return m;
        else if (target < nums[m])
            b = m - 1;
        else
            a = m + 1;
    }

    return a;
}
