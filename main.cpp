#include<bits/stdc++.h>
using namespace std;
struct node
{
    string task;
    node *next;
    bool done;
};
class Todolist
{
private:

    node *head=nullptr;

public:

     void Addtask(string name)
    {
        node* newNode = new node;
        newNode->task = name;
        newNode->done = false;
        newNode->next = nullptr;
        if (head == nullptr)
        {
            head = newNode;
        }
        else
        {
            node* temp = head;
            while (temp->next != nullptr)
            {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void Removetask(string name)
    {
        if (head == nullptr)
        {
            cout << "To Do List is empty." << endl;
        }

       else if (head->task == name)
        {
            node* temp = head;
            head = head->next;
            delete temp;
            cout << "Task \"" << name << "\" removed." << endl;
        }
        else
        {
            node *temp = head;
            bool l = false;
            while (temp->next != nullptr)
            {
                if (temp->next->task == name)
                {
                    l = true;
                    node *de = temp->next;
                    temp->next = de->next;
                    delete de;
                    cout << "Task \"" << name << "\" removed." << endl;
                    break;
                }
                temp = temp->next;
            }
            if (!l)
                cout << "Task \"" << name << "\" not found." << endl;
        }
    }

    void MarkasDone(string name)
    {
        if (head == nullptr)
        {
            cout << "To Do List is empty." << endl;
        }
        else
        {
            node *temp = head;
            bool l=false;
            while (temp != nullptr)
            {
                if (temp->task == name)
                {
                    l=true;
                    temp->done = true;
                    cout << "Task \"" << name << "\" marked done." << endl;

                }
                temp = temp->next;
            }
            if(!l)
            cout << "Task \"" << name << "\" not found." << endl;
        }
    }

        void Checktask(string name)
    {
        if (head == nullptr)
        {
            cout << "To Do List is empty." << endl;
        }
        else
        {
            node *temp = head;
            bool l=false;
            while (temp != nullptr)
            {
                if (temp->task == name)
                {
                    l=true;
                    if(temp->done)
                    {
                    cout << "Task \"" << name << "\" Done." << endl;
                    }
                    else
                    {
                    cout << "Task \"" << name << "\" Not Done." << endl;
                    }

                }
                temp = temp->next;
            }
            if(!l)
            cout << "Task \"" << name << "\" not found." << endl;
        }
    }

    void Displaylist()
    {
        if (head == nullptr)
        {
            cout << "To Do List is empty." << endl;
        }
        else
        {
            node *temp = head;
            cout << "To-Do List:" << endl;
            while (temp != nullptr)
            {
                cout << "- " << temp->task << " --> ";
                if (temp->done)
                {
                    cout << "Done" << endl;
                }
                else
                {
                    cout << "Not Done" << endl;
                }
                temp = temp->next;
            }
        }
    }
};
int main()
{
    Todolist t;
    int c;
    string task;
    while(true)
    {
        cout<<"To Do List is :"<<endl;
        cout << "1. Addtask \n";
        cout << "2. Removetask \n";
        cout << "3. MarkasDone \n";
        cout << "4. Checktask \n";
        cout << "5. Displaylist \n";
        cout << "0. Exit \n";
        cout<<"Enter your choice [ 0 , 1 , 2 , 3 , 4 , 5 ] : ";
        cin>>c;
        if(c == 0)
        {
            cout << "Exiting program" << endl;
            break;
        }
        else if(c == 1)
        {
            cout << "Enter the task to add: ";
            cin.ignore();
            getline(cin, task);
            t.Addtask(task);
            continue;
        }
        else if(c == 2)
        {
            cout << "Enter the task to remove: ";
            cin.ignore();
            getline(cin, task);
            t.Removetask(task);
            continue;
        }
        else if(c == 3)
        {
            cout << "Enter the task to mark done : ";
            cin.ignore();
            getline(cin, task);
            t.MarkasDone(task);
            continue;
        }
        else if(c == 4)
        {
            cout << "Enter the task to Check: ";
            cin.ignore();
            getline(cin, task);
            t.Checktask(task);
            continue;
        }
        else if(c == 5)
        {
            t.Displaylist();
            continue;
        }
        else
        {
            cout<<"Invalid choice.. please try again."<<endl;
        }
    }
}
