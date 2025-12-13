#include "Encryptor.h"
#include <cstddef>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool Encryptor::readFile(const string &dosyaAdi, vector<char> &veriler) {

  ifstream file(dosyaAdi, ios::binary);

  if (!file.is_open()) {
    cerr << "Hata: Dosya acilamadi: " << dosyaAdi << endl;
    return false;
  }

  file.seekg(0, ios::end);

  size_t dosyaBoyutu = static_cast<size_t>(file.tellg());
  file.seekg(0, ios::beg);

  veriler.resize(dosyaBoyutu);

  if (!file.read(veriler.data(), veriler.size())) {
    cerr << "Hata: Dosyanin tamami okunmadi!" << endl;
    file.close();
    return false;
  }
  return true;
}
void Encryptor::xorData(std::vector<char> &veriler,
                        const std::string &anahtar) {
  size_t anahtarUzunlugu = anahtar.length();

  for (size_t i = 0; i < veriler.size(); ++i) {
    veriler[i] = veriler[i] ^ anahtar[i % anahtarUzunlugu];
  }
}

bool Encryptor::writeFile(const string &dosyaAdi,
                          const std::vector<char> &veriler) {
  ofstream outfile(dosyaAdi, ios::binary | ios::trunc);

  if (outfile.is_open()) {
    outfile.write(veriler.data(), veriler.size());
    outfile.close();
    return true;
  } else {
    cerr << "Hata: Dosya yazmak icin acilmadi: " << dosyaAdi << endl;
    return false;
  }
}

bool Encryptor::runEncryption(const std::string &dosyaAdi,
                              const std::string &anahtar) {
  vector<char> veriler;

  if (!readFile(dosyaAdi, veriler)) {
    return false;
  }

  xorData(veriler, anahtar);

  if (!writeFile(dosyaAdi, veriler)) {
    return false;
  }
  return true;
}
