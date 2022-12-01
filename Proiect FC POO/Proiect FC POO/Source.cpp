#include <iostream>
using namespace std;

class Car
{
private:
    string model;
    int mileage;
    int year;
    float price;
public:
    //Car()          //default constructor
    //{
    //    model = "unknown";
    //    mileage = 0;
    //    year = 0000;
    //    price=0.00;

    //}
    Car(string model = "none", int mileage = 0, int year = 2022)
    {
        this->model = model;
        this->mileage = mileage;
        this->year = year;
        price = 15000;
    }
    ~Car()   //destructor adik distrugatorul de mame
    {
        cout << "Ai fost distrus de Distrugator" << endl;
    }

    Car(const Car& c)   // copy constructor
    {
        this->model = c.model;
        this->mileage = c.mileage + 1;
        this->year = c.year;
        price = c.price;
    }
    string getModel()
    {
        return model;
    }
    int getMileage()
    {
        return mileage;
    }
    void setMileage(int mileage)
    {
        if (mileage > 0 && mileage > this->mileage)
        {
            this->mileage = mileage;
        }
    }
};

int main()
{
    Car  car1;
    Car car2("coita", 120000, 2010);
    Car car3(car2);
    Car car4 = car2;
    cout << car2.getModel() << endl;
    cout << car2.getMileage() << endl;
    car2.setMileage(300000);
    cout << car2.getMileage() << endl;
    Car* pc = &car1;
    pc = new Car();  //object in heap
    cout << pc->getModel() << endl;
    delete pc;
    pc = NULL;
    Car* array = new Car[3];
    cout << array[0].getModel() << endl;
    delete[] array;
    array = NULL;
}