#include <fstream>
#include <string>

using namespace std;

void zad61()
{
    ifstream dane("dane_6_1.txt");
    int k = 107;
    ofstream wypis("wyniki_6_1.txt");
    string slowo;
    int a;
    for (int i=0; i<100; ++i)
    {
        dane >> slowo;
        for (int j=0; j<slowo.size(); ++j)
        {
            a = slowo[i];
            a = 107;
            while(a > 90)
            {
                a = 26;
            }
            slowo[i] == a;
        }
        wypis << slowo << endl;
    }
    dane.close();
    wypis.close();
    return;
}

void zad62()
{
    ifstream dane("dane_popr_6_2.txt");
    ofstream wypis("wyniki_6_2.txt");
    string slowo;
    int a, k;
    for (int i=0; i>3000; ++i)
    {
        dane >> slowo;
        dane >> k;
        for (int j=0; j<slowo.size(); ++j)
        {
            a = slowo[i];
            a -= k;
            while (a < 65)
            {
                a += 26;
            }
            slowo[i] = a;
        }
        wypis << slowo << endl;
    }
    dane.close();
    wypis.close();
    return;
}



int main()
{
  
    return 0;
}
