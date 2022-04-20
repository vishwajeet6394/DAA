#include<iostream>
using namespace std;
#define n 100
class queue{
    int *arr;
    int rear;
    int front;
    public:
    queue(){
    arr=new int[n];
    rear=-1;
    front=-1;
    }
    void enqueue(int x)
    {
        if(rear==n-1)
        {
            cout<<"queue is overflow"<<endl;
            }
          else
          {
              rear++;
              arr[rear]=x;
          } 
          if(front==-1)
          front++; 
    }
    void dequeue()
    {
        if(front==-1 || front>rear)
        {
            cout<<"queue is empty"<<endl;
            return ;
        }
        front++;
     }
     int peek()
     {
         if(front==-1 || front>rear)
         {
             cout<<"NO element in queue"<<endl;
             return -1;
         }
         return arr[front];
     }
      bool empty()
      {
          if(front==-1 || front>rear)
          return true;
          else
          return false;
      }
};

 int main()
 {
     queue que;
     que.enqueue(2);
     cout<<que.peek()<<endl;
     que.dequeue();
     cout<<que.peek()<<endl;
     return 0;
 }