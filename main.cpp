#include "Encryptor.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  string dosyaAdi;
  string anahtar;

  cout << "Islem yapilacak dosyanin adini girin: ";
  getline(cin, dosyaAdi);

  cout << "Sifreleme / Desifreleme anahtarini girin: ";
  getline(cin, anahtar);

  if (anahtar.empty()) {
    cerr << "Hata: Anahtar bos olamaz!" << endl;
    return -1;
  }

  Encryptor isleyici;

  cout << "Islem baslatiliyor..." << endl;

  if (isleyici.runEncryption(dosyaAdi, anahtar)) {
    cout << "Islem basariyla tamamlandı. Dosya guncellendi: " << dosyaAdi
         << endl;
  } else {
    cerr << "Islem sirasinda hata olustu. Detaylar yukarida." << endl;
    return -1;
  }
  return 0;
}
