#include<bits/stdc++.h>
using namespace std;

/*Creating the class bst with int data type and data as variable
bst pointer with *left and *right
defining some functions publicly
before constructor using bst();
parameterised constructer using bst(int);
a function to insert the value bst* insert(bst*,int);
a function to traverse the node, using void traverse(bst*);
*/
class bst{
    int data;
    bst *left, *right;
    public:
        bst(); 
        bst(int);
        bst* insert(bst*,int);
        void traverse(bst*);
};
/*before constructor's definition using bst::bst() etc
*/
bst::bst()
    :data(0)
    ,left(NULL)
    ,right()
    {
    }
/*parameterised constructor's definition
*/
bst::bst(int value){
    data=value;
    left=NULL;
    right=NULL;
}
/*insert function's definition and check if the tree is empty or not, insert into the first node
if it is empty
if value is greater than root, then must insert into the right sub tree
else the value must be inserted into the left
return root; after that to finish off
*/
bst* bst::insert(bst* root, int value)
{
    if(!root)
    {
        return new bst(value);  
    }
    if(value>root->data)
    {
        root->right=insert(root->right,value);
    }
    else
    {
        root->left=insert(root->left,value);
    }
    return root;
}
/*writing the traverse function
traverse to the left sub tree, print the data
traverse to the right sub tree
*/
void bst::traverse(bst* root)
{
    if(!root)
    {
        return;
    }
    traverse(root->left);
    cout<<root->data<<data<<" "<<endl;
    traverse(root->right);
}
/*starting with an empty string b, insert the values into the nodes
traverse
*/
main(){
    bst b,*root=NULL;
    root=b.insert(root, 50);
    b.insert(root, 10);
    b.insert(root, 30);
    b.insert(root, 60);
    b.insert(root, 20);
    b.traverse(root);
    return 0;
};