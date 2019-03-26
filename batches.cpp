#include "batches.hpp"
#include <iostream>
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
  {
    batch[i].insert(letters[i]);
  } 
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
  unsigned int size = 1;

  for(auto& it : batch)
  {

    /*std::cout << "batch: ";
    for(auto& it2: it)
      {
	std::cout << it2 << " - ";

      }
      std::cout << std::endl;
    */
    size *= it.size();    

  }

  std::cout << "Combinations:" << size << std::endl;;
}
