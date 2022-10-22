#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
#include<set>
using namespace std;

void bfsTraversal(unordered_map<int,list<int>> &adjList, int edges,int startNode){
    unordered_map<int,bool> visited;
    queue<int> q;
    int frontElm = startNode;
    q.push(frontElm);

    while(!q.empty()){
        if(!visited[frontElm]){
            visited[frontElm]=1;
            cout<<q.front()<<"\t";
            q.pop();

            for(auto i: adjList[frontElm]){
                if(!visited[i]){
                    q.push(i);
                }
            }

        }else{
            q.pop();
        }
            frontElm = q.front();
    }

}

int main(){
    int n,e;
    cout<<"Enter the number of nodes : ";
    cin>>n;
    cout<<"\nEnter the number of edges : ";
    cin>>e;

    //Creation of Adjacency List for undirected graph
    unordered_map<int,list<int>> adjList;
    for(int i =0;i<e;i++){
        int u,v;
        cout<<"Enter u and v : ";
        cin>>u>>v;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    int startNode;
    cout<<"Enter the starting node : ";
    cin>>startNode;


    //BFS Traversal
    bfsTraversal(adjList,e,startNode);
    
    return 0;
}