// C++'ta std::vector, Standart Kütüphane'de bulunan ve dinamik boyutlu bir dizi (array) benzeri bir veri yapısıdır. std::vector, dinamik olarak büyüyebilen bir dizi sağlar ve C++'ın standart kütüphanesinde yer alır.

// std::vector kullanımı için <vector> başlık dosyasını dahil etmek gereklidir:


// #include <vector>
// std::vector, birçok faydalı işleve ve özelliğe sahiptir. Dinamik büyüklüğü sayesinde boyutu çalışma zamanında değiştirilebilir. Bu, bir diziye eleman ekleme, çıkarma veya değiştirme işlemlerini çok daha esnek hale getirir.

// Örneğin, bir std::vector oluşturmak ve bazı temel işlemleri gerçekleştirmek şöyle yapılabilir:

#include <iostream>
#include <vector>

int main() {
    // Bir int türünde vector oluşturma
    std::vector<int> sayilar;

    // Vector'e eleman ekleme
    sayilar.push_back(5);
    sayilar.push_back(10);
    sayilar.push_back(15);

    // Vector'ün boyutunu alma
    std::cout << "Vector boyutu: " << sayilar.size() << std::endl;

    // Vector'ün içeriğini döngü ile yazdırma
    for (int i = 0; i < sayilar.size(); ++i) {
        std::cout << "Eleman " << i << ": " << sayilar[i] << std::endl;
    }

    return 0;
}
// Yukarıdaki örnekte, std::vector<int> sayilar; ile bir int türünde boş bir vektör oluşturulur. push_back metodu, vektöre eleman eklemek için kullanılır. size() metodu, vektörün içinde bulunan elemanların sayısını döndürür. Vektör elemanlarına erişmek için [] operatörü kullanılabilir.

// std::vector, C++'ta yaygın olarak kullanılan ve dinamik boyutlu dizilerin güvenli bir şekilde yönetilmesini sağlayan önemli bir veri yapısıdır. Dinamik boyutları ve çeşitli işlevleriyle C++ programlamasında çok yaygın olarak tercih edilir.