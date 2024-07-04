#include "SimpleArray.h"
#include <iostream>

SimpleArray::SimpleArray(AllocationTracker* ptr) 
    : mArray(ptr) {}

SimpleArray::~SimpleArray() {
    delete[] mArray;
}

AllocationTracker* SimpleArray::get() const {
    return mArray;
}

bool SimpleArray::isNonNull() const {
    return AllocationTracker::getCount();
}

AllocationTracker& SimpleArray::getReference(const uint32_t i) const {
    return mArray[i];
}