#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define fi first
#define se second
#define pb push_back
using pii = pair<int, int>;

template<typename Ostream, typename T>
Ostream& operator<<(Ostream& os, const T& t){
	int f = 0;
	os << "{";
	for(auto& it : t){
		os << (f++ ? ", " : "") << it;
	}
	return os << "}";
}

template<typename Ostream, typename T, typename U>
Ostream& operator<<(Ostream& os, const pair<T, U>& t){
	return os << "(" << t.fi << ", " << t.se << ")";
}
void dbg_out(){
	cerr << "\n";
}
template<typename T, typename... U>
void dbg_out(const T& t, const U&... u){
	cerr << t;
	if(sizeof...(u))
		cerr << " | ";
	dbg_out(u...);
}
void dbg_info(int line, string names){
	cerr << "Line(" << line << ") -> [" << names << "]: "; 
}

#ifdef LOCAL //or #ifndef ONLINE_JUDGE if we dont want to change our compile flag
#define dbg(...) dbg_info(__LINE__, #__VA_ARGS__), dbg_out(__VA_ARGS__)
#else
#define dbg(...) 42 //do nothing so we dont need to comment our debug code
#endif


void solve(){

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
	int t = 1;
	cin >> t; 
	while(t--)
		solve();
}
