/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
*   Modul               : 5 - Foundation of Algorithm
*   Hari dan Tanggal    : Senin, 11 Mei 2026
*   Nama (NIM)          : Jeva Steve Sinaga (13224002)
*   Nama File           : soal1.c
*   Deskripsi           :   Sebuah fasilitas bawah tanah memiliki beberapa ruang yang terhubung oleh terowongan. Denah
                            koneksi ruang disimpan dalam bentuk adjacency matrix. Tim eksplorasi ingin mengetahui seberapa
                            banyak koneksi yang dimiliki tiap ruang, ruang mana yang paling terhubung, dan apakah ada ruang
                            yang benar-benar terisolasi. Tugas Anda adalah membaca peta tersebut dan menghasilkan ringkasan
                            konektivitasnya.
                            Hitung derajat setiap simpul, simpul maksimum, dan simpul terisolasi.
                            Kondisi/Aturan
                                1. Graph tak berarah
                                2. Adjacency matrix berukuran N x N
                                3. matrix[i][j] adalah 0 atau 1
                                4. Derajat simpul i = jumlah 1 pada baris i
                                5. Jika ada lebih dari satu simpul dengan derajat maksimum, pilih indeks terkecil
                                6. Simpul terisolasi adalah simpul dengan derajat 0
*/

#include<stdio.h>

int main() {
    int n;
    int y = 0;
    int maxX = -1;
    int bestX = -1;

    scanf("%d", &n);
    int graph[n][n];
    int x[n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf(" %d", & graph[i][j]);
        }
    }

    for(int i = 0; i < n; i++) {
        x[i] = 0;
        for(int j = 0; j < n; j++) {
            if (graph[i][j] == 1) {
                x[i]++ ;
            }
        }
    printf("DEGREE %d %d\n",i,x[i]);
    if (x[i] > maxX) {
            maxX = x[i];
            bestX = i;
        }
    } 
    printf("MAX_VERTEX %d\n",bestX);

    for(int i = 0; i < n; i++) {
        x[i] = 0;
        for(int j = 0; j < n; j++) {
            if (graph[i][j] == 1) {
                x[i]++ ;
            }
        }
    if (x[i] == 0) {
        printf("ISOLATED");
        printf(" %d",i);
        y++;
    }
    }
    if (y == 0) {
        printf("ISOLATED NONE\n");
    }
    return 0;
}
