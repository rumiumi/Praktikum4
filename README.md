# Praktikum4

## Latihan 1: Mencari Angka Terbesar dari Sejumlah Bilangan yang Diinputkan Sebelum Diinputkan 0


*Alur Algoritma*
1. Deklarasikan variabel `int n=0` dan `int max=0`
2. Membaca input dari keyboard `cin >> n`
3. Bandingkan `n > max` proses diulangi selama nilai n tidak berjumlah 0
4. Cetak `max`

*Flowchart Program*

![flowchart1](https://github.com/rumiumi/Praktikum4/blob/master/flowchart1.jpg)


*Berikut code lengkapnya*
```
#include<iostream>

using namespace std;

int main() {
    int n=0;
    int max=0;

    do {
    cout << "Masukkan bilangan (masukkan 0 untuk berhenti): ";
    cin >> n;

    if (n > max)
        max = n;
    } while (n != 0);

    cout << "Bilangan terbesar adalah " << max;

}

```

*Hasilnya*

![hasil1](https://github.com/rumiumi/Praktikum4/blob/master/hasil1.PNG)

## Latihan 2: Program Struk Belanja Indoapril

*Alur Algoritma*
1. Deklarasikan variabel `int N, a, b, d, e, hb, i, total, stotal` dan `float dis = 0.0`
2. Tampilkan pesan pembuka *selamat datang*
3. Masukkan input dari user `cin >> N`
4. Masukkan input dari user `cin >> a >> b`
5. Jumlahkan `hb = a * b;stotal = stotal+hb;e = e+a;`
6. Cetak `cout << hb`
7. Tampilkan pesan urutan barang
8. Ulangi lagi dari langkah 4 sampai kondisi `i < N` bersifat **False**
9. Bila `stotal >= 1000000` hitung potongan harga Nx10% `dis=(stotal/100)*10` lalu kurangi harga subtotal dengan potongan harga `total=stotal-dis` kemudian simpan persentase diskon `d = 10`
10. Bila `stotal > 500000` hitung potongan harga Nx5% `dis=(stotal/100)*5` lalu kurangi harga subtotal dengan potongan harga `total=stotal-dis` kemudian simpan persentase diskon `d = 5`
11. Cetak `cout << N << e << stotal << d << total`
12. Tampilkan pesan penutup *terima kasih*

*Flowchart Program*

![flowchart2](https://github.com/rumiumi/Praktikum4/blob/master/flowchart2.jpg)


*Berikut code lengkapnya*
```
#include<iostream>

using namespace std;

int main() {
    int N, a, b, d, hb;
    int e = 0;
    int i = 0;
    float dis = 0.0;
    int total = 0;
    int stotal = 0;

    cout << "                 Selamat datang \n";
    cout << "                        di \n";
    cout << "                    Indoapril \n";
    cout << " \n";
    cout << " \n";
    cout << "--------------------------------------------------- \n";
    cout << "--------------------------------------------------- \n";
    cout << " \n";
    cout << "Berapa macam barang yang akan Anda beli? \n";
    cin >> N;
    cout << " \n";

    do {
    cout << "Berapa barang yang akan Anda beli? \n";
    cin >> a;
    cout << " \n";
    cout << "Berapa harga per satuan barang yang Anda beli? \n";
    cin >> b;
    cout << " \n";

    hb = a * b;
    stotal = stotal+hb;
    e = e+a;
    i = i+1;

    cout << " \n";
    cout << "Harga barang tersebut adalah " << hb << " \n";

    if (i < N){
        cout << "Barang ke-" << i << " dari " << N << " barang yang akan dibeli \n";
    } else {
        cout << "Anda telah membeli " << N << " barang";
    }

    cout << " \n";
    cout << " \n";

    } while (i < N);

    if (stotal >= 1000000){
        dis = (stotal/100)*10;
        total = stotal-dis;
        d = 10;
    } else {
        if (stotal > 500000){
            dis = (stotal/100)*5;
            total = stotal-dis;
            d = 5;
        } else {
            total = stotal;
            d = 0;
        }
    }

    cout << "--------------------------------------------------- \n";
    cout << "--------------------------------------------------- \n";
    cout << " \n";

    cout << "Jumlah item: " << N << " \n";
    cout << "Jumlah barang: " << e << " \n";
    cout << "Total belanja: " << stotal << " \n";
    cout << "Discount: " << d << "% \n";
    cout << "Total: " << total << " \n";
    cout << " \n";
    cout << " \n";
    cout << "                  Terima kasih \n";
    cout << "             Jangan datang kembali \n";

}

```

*Hasilnya*

![hasil2-1](https://github.com/rumiumi/Praktikum4/blob/master/hasil2-1.PNG)
![hasil2-2](https://github.com/rumiumi/Praktikum4/blob/master/hasil2-2.PNG)

