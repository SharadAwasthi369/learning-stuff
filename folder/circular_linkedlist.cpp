
#include <iostream>

using std::cout;

struct link{
    int data;
    link* next;
    
    link(int val,link*right=nullptr):data(val),next(right){}
};

int main()
{
    int start=1,N=4;
    link* head = new link(start);
    link* current = head;
    /**circular node creation**/
    
    for(int i=1;i<N;i++){
        link* rh = new link(i+1);
        current->next=rh;
        current=current->next;
    }
    current->next=head;
    
    /**the below code prints the circular list add more to find out or make a for loop to shorten the code to get more prints**/
    cout<<head->data;
    cout<<head->next->data;
    cout<<head->next->next->data;
    cout<<head->next->next->next->data;
    cout<<head->next->next->next->next->data;
    cout<<head->next->next->next->next->next->data;

    return 0;
}
