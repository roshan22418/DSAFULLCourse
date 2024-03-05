#include<iostream>
#include <unordered_map>
#include <list>
using namespace std;

class graph{
    public:
        unordered_map<int,list<int>> adjList;
        void addEdge(int u,int v, int flag){
            // if flag = 0 -> undirected graph;
            // if flag = 1 -> directed graph;
            if(flag == 1){
                // u -> v
                adjList[u].push_back(v);
            }
            else{
                // u->v
                // v->u
                adjList[u].push_back(v);
                adjList[v].push_back(u);
            }
            print();
            cout<<endl;
        }
        void print(){

            for(auto i : adjList){
                cout<<endl;
                cout<<i.first<<" {";
                for(auto j: i.second){
                    cout<< j <<",";
                }
                cout<<" }";
            }

        }

            
};

int main(){
    graph gp;
    gp.addEdge(0,1,1);
    gp.addEdge(1,2,1);
    gp.addEdge(1,3,1);
    gp.addEdge(2,3,1);
    gp.addEdge(3,4,1);
    gp.addEdge(4,5,1);
    gp.addEdge(5,3,1);
    return 0;

}