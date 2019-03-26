#ifndef MASTERWORD_HPP
#define MASTERWORD_HPP

#include <string>
#include "batches.hpp"

class masterword
{
public:
  masterword();
  void run();

private:
  void _read_words();
  void _update_batches(const std::string& word);
  void _print_info() const;
  void _print_words() const;

  batches _batches; 
};

#endif
