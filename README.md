# Prefix Evaluator C

This is a prefix evaluator written in C. It takes a prefix expression as input and evaluates it. It supports the following operators:

`+` `-` `*` `/` `^` `(` `)`

## Usage

To compile the program, run `gcc PrefixEvaluator.c -o PrefixEvaluator` in the root directory. This will create an executable called `PrefixEvaluator`.

To run the program, run `./PrefixEvaluator` with the prefix expression as an argument. For example, `./PrefixEvaluator 23+` will evaluate `2 + 3` and print `5`.

## Example

```
$ ./PrefixEvaluator "+25"
7

$ ./PrefixEvaluator "*29"
18

$ ./PrefixEvaluator "*+246"
36
```

## License

This project is licensed under the GPL-3.0 License - see the [LICENSE](LICENSE) file for details.

© Copyright Max Base, 2022
