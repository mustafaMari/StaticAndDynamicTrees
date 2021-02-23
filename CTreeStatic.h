//
// Created by Mufasa on 2/2/2021.
//

#ifndef LAB3_CTREESTATIC_H
#define LAB3_CTREESTATIC_H
#include "CNodeStatic.h"
class CTreeStatic

{
public:
    CTreeStatic();
    ~CTreeStatic();
    CNodeStatic* pcGetRoot() { return(c_root); }
    void vPrintTree() {
        c_root->vPrintAllBelow();
    };
    bool bMoveSubtree(CNodeStatic pcParentNode, CNodeStatic pcNewChildNode, CNodeStatic pc2ParentNode);
private:
    CNodeStatic* c_root;
};

#endif //LAB3_CTREESTATIC_H
