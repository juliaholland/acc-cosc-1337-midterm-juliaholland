#include<iostream>
#include<string>
#include "question2.h"

using std::cout; using std::cin; using std::string;

int main()
{
    char choice;
    string dna;
    string rna;
    do 
    {
        cout<<"Enter DNA string: ";
        cin>>dna;

        rna = get_rna_from_dna(dna);
        cout<<"RNA string: "<<rna<<"\n";
        
        cout<<"Do you want to continue?(Y/N): ";
        cin>>choice;
        
    }while (choice == 'y' || choice == 'Y');

    return 0;
}