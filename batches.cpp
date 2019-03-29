/*
            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
                    Version 2, December 2004

 Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>

 Everyone is permitted to copy and distribute verbatim or modified
 copies of this license document, and changing it is allowed as long
 as the name is changed.

            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION

  0. You just DO WHAT THE FUCK YOU WANT TO.
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
