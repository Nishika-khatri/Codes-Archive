#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

};

Node* buildTree(Node* root){
    cout<<"Enter the data :"<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    if(data == -1) return NULL;
    cout<<"Enter data for inserting in Left of"<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in Right of "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void builtTreeFromLevelOrder(Node* &root){
    queue<Node*> q1;
    cout<<"Enter data for root :"<<endl;
    int data;
    cin>>data;
    root = new Node(data);
    q1.push(root);

    while(!q1.empty()){ 
        Node* temp = q1.front();
        q1.pop();

        cout<<"Enter left node for "<<temp->data<<endl;
        int leftData ;
        cin>>leftData;

        if(leftData!= -1){
                temp->left = new Node(leftData); 
                q1.push(temp->left);
        }

        cout<<"Enter Right node for "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right = new Node(rightData);
            q1.push(temp->right);
        }

    }
}

void levelOrderTraversal(Node* root){
    queue<Node*> q1;
    q1.push(root);
    q1.push(NULL);

    while(!q1.empty()){
        Node* temp = q1.front();
        q1.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q1.empty()){
                q1.push(NULL);
            }
        }else{
            cout<<temp->data<<"\t";
            if(temp->left!=NULL){
                q1.push(temp->left);
            }
            if(temp->right!=NULL){
                q1.push(temp->right);
            }

        }
        
    }

}

void inorderTraversal(Node* root){
        //base case
        if(root == NULL){
            return;
        } 
        inorderTraversal(root->left);
        cout<<root->data<<"\t";
        inorderTraversal(root->right);
}

void preorderTraversal(Node* root){
    //base case
    if(root == NULL) return;
    cout<<root->data<<"\t";
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void postorderTraversal(Node* root){
    //base case
    if(root == NULL) return;

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<"\t";
}

int main(){
    Node* root = NULL;

    builtTreeFromLevelOrder(root);
    levelOrderTraversal(root);
    /*
    //creating a tree
    root = buildTree(root);

    //level order traversal
    // levelOrderTraversal(root);

    cout<<"Inorder Traversal "<<endl;
    // inorderTraversal(root);

    cout<<"Preorder Traversal "<<endl;
    // preorderTraversal(root);

    cout<<"Postorder Traversal "<<endl;
    postorderTraversal(root);
    */
    return 0;
}

// 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1