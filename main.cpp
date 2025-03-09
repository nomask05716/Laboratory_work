#include<iostream>
#include<cmath>
using namespace std;
int Perimeter(int length, int width) {
    return ((length + width) * 2);
}


int rectangleArea(int length, int width) {
    return (length * width);
}


double diagonal_length(int length, int width) {
    return sqrt((pow(length, 2) + pow(width, 2)));
}
int main(){
    cout << "Здравствуйте, выберите номер:\n 1 - Вычисление параметров прямоугольника \n 2 - Вычисление параметров треугольника \n 3 - Вычисление параметров трапеции \n Ваш выбор" <<endl;
    int numb;
    cin >> numb;
    enum menu{
        rectangle=1,
        triangle,
        trapezoid,
    };
    switch(numb){
        case menu::rectangle:
            cout << "Выберите номер:\n 1 - Периметр прямоугольника \n 2 - Площадь прямоугольника \n 3 - Длина диагонали прямоугольника \n Ваш выбор>>" << endl;
            int number;
            cin >> number;
            enum rectagle{
                perimeter_menu=1,
                rectangArea_menu,
                diagonal_length_menu,
            };
            int length, width;
            cout << "Введите длину прямоугольника: ";
            cin >> length;
            cout << "Введите ширину прямоугольника: ";
            cin >> width;
            switch (number) {
                case perimeter_menu:
                    cout << "Периметр: " << Perimeter(length, width) << endl;
                    break;
        
                case rectangArea_menu:
                    cout << "Площадь: " << rectangleArea(length, width) << endl;
                    break;
        
                case diagonal_length_menu:
                    cout << "Длина диагонали: " << diagonal_length(length, width) << endl;
                    break;
        
                default:
                    cout << "Неверный выбор!" << endl;
                    break;

            break;
            }
        case menu::triangle:
            
            break;
        case menu::trapezoid:
            
            break;
        default:
            cout << "Неверный выбор!" << endl;
            break;
    }
    return 0;
}
