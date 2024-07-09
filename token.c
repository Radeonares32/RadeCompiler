#include "compiler.h"

bool token_is_keyword(struct Token *token, const char *value)
{
    return token->type == TOKEN_TYPE_KEYWORD && S_EQ(token->sval, value);
}