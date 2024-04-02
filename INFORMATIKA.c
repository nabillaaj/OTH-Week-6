#include <stdio.h>
#include <stdlib.h>

struct Node {
    char *alphabet;
    struct Node *link;
};

int main() {
    // Deklarasi node-node
    struct Node l1, l2, l3, l4, l5, l6, l7, l8, l9;
    struct Node *link, *l3ptr;

    // Inisialisasi node-node sesuai dengan petunjuk
    l1.link = NULL;
    l1.alphabet = "F";
    l2.link = NULL;
    l2.alphabet = "M";
    l3.link = NULL;
    l3.alphabet = "A";
    l4.link = NULL;
    l4.alphabet = "I";
    l5.link = NULL;
    l5.alphabet = "K";
    l6.link = NULL;
    l6.alphabet = "T";
    l7.link = NULL;
    l7.alphabet = "N";
    l8.link = NULL;
    l8.alphabet = "O";
    l9.link = NULL;
    l9.alphabet = "R";

    // Mengatur koneksi antar node sesuai dengan urutan yang diberikan
    l7.link = &l1;
    l1.link = &l8;
    l8.link = &l2;
    l2.link = &l5;
    l5.link = &l3;
    l3.link = &l6;
    l6.link = &l9;
    l9.link = &l4;
    l4.link = &l7;

    // Starting point
    l3ptr = &l7;

    // Akses data menggunakan printf dan I3 sebagai titik awal
    printf("%s", l3.link->link->link->alphabet);// Output huruf I
    printf("%s", l3.link->link->link->link->alphabet);// Output huruf N
    printf("%s", l3.link->link->link->link->link->alphabet);// Output huruf F
    printf("%s", l3.link->link->link->link->link->link->alphabet);// Output huruf O
    printf("%s", l3.link->link->alphabet);// Output huruf R
    printf("%s", l3.link->link->link->link->link->link->link->alphabet);// Output huruf M
    printf("%s", l3.alphabet);// Output huruf A
    printf("%s", l3.link->alphabet);// Output huruf T
    printf("%s", l3.link->link->link->alphabet);// Output huruf I 
    printf("%s", l3.link->link->link->link->link->link->link->link->alphabet);// Output huruf K
    printf("%s", l3.alphabet);// Output huruf A


return 0;
}