 #include<bits/stdc++.h>
 using namespace std;
 
 bool help(vector<vector<char>>& board, string word,int i,int j,int n, int m, int k){
            //base conditions
            if(k>=word.size()) return true;
            if(i<0 || i>=n || j<0 || j>=m || board[i][j]=='.' || board[i][j]!=word[k]) return false;
            if(word.size()==1 && board[i][j]==word[k] )return true;
            board[i][j]='.';
            //main recursion function 
            //making two arrays for up down left right movements
            bool temp=false;
            int x[4]={0,0,-1,1};
            int y[4]={-1,1,0,0};

            for(int a=0;a<4;a++){
                temp = temp|| help(board,word,i+x[a],j+y[a],n,m,k+1); 
            }
            board[i][j]=word[k];
            return temp;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        if(n==0)return false;
        int m=board[0].size();
        if(word.size()==0) return false;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(word[0]==board[i][j]){
                    if(help(board,word,i,j,n,m,0)) return true;
                }
            }
        }
        return false;


    }