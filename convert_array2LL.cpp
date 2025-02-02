     #include<iostream>
     #include<vector>
     using namespace std;
     
     class Node{
         public:
         int data;
         Node* next;
         
         public:
         Node(int data1, Node * node1){
              data = data1;
              next = node1;
         }
         Node(int data1){
             data = data1;
             next = nullptr;
         }
         
     };
     
     
     Node* convertA2LL(vector<int> arr)
     {
         Node* head = new Node(arr[0]);
         Node* trav = head;
         for(int i=1; i<arr.size(); i++)
         {
             Node* temp = new Node(arr[i]);
             trav->next = temp;
             trav = trav->next;
         }
         return head;
     }
    
     
     int main(){
         vector<int> arr = {2,3,4,6,7};
         Node* head = convertA2LL(arr);
         cout<<head->data;
         return 0;
     }
