#include "Node.h"
#include <vector>

using namespace std;
Node
{
  char name; bool valid;
  bool open; bool closed;
  Node * parent;
  float gx; float fx;
  int xcoor; int ycoor;
  vector<Node *>neighbors;
  bool operator() (const Node& other)const
  {
    return (fx<=other.fx);
  }
  bool operator== (const Node& other)const
  {
    return (xcoor==other.xcoor && ycoor==other.ycoor);
  }

};

Node::Node(char mychar, int xval, int yval)
{
  name=mychar; bool valid; xcoor=xval
  bool open; bool closed;
  Node * parent;
  float gx; float fx;
  if(mychar=='X') valid=false;
  else valid=true;
  open=false; closed=false;
  parent=NULL;
}


Node::~Node()
{

}

bool Node::operator< (const heapNode& other)const
{
  return (fx<other.fx);
}

char Node::getName()
{
  return name;
}

int Node::getFx()
{
  return fx;
}

int Node::getGx()
{
  return gx;
}

Node* Node::getParent()
{
  return parent;
}

void Node::print()
{
  if(this!=NULL)cout<< name << ", " << " fx: " << fx <<endl;
  if(parent!=NULL)parent->print();
}