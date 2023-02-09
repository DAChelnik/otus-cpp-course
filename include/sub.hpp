#pragma once
#include "astnode.hpp"

class Sub: public ASTNode{
public:
    Sub(ASTNode* lhs, ASTNode* rhs);

    Sub(const std::string& repr);

    Sub& operator+(const Sub& other) = delete;

    ~Sub();

    std::string repr() const { return repr_; }

    void print(std::ostream& out) const;

private:
    void inner_print(std::ostream& out, size_t indent) const;

    std::string repr_;
    ASTNode* lhs_{};
    ASTNode* rhs_{};
};
