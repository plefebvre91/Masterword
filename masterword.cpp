/*
  MIT License

  Copyright (c) 2019 Pierre Lefebvre

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
  
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
  
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "masterword.hpp"
#include "constants.hpp"

void masterword::_update_batches(const std::string& word)
{
  _batches.update(word);
}


void masterword::_read_words()
{
  std::vector<std::string> words;

  words.resize(NB_WORDS);

  /* Retrieve word from standard output */
  for(auto& word : words)
    std::cin >> word;
  
  for (auto& word : words)
  {
    /* Set word to uppercase */
    std::transform(word.begin(), word.end(),
		   word.begin(), ::toupper);

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


