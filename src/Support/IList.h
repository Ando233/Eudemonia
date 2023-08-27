//
// Created by Ando on 2023-08-27.
//

#ifndef EUDEMONIA_ILIST_H
#define EUDEMONIA_ILIST_H

#include <iostream>

template <typename N, typename L>
class IList;

template <typename N, typename L>
class INode {
private:
    N value;
    INode<N, L>* prev;
    INode<N, L>* next;
    IList<N, L>* parent;

public:
    explicit INode(N val) : value(val), prev(nullptr), next(nullptr), parent(nullptr) {}

    N get_value() { return value; }
    void set_value(N value) { this->value = value; }
    INode<N, L>* get_prev() { return prev; }
    void set_prev(INode<N, L>* prev) { this->prev = prev; }
    INode<N, L>* get_next() { return next; }
    void set_next(INode<N, L>* next) { this->next = next; }
    IList<N, L>* get_parent() { return parent; }

public:
    void insert_after(INode<N, L>* pre_node) {
        this->next = pre_node->get_next();
        pre_node->set_next(this);
        this->prev = pre_node;

        if (this->next != nullptr) {
            this->next->set_prev(this);
        }

        this->parent = pre_node->get_parent();
        this->parent->set_size(this->parent->get_size() + 1);

        if (this->parent->get_tail() == pre_node) {
            this->parent->set_tail(this);
        }
    }
    void insert_before(INode<N, L>* nxt_node) {
        this->next = nxt_node;
        this->prev = nxt_node->get_prev();
        nxt_node->set_prev(this);

        if (this->prev != nullptr) {
            this->prev->set_next(this);
        }

        this->parent = nxt_node->get_parent();
        this->parent->set_size(this->parent->get_size() + 1);

        if (this->parent->get_head() == nxt_node) {
            this->parent->set_head(this);
        }
    }
    void insert_list_head(IList<N, L>* parent) {
        this->parent = parent;
        if (parent->is_empty()) {
            parent->set_head(this);
            parent->set_tail(this);
            parent->set_size(parent->get_size() + 1);
        }
        else {
            insert_before(parent->get_head());
        }
    }
    void insert_list_end(IList<N, L>* parent) {
        this->parent = parent;
        if (parent->is_empty()) {
            parent->set_head(this);
            parent->set_tail(this);
            parent->set_size(parent->get_size() + 1);
        }
        else {
            insert_after(parent->get_tail());
        }
    }
    void remove_from_list() {
        parent->remove_node();
        if (parent->get_head() == this) {
            parent->set_head(this->next);
        }
        if (parent->get_tail() == this) {
            parent->set_tail(this->prev);
        }

        if (this->prev != nullptr && this->next != nullptr) {
            this->prev->set_next(this->next);
            this->next->set_prev(this->prev);
        }
        else if (this->prev != nullptr) {
            this->prev->set_next(nullptr);
        }
        else if (this->next != nullptr) {
            this->next->set_prev(nullptr);
        }

        this->prev = this->next = nullptr;
        this->parent = nullptr;
    }

};

template <typename N, typename L>
class IList {
private:
    INode<N, L>* head;
    INode<N, L>* tail;
    L value;
    int size;

public:
    IList(L value) : value(value), head(nullptr), tail(nullptr), size(0) {}

    INode<N, L>* get_head() { return head; }
    void set_head(INode<N, L>* head) { this->head = head; }
    INode<N, L>* get_tail() { return tail; }
    void set_tail(INode<N, L>* tail) { this->tail = tail; }
    L get_value() { return value; }
    void set_value(L value) { this->value = value; }
    int get_size() { return size; }
    void set_size(int size) { this->size = size; }

    void add(INode<N, L>* node){
        node->insert_list_end(this);
    }
    void add_to_head(INode<N, L>* node){
        node->insert_list_head(this);
    }
    N get_head_value(){
        return head->get_value();
    }
    N get_tail_value(){
        return tail->get_value();
    }
    bool is_empty() { return (head == nullptr) && (tail == nullptr) && (size == 0); }
};

#endif //EUDEMONIA_ILIST_H
