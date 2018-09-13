//
// Created by Juan Pablo Martínez Brenes, Martin Calderón Blanco, Olman Castro Hernández on 9/5/18
//


#include <iostream>
using namespace std;
/**
 * Clase Nodo guarda el dato deseado
 * @tparam T
 */
template <class T>
class Node{
public:
    T data;
    Node *next;
public:
    /**
     * Constructor de la clase
     */
    Node(){
        this->data=data;
        this->next=NULL;
    }
};
/**
 * Clase lista, generica con el uso de Template
 * @tparam T
 */

template <class T>
class List {
    Node<T> *first;
    int size;
public:
    /**
     * Constuctor de la clase
     */
    List(){
        this->first=NULL;
        size=0;
    }

public:
    /**
     * Agrega un elemento al inicio de la lista
     * @param dato T elemento a agregar
     */
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



    /**
     * Muestra la lista
     */
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
    /**
     * * Se obtiene el dato dentro del nodo selecionado
     * @param index int indice o posicion
     * @return T dato
     */
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

    /**
     * Borra un elemento en la posicion deseada
     * @param pos int indice o posicion
     */
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
    /**
     *
     * Comprueba si la lista esta vacia
     * @return True o False
     */
    bool Empty(){
        return this->first==NULL;
    }
};


