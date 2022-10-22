#include<iostream>
#include<unordered_map>
#include<list>
#include<stack>

using namespace std;

void dfsTraversal(unordered_map<int,list<int>> &adjList, unordered_map<int,bool> &visited, int node){
        stack<int> s;
        s.push(node);

        while(!s.empty()){
            if(!visited[s.top()]){
                int currNode = s.top();
                cout<<currNode<<"\t";
                visited[currNode]=true;
                s.pop();

                for(auto i: adjList[currNode]){
                    if(!visited[i]){
                        s.push(i);
                    }
                }

            }else{
                s.pop();
            }

        }
}

int main(){
    int n,e;
    cout<<"Enter the number of nodes : ";
    cin>>n;

    cout<<"\nEnter the number of edges : ";
    cin>>e;

    //Creation of adjacency List
    unordered_map<int,list<int>> adjList;
    for(int i =0;i<e;i++){
        int u,v;
        cout<<"Enter u and v : ";
        cin>>u>>v;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    unordered_map<int,bool> visited;
    for(int i =0;i<n;i++){
        if(!visited[i]){
            dfsTraversal(adjList,visited,i);
        }
    }
    return 0;
}