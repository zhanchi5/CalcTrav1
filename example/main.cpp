#include <iostream>

double summary(float a, float b)
{
        return a+b;
}

double sub (float a, float b)
{
        return a-b;
}

double  multiplication (float a, float b)
{
        return a*b;
}

double division (float a, float b)
{
        return a/b;
}

double involutioin(float a, float b)
{
        double result = a;
        for(int i = 1; i <b; i++)
        {
                result *=a;
        }

        return result;
}

long double square_root(float x) {
double powi = 1;
int i;
for(i=1;i<x;i++)
{
if (involutioin(powi,2) == x) break;
else (powi = 0.5*(powi + x/powi));
}
return powi;
}

using namespace std;
int main() {

        float a;
        float b;

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