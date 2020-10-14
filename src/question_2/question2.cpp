#include "question2.h"

bool test_config()
{
    return true;
}

string get_rna_from_dna(const string& dna)
{
    string rna;
    for(std::size_t i = 0; i < dna.size(); i++)
    {
        switch (dna[i])
        {
        case 'T':
            rna+="U";
            break;
         case 'A':
            rna+="A";
            break;
         case 'C':
            rna+="C";
            break;
         case 'U':
            rna+="U";
            break;
         case 'G':
            rna+="G";
            break;
        default:
            break;
        }
    }
    return rna;
};