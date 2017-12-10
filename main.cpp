#include <iostream>

using namespace std;

int main()
{
    int wiersze_1, kolumny_1, wiersze_2, kolumny_2;
    cin >> wiersze_1 >> kolumny_1;
    cin >> wiersze_2 >> kolumny_2;

    if(kolumny_1 != wiersze_2)
    {
        cout << "Niewykonalne.";
        return 0;
    }

    int macierz1[wiersze_1][kolumny_1];// = {{1,4,6},{8,2,4}};
    int macierz2[wiersze_2][kolumny_2];// = {{9,6},{3,7},{2,1}};
    int macierz3[wiersze_1][kolumny_2];

    for(int i = 0; i < wiersze_1; i++)
    {
        for(int j = 0; j < kolumny_1; j++)
        {
            cin >> macierz1[i][j];
        }
    }
    for(int i = 0; i < wiersze_2; i++)
    {
        for(int j = 0; j < kolumny_2; j++)
        {
            cin >> macierz2[i][j];
        }
    }

    int wynik = 0;

    for(int i = 0; i < wiersze_1; i++)
    {
        for(int k = 0; k < kolumny_2; k++)
        {
            for(int j = 0; j < wiersze_2; j++)
            {
                wynik += macierz1[i][j]*macierz2[j][k];
            }
            cout << wynik << " ";
            wynik = 0;
        }
        cout << endl;
    }
}
