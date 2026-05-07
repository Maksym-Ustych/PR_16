#include <iostream>
#include <clocale>

using namespace std;

void printName()
{
    cout << "Ім'я: Максим\n";
}

void printGroup()
{
    cout << "Група: alk-43\n";
}

void printSpeciality()
{
    cout << "Спеціальність: Інженерія програмного забезпечення\n";
}

int main()
{
    setlocale(LC_ALL, "");
    system("chcp 65001 > nul");

    printName();
    printGroup();
    printSpeciality();

    return 0;
}