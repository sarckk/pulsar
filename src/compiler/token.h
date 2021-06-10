#pragma once

enum class Token {
    // keywords
    Fn,
    Print,
    If,
    
    // literals
    Number,
    String,
    Name,
    False,
    True

    // delimiters
    OpenParen, 
    CloseParen, 
    OpenBracket,
    CloseBracket,

    // operators
    Assign,
    Comma, 
    Question,
    Equal,
    Add, 
    Sub,
    Mul,
    Div,
    Mod,
    Not,
    Less,
    Greater,

    // other
    Eof,
    Error
}
