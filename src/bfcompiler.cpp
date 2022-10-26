#include "bfcompiler.h"

#define INDENT "    "

void BfCompiler::append(std::string str) {
    output += str;
}

void BfCompiler::appendln(std::string str) {
    append(str);
    append("\n");
}

void BfCompiler::appendln() {
    appendln("");
}

void BfCompiler::append_indent(std::string str) {
    append(INDENT);
    append(str);
}

void BfCompiler::appendln_indent(std::string str) {
    append(INDENT);
    appendln(str);
}

