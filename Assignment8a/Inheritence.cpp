// Inheritence.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"ClassB.h"
#include"ClassA.h"

int main()
{
    ClassBprivate bpriv(4,5,6); // initialized all data memeber associated with CLassBprivate;
    ClassBprotected bpro(2, 3, 4);// initilized all data memeber associated with ClassBprotected;
    ClassBpublic bpublic(6, 7, 8);// initilized all data memeber associated with CLassBpublic;

    //Q8. Display all the data member value of above three objects; (Don't delete this line)
    std::cout << " Data members of ClassBprivate are :\n" << " privateA = " << bpriv.getPvtA() << " publicA = " << bpriv.getPubA() << " protectedA = " << bpriv.getProA() << "\n";
    std::cout << " Data members of ClassBprotected are :\n" << " privateA = " << bpro.getPvtA() << " publicA = " << bpro.getPubA() << " protectedA = " << bpro.getProA() << "\n";
    std::cout << " Data members of ClassBpublic are :\n" << " privateA = " << bpublic.getPvtA() << " publicA = " << bpublic.getPubA() << " protectedA = " << bpublic.getProA() << "\n";
    std::cout << " This data member of ClassBpublic is accessible directly outside the class too. publicA = " << bpublic.publicA << "\n";


    system("pause");
    return 0;
}

