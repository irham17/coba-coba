#include <iostream>
#include <string>
using namespace std;

/*void non_return_func(string praktikan1, string praktikan2, int kelompok) {
    cout << "Selamat datang di Praktikum DKP 2021\n";
    cout << praktikan1 << " dan " << praktikan2 << " adalah kelompok " << kelompok;
}
int return_func(int perkalian) {
    if (perkalian > 0 || perkalian < 3) {
        return perkalian * 3;
    }
    else {
        return perkalian * 0;
    }
}

int main()
{
        non_return_func("Ur name here", "Ur name here", 1);
        cout << "\nhasil perkalian 1 dengan 3 adalah " <<
            return_func(1);
    }*/

class MyClass {
public:
    void non_return_method(string kelompok) {
        cout << "Halo, kami dari kelompok " << kelompok;
    }
    int with_return_method(int angka) {
        return angka * angka;
    }
};
int main() {
    MyClass myObj;
    myObj.non_return_method("100");
    cout << "\nhasil kali 100 dengan 100 adalah " <<
        myObj.with_return_method(100);
    return 0;
}