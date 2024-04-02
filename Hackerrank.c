#include <stdio.h>

int twoStacks(int maxSum, int a[], int n, int b[], int m) {
    int sum = 0, count = 0, i = 0, j = 0;

    // Hitung elemen stack pertama yang dapat dimasukkan
    while (i < n && (sum += a[i++]) <= maxSum) count++;

    // Tambahkan elemen stack kedua dan sesuaikan dengan batas maksimum
    while (j < m && i >= 0) {
        sum += b[j++];
        while (sum > maxSum && i > 0) sum -= a[--i];
        if (sum <= maxSum && i + j > count) count = i + j;
    }
    return count;
}

int main() {
    int g;
    scanf("%d", &g);
    while (g--) {
        int n, m, maxSum;
        scanf("%d%d%d", &n, &m, &maxSum);
        int a[n], b[m];

        // Masukkan elemen stack pertama dan kedua
        for (int i = 0; i < n; scanf("%d", &a[i++]));
        for (int i = 0; i < m; scanf("%d", &b[i++]));

        // Hitung dan tampilkan jumlah maksimum elemen yang dapat diambil dari kedua stack
        printf("%d\n", twoStacks(maxSum, a, n, b, m));
    }
    return 0;
}