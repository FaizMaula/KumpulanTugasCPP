#include <iostream>
#include "sewa.h"

using namespace std;

int main()
{
    // Create lists
    listPenyewa P;
    createListPenyewa(P);

    listBarang B;
    createListBarang(B);

    // Create penyewa and barang
    penyewa penyewa1 = {"John Doe", "123 Main St", 25};
    adr_penyewa P1 = alokasiPenyewa(penyewa1);
    insertPenyewa(P, P1);

    barang barang1 = {"Laptop", 20231201, 20231215};
    adr_barang B1 = alokasiBarang(barang1);
    insertBarang(B, B1);

    // Create relation
    adr_relation R1 = alokasiRelation(B1);
    insertRelation(barangP(P1), R1);

    // Display penyewa information
    showPenyewa(P);

    return 0;
}
