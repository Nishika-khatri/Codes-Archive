#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>> adj;

    void addEdge(int firstEdge, int secEdge, bool direction){
        //direction = 0 -> undirected graph;
        //direction = 1 -> directed graph;

        //create an edge from firstEdge to secEdge
        adj[firstEdge].push_back(secEdge);

        if(direction == 0){
            adj[secEdge].push_back(firstEdge);
        }
    }

    void printAdjList(){
        for(auto i: adj){
            cout<<i.first<<"-> ";
            for(auto j:i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

};

int main(){

    int n;
    cout<<"Enter the number of nodes :";
    cin>>n;

    int m; 
    cout<<"\nEnter the number of edges : ";
    cin>>m;

    Graph g;

    for(int i =0;i<m;i++){
        int u,v;
        cout<<"Enter first edge : ";
        cin>>u;
        cout<<"Enter second edge : ";
        cin>>v;
        //creating an undirected graph
        g.addEdge(u,v,0);
    }

    cout<<"\nPrinting a graph  "<<endl;
    g.printAdjList();

    return 0;
}