//
// Created by Sherman Yan on 11/2/22.
//

#ifndef CS003A_LIST_CPP
#define CS003A_LIST_CPP

#include "List.h"
template<class T>
const unsigned int List<T>::MAX_SIZE;

template<class T>
List<T>::List() {}

template<class T>
List<T>::List(const List &list) {
     *this = list;
}

template<class T>
List<T>::~List<T>() {
    Node<T> *n;
    while (head != nullptr){
        n = head;
        head = head->next;
        delete n;
    }
}

template<class T>
Node<T>* List<T>::search(T item) {

    if (head != nullptr) {
        Node<T> *n = head;
        while (n != nullptr) {
            if (n->data == item)
                return n;
            n = n->next;
        }
    }
    return nullptr;
}

template<class T>
Node<T> *List<T>::previous(T item) {

    if (head != tail && head != nullptr) {
        Node<T> *n = head;
        while ( n->next->data != item) {
            n = n->next;
            if(n->next != nullptr)
                return nullptr;
        }
        return n;
    }
    return nullptr;
}

template<class T>
Node<T> *List<T>::createNode(T item) {

    Node<T> *n = new Node<T>;
    n->data = item;
    return n;
}

template<class T>
void List<T>::addFirstNode(T item) {
//    std::cout << "addFirst" << std::endl;

    Node<T> *n = createNode(item);
    head = n;
    tail = n;
}

template<class T>
void List<T>::push_front(T item) {
//    std::cout << "Push " << item << " F" << std::endl;

    if (head == nullptr)
        addFirstNode(item);
    else {
        Node<T> *n = createNode(item);
        n->next = head;
        head = n;
    }
}

template<class T>
void List<T>::push_back(T item) {
//    std::cout << "Push " << item << " B" << std::endl;

    if (head == nullptr)
        addFirstNode(item);
    else {
        Node <T> *n = createNode(item);
        tail->next = n;
        tail = n;
    }
}

template<class T>
T &List<T>::front() {
    if (head != nullptr)
        return head->data;
}

template<class T>
const T &List<T>::front() const {
    if (head != nullptr)
        return head->data;
}

template<class T>
T List<T>::pop_back() {
//    std::cout << "PopB" << std::endl;

    if (tail!= nullptr) {
        Node<T> *n = head;
        while (n->next != tail)
            n = n->next;

        T data = tail->data;
        delete tail;
        tail = n;
        tail->next = nullptr;

        return data;
    } else
        return NULL;
}

template<class T>
T List<T>::pop_front() {
//    std::cout << "PopF" << std::endl;

    if(head != nullptr) {
        Node<T> *n = head->next;
        T data = head->data;
        delete head;
        head = n;
        return data;
    } else
        return NULL;
}

template<class T>
int List<T>::size()const {

    int count = 1;

    if (head == nullptr)
        return 0;
    else {
        Node<T> *n = head;
        while (n != tail) {
            n = n->next;
            count++;
        }
    }
    return count;
}

template<class T>
bool List<T>::empty() {
    return head == nullptr;
}

template<class T>
void List<T>::insertBefore(T item, T before) {
//    std::cout << "Ins " << item << " before " << before << std::endl;

    Node<T> *n = createNode(item);

    if(head->data == before) {
        n->next = head;
        head = n;
    } else {
        Node<T> *prev = previous(before);
        if (prev == nullptr) {
            return;
        }
        else {
            n->next = prev->next;
            prev->next = n;
        }
    }
}

template<class T>
void List<T>::insertAfter(T item, T after) {
//    std::cout << "Ins " << item << " after " << after << std::endl;

    Node<T> *n = createNode(item);

    Node<T> *target = search(after);
    if (target != nullptr){
        if (target == tail) {
        tail->next = n;
        tail = n;
        tail->next = nullptr;
        }
        else {
            n->next = target->next;
            target->next = n;
        }
    }
}

template<class T>
void List<T>::remove(T item) {
//    std::cout << "Remove " << item << std::endl;

    if (head->data == item) {
        pop_front();
    }
    else {
        Node<T> *n = head;
        while (n->next->data != item) {
            n = n->next;
            if(n->next == nullptr) {
                return;
            }
        }

        if (n->next == tail) {
            delete n->next;
            tail = n;
            tail->next = nullptr;
        }else {
            Node<T> *d = n->next->next;
            delete n->next;
            n->next = d;
        }
    }
}

template<class T>
List<T> &List<T>::operator=(const List<T> &list) {

    if(&list == this)
        return *this;

    this.~List();

    List<T> newList;

    Node<T> *n = list.head;

    for (int i = 0; i < list.size(); ++i) {
        newList.push_back(n->data);
        n = n->next;
    }

    this = newList;

    return *this;
}

template<class T>
void List<T>::operator+=(T item) {
//    std::cout << "operator += ";
    push_back(item);
}

template<class T>
std::ostream& operator <<(std::ostream& outs , const List<T>& list){

    Node<T> *n = list.head;
//    std::cout << " [head: " << list.head << "] ";

    while(n != nullptr){
//        outs << "[" <<  n <<  " " << n->data << " n:" << n->next << "] ";
        outs <<"[" << n->data << "] ";
        n = n->next;
    }

//    std::cout << "[tail: " << list.tail << "]\n";
    return outs;
}

template<class T>
std::istream &operator>>(std::istream &ins, List<T> &list) {
    T item;
    ins >> item;
    list.push_back(item);
    return ins;
}



#endif