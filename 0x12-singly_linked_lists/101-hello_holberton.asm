section .data
hello db "Hello, Holberton", 10  ;
hello_len equ $ - hello  ;

section .text
global main

extern printf

main:
push rbp
mov rdi, hello
call printf

pop rbp
mov rax, 0x60  ;
xor rdi, rdi   ;
syscall
