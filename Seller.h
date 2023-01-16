#pragma once
#include <iostream>
#include <vector>
#include "Book.h"
#include <map>

class Seller
{
    public:
        Seller()=default;
        Seller(std::string name, std::string address, std::string password );
        void add_book(std::string name, short year, std::string genres, double price);
        void add_book();
        void set_book_discribtion(std::string name, std::string discribtion);
        void remove_book(std::string book_name);
        void print_books();
        std::string m_password;
        std::string m_name;
    private:
        std::string m_address;
        std::map <std::string, Book> my_books;





};
