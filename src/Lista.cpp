
#include <iostream>
using namespace std;

template <class T>
class Node{
public:
    T data;
    Node *next;
public:
    Node(){
        this->data=data;
        this->next=NULL;
    }
};

template <class T>
class List {
    Node<T> *first;
    int size;
public:
    List(){
        this->first=NULL;
        size=0;
    }

public:
    void addFirst(T dato){


        if(size==0){
            first=new Node<T>;
            first->data=dato;
            first->next=NULL;
        }else{
            Node<T> *newNode= new Node<T>;

            newNode->data=dato;
            newNode->next=first;
            first=newNode;

        }size++;

    }
    void listar(){
        if(!Empty()){
            Node<T> *aux = first;
            int i =0;
            while(aux!=NULL){
                cout<<i<<".[ "<<aux->data<< " ] ->"<<endl;
                aux = aux->next;
                i++;

            }
        }
    }
    T getData(int index){
        if(size!=0) {
            if (index == 0) {
                return this->first->data;
            } else {
                Node<T> *aux = this->first;
                for (int i = 0; i < index; i++) {
                    aux = aux->next;

                }
                return aux->data;
            }
        }throw invalid_argument("Lista Vacia");
    }
    void deleteData(int pos)
    {
        Node<T> *copy= this->first;
        Node<T> *previous=NULL;
        size--;
        while(copy!=NULL && pos >=0){
            if(pos==0){
                if(previous ==NULL){
                    first=first->next;
                }else{
                    previous->next=copy->next;
                }return;
            }previous = copy;
            copy=copy->next;
            pos--;

        }throw invalid_argument("Posicion no existe");
    }

    bool Empty(){
        return this->first==NULL;
    }
};


