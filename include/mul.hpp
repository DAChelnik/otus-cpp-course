
#pragma once

#include <cctype>
#include <iostream>
#include <string>
#include "astnode.hpp"

class Mul : public ASTNode {
public:
    Mul(ASTNode* lhs, ASTNode* rhs);

    Mul(const std::string& repr);

    Mul& operator+(const Mul& other) = delete;

    ~Mul();

    std::string repr() const { return repr_; }

    void print(std::ostream& out) const;

private:
    std::string repr_;
    ASTNode* lhs_{};
    ASTNode* rhs_{};
};
