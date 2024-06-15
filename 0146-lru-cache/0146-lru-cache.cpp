class LRUCache {
public:
    class Node{
        public:
        int key;
        int val;
        Node* next;
        Node* prev;

        Node(int key,int val){
            this->key = key;
            this->val =val;
        }
    };

    Node* head= new Node(-1,-1);
    Node* tail= new Node(-1,-1);
    int cap;
    unordered_map<int,Node*> m;

    LRUCache(int capacity) {
        cap =capacity;
        head->next = tail;
        tail->prev =head;
        
    }
    void addnode(Node* newnode){
        Node* temp = head->next;
        newnode->next= temp;
        newnode->prev = head;
        head->next= newnode;
        temp->prev = newnode;
    }
    void deletenode(Node* delnode){
        Node* previous = delnode->prev;
        Node* nextt = delnode->next;

        previous->next = nextt;
        nextt->prev =previous;
    }

    
    int get(int key) {
        if(m.find(key) != m.end()){
            Node* resnode = m[key]; // Get the node associated with the key
            int ans = resnode->val;
            m.erase(key); //remove the key from the map
            deletenode(resnode);
            addnode(resnode);

            m[key] = head->next; // Update the map to reflect the new position of the node
            return ans;
        }
        return -1;

        
    }
    
    void put(int key, int value) {
        if(m.find(key) != m.end()){  // The key already exists in the cache
            Node* curr = m[key]; // Get the  address ofexisting node linked with the key
            m.erase(key);
            deletenode(curr);
        }
        if(m.size() == cap){
            m.erase(tail->prev->key); // Remove the least recently used key from the map
            deletenode(tail->prev); // Remove the least recently used node from the list
        }
        addnode(new Node(key,value)); // Add the new node to the front of the  list
        m[key] =head->next; // Update the map to reflect the new position of the node
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */