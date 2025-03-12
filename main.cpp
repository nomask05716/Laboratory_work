#include <iostream>
#include <cmath>
using namespace std;

int Perimeter_t(int side_a, int side_b, int side_c) {
    int a;
    if ((side_a &&  side_b &&  side_c) >0 ){
        a = (side_a + side_b + side_c);
    }
    else{
    cout << "Cтороны не могут быть отрицательными"<<endl;
    }
    return a;
}

double area_of_Geron(double side_a, double side_b, double side_c) {
    double semiperimeter = (side_a + side_b + side_c) / 2;
    return sqrt(semiperimeter * (semiperimeter - side_a) * (semiperimeter - side_b) * (semiperimeter - side_c));
}

bool isosceles(int side_a, int side_b, int side_c) {
    return (side_a == side_b || side_b == side_c || side_a == side_c);
}

bool examination(double side_a, double side_b, double side_c) {
    return (side_a + side_b > side_c && side_a + side_c > side_b && side_b + side_c > side_a);
}
int Perimeter(int length, int width) {
    if (length > 0 &&  width>0){ 
        return ((length+width)*2);
    }
    else{
        cout << "Cтороны не могут быть отрицательными"<<endl;
    }
}


int rectangleArea(int length, int width) {
    if (length > 0 &&  width>0){ 
        return (length * width);
    }
    else{
        cout << "Cтороны не могут быть отрицательными"<<endl;
    }
    
    
}


double diagonal_length(int length, int width) {
    if (length > 0 &&  width>0){ 
        return (sqrt((pow(length, 2) + pow(width, 2))));
    }
    else{
        cout << "Cтороны не могут быть отрицательными"<<endl;
    }
    
}
int perimeter_trapezoid(int side_a,int side_b,int side_c,int side_d) {
    return(side_a + side_b +side_c+side_d);
}
double trapezoid_area(int side_a,int side_b,int height){
    return ((side_a+side_b)  *height / 2.0);
}
double middle_line(int side_a,int side_b){
    return((side_a+side_b) /2.0);
}
int main() {
    cout << "Здравствуйте, выберите номер:\n 1 - Вычисление параметров прямоугольника \n 2 - Вычисление параметров треугольника \n 3 - Вычисление параметров трапеции \n Ваш выбор: ";
    int numb;
    cin >> numb;

    enum menu {
        rectangle = 1,
        triangle,
        trapezoid,
        };

    switch (numb) {
        case menu::rectangle: {
            cout << "Выберите номер:\n 1 - Периметр прямоугольника \n 2 - Площадь прямоугольника \n 3 - Длина диагонали прямоугольника \n Ваш выбор>>" << endl;
            int number;
            cin >> number;
        
            enum rectagle { perimeter_menu = 1, rectangArea_menu, diagonal_length_menu };
        
            int length, width;
            cout << "Введите длину: ";
            cin >> length;
            cout << "Введите ширину: ";
            cin >> width;
        
            switch (number) {
                case perimeter_menu: 
                    cout << "Периметр: " << Perimeter(length, width) << endl;
                    break;
                case rectangArea_menu: 
                    cout << "Площадь: " << rectangleArea(length, width) << endl;
                    break;
                case diagonal_length_menu: 
                    cout << "Диагональ: " << diagonal_length(length, width) << endl;
                    break;
                default: 
                    cout << "Неверный выбор!" << endl;
                    break;
            }
            break; 
        }
        case menu::triangle: {
            cout << "Выберите номер:\n 1 - Периметр треугольника \n 2 - Площадь треугольника по формуле Герона \n 3 - Проверка треугольника на равнобедренность \n Ваш выбор: ";
            int number;
            cin >> number;

            enum triangle_menu {
                perimeter_t_menu = 1,
                area_of_Geron_menu,
                isosceles_menu,
            };
            int side_a, side_b, side_c;
            switch (number) {
                case perimeter_t_menu:
                        cout << "Введите значение стороны A: ";
                    cin >> side_a;
                        cout << "Введите значение стороны B: ";
                    cin >> side_b;
                        cout << "Введите значение стороны C: ";
                    cin >> side_c;
                    if (!examination(side_a, side_b, side_c)) {
                        cout << "Треугольник не существует." << endl;
                    } else {
                        cout << "Периметр треугольника равен " << Perimeter_t(side_a, side_b, side_c) << endl;
                    }
                    break;

                case area_of_Geron_menu:
                        cout << "Введите значение стороны A: ";
                    cin >> side_a;
                        cout << "Введите значение стороны B: ";
                    cin >> side_b;
                        cout << "Введите значение стороны C: ";
                    cin >> side_c;
                    if (!examination(side_a, side_b, side_c)) {
                        cout << "Треугольник не существует." << endl;
                    } else {
                        cout << "Площадь треугольника по формуле Герона равна " << area_of_Geron(side_a, side_b, side_c) << endl;
                    }
                    break;

                case isosceles_menu: {
                        cout << "Введите значение стороны A: ";
                    cin >> side_a;
                        cout << "Введите значение стороны B: ";
                    cin >> side_b;
                        cout << "Введите значение стороны C: ";
                    cin >> side_c;
                    if (!examination(side_a, side_b, side_c)) {
                        cout << "Треугольник не существует." << endl;
                    } else {
                        bool ans = isosceles(side_a, side_b, side_c);
                        if (ans) {
                            cout << "Треугольник равнобедренный" << endl;
                        } else {
                            cout << "Треугольник не равнобедренный" << endl;
                        }
                    }
                    break;
                }

                default:
                    cout << "Неверный ввод значений" << endl;
                    break;
            }
            break;
        }
        case menu::trapezoid:
            cout << "Выберите номер:\n 1 - Периметр трапеции \n 2 - Площадь трапеции \n 3 - Длина диагонали трапеции \n Ваш выбор>>" << endl;
            int num;
            cin >> num;
            enum trapezoid_menu{
                Perimeter_menu=1,
                trapezoidArea_menu,
                middle_line_menu,
            };
            
            switch (num) {
                case Perimeter_menu:
                    cout << "Введите сторону"<<endl;
                    int paid_a,paid_b,paid_c,paid_d;
                    cin>>paid_a;
                    cout << "Введите 2 сторону"<<endl;
                    cin>>paid_b;
                    cout << "Введите 3 сторону"<<endl;
                    cin>>paid_c;
                    cout << "Введите 4 сторону"<<endl;
                    cin>>paid_d;
                    cout << "Периметр: " << perimeter_trapezoid(paid_a,paid_b,paid_c,paid_d) << endl;
                    break;
                case trapezoidArea_menu:
                    cout << "Введите 1 основание "<<endl;
                    int paidA,paidB,height;
                    cin>>paidA;
                    cout << "Введите 2 основание"<<endl;
                    cin>>paidB;
                    cout << "Введите высоту "<<endl;
                    cin>>height;
                    cout << "Площадь: " << trapezoid_area(paidA,paidB,height) << endl;
                    break;
                case middle_line_menu:
                    cout << "Введите 1 основание "<<endl;
                    int paia,paib;
                    cin>>paia;
                    cout << "Введите 2 основание"<<endl;
                    cin>>paib;
                    cout << "Cредняя линия трапеции: " << middle_line(paia, paib) << endl;
                    break;
    
                default:
                    cout << "Неверный выбор!" << endl;
                    break;
            }
            break;
        default:
            cout << "Неверный выбор!" << endl;
            break;
    }
    return 0;
}
//jfoek