#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include <memory>
#include "Observer.h"

class Subject {
protected:
    std::vector<std::shared_ptr<Observer>> observers;

public:
    virtual void attach(std::shared_ptr<Observer> observer) = 0;
    virtual void detach(std::shared_ptr<Observer> observer) = 0;
    virtual void notifyObservers() const = 0;
    virtual ~Subject() = default;
};

#endif
