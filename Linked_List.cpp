#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Node
{
  public:
    int data;
    Node* next;
};

class Linkedlist
{
  public:
    Node* Head;
    Linkedlist()
    {
      Head = nullptr;
    }
    bool isEmpty()
    {
      return Head == nullptr;
    }
    void InsertFirst(int newValue)
    {
      Node* newnode = new Node(); // تهيئة الكائن بشكل صحيح
      newnode->data = newValue;
      newnode->next = Head;
      Head = newnode;
    }
    void display()
    {
      Node* temp = Head;
      while (temp != nullptr)
      {
        cout << temp->data << " ";
        temp = temp->next; // تحديث `temp` بشكل صحيح
      }
      cout << endl; // إضافة نهاية سطر لتحسين العرض
    }
    int count()
    {
      int counter = 0;
      Node* temp = Head;
      while (temp != nullptr)
      {
        counter++;
        temp = temp->next; // تحديث `temp` بشكل صحيح
      }
      return counter;
    }
    bool isFound(int key)
    {
      Node* temp = Head;
      while (temp != nullptr)
      {
        if (temp->data == key)
        {
          return true; // إرجاع `true` مباشرة
        }
        temp = temp->next;
      }
      return false;
    }
};

int main()
{
  Linkedlist lst;
  if (lst.isEmpty())
  {
    cout << "The List Is Empty\n";
  }
  else
  {
    cout << "The List Contains " << lst.count() << "\n";
  }
  int item;
  cout << "Enter The Item To The List\n";
  cin >> item;
  lst.InsertFirst(item);
  lst.display();
  cout << "Enter The Item To The List\n";
  cin >> item;
  lst.InsertFirst(item);
  lst.display();
  cout << "Enter The Item To The List\n";
  cin >> item;
  lst.InsertFirst(item);
  lst.display();

  cout << "The List Contains " << lst.count() << "\n";
  cout << "Enter The Item To Search For\n";
  cin >> item;
  if (lst.isFound(item))
  {
    cout << "Item Found\n";
  }
  else
  {
    cout << "Item Is Not Found\n";
  }
}
