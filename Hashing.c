 #include <stdio.h>
 #define SIZE 10
 int hashTable[SIZE];
 int hashFunction(int key, int size) { return key % size; }
 void initHashTable() { for(int i=0;i<SIZE;i++) hashTable[i]=-1; }
 void insert(int key) {
    int index = hashFunction(key, SIZE);
    int i=0;
    while(hashTable[(index+i)%SIZE]!=-1) i++;
    hashTable[(index+i)%SIZE]=key;
    printf("%d inserted at index %d\n", key, (index+i)%SIZE);
}
 void search(int key) {
    int index=hashFunction(key,SIZE), i=0;
    while(hashTable[(index+i)%SIZE]!=-1) {
        if(hashTable[(index+i)%SIZE]==key) {
            printf("%d found at index %d\n",key,(index+i)%SIZE);
            return;
        }
        i++; if(i==SIZE) break;
    }
    printf("%d not found\n",key);
 }
 void deleteKey(int key){
    int index=hashFunction(key,SIZE),i=0;
    while(hashTable[(index+i)%SIZE]!=-1){
        if(hashTable[(index+i)%SIZE]==key){
            hashTable[(index+i)%SIZE]=-1;
            printf("%d deleted\n",key);
            return;
        }
        i++; if(i==SIZE) break;
    }
    printf("%d not found to delete\n",key);
 }
 void display(){
    printf("Hash Table:\n");
    for(int i=0;i<SIZE;i++){
        if(hashTable[i]!=-1) printf("Index %d -> %d\n",i,hashTable[i]);
        else printf("Index %d -> [empty]\n",i);
    }
 }
 int main(){
    initHashTable();
    insert(24); 
    insert(33);
    insert(12);
    insert(34);
    display();
    search(33);
    deleteKey(12);
    deleteKey(34);
    deleteKey(24);
    display();
 }
