#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int ile;
class ciagi611
{
                vector <int> ciag_liczb;
       			
        public:
                void wprowadz();
                void wypisz();
                int obliczanie();
                int sprawdzenie(int x, int y);
                int zapiszDoPliku(const char *);             
};

void ciagi611::wprowadz()
{

		fstream plik;  
        int wprowadzany;
        plik.open("B:\\Programowanie z Panem Fulaa\\Zadanie Mat 61.1\\ciagi.txt", ios::in); 
         if(plik.good()) 
            while(!plik.eof()) 
                  {
                  	plik >> ile;
                  	for(int i = 1; i <= ile ; i++)
                  	{
                		plik >> wprowadzany;
                		ciag_liczb.push_back(wprowadzany);
                	}
                	ile = 0;
                   }
                   plik.close();   
}


void ciagi611::wypisz()
{
		for (int i = 0; i < ciag_liczb.size(); i++)
		{
			cout << ciag_liczb[i] << "\n";
		}
}

//int ciagi611::sprawdzenie(int x, int y)
//{
//    if (x < y)
//        return sprawdzenie(y,x);
//    if (y == 0)
//        return x;
//    return sprawdzenie(y,x%y);
//}


int koks = 0;
int ciagi611::obliczanie()
{
	int max = 0;
	bool poprawne = false;
	int roznica;
	int r2;
	for (int i = 0; i < ciag_liczb.size(); i++)
	{
        r2 = roznica;
		 
        roznica = ciag_liczb[i + 1] - ciag_liczb[i];
        if (r2 == roznica)
		{
			poprawne = true;
		}
		else
		{
			continue;
		}

		if(poprawne == true)
		{
			if (roznica > max)
			{
				max = roznica;
			}
		}            
//	cout << koks << endl;
	cout << "Najwieksza roznica liczb: " << max << endl;
	}
		
}


int ciagi611::zapiszDoPliku(const char *nazwa)
{	
		int max;
        ofstream plik;
        plik.open(nazwa);
    	plik << "Najwieksza wzglednie pierwsza: " << max;
        plik.close();  
        cout << max;
}



int main()
{
	ciagi611 x;
    x.wprowadz();
//    x.wypisz();
    x.obliczanie();
    x.zapiszDoPliku("B:\\Programowanie z Panem Fulaa\\Zadanie Mat 61.1\\z.txt");
    return 0;
}
