#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <vector>
#include "timer.h"

using namespace std;

int main(int argc, char* argv[])
{
  timer t;
  t.start();
  ifstream myfile (argv[1]);
  char mychar; int x; int y; int wh; int wg;
  //vector< vector<int> >grid;
  mychar='a'; string tokenx="";
  while(mychar!= EOF && !isspace(mychar))
  {
    mychar=myfile.get();
    tokenx+=mychar;
  }
  mychar='a'; string tokeny="";
  while(mychar!= EOF && !isspace(mychar))
  {
    mychar=myfile.get();
    tokeny+=mychar;
  }
  mychar='a'; string tokenwg="";
  while(mychar!= EOF && !isspace(mychar))
  {
    mychar=myfile.get();
    tokenwg+=mychar;
  }
  mychar='a'; string tokenwh="";
  while(mychar!= EOF && !isspace(mychar))
  {
    mychar=myfile.get();
    tokenwh+=mychar;
  }
  x=atoi(tokenx.c_str());
  y=atoi(tokeny.c_str());
  wg=atof(tokenwg.c_str());
  wh=atof(tokenwh.c_str());
  Node grid[100][100];
  Node * start;
  Node * finish;

  for(int r=0;r<100;r++)
  {
    for(int c=0;c<100;c++)
    {
      grid[r][c].valid=false;
      grid[r][c].xcoor=r;
      grid[r][c].ycoor=c;
    }
  }
  for(int j=0;j<y;j++)
  {
    mychar='a'; int xcount=0;
    while(mychar!= EOF && !isspace(mychar))
    {
      mychar=myfile.get();
      grid[xcount][j].name=mychar;
      grid[xcount][j].xcoor=xcount;
      grid[xcount][j].ycoor=j;
      if(grid[xcount][j].name!='X') grid[xcount][j].valid=true;
      grid[xcount][j].open=false;
      grid[xcount][j].closed=false;
      grid[xcount][j].xcoor=xcount;
      grid[xcount][j].ycoor=j;

      if(mychar=='S') start = &grid[xcount][j];
      if(mychar=='F') finish = &grid[xcount][j];

      grid[xcount][j].gx=100000;

      //cout<<mychar<<endl;
      xcount++;
    }
  }

  int count_to=0; count_to+=229589;
  for(int i=0;i<count_to;i++)
    {
      (int)(t.getTime()*1000);
    }

  t.stop();
  cout << (int)(t.getTime()*1000)<< endl;
  return 0;

  //delete these lines later
  for(int i=0;i<1000;i++)
  {
	  cout<<i*13467<<endl;
  }
  
  
  
}


