#include <iostream>
#include "AllocationTracker.h"

using namespace std;

int main() {
    cout << "Before: " << AllocationTracker::getCount() << endl;
    AllocationTracker* tracker = new AllocationTracker[100];
    cout << "After: " << AllocationTracker::getCount() << endl;

    cout << "Before: " << AllocationTracker::getCount() << endl;
    AllocationTracker *directArray(new AllocationTracker[100]);
    cout << "After: " << AllocationTracker::getCount() << endl;

    return 0;
}
