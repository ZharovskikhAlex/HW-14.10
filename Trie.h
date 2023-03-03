#ifndef Trie_h
#define Trie_h

#define CHAR_TO_INDEX(c) ((int)c - (int)'a')

const int ALPHABET_SIZE = 26;
const int MAX_VARIANTS = 10;

struct TrieNode
{
	struct TrieNode* children[ALPHABET_SIZE];
	bool isEndOfWord;
};

TrieNode* getNewNode(void);
void insert(TrieNode*, std::string);
bool isLastNode(const TrieNode* root);
void recProposition(const TrieNode* root, std::string currentPrefix, std::string* result, int& result_length);
int getProposition(TrieNode* root, const std::string& query, std::string* result);
#endif

