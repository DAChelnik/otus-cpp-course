#include "astnode.hpp"
#include "mul.hpp"

Mul::Mul(ASTNode* lhs, ASTNode* rhs) : ASTNode("*", lhs, rhs)
{
	lhs_ = lhs;
	rhs_ = rhs;
}

