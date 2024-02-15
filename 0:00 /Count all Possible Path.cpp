 int n = paths.size();
	    vector<int> in(n, 0), vis(n, 0);
	    vector<vector<int>> g(n);
	    
	    
	    for(int i = 0; i < n; i++){
	        for(int j = 0; j < n; j++){
	            if(paths[i][j]){
	                g[i].push_back(j);
	                ++in[j];
	            }
	        }
	    }
	    
	    int odd = 0;
	    int cc = 0;
	    
	    function<void(int)> dfs = [&](int node) {
	        vis[node] = 1;
	        odd = odd or (in[node] & 1);
	        ++cc;
	        
	        for(auto child : g[node]) {
	            if(!vis[child])
	                dfs(child);
	        }
	    };
	    
	    dfs(0);
	    
	    return cc == n and !odd;
