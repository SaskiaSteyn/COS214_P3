#ifndef PRAC_3_WARARCHIVES_H
#define PRAC_3_WARARCHIVES_H

#include <iostream>
#include <map>

#include "TacticalMemento.h"

using namespace std;

class WarArchives {
    private:
        map<string, TacticalMemento> storage;
    public:
        void addTacticalMemento(TacticalMemento *memento, string label);
        void removeTacticalMemento(string label);
};


#endif //PRAC_3_WARARCHIVES_H
