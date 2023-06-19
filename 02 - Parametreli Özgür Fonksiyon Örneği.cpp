// Parametreli Özgür Fonksiyon Örneği

#include <iostream>
#include <functional>

using namespace std;

int topla(int a, int b){

	return a+b;
}

int main()
{
    function<int (int,int)>yeniFonksiyon(topla); // parametre tipleri belirtilmiştir.

    cout << "Toplam = " << yeniFonksiyon(3,5);
    return 0;
}
