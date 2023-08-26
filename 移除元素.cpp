void merge(int* a, int nums1Size, int m, int* b, int nums2Size, int n) {
    int i = m - 1, j = n - 1, k = n + m - 1;
    while (i >= 0 && j >= 0) {
        a[k--] = a[i] > b[j] ? a[i--] : b[j--];
    }
    if (i == -1) {
        while (j >= 0) a[k--] = b[j--];
    }
}
