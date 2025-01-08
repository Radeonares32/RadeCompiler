#include "compiler.h"

bool token_is_keyword(struct Token *token, const char *value)
{
    return token->type == TOKEN_TYPE_KEYWORD && S_EQ(token->sval, value);
}

bool token_is_symbol(struct Token *token, char c)
{
    return token->type == TOKEN_TYPE_SYMBOL && token->cval == c;
}   

bool token_is_nl_or_comment_or_newline_seperator(struct Token *token)
{
    return token->type == TOKEN_TYPE_NEWLINE || token->type == TOKEN_TYPE_COMMENT || token_is_symbol(token, '\\');
}