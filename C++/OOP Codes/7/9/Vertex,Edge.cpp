#include<iostream>
using namespace std;



class Vertex
{
 private:
     unsigned int id;                                 
 public:   
    unsigned int get_id(){return id;};   
    void set_id(unsigned int value) {id = value;};
    Vertex(unsigned int init_val) {id = init_val;};   
    ~Vertex() {};                                     
};


class Edge
{
 private:
      Vertex first_vertex;                 // a vertex on one side of the edge
      Vertex second_vertex;                // a vertex on the other side of the edge
      unsigned int weight;                 // the value of the edge ( or its weight )     
 public:   
    Edge(Vertex vertex_1, Vertex vertex_2, unsigned int init_weight)  //constructor
    {
         first_vertex(vertex_1.get_id());
         second_vertex(vertex_2.get_id());
         weight = init_weight;
      }

    ~ Edge();   // destructor
}; 

///////////////////////////////// this part is to test the result

Vertex ver_list[2] = {7, 9};
Vertex test = 101;

int main()
{
    cout<< "Hello, This is a graph"<< endl;
    for (unsigned int i = 0; i < 2; i++) cout<< ver_list[i].get_id() << endl;      
    cout<< test.get_id() << endl;

return 0;
}
