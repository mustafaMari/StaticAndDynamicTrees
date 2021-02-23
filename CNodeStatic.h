//
// Created by Mufasa on 2/2/2021.
//

#ifndef LAB3_CNODESTATIC_H
#define LAB3_CNODESTATIC_H

#include <iostream>
#include <vector>

using namespace std;
class CNodeStatic
{
public:
    CNodeStatic() {
        i_val = 0;
        parent = NULL;

    };
    ~CNodeStatic();
    void vSetValue(int iNewValue) {
        i_val = iNewValue;
    };
    int iGetChildernNumnber() {
        return(v_children.size());
    };
    void vAddNewChild();
    void vAddNewChild(CNodeStatic newChild);
    CNodeStatic* pcGetChild(int iChildOffSet);
    void vprint() {
        cout << " " << i_val;
    };
    void vPrintAllBelow();
    void vPrintUp();
    void removeChild(CNodeStatic oldChild);
private:
    vector<CNodeStatic> v_children;
    int i_val;
    CNodeStatic* parent;
};


#endif //LAB3_CNODESTATIC_H
