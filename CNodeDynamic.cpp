//
// Created by Mufasa on 2/2/2021.
//

#include "CNodeDynamic.h"
CNodeDynamic :: ~CNodeDynamic() {

}
void CNodeDynamic::vAddNewChild() {
    CNodeDynamic* newChild = new CNodeDynamic();
    newChild->parent = this;
    v_children.push_back(newChild);
}
CNodeDynamic* CNodeDynamic::pcGetChild(int iOffSet) {
    for (int i = 0; i < v_children.size(); i++)
    {
        if (i == iOffSet) return v_children[i];
    }
    return 0;

}
void CNodeDynamic::vPrintAllBelow() {
    vPrint();
    for (CNodeDynamic* child : v_children) child->vPrintAllBelow();
}
void CNodeDynamic::vAddNewChild(CNodeDynamic* newChild) {
    newChild->parent = this;
    v_children.push_back(newChild);
}
void CNodeDynamic::removeChild(CNodeDynamic* childToDelete) {
    for (int i = 0; i < v_children.size(); i++)
    {
        if (v_children[i] == childToDelete)
        {
            delete v_children[i];
            v_children.erase(v_children.begin() + i);
            return;
        }
    }
    return;
}