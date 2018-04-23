In the Programming assignment 2, I added another system call called the getCountCall() into xv6.
To perform the program, first you need to install vagrant command interface and virtualbox.

Then after that, you can go to the 'xv6' folder in the terminal and type
'vagrant up'

After it install everything you will type:
'vagrant ssh'

To access the virtual machine to run xv6.
When you're able to go to the virtual machine command interface, run:
'cd /vagrant'

To access vagrant folder, there you type:

'make'

or if you want to recompiled the xv6, you can run:

'make clean ; make'

To compiled xv6. To run xv6, you then type:

'make qemu-nox'

And then you would get in to the xv6. Inside the xv6, to perform the test program for the function, call:

'getCountCall'

It would then output the values of the tests.

Midway through the program, after the read count it would seems it is halt, it actually asking the user for input,
so just input something and hit enter.

The source code of the test programs is in the file 'getCountCall.c' that is inside folder xv6.

After you're done with xv6, enter: 'control-a + x' to exit xv6.

After exit vagrant, type:

'vagrant halt'

To shutdown the VM.
