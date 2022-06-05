#include "threePin.h"
#include "twoPinSocket.h"

class electricAdaptor : public ThreePin
{
    TwoPinSocket twoPinSocket;

public:
    void plugIn()
    {
        twoPinSocket.switchPlugIn();
    }
};