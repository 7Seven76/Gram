//
// Created by Ryank on 3/6/2025.
//

#ifndef TEXTBOX_H
#define TEXTBOX_H
#include <iostream>
using namespace std;


class Textbox {
  public:
    Textbox();
    explicit Textbox(const string& value);
    string getValue() const;
    void setValue(string value);
  private:
    string value;
    };

Textbox::Textbox(const string& value) : value(value) {}
#endif //TEXTBOX_H
