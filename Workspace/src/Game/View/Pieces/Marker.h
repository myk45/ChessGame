#ifndef __MARKER__
#define __MARKER__

#include "Common.h"
#include "DrawElement.h"

namespace View {

class Marker : public View::DrawElement
{
public:
    Marker( const View::Position& pos );
    ~Marker();

    virtual void draw();
    virtual void createGeometry();

private:
};

}

#endif