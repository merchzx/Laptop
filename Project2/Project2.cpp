#include<iostream>
#include<Windows.h>
#include <cstring>

using namespace std;

class Laptop {
    char* model;
    char* cpuName;
    char* videoCard;
    int garranty;
    double price;
public:
    Laptop();
    ~Laptop();
    void Input();
    void Output();
    void GetModel();
    void GetCpuName();
    void GetVideoCard();
    void GetPrice();
    void GetGarranty();
    void SetModel();
    void SetCPU();
    void SetVideoCard();
    int SetPrice();
    int SetGarranty();
};
Laptop::Laptop() {
    model = nullptr;
    cpuName = nullptr;
    videoCard = nullptr;
    garranty = 0;
    price = 0;
}

Laptop::~Laptop() {
    delete[]model;
    delete[]cpuName;
    delete[]videoCard;
    cout << "\nDELETED";
}

void Laptop::Input() {
    char buff[100];
    cout << "Enter Model -> ";
    cin >> buff;
    if (model != nullptr) {
        delete[]model;
    }
    model = new char[strlen(buff) + 1];
    strcpy_s(model, strlen(buff) + 1, buff);
    cout << "Enter CPU name -> ";
    cin >> buff;
    if (cpuName != nullptr) {
        delete[]cpuName;
    }
    cpuName = new char[strlen(buff) + 1];
    strcpy_s(cpuName, strlen(buff) + 1, buff);

    cout << "Enter Video Card -> ";
    cin >> buff;
    if (videoCard != nullptr) {
        delete[]videoCard;
    }
    videoCard = new char[strlen(buff) + 1];
    strcpy_s(videoCard, strlen(buff) + 1, buff);

    cout << "Enter garranty ->";
    cin >> garranty;
    cout << "Enter Price ->";
    cin >> price;

}

void Laptop::Output() {
    cout << "Model - " << model << "\nCPU name - " << cpuName << "\nVideo Card - " 
        << videoCard<<"\nGarranty - "<<garranty<<"\nPrice - "<<price<<"\n";
}

void Laptop::GetModel()
{
    char buff[100];
    cout << "Enter Model -> ";
    cin >> buff;
    if (model != nullptr) {
        delete[]model;
    }
    model = new char[strlen(buff) + 1];
    strcpy_s(model, strlen(buff) + 1, buff);
}

void Laptop::GetCpuName()
{
    char buff[100];
    cout << "Enter CPU name -> ";
    cin >> buff;
    if (cpuName != nullptr) {
        delete[]cpuName;
    }
    cpuName = new char[strlen(buff) + 1];
    strcpy_s(cpuName, strlen(buff) + 1, buff);
}

void Laptop::GetVideoCard()
{
    char buff[100];
    cout << "Enter Model -> ";
    cin >> buff;
    if (videoCard != nullptr) {
        delete[]videoCard;
    }
    videoCard = new char[strlen(buff) + 1];
    strcpy_s(videoCard, strlen(buff) + 1, buff);
}

void Laptop::GetPrice() {
    cout << "Enter Price ->";
    cin >> price;
}

void Laptop::GetGarranty() {
    cout << "Enter Garranty ->";
    cin >> garranty;
}


void Laptop::SetModel() {
    cout <<"Model ->" << model;
}
void Laptop::SetCPU() {
    cout << "CPU name ->" << cpuName;
}
void Laptop::SetVideoCard() {
    cout << "Video Card ->" << videoCard;
}

int Laptop::SetPrice() {
    return price;
}

int Laptop::SetGarranty() {
    return garranty;
}

int main()

{

     Laptop a;
     a.Input();
     a.Output();
     a.GetCpuName();
     a.GetGarranty();
     a.Output();
}


