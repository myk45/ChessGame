#ifndef _PAWN_
#define _PAWN_

#include "Common.h"
#include "DrawElement.h"

namespace View {

class Pawn : public View::DrawElement
{
public:
    Pawn();
    ~Pawn();

    virtual void draw();
    virtual void createGeometry();

private:
};

}

#endif