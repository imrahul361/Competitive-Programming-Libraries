#include <bits/stdc++.h>

#define FAST_IO  ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mp make_pair 
#define pb push_back
#define eb emplace_back
#define MOD 1000000007
#define MAX 1e9
#define MIN -1e9
#define PQ(type) priority_queue<type>
#define PQD(type) priority_queue<type,vector<type>,greater<type> >
#define ITR :: iterator it
#define t int t; cin>>t; while(t--)
#define TR(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define setbits(x) __builtin_popcountll(n)
#define zrobits(x) __builtin_ctzll(x)

using namespace std;

typedef long long ll; 
typedef pair<int, int> pii; 
typedef pair<ll, ll> pll; 
typedef pair<string, string> pss; 
typedef vector<int> vi; 
typedef vector<string> vs; 
typedef vector<vi> vvi; 
typedef vector<pii> vii; 
typedef vector<ll> vl; 
typedef vector<vl> vvl; 
typedef map<string, string> dic;

const double EPS = 1e-9; 
#ifdef int
const int INF=1e16;
#else
const int INF=1e9;
#endif

double PI = acos(-1); 

void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
    adj[v].push_back(u); 
} 
  
// A utility function to do DFS of graph 
// recursively from a given vertex u. 
void DFSUtil(int u, vector<int> adj[], 
                    vector<bool> &visited) 
{ 
    visited[u] = true; 
    cout << u << " "; 
    for (int i=0; i<adj[u].size(); i++) 
        if (visited[adj[u][i]] == false) 
            DFSUtil(adj[u][i], adj, visited); 
} 
  
// This function does DFSUtil() for all  
// unvisited vertices. 
void DFS(vector<int> adj[], int V) 
{ 
    vector<bool> visited(V, false); 
    for (int u=0; u<V; u++) 
        if (visited[u] == false) 
            DFSUtil(u, adj, visited); 
} 

void SieveOfEratosthenes(int *pno) {
   for(int i=2;i<1000005;i++){
	   pno[i]=1;
   }
   for (int i = 2; i*i<= 1000005; i++) { 
      if (pno[i] == 1) {
         for (int j = i*i; j<= 1000005; j += i)
            pno[j] = 0;
      }
   }
  	 
}


template<class T> T lcm(T a, T b){ return (b / gcd(a, b))*a; }

template<typename T> void scan(T &x) 
{ 
    x = 0; 
    bool neg = 0; 
    register T c = getchar(); 
  
    if (c == '-') 
        neg = 1, c = getchar(); 
  
    while ((c < 48) || (c > 57)) 
        c = getchar(); 
  
    for ( ; c < 48||c > 57 ; c = getchar()); 
  
    for ( ; c > 47 && c < 58; c = getchar() ) 
        x= (x << 3) + ( x << 1 ) + ( c & 15 ); 
  
    if (neg) x *= -1; 
} 
  
template<typename T> void print(T n) 
{ 
    bool neg = 0; 
  
    if (n < 0) 
        n *= -1, neg = 1; 
  
    char snum[65]; 
    int i = 0; 
    do
    { 
        snum[i++] = n % 10 + '0'; 
        n /= 10; 
    } 
  
    while (n); 
    --i; 
  
    if (neg) 
        putchar('-'); 
  
    while (i >= 0) 
        putchar(snum[i--]); 
  
    putchar('\n'); 
} 




int main(){

 //  FAST_IO
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif




}



