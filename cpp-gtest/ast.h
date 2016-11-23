//
// Created by clay on 11/22/16.
//

#ifndef INFIXRPN_AST_H
#define INFIXRPN_AST_H

#include <memory>

using namespace std;

class ast {
    char op;
    unique_ptr<ast> left;
    unique_ptr<ast> right;
};


#endif //INFIXRPN_AST_H
