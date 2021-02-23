//
// Created by Mufasa on 2/2/2021.
//

#include "CTreeStatic.h"
CTreeStatic::CTreeStatic() {
    c_root =  new CNodeStatic();
}
CTreeStatic::~CTreeStatic(){

}

bool CTreeStatic::bMoveSubtree(CNodeStatic parentNode, CNodeStatic newChild, CNodeStatic parentNode2) {
    c_root->removeChild(parentNode);
    parentNode.vAddNewChild(newChild);
    c_root->vAddNewChild(parentNode);
    parentNode2.removeChild(newChild);
    return true;
}
