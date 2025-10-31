#include <stdio.h>





struct TreeNode
{
   
    int Element;
    PtrToNode FirstChild;
    PtrToNode NextSibling;
    
};
typedef struct TreeNode *PtrToNode;
typedef struct PtrToNode Tree;

struct TreeNode
{
    /* data */
    int Element;
    Tree Left;
    Tree Right;

};


