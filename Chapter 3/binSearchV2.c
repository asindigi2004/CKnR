int binsearch(int x, int v[], int n) {
    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (x <= v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    /* now low is the smallest index such that v[low] >= x */
    if (low < n && v[low] == x)
        return low;
    else
        return -1;
}
