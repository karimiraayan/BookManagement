#include "Book.h"
#include <iostream>
#include <format>

using namespace std;


Book::Book(string name, short year, string genres, double price): m_name(name), m_year(year), m_genres(genres), m_price(price)
{}

void Book::add_discribtion(string_view discribtion)
{
    m_discribtion=discribtion;
}

void Book::print_book()
{
    string temp =format("Name of the Book=>{}, Genres=>{}, Year=>{}",m_name, m_genres, m_year);
    cout<<temp<<endl;
}

void Book::print_book_full()
{
    print_book();
    cout<<m_discribtion<<endl;
}

std::string Book::get_name()
{
    return m_name;
}
