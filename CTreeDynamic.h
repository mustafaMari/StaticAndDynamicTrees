//
// Created by Mufasa on 2/2/2021.
//

#ifndef LAB3_CTREEDYNAMIC_H
#define LAB3_CTREEDYNAMIC_H
#include "CNodeDynamic.h"
class CTreeDynamic
{
public:
    CTreeDynamic();
    ~CTreeDynamic()
    {

    };
    CNodeDynamic* pcGetRoot()
    {
        return c_root;
    }
    void vPrintTree()
    {
        c_root->vPrintAllBelow();
    };
    bool bMoveSubtree(CNodeDynamic* pcParentNode, CNodeDynamic* pcNewChildNode, CNodeDynamic* pc2ParentNode);
private:
    CNodeDynamic* c_root;
};



#endif //LAB3_CTREEDYNAMIC_H
