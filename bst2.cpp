#include <bits/stdc++.h>
using namespace std;
/*creating a node, this time using a structure instead*/
struct node{
    int key;
    struct node *left, *right;
};
/*Create a utlity function to create a binary serach tree node
then we assign the key to the item
*/
struct node* newnode(int item)
{
    struct node*temp = (struct node*)malloc(sizeof(struct node)); 
    temp->key=item;
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
/*Create a traversing function*/
void traverse(struct node* root)
{
    if (root!=NULL)
    {
        traverse(root->left);
        cout<<root->key;
        traverse(root->right);
    }
}
/*Create a utility function with a given key in a binary search tree
to insert a new node*/
struct node * insert(struct node* node, int key)
{
    if(node==NULL)
        return newnode(key);
    if(key<node->key)
        node->left=insert(node->left,key);
    else
        node->right=insert(node->right,key);
    return node;
}
/*Create the min value and look down*/
struct node* minvaluenode(struct node* node)
{
    struct node* current=node;
    while(current && current->left!=NULL)
    current=current->left;
    return current;
}
/*Create a delete*/
struct node* deletenode(struct node* root, int key)
{
    if(root==NULL)
    return root;
    if(key<root->key)
        root->left=deletenode(root->left, key);
    else if(key>root->key)
        root->right=deletenode(root->right,key);
    else
    {
        if(root->left==NULL and root->right==NULL)
        return NULL;
        else if(root->left==NULL){
            struct node* temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL){
            struct node* temp=root->left;
            free(root);
            return temp;
        }
        struct node* temp=minvaluenode(root->right);
        root->key=temp->key;
        root->right=deletenode(root->right,temp->key);
    }
    return root;
}
/*Starting with an empty tree, struct node* root==NULL;
Insert values into nodes
Print "traversal of a given tree: "
Delete value 2 in the node
Print "traversal after deleting 2\n"
*/
main()
{
    struct node* root = NULL;
    root=insert(root,2);
    root=insert(root,5);
    root=insert(root,3);
    root=insert(root,4);
    root=insert(root,7);
    root=insert(root,6);

    cout<<"traversal of a given tree: ";
    traverse(root);

    cout<<"\ndelete 2\n";
    root=deletenode(root,2);
    cout<<"traversal after deleting 2: ";
    traverse(root);
    return 0;
};