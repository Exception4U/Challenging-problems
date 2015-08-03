/* 
 * File:   main.cpp
 * Author: Sony
 *
 * Created on August 3, 2015, 1:49 AM
 */

#include <cstdlib>
#include <stdio.h>
#include <iostream>
#include <deque>
using namespace std;
#define M 100
#define N 100
/*
 * 
 */
class maze_node{
public:
    int i,j;
    bool is_node_equal(maze_node a , maze_node b);
};
bool is_node_equal(maze_node a , maze_node b){
    if (a.i == b.i && a.j == b.j )
        return true ;
    else return false ;
}
void solve(int maze[M][N],int i, int j){
    if (i<0 | i>M | j<0 | j>N){
        return ;
    }
    solve(maze , i+1,j);
    solve(maze , i,j+1);
    solve(maze , i-1,j);
    solve(maze , i,j-1);
}
int main(int argc, char** argv) {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    unsigned long int r,c;
    cin>>r,c;
    
    return 0;
}

