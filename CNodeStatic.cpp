//
// Created by Mufasa on 2/2/2021.
//

#include "CNodeStatic.h"
CNodeStatic :: ~CNodeStatic() {

}
void CNodeStatic::vAddNewChild() {
    CNodeStatic newChild = CNodeStatic();
    newChild.parent = this;
    v_children.push_back(newChild);
}
void CNodeStatic::vAddNewChild(CNodeStatic newChild) {
    newChild.parent = this;
    v_children.push_back(newChild);
}
CNodeStatic* CNodeStatic::pcGetChild(int iOffSet) {
    for (int i = 0; i < v_children.size(); i++)
        if (i == iOffSet) return &v_children[i];
    return NULL;
}

void CNodeStatic::vPrintAllBelow()
{
    vprint();
    for (CNodeStatic child : v_children) child.vPrintAllBelow();
}
void CNodeStatic::vPrintUp()
{
    vprint();
    if (parent != NULL) {
        parent->vPrintUp();
    }
}
void CNodeStatic::removeChild(CNodeStatic oldChild) {

    for (int i = 0; i < iGetChildernNumnber(); i++) {
        if (v_children[i].i_val == oldChild.i_val)
            v_children.erase(v_children.begin() + 1);
    }
}
