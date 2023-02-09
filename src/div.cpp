#include "astnode.hpp"
#include "div.hpp"

Div::Div(ASTNode* lhs, ASTNode* rhs) : ASTNode("/", lhs, rhs)
{
	lhs_ = lhs;
	rhs_ = rhs;
}