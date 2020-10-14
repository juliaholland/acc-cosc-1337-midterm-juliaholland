#include "question3.h"
#include<vector>

using std::vector;

bool test_config()
{
    return true;
}

vector<double> get_cookie_ingredients(int cookies)
{
    double sugar = 1.5/48;
    double butter = 1.0/48;
    double flour = 2.75/48;

    vector<double> ingredients{sugar * cookies, butter * cookies, flour * cookies};

    return ingredients;
}