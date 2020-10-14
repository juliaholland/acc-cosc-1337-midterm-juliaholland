#include<iostream>
#include<vector>
#include "question3.h"

using std::cout; using std::cin; using std::vector;

int cookies;
char choice;

int main()
{
    do {
    cout<<"Enter number of cookie(s): ";
    cin>>cookies;

    vector ingredients = get_cookie_ingredients(cookies);
    cout<< "Sugar: "<<ingredients[0]<<" cup(s)\n";
    cout<< "Butter: "<<ingredients[1]<<" cup(s)\n";
    cout<< "Flour: "<<ingredients[2]<<" cup(s)\n";

    cout<<"Do you want to continue?(Y/N): ";
        cin>>choice;
        
    }while (choice == 'y' || choice == 'Y');

    return 0;
}