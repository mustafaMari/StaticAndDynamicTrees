#include <iostream>
#include "CNodeStatic.h"
#include "CNodeDynamic.h"
#include "CTreeStatic.h"
#include "CtreeDynamic.h"
void v_tree_test();
void testMovingStaticTree();
//void testMovingDynamicTree();
void v_tree_test_dynamic();
int main()
{
    v_tree_test();
 //   testMovingStaticTree();
//    testMovingDynamicTree();
    v_tree_test_dynamic();
}
void v_tree_test()
{
    CNodeStatic  c_root;

    c_root.vAddNewChild();
    c_root.vAddNewChild();
    c_root.pcGetChild(0)->vSetValue(1);
    c_root.pcGetChild(1)->vSetValue(2);
    c_root.pcGetChild(0)->vAddNewChild();
    c_root.pcGetChild(0)->vAddNewChild();
    c_root.pcGetChild(0)->pcGetChild(0)->vSetValue(11);
    c_root.pcGetChild(0)->pcGetChild(1)->vSetValue(12);
    c_root.pcGetChild(1)->vAddNewChild();
    c_root.pcGetChild(1)->vAddNewChild();
    c_root.pcGetChild(1)->pcGetChild(0)->vSetValue(21);
    c_root.pcGetChild(1)->pcGetChild(1)->vSetValue(22);


    c_root.vPrintAllBelow();
    cout << endl;
    c_root.pcGetChild(0)->pcGetChild(1)->vPrintUp();
}

