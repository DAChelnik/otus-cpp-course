#include "add.hpp"

Add::Add(ASTNode* lhs, ASTNode* rhs) : ASTNode("+", lhs, rhs)
{
	lhs_ = lhs;
	rhs_ = rhs;
}

