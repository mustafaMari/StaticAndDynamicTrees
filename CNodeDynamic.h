//
// Created by Mufasa on 2/2/2021.
//

#ifndef LAB3_CNODEDYNAMIC_H
#define LAB3_CNODEDYNAMIC_H

#include <iostream>
#include <vector>
using namespace std;
class CNodeDynamic
{
public:
    CNodeDynamic()
    {
        i_val = 0; parent = NULL;
    };
    ~CNodeDynamic();
    void vSetValue(int iNewVal)
    {
        i_val = iNewVal;
    };
    int iGetChildrenNumber()
    {
        return v_children.size();
    };
    void vAddNewChild();
    CNodeDynamic* pcGetChild(int iChildOffset);
    void vPrint() {
        cout << " " << i_val;
    };
    void vPrintAllBelow();
    void vAddNewChild(CNodeDynamic* newChild);
    void removeChild(CNodeDynamic* oldChild);
private:
    vector<CNodeDynamic*> v_children;
    int i_val;
    CNodeDynamic* parent;
};
#endif //LAB3_CNODEDYNAMIC_H
