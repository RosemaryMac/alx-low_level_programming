# ALX-LOW LEVEL PROGRAMMING
## RESOURCES
- **Everything you need to know to start with C.pdf**(*You do not have to learn everything in there yet, but make sure you read it entirely first*)

- [**Dennis Ritchie**](https://en.wikipedia.org/wiki/Dennis_Ritchie)

- [**“C” Programming Language: Brian Kernighan**](https://www.youtube.com/watch?v=de2Hsvxaf8M)

- [**Why C Programming Is Awesome**](https://www.youtube.com/watch?v=smGalmxPVYc)

- [**Learning to program in C part 1**](https://www.youtube.com/watch?v=rk2fK2IIiiQ)

- [**Learning to program in C part 2**](https://www.youtube.com/watch?v=FwpP_MsZWnU)

- [**Understanding C program Compilation Process**](https://www.youtube.com/watch?v=VDslRumKvRA)

- [**Betty Coding Style**](https://github.com/holbertonschool/Betty/wiki)

- [**Hash-bang under the hood**](https://twitter.com/unix_byte/status/1024147947393495040?s=21)(*Look at only after you finish consuming the other resources*)

- [**Linus Torvalds on C vs. C++**](http://harmful.cat-v.org/software/c++/linus)(*Look at only after you finish consuming the other resources*)

man or help:

- **gcc**

- **printf (3)**

- **puts**

- **putchar**

## Learning Objectives
At the end of this project, you are expected to be able to [*explain to anyone*](https://fs.blog/feynman-learning-technique/?fbclid=IwAR2K5_BGPVo0QjJXkOIIqNsqcXK4lTskPWJvA0asKQIGtCPWaQBdKmj1Ztg),**without the help of Google**:

- **Why C programming is awesome**

- Who invented C

- Who are **Dennis Ritchie, Brian Kernighan and Linus Torvalds**

- What happens when you type **gcc main.c**

- What is an entry point

- What is **main**

- How to print text using **printf**, **puts** and **putchar**

- How to get the size of a specific type using the unary operator *sizeof*

- How to compile using *gcc*

- What is the default program name when compiling with *gcc*

- What is the official C coding style and how to check your code with *betty-style*

- How to find the right header to include in your source code when using a standard library function

- How does the **main** function influence the return value of the program
## Requirements
- Allowed editors: **vi**,**vim**,**emacs**

- All your files will be compiled on **Ubuntu 20.04 LTS** using *gcc*, using the options *-Wall -Werror -Wextra -pedantic -std=gnu89*

- All your files should end with a new line

- A **README.md** file at the root of the repo, containing a description of the repository

- A *README.md file*, at the root of the folder of this project, containing a description of the project

- There should be no errors and no warnings during compilation

- You are not allowed to use system

- Your code should use the *Betty style*. It will be checked using [*betty-style.pl*](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [*betty-doc.pl*](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)

## More Info
### Betty linter

To run the Betty linter just with command ``betty <filename>``:

- Go to the [*Betty*](https://github.com/holbertonschool/Betty) repository

- Clone the [*repo*](https://github.com/holbertonschool/Betty) to your local machine

- *cd* into the Betty directory

- Install the linter with ``sudo ./install.sh``

- emacs or vi a new file called betty, and copy the script below:
~~~~
 #!/bin/bash

 # Simply a wrapper script to keep you from having to use betty-style

 # and betty-doc separately on every item.

 # Originally by Tim Britton (@wintermanc3r), multiargument added by

 # Larry Madeo (@hillmonkey)


BIN_PATH="/usr/local/bin"

BETTY_STYLE="betty-style"

BETTY_DOC="betty-doc"


if [ "$#" = "0" ]; then

    echo "No arguments passed."

    exit 1

fi


for argument in "$@" ; do

    echo -e "\n========== $argument =========="

    ${BIN_PATH}/${BETTY_STYLE} "$argument"

    ${BIN_PATH}/${BETTY_DOC} "$argument"

done
~~~~
- Once saved, exit file and change permissions to apply to all users with ``chmod a+x betty``

- Move the *betty* file into */bin/* directory or somewhere else in your **$PATH** with ``sudo mv betty /bin/``

You can now type ``betty <filename>`` to run the Betty linter!

