#include <iostream>
#include <functional> // Fonksiyon kütüphanesini ekliyoruz

using namespace std;

/* Özgür Fonksiyonlar

- Herhangi bir nesneye bağlı olamayan fonksiyonlardır.
- Bir sınıfın içerisinde tanımlamadıysanız, özgür fonksiyon olur.

*/

void fonksiyon(){

	cout << "merhaba" << endl;
}

int main()
{
    function<void ()>yeniFonksiyon(fonksiyon);
    
    // function anahtar kelimesi içerisine < > arasına fonksiyonun dönüş tipi ve aldığı parametreler yazılır (NOT: fonksiyonun adı yazılmaz.)
	
    // yeniFonksiyon(fonksiyon) ifadesi ile yeniFonksiyon adında bir nesne oluşturduk. Bu nesne fonksiyon isimli fonksiyon'dan üretilmiştir.
    
    
    yeniFonksiyon(); // Fonksiyonu çağırdık
    return 0;
}
