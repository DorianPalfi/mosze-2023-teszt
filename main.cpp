#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; //Alul vonas hianyzik
    std::cout << '1-100 ertekek duplazasa' //sztring de karakter es nincs lezarva
    for (int i = 0;) //ciklus nem jol definialt
    {
        b[i] = i * 2; //(i+1)*2
    }
    for (int i = 0; i; i++) //ertelmetlen"
    {
        std::cout << "Ertek:" //nincs lezarva nem ki erteket
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nincs kezdo ertek
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i] //nincs lezarva
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
