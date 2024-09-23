#include<iostream>
#include<string>
using namespace std;

class TrieNode{
    public:
    bool isTerminal;
    char data;
    TrieNode* children[26];

    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
       isTerminal=false;
    }
};

class Trie{
   public:
   TrieNode* root;

   void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length()==0){
            root->isTerminal=true;
        }
        
        //assuming word in is CAPS
        int index=word[0]-'A';

        TrieNode* child;

        //present 
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            //absent 
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }

        insertUtil(child, word.substr(1));
   }

   void insertWord(string word){
     insertUtil(root,word);
   }

   bool searchUtil(TrieNode* root, string word){
    if(word.length()==0){
        return root->isTerminal;
    }

    int index=word[0]-'A';
    TrieNode* child;

    //present
    if(root->children[index]!=NULL){
        child=root->children[index];
    }
    else{
        return false;
    }

    return searchUtil(child, word.substr(1));
   }

   void searchWord(string word){
      searchUtil(root,word);
   }

};

int main()
{
    return 0;
}