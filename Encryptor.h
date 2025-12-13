#ifndef ENCRYPTOR_H
#define ENCRYPTOR_H

#include <string>
#include <vector>

class Encryptor {
public:
  bool runEncryption(const std::string &dosyaAdi, const std::string &anahtar);

private:
  bool readFile(const std::string &dosyaAdi, std::vector<char> &veriler);
  void xorData(std::vector<char> &veriler, const std::string &anahtar);
  bool writeFile(const std::string &dosyaAdi, const std::vector<char> &veriler);
};

#endif // !ENCRYPTOR_H
