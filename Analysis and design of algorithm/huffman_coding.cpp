#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;
struct HuffmanNode {
    char ch;               
    int freq;              
    HuffmanNode *left, *right; 
    HuffmanNode(char ch, int freq) {
        this->ch = ch;
        this->freq = freq;
        left = right = nullptr;
    }
    bool operator>(const HuffmanNode& other) const {
        return freq > other.freq;
    }
};
void generateHuffmanCodes(HuffmanNode* root, const string& str, char codes[256][256]) {
    if (!root) return;
    if (!root->left && !root->right) {
        strcpy(codes[root->ch], str.c_str());
    }
    generateHuffmanCodes(root->left, str + "0", codes);
    generateHuffmanCodes(root->right, str + "1", codes);
}
void buildHuffmanTree(const string& text) {
    int freq[256] = {0};
    for (char ch : text) {
        freq[ch]++;
    }
    priority_queue<HuffmanNode*, vector<HuffmanNode*>, greater<HuffmanNode*>> minHeap;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            minHeap.push(new HuffmanNode(i, freq[i]));
        }
    }
    while (minHeap.size() > 1) {
        HuffmanNode* left = minHeap.top();
        minHeap.pop();
        HuffmanNode* right = minHeap.top();
        minHeap.pop();
        HuffmanNode* node = new HuffmanNode('\0', left->freq + right->freq);
        node->left = left;
        node->right = right;
        minHeap.push(node);
    }
    HuffmanNode* root = minHeap.top();
    char codes[256][256];  
    memset(codes, 0, sizeof(codes)); 
    generateHuffmanCodes(root, "", codes);
    cout << "Huffman Codes:" << endl;
    for (int i = 0; i < 256; i++) {
        if (codes[i][0] != '\0') {  
            cout << (char)i << ": " << codes[i] << endl;
        }
    }
}
void encodeText(const string& text, char codes[256][256]) {
    string encodedText = "";
    for (char ch : text) {
        encodedText += codes[(unsigned char)ch]; 
    }
    cout << "Encoded Text: " << encodedText << endl;
}

int main() {
    string text = "this is an example for huffman encoding";
    buildHuffmanTree(text);
    int freq[256] = {0};
    for (char ch : text) {
        freq[(unsigned char)ch]++;
    }
    priority_queue<HuffmanNode*, vector<HuffmanNode*>, greater<HuffmanNode*>> minHeap;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            minHeap.push(new HuffmanNode(i, freq[i]));
        }
    }
    while (minHeap.size() > 1) {
        HuffmanNode* left = minHeap.top();
        minHeap.pop();
        HuffmanNode* right = minHeap.top();
        minHeap.pop();

        HuffmanNode* node = new HuffmanNode('\0', left->freq + right->freq);
        node->left = left;
        node->right = right;
        minHeap.push(node);
    }
    HuffmanNode* root = minHeap.top();
    char codes[256][256];
    memset(codes, 0, sizeof(codes));
    generateHuffmanCodes(root, "", codes);
    encodeText(text, codes);
    return 0;
}
