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

```
Bu komut, xor_tool adında bir çalıştırılabilir dosya oluşturacaktır.

💻 Kullanım Kılavuzu

Projenin derlenmesiyle oluşturulan xor_tool yürütülebilir dosyası, şifrelemek veya deşifrelemek istediğiniz dosya ile aynı dizinde çalıştırılmalıdır.
Adım 1: Programı Çalıştırma

Terminalinizde ./xor_tool komutunu girin:
```Bash

./xor_tool

```

Adım 2: Etkileşimli Girdiler

Program çalıştırıldığında sizden iki temel girdi ister:
   ``` 
    İşlem Yapılacak Dosyanın Adı
    
    Anahtar
```
   
🔐 Şifreleme (Encryption)

Dosyayı şifrelemek için programı çalıştırın ve bir anahtar girin. Dosyanın içeriği XORlanarak şifrelenir ve aynı dosyanın üzerine yazılır.
```
./xor_tool

Islem yapilacak dosyanin adini girin: gizli_belge.txt
Sifreleme / Desifreleme anahtarini girin: 1234
Islem baslatiliyor...
Islem basariyla tamamlandi. Dosya guncellendi: gizli_belge.txt
```
🔓 Deşifreleme (Decryption)

Şifrelenmiş dosyayı orijinal haline döndürmek için programı tekrar çalıştırın ve KESİNLİKLE AYNI ANAHTARI girin.
```
./xor_tool

Islem yapilacak dosyanin adini girin: gizli_belge.txt
Sifreleme / Desifreleme anahtarini girin: 1234  <-- Anahtar aynı olmalı!
Islem baslatiliyor...
Islem basariyla tamamlandi. Dosya guncellendi: gizli_belge.txt
```

Önemli: Yanlış anahtar girilmesi durumunda dosya içeriği bozulacak ve orijinal haline geri döndürülemeyecektir. Bundan dolayı yanlış şifre girmediğinizden emin olun.

Bu araç eğitim amaçlı bir uygulamadır ve XOR algoritmasının basitliği nedeniyle yüksek güvenlik gerektiren uygulamalar için kullanılmamalıdır. XOR şifreleme, anahtarın dosya boyutu kadar uzun ve rastgele olmadığı sürece (One-Time Pad), modern kriptanaliz yöntemlerine karşı savunmasızdır.
