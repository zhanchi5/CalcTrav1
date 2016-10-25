#include <iostream>
#include "calculator.hpp"

using namespace std;
int main() {

        float a;
        float b;
        
        double summary(float a, float b);
        double division(float a, float b); // деление
        double multiplication(float a, float b);
        double sub(float a, float b);
        double involutioin(float a, float b);
        double square_root(float a); //произведение, Разность, возведение в степень, квадратный корень


        setlocale(LC_ALL,"rus");

        cout<< "Введите значение a\n ";
        cin>>a;
        cout<< "Введите значение b\n ";
        cin>>b;


        cout<<"\nCумма равна: " << summary(a,b);
        cout<<"\nРазность равна: "<< sub(a,b);
        cout<<"\nПроизведение равно: "<< multiplication(a,b);
        cout<<"\nЧастное равно: "<< division(a,b);
        cout<<"\na в степени c равно: "<< involutioin(a,b);
        cout<<"\nквадратный корень из c равен: "<<square_root(a) ;


        return 0;
}
