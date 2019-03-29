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

#ifndef BATCHES_HPP
#define BATCHES_HPP

#include <vector>
#include <string>
#include <set>

class batches
{
public:

  /* Constructor */
  batches();

  /* Dispatch the word letters into batches */
  void update(const std::string& word);

  /* Print all generated words */
  void compute_words() const;

  /* Print statistics */
  void info(void) const;

private:
  std::vector<std::set<char>> batch;
};

#endif
