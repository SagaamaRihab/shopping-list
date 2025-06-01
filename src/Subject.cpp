#include "Subject.h"

void Subject::addObserver(Observer* obs) {
    observers.push_back(obs);
}

void Subject::removeObserver(Observer* obs) {
    observers.erase(std::remove(observers.begin(), observers.end(), obs), observers.end());
}

void Subject::notifyObservers() {
    for (auto& obs : observers) {
        obs->update();
    }
}
