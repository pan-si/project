#ifndef AVL_H
#define AVL_H
#include<iostream>
#include<string>
using namespace std ;

struct TreeNode{
    int left_height ;
    int right_height ;
    int height ;
    int value ;
    TreeNode* parent ;
    TreeNode* left_child ;
    TreeNode* right_child ;
};

class AVL
{
    public:
        AVL(void) 
        {
            root = new TreeNode ;
            root -> left_height = 0 ;
            root -> right_height = 0 ;
            root -> value = 0 ;
            root -> parent = root ;
            root -> left_child = nullptr ;
            root -> right_child = nullptr ;
            root -> height = 0 ;

            node_number = 0 ;
        }
        ~AVL(void) { delete root ;}

        void Insert(int value) ;

        void Insert(TreeNode* root , int value);

        void PrintTreeNode(void) ;

    private:
        // 创建一颗平衡二叉树的树根节点
        TreeNode* CreateTreeNode(int value) ;
        // 树的中序遍历
        void Mid_Order_Traversal(TreeNode* root) ;
        // 递归计算树的深度
        int Depth(TreeNode* root);
        // 获取失衡点的父节点
        TreeNode* Find_Unbalanced_Node(TreeNode* root , string& kind , int value) ;
    private:
        TreeNode* root ;
        int node_number ;
};
#endif