#include<iostream>
using namespace std;
class stack
{
    private:
        struct node
        {
            int data;
            node* link;
        };
        node *top;
    public:
        //intialize the top of the stack as null since no elements are present
        stack()
        {
            top = nullptr;
        }
        //push function to push new elements into the stack
        void push(int num)
        {
            node *temp;
            temp = new node();

            if(temp == nullptr)
            {
                cout<<"Stack is Full"<<endl;
            }

            temp->data = num;
            temp->link = top;
            top = temp;
        }
        //pop function to delete the top element of the stack
        int pop()
        {
            if(top == nullptr)
            {
                cout<<"Stack is empty"<<endl;
                return 0;
            }

            node *temp;
            int item;

            temp = top;
            item = temp->data;
            top = top->link;

            delete temp;
            return item;
        }
};
int main()
{
    stack ob;
    ob.push(10);
    ob.push(20);
    ob.push(30);

    cout<<ob.pop();

    return 0;
}