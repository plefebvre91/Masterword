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
#include "batches.hpp"
#include "constants.hpp"

batches::batches()
{
  batch.resize(NB_LETTERS_PER_WORD);
}

void batches::update(const std::string& word)
{  
  /* Retrieve pointer on word letter */
  const char* letters = word.c_str();

  /* Scan word and send its letter into different batches */
  for(unsigned int i=0; i<word.size(); i++)
    batch[i].insert(letters[i]);

}

void batches::compute_words() const
{
  /* Scan all batches and print all letters combinations */
  for(auto l: batch[0])
    for(auto m: batch[1])
      for(auto n: batch[2])
	for(auto o: batch[3])
	  for(auto p: batch[4])
	    std::cout << l << m << n << o << p << std::endl;
}

void batches::info() const
{
  size_t size = 1;

  for(auto& it : batch)
    size *= it.size();    

  std::cout << "Combinations:" << size << std::endl;;
}
