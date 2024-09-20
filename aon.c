#include <stdio.h>
void nhapMaTran(int maTran[][10], int hang, int cot) {
    for(int i = 0; i < hang; i++) {
        for(int j = 0; j < cot; j++) {
            printf("Nhap phan tu maTran[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &maTran[i][j]);
        }
    }
}

void inMaTran(int maTran[][10], int hang, int cot) {
    for(int i = 0; i < hang; i++) {
        for(int j = 0; j < cot; j++) {
            printf("%d\t", maTran[i][j]);
        }
        printf("\n");
    }
}

void nhanMaTran(int A[][10], int B[][10], int C[][10], int m, int n, int p) {
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < p; j++) {
            C[i][j] = 0;
            for(int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[10][10], B[10][10], C[10][10];
    int m, n, p;

    printf("Nhap kich thuoc ma tran A (m x n): ");
    scanf("%d %d", &m, &n);
    nhapMaTran(A, m, n);

    printf("Nhap kich thuoc ma tran B (n x p): ");
    scanf("%d %d", &n, &p);
    nhapMaTran(B, n, p);

    nhanMaTran(A, B, C, m, n, p);

    printf("Ma tran A:\n");
    inMaTran(A, m, n);
    printf("Ma tran B:\n");
    inMaTran(B, n, p);
    printf("Ma tran ket qua C = A x B:\n");
    inMaTran(C, m, p);

    return 0;
}