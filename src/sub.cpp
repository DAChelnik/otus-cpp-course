#include "sub.hpp"

Sub::Sub(ASTNode* lhs, ASTNode* rhs) : ASTNode("-", lhs, rhs)
{
	lhs_ = lhs;
	rhs_ = rhs;
}
