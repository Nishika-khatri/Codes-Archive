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

void insertIntoBST(Node* &root, int data){
    //base case 
    if(root == NULL){
        root = new Node(data);
        return;
    }

    if(data> root->data){
        insertIntoBST(root->right,data);
    }else{
        insertIntoBST(root->left,data);
    }

}

void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!= -1){
        insertIntoBST(root,data);
        cin>>data;
    }
}


void levelOrderTraversal(Node* root){
    //base condition
    if(root == NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<"\t";
        q.pop();
        if(temp->left!=NULL){
            q.push(temp->left);
        }
        if(temp->right!=NULL){
            q.push(temp->right);
        }
    }
}

void inorderTraversal(Node* root){
    if(root==NULL){
        return;
    }

    inorderTraversal(root->left);
    cout<<root->data<<"\t";
    inorderTraversal(root->right);

}

void preorderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    cout<<root->data<<"\t";
    preorderTraversal(root->left);
    preorderTraversal(root->right);

}

void postorderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout<<root->data<<"\t";

}

int minValueInBST(Node* root){
    Node* temp = root;
    while(temp->left!=NULL){
        temp = temp->left;
    }

    return temp->data;
}

int maxValueInBST(Node* root){
    Node* temp = root;
    while(temp->right!=NULL){
        temp = temp->right;
    }

    return temp->data;
}

Node* deleteFromBST(Node* root,int val){
    //Base Case
    if(root == NULL){
        return root;
    }
    if(root->data==val){
        // For 0 Child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        // For 1 Child

        // For 1 Child to be the Left Child 
        if(root->left!=NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // For 1 Child to be the Right Child
        if(root->left== NULL & root->right!=NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        // For 2 Child
        if(root->left!= NULL && root->right!= NULL){
            int mini = minValueInBST(root->right);
            root->data = mini;
            root->right = deleteFromBST(root->right,mini);
            return root;
        }

    }else if(root->data> val){
        root->left = deleteFromBST(root->left,val);
        return root;
    }else{
        root->right = deleteFromBST(root->right,val);
        return root;
    }
}

// int inorderPredecessor(Node* root, int data){
//     Node* temp = root;
//     if(root==NULL){
//         return -1;
//     }
//     if(temp->data == data){
//         return -1;
//     }

//     while(temp->data!= data){
//         if(temp->data==data){
            
//         }
//     }
// }


int main(){
    Node* root = NULL;
    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);

    cout<<"\nLevel order Traversal of BST : "<<endl;
    levelOrderTraversal(root);

    cout<<"\nInorder Traversal of BST : "<<endl;
    inorderTraversal(root);

    cout<<"\nPreorder Traversal of BST : "<<endl;
    preorderTraversal(root);

    cout<<"\nPostorder Traversal of BST : "<<endl;
    postorderTraversal(root);

    cout<<"\nMinimum value in BST : "<<minValueInBST(root);

    cout<<"\nMaximum value in BST : "<<maxValueInBST(root);

    root = deleteFromBST(root,50);
    cout<<"New Traversal : "<<endl;
    levelOrderTraversal(root);

    return 0;
}