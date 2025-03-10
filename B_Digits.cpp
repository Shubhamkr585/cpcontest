// For a lowercase English letter 
// c and a palindrome 
// S, the string obtained by concatenating 
// c, 
// S, and 
// c in this order forms a palindrome. Conversely, a string of length at least two is a palindrome if and only if the first and the last characters are the same, and the string obtained by removing the first and last characters still forms a palindrome.

// Using these properties, the problem can be formalized as a shortest path problem on a (directed) graph.

// Let 
// G be a graph with 
// N 
// 2
//   vertices 
// {(1,1),(1,2),…,(1,N),(2,1),…,(N,N)}. We will decide the edges so that vertex 
// (i,j) corresponds to a path from vertex 
// i to vertex 
// j in the graph given in the problem statement.

// For convenience, add another vertex 
// S to 
// G for it to have 
// N 
// 2
//  +1. Then the answer to the original problem for an integer pair 
// (i,j) is the length of a shortest path from 
// S to 
// (i,j) in the graph with edges added as follows:

// An edge from 
// S to 
// (i,i) of weight 
// 0 for each 
// i.
// An edge from 
// S to 
// (i,j) of weight 
// 1 for each 
// (i,j) with 
// C 
// i,j
// ​
 
// 
// = -.
// An edge from 
// (i,j) to 
// (k,l) of weight 
// 2 for each 
// (i,j,k,l) with 
// C 
// k,i
// ​
 
// 
// = -, 
// C 
// j,l
// ​
 
// 
// = -, 
// C 
// k,i
// ​
//  =C 
// j,l
// ​
//  .
// The edges of the first kind represent the palindrome of length 
// 0, and those for the second represent those of length 
// 1. The edges of the third kind correspond to adding the same character at the beginning and the end of a palindrome to obtain a new palindrome with the length increased by two.

// G has 
// O(N 
// 2
//  ) vertices, each of degree 
// O(N 
// 2
//  ), so it has 
// O(N 
// 4
//  ) edges, allowing 
// O(N 
// 4
//  )-time BFS (Breadth-First Search) to find the answer.

// Note that although the edges are weighted, one can still find the shortest distances by processing those with weight 
// 0 and 
// 1 first.

// Sample code

// Copy
// #include <bits/stdc++.h>
// #define rep(i, n) for (int i = 0; i < (n); i++)
// using namespace std;
// int inf = 1000000010;
// int main() {
// 	int n;
// 	cin >> n;
// 	vector<vector<char>> c(n, vector<char>(n));
// 	rep(i, n) rep(j, n) cin >> c[i][j];
// 	vector<vector<int>> a(n, vector<int>(n, inf));
// 	queue<pair<int, int>> que;
// 	rep(i, n) {
// 		que.push({i, i});
// 		a[i][i] = 0;
// 	}
// 	rep(i, n) rep(j, n) {
// 		if (i == j or c[i][j] == '-') continue;
// 		que.push({i, j});
// 		a[i][j] = 1;
// 	}
// 	while (!que.empty()) {
// 		auto q = que.front(); que.pop();
// 		int i = q.first, j = q.second;
// 		rep(k, n) rep(l, n) {
// 			if (c[k][i] != '-' && c[j][l] != '-' && c[k][i] == c[j][l] && a[k][l] == inf) {
// 				a[k][l] = a[i][j] + 2;
// 				que.push({k, l});
// 			}
// 		}
// 	}
// 	rep(i, n) {
// 		rep(j, n) {
// 			cout << (a[i][j] == inf ? -1 : a[i][j]) << " \n"[j == n - 1];
// 		}
// 	}
// }









