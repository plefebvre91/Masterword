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
