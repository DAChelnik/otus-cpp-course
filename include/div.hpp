#pragma once

#include <iostream>
#include <string>
#include "astnode.hpp"

class Div : public ASTNode {
public:
    Div(ASTNode* lhs, ASTNode* rhs);

    Div(const std::string& repr);

    Div& operator+(const Div& other) = delete;

    ~Div();

    std::string repr() const { return repr_; }

    void print(std::ostream& out) const;

private:
    void inner_print(std::ostream& out, size_t indent) const;

    std::string repr_;
    ASTNode* lhs_{};
    ASTNode* rhs_{};
};