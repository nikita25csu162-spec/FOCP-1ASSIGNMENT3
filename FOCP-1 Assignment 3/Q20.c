int singleNumber(int* nums, int n) {
    int a = 0;
    int i;
    for (i = 0; i < n; i++) {
        a = nums[i] ^ a;  
    }
    return a;
}

 
