# Matris Transpozu Hesaplama Programı

Bu program, kullanıcı tarafından klavyeden girilen **m × n** boyutundaki bir matrisin **transpozunu** (devriğini) hesaplayıp ekrana yazdıran basit bir C++ uygulamasıdır.

## 📌 Özellikler

- Kullanıcıdan satır ve sütun sayıları alınır.
- Matris elemanları kullanıcı tarafından tek tek girilir.
- Orijinal matris ve transpozu, hizalı ve okunabilir biçimde ekrana yazdırılır.
- Dinamik bellek yönetimi kullanılarak bellek sızıntısı önlenmiştir.
- Platform bağımsız (yalnızca standart C++ kütüphaneleri kullanılır).

## 🧠 Transpoz Nedir?

Bir matrisin transpozu, satırlarının sütun, sütunlarının ise satır haline getirilmesiyle elde edilen yeni matristir.  

### Gereksinimler
- C++11 veya üzeri destekleyen bir derleyici (örneğin: `g++`, `clang++`)

### Derleme
terminal
g++ main.cpp -o matris_transpozu 

### Çalıştırma
matris_transpozu.exe  **Windows (MinGW)**

### Örnek Çalışma
Satir sayisini giriniz: 2
Sutun sayisini giriniz: 3
1.Satir 1.Sutun:1
1.Satir 2.Sutun:2
1.Satir 3.Sutun:3
2.Satir 1.Sutun:4
2.Satir 2.Sutun:5
2.Satir 3.Sutun:6

Matris (2x3)
    1    2    3
    4    5    6

Matrisin Transpozu (3x2)
    1    4
    2    5
    3    6
