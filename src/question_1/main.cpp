#include<iostream>
#include "question1.h"

using std::cout; using std::cin;
int main()
{
    char choice;
    double mass;
    double velocity;
do{
    cout<<"Enter mass value: ";
    cin>>mass;

    cout<<"Enter velocity value: ";
    cin>>velocity;

    double keneticEnergy = get_kinetic_energy(mass, velocity);
    cout<<"Kenetic Energy: "<<keneticEnergy<<"\n";

    cout<<"Do you want to continue?(Y/N): ";
    cin>>choice;

} while (choice == 'y' || choice == 'Y');
    
    return 0;
}