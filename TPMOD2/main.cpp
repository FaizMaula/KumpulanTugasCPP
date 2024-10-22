#include <iostream>

using namespace std;

int main(){
    int bil[10];
    bil[0] = 1;
    bil[1] = 4;
    bil[2] = 5;
    cout << bil[0] << endl;
    cout << bil[1] << endl;
    cout << bil[2] << endl;
    cout << bil[0] + bil[1] + bil[2] << endl;
    return 0;
}
/*
void tukar(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main (){
    int bil1, bil2;
    cout << "Masukkan bilangan pertama: ";
    cin >> bil1;
    cout << "Masukkan bilangan kedua : ";
    cin >> bil2;
    cout << "Sebelum pertukaran: \n";
    cout << "Bil 1: " << bil1 << " bil 2: " << bil2 << endl;
    tukar(&bil1,&bil2);
    cout << "Setelah pertukaran: \n";
    cout << "Bil 1: " << bil1 << " bil 2: " << bil2 << endl;
    return 0;
}



/*
int kendaraan(int kapasitas_kendaraan, int jumlah_penumpang) {
    int jumlah;
    jumlah = jumlah_penumpang / kapasitas_kendaraan;
    if (jumlah_penumpang % kapasitas_kendaraan > 0) {
        jumlah++;
    }
    return jumlah;
}

int main (){
    int kap_kendaraan, jum_penumpang, banyak_kendaraan;
    cout << "Masukkan kapasitas kendaraan: ";
    cin >> kap_kendaraan;
    cout << "Masukkan jumlah penumpang: ";
    cin >> jum_penumpang;
    banyak_kendaraan = kendaraan(kap_kendaraan, jum_penumpang);
    cout << "Banyak kendaraan yang disewa " << banyak_kendaraan << endl;
    return 0;
}



/*nomor 5
int main ()
{
    int nilai;
    cin >> nilai;
    if (nilai > 80) {
        cout << "A" << endl;
    } else {
        cout << "Bukan A" << endl;
    }
    return 0;
}

/* nomor 6
int main (){
    int a,b, bilangan;
    cout << "Masukan batas bawah: ";
    cin >> a;
    cout << "Masukan batas atas: ";
    cin >> b;
    for (bilangan = a; bilangan <= b; bilangan++) {
        cout << "Bilangan " << bilangan << endl;
    }
    return 0;
}
/*
int main(){
    int bilangan, asli, jumlah;

    cout << "Masukkan bilangan asli: ";
    cin >> asli;

    bilangan = 1;
    jumlah = 0;
    while (bilangan <= asli) {
        if (bilangan % 2 == 0) {
            jumlah += bilangan;
        }
        bilangan++;
    }
    cout << "Jumlah bilangan genap: " << jumlah << endl;
    return 0;
}
/*

/*


/*
int main()
{
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 <= bil2 and bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2 and bil1 < bil2;
    cout << hasil << endl;
    hasil = not(bil1 >= bil2) or bil1 < bil2;
    cout << hasil << endl;
    return 0;
}


/*
int main (){
    int bil1 = 2, bil2 = 3, hasil;
    hasil = bil1 > bil2;
    cout << hasil << endl;
    hasil = bil1 >= bil2;
    cout << hasil << endl;
    hasil = bil1 < bil2;
    cout << hasil << endl;
    hasil = bil1 <= bil2;
    cout << hasil << endl;
    hasil = bil1 == bil2;
    cout << hasil << endl;
    hasil = bil1 != bil2;
    cout << hasil << endl;
    return 0;
}

/*
int main(){
    int bil1=3, bil2 = 4, hasil1;
    float bil3 = 3.0, bil4 = 4.0, hasil2;
    hasil1 = bil1 + bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 - bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 * bil2;
    cout << hasil1 << endl;
    hasil1 = bil1 / bil2;
    cout << hasil1 << endl;
    hasil1 = bil2 / bil1;
    cout << hasil1 << endl;
    hasil1 = bil1 % bil2;
    cout << hasil1 << endl;
    hasil1 = bil2 % bil1;
    cout << hasil1 << endl;
    hasil2 = bil3 / bil4;
    cout << hasil2 << endl;
    return 0;
}

/* NO 1
int main (){
    string nama, nim;
    cout << "Siapa nama anda? ";
    cin >> nama;
    cout << "Berapa NIM anda? ";
    cin >> nim;
    cout << "Nama saya:" << nama << endl;
    cout << "NIM saya:" << nim << endl;
    return 0;
}
*/
