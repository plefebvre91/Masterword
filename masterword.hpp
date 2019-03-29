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
		  
#ifndef MASTERWORD_HPP
#define MASTERWORD_HPP

#include <string>
#include "batches.hpp"

class masterword
{
public:

  /* Constructor */
  masterword() = default;

  /* Start application */
  void run();

private:
  /* Read words from standard output and split letters */
  void _read_words();

  /* Dispatch word letters into batches */
  void _update_batches(const std::string& word);

  /* Print statistics */
  void _print_info() const;

  /* Print genrated words */
  void _print_words() const;

  batches _batches; 
};

#endif
