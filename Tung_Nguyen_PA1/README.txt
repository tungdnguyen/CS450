Hi

This is Tung D. Nguyen homework 1 for CS 450. In this one I'm modifying the
shell so that it can run re-directional and parallel operator.


In the program, I modified all the words "pipe" to "pa", so it can create some
confusion when reading the code. All the code that I change will have the
comment "//CHANGE"

First compile the file by using command:
  gcc sh.c

Then to run the program type
  ./a.out

The shell can run typical commands, like ls, echo, cat, etc.
The redirectional operator ">" will send the output of your first argument to
the second argument.

Command ends with ">" or "&" is illegal so avoid doing that.

If ls,echo etc. command does not work, you can try using /bin/ls or commands
like that.

The test cases are used in the file t.sh, to run all the tests run the command:
  ./a.out < t.sh

The test cases are good because it covers all the command needed to implement.
It also check for multiple command in parallel ( 2 and more). It also present
some of the errors and prevent illegal commands.
