  if (input == 4) {
            // hapus data gunung
            int nomorHapus;
            cout << "Masukkan nomor gunung yang ingin dihapus: ";
            cin >> nomorHapus;

            if (nomorHapus >= 1 && nomorHapus <= count) {
                // Geser elemen-elemen setelah data yang dihapus
                for (int i = nomorHapus - 1; i < count - 1; i++) {
                    dataGunung[i] = dataGunung[i + 1];
                }

                // Kurangi jumlah data
                count--;

                cout << "Data gunung berhasil dihapus." << endl;
            }
            else {
                cout << "Nomor gunung tidak valid." << endl;
            }
        }
