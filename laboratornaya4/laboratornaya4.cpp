#include <iostream>
#include <math.h>


float per(float site)
{
    return  site * 4;
}

float horizon(float r, float h)
{
    return  sqrt((r + h) * 2 - r * 2);
}
float reb(float site)
{
    return pow(site, 3);
}
void chislo(float R)
{
    const double PI = 3.141592653589793;
    std::cout << 2 * PI * R << "\n";
    std::cout << PI * pow(R, 2) << "\n";
}
int main()
{
    std::cout << per(10) << "\n";

    std::cout << horizon(12, 5) << "\n";

    std::cout << reb(4) << "\n";

    chislo(10);
    std::cout << "4 zadanie " << ";" << "\n";
    std::cout << "Vvedite pervoe chislo" << ";" << "\n";
    float cel = 0;
    float cel2 = 0;
    std::cin >> cel;
    std::cout << "Vvedite vtoroe chislo" << ";" << "\n";
    std::cin >> cel2;
    std::cout << "Srednee arefmeticheskoe: " << (cel + cel2) / 2 << ";" << "\n";
    std::cout << "Srednee geometricheskoe: " << sqrt(cel * cel2) << ";" << "\n";

    std::cout << "5 zadanie " << ";" << "\n";
    std::cout << "Vvedite Obiom " << ";" << "\n";
    float V = 0;
    float m = 0;
    std::cin >> V;
    std::cout << "Vvedite massu " << ";" << "\n";
    std::cin >> m;
    std::cout << "Plotnost tela = ";
    std::cout << m / V << ";" << "\n";

    std::cout << "6 zadanie " << ";" << "\n";
    std::cout << "Vvedite Kolichestvo ludey" << ";" << "\n";
    float people = 0;
    float place = 0;
    std::cin >> people;
    std::cout << "Vvedite Ploshad territorii" << ";" << "\n";
    std::cin >> place;
    std::cout << "Plotnost naseleniya ravna: ";
    std::cout << people / place << "\n";
}


