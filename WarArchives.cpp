#include "WarArchives.h"

void WarArchives::addTacticalMemento(TacticalMemento *memento, string label) {

    storage[label] = memento;

}

void WarArchives::removeTacticalMemento(string label) {
    storage.erase(label);
}
