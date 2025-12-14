# 🔒 C++ XOR Dosya Şifreleme Aracı (XOR-Cipher-Tool)

Bu proje, C++ dilinde Nesne Yönelimli Programlama (OOP) prensipleri kullanılarak geliştirilmiş, modüler ve basit bir **Dosya Şifreleme/Deşifreleme (Encryption/Decryption)** aracıdır. Temel şifreleme mekanizması olarak yaygın olarak kullanılan **Döngüsel XOR (Cyclic XOR)** algoritmasını kullanır.

Siber güvenlik alanında kişisel gelişim amacıyla, temel kriptografik operasyonların dosya sistemi üzerinde nasıl uygulandığını göstermek için geliştirilmiştir.

## ✨ Temel Özellikler

* **Modüler Yapı (OOP):** Tüm dosya G/Ç (I/O) ve XOR mantığı, `Encryptor` adlı ayrı bir C++ sınıfı içinde soyutlanmıştır. Bu, ana (`main.cpp`) dosyasını sadeleştirir.
* **İkili İşlem:** Aynı anahtar ile hem şifreleme hem de deşifreleme yapabilme yeteneği.
* **Bayt Tabanlı İşlem:** Metin dosyaları ve ikili (binary) dosyalar dahil olmak üzere her türlü dosyayı işleyebilir.
* **Hata Yönetimi:** Dosya okuma/yazma hatalarına karşı temel hata kontrol mekanizması içerir.

## ⚙️ Gereksinimler

Projenin başarıyla derlenip çalışması için aşağıdaki araçlar gereklidir:

* **Derleyici:** [GNU GCC/G++](https://gcc.gnu.org/) (En az 7.x sürümü önerilir.)
* **İşletim Sistemi:** Linux (Özellikle **EndeavourOS** üzerinde test edilmiştir.)
* **C++ Standardı:** [C++11](https://en.cppreference.com/w/cpp/language/history) veya üzeri. (Kullanılan kütüphaneler için yeterlidir.)

## 🚀 Kurulum ve Derleme

Projenin C++ kaynak kodları aynı dizinde bulunduktan sonra, Linux terminalinde (EndeavourOS / Arch Linux) aşağıdaki komut ile derlenebilir:

```bash
g++ main.cpp Encryptor.cpp -o xor_tool
