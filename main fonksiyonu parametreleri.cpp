// C++ dilinde main fonksiyonu, genellikle programın başlangıç noktası olarak kullanılır ve bazı durumlarda parametre alabilir. main fonksiyonunun imzası şu şekildedir:

// int main(int argc, char* argv[])
// Burada argc ve argv parametreleri bulunur:

// argc: Programın komut satırı argümanlarının sayısını temsil eden bir tamsayıdır (argument count).
// argv: Programın komut satırı argümanlarının bir dizisidir ve char* türünden bir diziye işaret eder (argument vector).
// Bu parametreler, programın komut satırı üzerinden çalıştırıldığında, komut satırına yazılan argümanları almak için kullanılır. Örneğin, bir programı çalıştırırken komut satırına şu şekilde argümanlar ekleyebilirsiniz:

// bash
// Copy code
// ./programAdi arg1 arg2 arg3
// Bu durumda:

// ./programAdi programın adıdır.
// arg1, arg2, arg3 gibi diğer girdiler komut satırı argümanlarıdır.
// argc, komut satırında kullanılan toplam argüman sayısını içerir. Program adı da bir argüman olarak sayıldığı için, en az bir argüman olacağı için argc değeri en az 1 olacaktır.

// argv, char* türünden bir diziye işaret eder. Bu dizi, her bir elemanı programın komut satırı argümanlarını temsil eden karakter dizilerini (C-String'leri) tutar. argv[0], programın adını içerirken, argv[1], argv[2], ... şeklinde diğer argümanları tutar.

// Örneğin, bir programda main fonksiyonu şu şekilde kullanılabilir:

#include <iostream>

int main(int argc, char* argv[]) {
    std::cout << "Toplam argüman sayısı: " << argc << std::endl;
    for (int i = 0; i < argc; ++i) {
        std::cout << "Argüman " << i << ": " << argv[i] << std::endl;
    }
    return 0;
}
// Bu kod, programın çalıştırıldığı komut satırı argümanlarını ve toplam argüman sayısını ekrana yazdıracaktır.