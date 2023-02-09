// OTUS C++ basic course homework.
// ASTNode

#pragma once

#include <cctype>
#include <iostream>
#include <string>
#include "astnode.hpp"

class Add : public ASTNode {
public:
    Add(ASTNode* lhs, ASTNode* rhs);

    Add(const std::string& repr);

    Add& operator+(const Add& other) = delete;

    ~Add();

    std::string repr() const { return repr_; }

    void print(std::ostream& out) const;

private:
    void inner_print(std::ostream& out, size_t indent) const;

    std::string repr_;
    ASTNode* lhs_{};
    ASTNode* rhs_{};
};
