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

  /* Print all letters combinations */
  void compute_words() const;

  /* Statistics */
  void info(void) const;

private:
  std::vector<std::set<char>> batch;
};

#endif
