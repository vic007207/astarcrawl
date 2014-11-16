#ifndef NODE_H
#define NODE_H

#include <vector>
#include <iostream>

using namespace std;
class Node{
  public:
    Node();
    ~Node();
    bool operator() (const Node& other)const
    bool operator== (const Node& other)const
    char getName;
    int  getFx;
    int  getGx;
    void print();
    Node* parent;
  private:

};
#endif