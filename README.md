# get_next_line

**A C function that reads any valid file line by line until the end.**

## Foreword

Get_next_line is a programming assignment for first year students at Academy+Plus.

Get_next_line will allow you to read a line ending with a newline character from a file descriptor, similarly to the getline(3) function.

Disclaimer: *There [are][2] [so][3] [many][4] [easier][5] methods of doing this by using standard C functions. But the goal here is to be able to do it by using any functions from my [libft][6] and only the standard functions `read`, `malloc` and `free`.*

More details included in the [get_next_line.en.pdf][1] file.

## Contributing

Do report bugs, and raise issues and pull requests as you see fit. Improvements to make the code more concise/efficient/elegant are welcome. Thanks!

## Usage

Clone and open the directory.
Compile with `make -C libft/ fclean && make -C libft/`. Then:

`clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c`

`clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c`

`clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft`

## License

[MIT © Petru Dobos.](https://github.com/petrudobos/libft/blob/master/LICENSE)

[1]: https://github.com/petrudobos/get_next_line/blob/master/get_next_line.en.pdf
[2]: http://stackoverflow.com/questions/3501338/c-read-file-line-by-line
[3]: http://stackoverflow.com/questions/2372813/reading-one-line-at-a-time-in-c
[4]: http://stackoverflow.com/questions/9206091/going-through-a-text-file-line-by-line-in-c
[5]: https://linux.die.net/man/3/getline
[6]: https://github.com/petrudobos/libft
