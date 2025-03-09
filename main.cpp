#include<iostream>
#include<cmath>
using namespace std;
int main(){
    cout << "Здравствуйте, выберите номер:\n 1 - Вычисление параметров прямоугольника \n 2 - Вычисление параметров треугольника \n 3 - Вычисление параметров трапеции \n Ваш выбор" <<endl;
    int numb;
    cin >> numb;
    enum function{
        rectangle,
        triangle,
        trapezoid,
    };
    int length, width;
    switch(numb){
        case function::rectangle:
            
            break;
        case function::triangle:
        
            break;
        case function::trapezoid:
            
            break;
        default:
            cout << "Неверный выбор!" << endl;
            break;
    }
    return 0;
}