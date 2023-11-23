// Enum Konusu

#include <iostream>

enum renk
{

    sari,
    beyaz,
    siyah,
    mavi,
    yesil,
    turuncu,
    kahverengi,
    kirmizi
};

int main()
{
    setlocale(LC_ALL, "Turkish");

    std::cout << "----- Enum Yapısı -----" << std::endl;
    std::cout << "enum yapıları, sonlu sayıda elemandan oluşan KENDİ VERİ TİPİNİZİ oluşturmaya yarayan yapılardır.\nNOT: enum'lar main fonskiyonu dışında tanımlanmalıdırılar." << std::endl;

    renk r1, r2;

    r1 = siyah;
    r2 = turuncu;

    std::cout << "r1 = " << r1 << std::endl; // Ekran Çıktısı: 2
    std::cout << "r2 = " << r2 << std::endl; // Ekran Çıktısı: 5
    std::cout << std::endl;
    std::cout << "Yukarıdan anlaşılacağı üzere enum veri tipi bize, indeks numarası olarak dönüş yapar." << std::endl;

    std::cout << "Enum'lar sabit değerleri tutmak için kullanılan önemli yapılardır. Yukarıdaki renk değişken tipinden faydalanarak bir örnek yapalım." << std::endl;
    std::cout << std::endl;

    if (r1 == siyah)
    {
        std::cout << "Siyah" << std::endl;
    }
    else if (r1 == turuncu)
    {
        std::cout << "Turuncu" << std::endl;
    }
    else
    {
        std::cout << "Halaı giriş yaptınız" << std::endl;
    }

    // Yukarıdaki kodlama incelendiğinde bu değerler bir enum içerisinde oluşturulmak yerine string değişkenlere de atanabilir. Ancak yazılım mühendisliğinde pek tercih etmeyiz. Çübkü, kullanıcı "siyah" ifadesi girerse ekrana "Siyah" yazdıracağız, eğer string bir değişkene tanımlamış olsaydık kullanıcının doğru renk değeri girip girmediğni kontrol etmek çok daha zor bir hal alacaktı. "siyah1" değerini giren bir kullanıcının bu değeri string değişkende tutulabileceğinden, kullanıma açık olacaktır. Ancak enum ile kısıtlama işlemi yapmış olduk.

    return 0;
}
