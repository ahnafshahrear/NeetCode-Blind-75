struct TrieNode
{
    TrieNode* links[26];
    bool end = false;

    TrieNode()
    {
        for (int i = 0; i < 26; i++)
        {
            links[i] = nullptr;
        }
    }

    bool containKey(char ch)
    {
        return links[ch - 'a'] != nullptr;
    }

    void setKey(char ch)
    {
        links[ch - 'a'] = new TrieNode;
    }

    void setEnd()
    {
        end = true;
    }

    TrieNode* get(char ch)
    {
        return links[ch - 'a'];
    }

    bool isEnd()
    {
        return end;
    }
};

class Trie {
private:
    TrieNode* root;
    TrieNode* node;

public:
    Trie() 
    {
        root = new TrieNode;
    }
    
    void insert(string word) 
    {
        node = root;    

        for (char ch: word)
        {
            if (node->containKey(ch) != true)
            {
                node->setKey(ch);
            }
            node = node->get(ch);
        }
        node->setEnd();
    }
    
    bool search(string word) 
    {
        node = root;    

        for (char ch: word)
        {
            if (node->containKey(ch) != true)
            {
                return false;
            }
            node = node->get(ch);
        }
        return node->isEnd();
    }
    
    bool startsWith(string word) 
    {
        node = root;    

        for (char ch: word)
        {
            if (node->containKey(ch) != true)
            {
                return false;
            }
            node = node->get(ch);
        }
        return true;  
    }
};
