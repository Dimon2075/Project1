#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a1 = 60;
    int b1 = 25;
    int c1 = a1 + b1;
    int c2 = a1 - b1;
    int c3 = a1 * b1;
    int c4 = a1 / b1;
    int c5 = a1 % b1;
    
    if (a1 >= b1)
    {
        int a1 = 50;
        int b1 = 50;
        int c1 = a1 + b1;
        cout << "summa a1 + b1 = " << c1 << endl;
    }

    if (a1 = b1)
    {
        int a1 = 50;
        int b1 = 10;
        int c5 = a1 % b1;
        cout << "ostatok a1 % b1 = " << c5 << endl;
    }

    if (b1 > 0)
    {
        int a1 = 60;
        int b1 = 2;
        int c3 = a1 * b1;
        cout << "umnojeniye a1 * b1 = " << c3 << endl;
    }

    if (a1 >=0 && b1>=0)
    {
        int a1 = 60;
        int b1 = 29;
        int c2 = a1 - b1;
        cout << "vichitaniye a1 - b1 = " << c2 << endl;
    }

    if (a1 <= 0 || b1 >= 0 )
    {
        int a1 = -10;
        int b1 = 100;
        int c1 = a1 + b1;
        cout << "2.summa a1 + b1 = " << c1 << endl;
    }

    if (a1 = 0) 
    {
        int a1 = 60;
        int b1 = 30;
        int c4 = a1 / b1;
        cout << "deleniye a1 / b1 = " << c4 << endl;//не выведется так как это условие не выполняется и будет работать как false
    }
    
    //cout << "a1 = " << a1 << endl;
    //cout << "b1 = " << b1 << endl;
    //cout << "summa a1 + b = " << c1 <<endl << "vichitaniye a1 - b1 = " << c2 << endl << "umnojeniye a1 * b1 = " << c3 << endl << "deleniye a1 / b1 = " << c4 << endl << "ostatok a1 % b1 = " << c5 <<endl;

    return 0;
}