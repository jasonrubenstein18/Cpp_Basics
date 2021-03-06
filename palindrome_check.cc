#include <iostream>

// Define is_palindrome() here:

bool is_palindrome(std::string text) {
  std::string reversed_text;
  
  int i = 0;

  for (i = text.size() - 1; i >= 0; i--) {
    reversed_text.push_back(text[i]);
  }
  if (reversed_text != text) {
    return false;
  }
  else {
    return true;
  }
}

int main() {
  
  std::cout << is_palindrome("player") << "\n";
  std::cout << is_palindrome("tattarrattat") << "\n";
  std::cout << is_palindrome("hannah") << "\n";
  
}
