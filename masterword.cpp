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


