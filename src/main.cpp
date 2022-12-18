#include <algorithm>
#include <stdlib.h>
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <string>
#include <regex>

// this function is called when F key is pressed
int f_insert(int a, int b) {
    // std::string input{rl_line_buffer};
    // std::replace(input.begin(), input.end(), 'x', 'y');
    rl_delete_text(0, rl_end);
    // rl_insert_text(input.c_str());
    rl_insert_text("hello world");
    return 0;
}

int main()
{
    rl_bind_key('f', f_insert);
    using_history();
    while (true) {
        char* input = readline("prompt> ");
        if (!input)
            break;
        add_history(input);
        delete input;
    }
}
