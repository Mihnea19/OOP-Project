#include <iostream>
#include <iomanip>
using namespace std;

class CREATE_TABLE
{
public:
    string A;
    int B;
    string C;
    string D;
    string E;
   

    CREATE_TABLE(string brand, int year, string category, string model, string color)
    {
        A = brand;  
        B = year;    
        C = category;      
        D = model;     
        E = color;
    }
};

int main()
{
    CREATE_TABLE recordArray[5] = { CREATE_TABLE("Audi", 2012, "sedan", "a4","green"),   CREATE_TABLE("Opel", 2002, "hatch", "astra","black"),  CREATE_TABLE("Chevrolet", 1999, "hatch", "spark","green"),   CREATE_TABLE("Dacia", 2012, "sedan", "logan","red"),
                               CREATE_TABLE("Hyundai", 2020, "hatch", "i30","yellow") };

    cout << left << setw(10) << "BRAND" << left << setw(5) << "YEAR" << left
        << setw(8) << "CATEGORY" << left << setw(10) << "MODEL" << left << setw(4) << "COLOR" << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << left << setw(10) << recordArray[i].A
            << left << setw(5) << recordArray[i].B
            << left << setw(8) << recordArray[i].C
            << left << setw(10) << recordArray[i].D
            << left << setw(4) << recordArray[i].E
            << endl;
    }
    return 0;
}