#ifndef TABLE_H
#define TABLE_H

#include <utility>
#include <vector>
#include <iostream>
using namespace std;

template<class T>
class Table{
  size_t m_row;
  size_t m_colomn;
  vector<vector<T>> table;
public:
  Table(size_t row = 1, size_t colomn = 1):m_row(row),
    m_colomn(colomn), table(row, vector<T>(colomn)){
  }
  pair<size_t, size_t> Size() const {
    return make_pair(m_row, m_colomn);
  }
  void Resize(size_t new_row, size_t new_colomn){
    this->m_row = new_row;
    this->m_colomn = new_colomn;
    table.resize(m_row);
    for(auto &vec : table){
      vec.resize(m_colomn);
    }
  }
  vector<T>& operator[](size_t index) {
    return table[index];
  }
  const vector<T>& operator[](size_t index) const {
    return table[index];
  }
};





#endif // TABLE_H
