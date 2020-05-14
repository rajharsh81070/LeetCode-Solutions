class TrieNode
{
public:
  TrieNode()
  {
    isEOW = false;
    for (int i = 0; i < 26; i++)
      children[i] = NULL;
  }
  TrieNode *children[26];
  bool isEOW;
};

class Trie
{
public:
  /** Initialize your data structure here. */
  Trie()
  {
    root = new TrieNode();
  }

  /** Inserts a word into the trie. */
  void insert(string word)
  {
    TrieNode *node = root;
    int len = word.length();
    for (int i = 0; i < len; i++)
    {
      int idx = word[i] - 'a';
      if (!node->children[idx])
        node->children[idx] = new TrieNode();
      node = node->children[idx];
    }
    node->isEOW = true;
  }

  /** Returns if the word is in the trie. */
  bool search(string word)
  {
    int len = word.length();
    TrieNode *node = root;
    for (int i = 0; i < len; i++)
    {
      int idx = word[i] - 'a';
      if (!node->children[idx])
        return false;
      node = node->children[idx];
    }
    return (node != NULL && node->isEOW);
  }

  /** Returns if there is any word in the trie that starts with the given prefix. */
  bool startsWith(string prefix)
  {
    int len = prefix.length();
    TrieNode *node = root;
    for (int i = 0; i < len; i++)
    {
      int idx = prefix[i] - 'a';
      if (!node->children[idx])
        return false;
      node = node->children[idx];
    }
    return (node != NULL);
  }

private:
  TrieNode *root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */