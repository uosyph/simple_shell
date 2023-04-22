<a name="readme-top"></a>

<p align="center">
    <p align="center">
        <img src="https://bashlogo.com/img/symbol/png/monochrome_light.png" width="180">
    </p>
    <p align="center">
        <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white" height="26">
        <img src="https://img.shields.io/badge/Shell_Script-121011?style=for-the-badge&logo=gnu-bash&logoColor=white" height="26">
        <img src="https://img.shields.io/badge/Linux-FCC624?style=for-the-badge&logo=linux&logoColor=black" height="26">
    </p>
</p>

# Simple Shell
A UNIX command interpreter written in C, built to take in commands and execute text-based programs. 

## Table of Contents
- [Introduction](#introduction)
  - [What is a shell](#what-is-a-shell)
  - [What is the purpose of a shell](#what-is-the-purpose-of-a-shell)
  - [How does the shell provide a user environment](#how-does-the-shell-provide-a-user-environment)
  - [How does the shell interpret user input](#how-does-the-shell-interpret-user-input)
- [Documentation](#documentation)
  - [Compilation](#compilation)
  - [Usage](#usage)
  - [Files](#files)

## Introduction

### What is a shell
A **shell** is a command-line interpreter, it is a program that provides an interface between a user and an [operating system kernel](https://en.wikipedia.org/wiki/Kernel_(operating_system)). It is a program that executes other programs in response to text commands. The shell gathers input from the user and executes programs based on that input. The shell is both an interactive command language and a scripting language, and is used by the operating system to control the execution of the system using shell scripts. A sophisticated shell can also change the environment in which other programs execute by passing named variables, a parameter list, or an input source.

### What is the purpose of a shell
The shell is the most important program on the Unix system from the end-user's standpoint. It allows users to execute utilities and programs by interfacing with the kernel. The shell also provides a [command-line interface](https://en.wikipedia.org/wiki/Command-line_interface), similar to [DOS](https://en.wikipedia.org/wiki/DOS), that allows users to interact with the operating system. Most shells double as interpreted programming languages, allowing users to automate tasks by writing scripts containing built-in shell and Unix commands. The shell's main advantages are its high action-to-keystroke ratio, its support for automating repetitive tasks, and its capacity to access networked machines.

### How does the shell provide a user environment
The shell provides a user environment that can be customized using initialization files. These files contain settings for user environment characteristics, such as search paths for finding commands, default permissions on new files, values for variables that other programs use, and values that can be customized. The shell maintains an environment that includes a set of variables defined by the login program, the system initialization file, and the user initialization. The shell also allows users to set environment variables, which are used by the shell and other programs to determine how they behave.

The shell's environment is typically stored in the user's profile, for example in the local passwd file or in a configuration file in the user's home directory. The shell's environment can be modified by the user or by shell scripts, allowing users to customize their environment to suit their needs. The shell's environment can also be inherited by child processes, allowing them to access the same environment variables and settings as the parent process.

### How does the shell interpret user input
The shell interprets user input by reading the input and determining the command to be executed by looking at the first word of the input. The shell then searches for the command in the directories specified in the user's PATH environment variable. If the command is found, the shell executes it by creating a new process to run the command. The shell also provides a mechanism for redirecting input and output, allowing users to control where the output of a command is sent and where the input for a command comes from.

The shell can also read input from the user using the read built-in command. The read command reads one line from the standard input and assigns the first word of the line to the first variable specified, the second word to the second variable, and so on. If no variables are specified, the line read is assigned to the variable REPLY. The shell also provides a mechanism for passing arguments to a command, allowing users to customize the behavior of a command by specifying options and arguments on the command line.

## Documentation

### Compilation
How to compile the shell:

```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

### Usage

Working in interactive and non-interactive mode:

```bash
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

### Files

|File|Description|
|---|---|
|[_builtin.c](_bulitin.c)|Built-ins functions exit and print environment.|
|[_fork_function.c](_fork_function.c)|Create the fork function to execute the command typed by the user.|
|[_get_path.c](_get_path.c)|Get the environment to find the PATH.|
|[_get_token.c](_get_token.c)|Tokenize the strings.|
|[_getline_command.c](_getline_command.c)|Print "**$**" and get user input.|
|[_str_utils.c](_str_utils.c)|Auxiliary strings functions.|
|[_strtok.c](_strtok.c)|String token functions.|
|[_values_path.c](_values_path.c)|Concatenate the path with the command.|
|[shell.h](shell.h)|Prototypes functions and headers.|
|[simple_shell.c](simple_shell.c)|The shell functions.|


<p align="right"><a href="#readme-top">Back to Top</a></p>
