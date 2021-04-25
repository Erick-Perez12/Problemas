#include <iostream> 
#include <string>
using namespace std;
//problema 4
int main()
{
    int palindromo = 0;
    for (int i = 100; i < 1000; ++i){
        for (int j = 100; j < 1000; ++j){
            int Producto = i * j;
            std::string ProductoString = std::to_string(Producto);
            if (
                (ProductoString == std::string{ ProductoString.rbegin(), ProductoString.rend() }) &&
                (Producto > palindromo)
            )
            {
                palindromo = Producto;
            }
        }
    } 
    std::cout << palindromo << "\n";
}
