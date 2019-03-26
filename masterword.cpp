#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "masterword.hpp"
#include "constants.hpp"

masterword::masterword():_batches(){}

void masterword::_update_batches(const std::string& word)
{
  _batches.update(word);
}


void masterword::_read_words()
{
  std::vector<std::string> words;

  words.resize(NB_WORDS);
  
  for(auto& word : words)
  {
    std::cin >> word;
  }
  
  for (auto& word : words)
  {
    std::transform(word.begin(), word.end(),word.begin(), ::toupper);

    _update_batches(word);
  }
}


void masterword::_print_info() const
{
  _batches.info();
}

void masterword::_print_words() const 
{
  _batches.compute_words();
}

void masterword::run()
{
  _read_words();
  _print_info();
  _print_words();
}


