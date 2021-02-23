//
// Created by Mufasa on 2/2/2021.
//

#include "CTreeDynamic.h"
CTreeDynamic::CTreeDynamic() {
    c_root = new CNodeDynamic();
}
bool CTreeDynamic::bMoveSubtree(CNodeDynamic* pcParentNode, CNodeDynamic* pcNewChildNode, CNodeDynamic* pc2ParentNode) {
    pcParentNode->vAddNewChild(pcNewChildNode);
    pc2ParentNode->removeChild(pcNewChildNode);
    return true;
}