void v_tree_test_dynamic()
{
    CNodeDynamic c_root;
    c_root.vAddNewChild();
    c_root.vAddNewChild();

    c_root.pcGetChild(0)->vSetValue(1);
    c_root.pcGetChild(1)->vSetValue(2);

    c_root.pcGetChild(0)->vAddNewChild();
    c_root.pcGetChild(0)->vAddNewChild();

    c_root.pcGetChild(0)->pcGetChild(0)->vSetValue(11);
    c_root.pcGetChild(0)->pcGetChild(1)->vSetValue(12);

    c_root.pcGetChild(1)->vAddNewChild();
    c_root.pcGetChild(1)->vAddNewChild();

    c_root.pcGetChild(1)->pcGetChild(0)->vSetValue(21);
    c_root.pcGetChild(1)->pcGetChild(1)->vSetValue(22);

    cout << "all below" << endl;
    c_root.vPrintAllBelow();

    c_root.~CNodeDynamic();
}
void testMovingStaticTree() {
    cout << "\n\nTesting Move Static Tree";
    cout << "\n tree 1\n";
    CTreeStatic c_tree;
    CNodeStatic c_root = *c_tree.pcGetRoot();
    c_root.vAddNewChild();
    c_root.vAddNewChild();
    c_root.pcGetChild(0)->vSetValue(1);
    c_root.pcGetChild(1)->vSetValue(2);
    c_root.pcGetChild(0)->vAddNewChild();
    c_root.pcGetChild(0)->vAddNewChild();
    c_root.pcGetChild(0)->pcGetChild(0)->vSetValue(11);
    c_root.pcGetChild(0)->pcGetChild(1)->vSetValue(12);
    c_root.pcGetChild(1)->vAddNewChild();
    c_root.pcGetChild(1)->vAddNewChild();
    c_root.pcGetChild(1)->pcGetChild(0)->vSetValue(21);
    c_root.pcGetChild(1)->pcGetChild(1)->vSetValue(22);

    cout << "Print Below: ";
    c_root.vPrintAllBelow();
    //cout << "\nPrint Up: ";
    //c_root.pcGetChild(0)->pcGetChild(1)->vPrintUp();

    cout << "\n\tree 3\n";
    CTreeStatic c_tree3;
    CNodeStatic c_root3 = *c_tree3.pcGetRoot();
    c_root3.vAddNewChild();
    c_root3.vAddNewChild();
    c_root3.pcGetChild(0)->vSetValue(31);
    c_root3.pcGetChild(1)->vSetValue(32);
    c_root3.pcGetChild(0)->vAddNewChild();
    c_root3.pcGetChild(0)->vAddNewChild();
    c_root3.pcGetChild(0)->pcGetChild(0)->vSetValue(33);
    c_root3.pcGetChild(0)->pcGetChild(1)->vSetValue(34);
    c_root3.pcGetChild(1)->vAddNewChild();
    c_root3.pcGetChild(1)->vAddNewChild();
    c_root3.pcGetChild(1)->pcGetChild(0)->vSetValue(35);
    c_root3.pcGetChild(1)->pcGetChild(1)->vSetValue(36);

    cout << "Print Below";
    c_root3.vPrintAllBelow();

    cout << "\n\n Moving tree 3 to tree 1 \n";
    CTreeStatic ts;
    c_tree.bMoveSubtree(c_root, *c_root.pcGetChild(2), c_root3);

    cout << "\nTREE1 after moving subtree: ";
    c_root.vPrintAllBelow();
    cout << "\nTREE3 after moving subtree:";
    c_root3.vPrintAllBelow();
    cout << "\n";
}
//void testMovingDynamicTree() {
//    cout << "\n\nTesting Move Dynamic Tree";
//    cout << "\n Creating tree 1\n";
//    CTreeDynamic c_tree;
//    CNodeDynamic c_root = *c_tree.pcGetRoot();
//    c_root.vAddNewChild();
//    c_root.vAddNewChild();
//    c_root.pcGetChild(0)->vSetValue(11);
//    c_root.pcGetChild(1)->vSetValue(12);
//    c_root.pcGetChild(0)->vAddNewChild();
//    c_root.pcGetChild(0)->vAddNewChild();
//    c_root.pcGetChild(0)->pcGetChild(0)->vSetValue(13);
//    c_root.pcGetChild(0)->pcGetChild(1)->vSetValue(14);
//    c_root.pcGetChild(1)->vAddNewChild();
//    c_root.pcGetChild(1)->vAddNewChild();
//    c_root.pcGetChild(1)->pcGetChild(0)->vSetValue(15);
//    c_root.pcGetChild(1)->pcGetChild(1)->vSetValue(16);
//
//    cout << "Print Below: ";
//    c_root.vPrintAllBelow();
//
//    cout << "\n\nCreating tree 3\n";
//    CTreeDynamic c_tree3;
//    CNodeDynamic c_root3 = *c_tree3.pcGetRoot();
//    c_root3.vAddNewChild();
//    c_root3.vAddNewChild();
//    c_root3.pcGetChild(0)->vSetValue(31);
//    c_root3.pcGetChild(1)->vSetValue(32);
//    c_root3.pcGetChild(0)->vAddNewChild();
//    c_root3.pcGetChild(0)->vAddNewChild();
//    c_root3.pcGetChild(0)->pcGetChild(0)->vSetValue(33);
//    c_root3.pcGetChild(0)->pcGetChild(1)->vSetValue(34);
//    c_root3.pcGetChild(1)->vAddNewChild();
//    c_root3.pcGetChild(1)->vAddNewChild();
//    c_root3.pcGetChild(1)->pcGetChild(0)->vSetValue(35);
//    c_root3.pcGetChild(1)->pcGetChild(1)->vSetValue(36);
//
//    cout << "Print Below";
//    c_root3.vPrintAllBelow();
//
//    cout << "\n\nMoving tree 3 to tree 1 \n";
//    c_tree.bMoveSubtree(&c_root, c_root3.pcGetChild(1), &c_root3);
//
//    cout << "\nTREE1 after moving subtree: ";
//    c_root.vPrintAllBelow();
//    cout << "\nTREE3 after moving subtree:";
//    c_root3.vPrintAllBelow();
//    cout << "\n";
//}