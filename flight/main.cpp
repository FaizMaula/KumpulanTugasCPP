#include "flight.h"


int main()
{
    listJadwal L;
    int n;
    infotype x;
    adr_jadwalP p;
    createListJadwal_1301223017(L);
    cin >> n;
    for (int i = 0;i<n;i++){
        cin >> x.kode >> x.jenis >> x.tanggal >> x.waktu >> x.asal >> x.tujuan >> x.kapasitas;
        p = createElemenJadwal_1301223017(x);
        insertLastJ_1301223017(L,p);
    }
    showJadwal_1301223017(L);

    deleteFirstJ_1301223017(L,p);
    cout << "Kondisi setelah delete " << endl;
    showJadwal_1301223017(L);

    cout << "Cari jadwal penerbangan dari surabaya ke malang tanggal 9 desember 2022" << endl;
    adr_jadwalP P = searchJ_1301223017(L,"Surabaya(SUB)","Malang(MLG)","9-12-2022");
    cout<< info(P).kode << " " << info(P).jenis << " " <<info(P).tanggal << " "<< info(P).waktu << " " << info(P).asal << " " << info(P).tujuan << endl;
}
