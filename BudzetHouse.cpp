#include<iostream>
#include<string>

using namespace std;
int main()
{
    char wybor;
    int pensja, oszczednosci, inwestycje;
    int oplata_czynsz, oplata_auto, oplata_gsm, oplata_media;

    cout << "Czesc. Wpisz swoja pensje NETTO [na reke] : ";
    cin >> pensja;
    cout << "Wybierz opcje: A - Oblicz budzet domowy | B - Sprawdz oszczednosci | C - Zaplanuj inwestycje domowe :  ";
    cin >> wybor;

    switch(wybor)
    {
        case 'a':
        case 'A':
            cout << "\nTwoj budzet domowy. \n\n";
            cout << "Wpisz kwote czynszu: ";
            cin >> oplata_czynsz;
            cout << "Wpisz kwote za auto: ";
            cin >> oplata_auto;
            cout << "Wpisz oplate za media RTV: ";
            cin >> oplata_media;
            cout << "Twoja pensja: " << pensja << " - Twoje oplaty: " << oplata_czynsz+oplata_auto+oplata_media << " PLN.\n";
            if(pensja-(oplata_czynsz+oplata_auto+oplata_media)<=0)
            {
                cout << "\nNiestety, nie starczylo Ci pieniedzy.\n\n";
            }
            else
            {
                cout << "Reszta z wyplaty: " << pensja-(oplata_czynsz+oplata_auto+oplata_media) << " PLN.\n\n";
            }
        break;

        case 'b':
        case 'B':
            cout << "\nOszczednosci. \n";
            cout << "Ile odlozysz z pensji: " << pensja << " PLN : ";
            cin >> oszczednosci;
            cout << "Twoje oszczednosci: " << oszczednosci << " PLN.\n";
            cout << "Pozostanie Ci: " << pensja - oszczednosci << " PLN.\n";
            cout << "Twoje oszczednosci moga wzrosnac za rok i wyniosa [jesli odkladasz co miesiac tyle samo]: " << oszczednosci*12 << " PLN.";
            //uwzglednic jakiœ procent
        break;

        case 'c':
        case 'C':
            cout << "\nInwestycje domowe. \n";
            cout << "Ile chcesz zainwestowac z pensji: " << " PLN : ";
            cin >> inwestycje;
            cout << "Zostanie ci: " << pensja - inwestycje << ", ale przy dlugotrwalym oszczedzaniu za rok bedziesz miec: " << inwestycje*(12*0,2);
        break;

        default:
            cout << "Nie dokonales prawidlowego wyboru. \n";
    }
    return 0;
}
