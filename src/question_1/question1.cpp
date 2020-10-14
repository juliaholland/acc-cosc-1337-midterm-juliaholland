#include "question1.h"

bool test_config()
{
    return true;
}



double get_kinetic_energy(double mass, double velocity)
{
    double kineticEnergy;
     
    kineticEnergy = 0.5 * mass * velocity * velocity;

    return kineticEnergy;
}