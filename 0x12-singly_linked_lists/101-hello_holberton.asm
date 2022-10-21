; My comments: file prints "Hello, Holberton"
; File: 101-hello_holberton.asm
; Auth: Joshua Burger
; Desc: 64-bit assembly program that prints "Hello, Holverton\n"

extern printf

section .text
	global main

main:
	pushq	rbp

	mov rdi,fmt
	mov rsi,msg
	mov rax,0

	pop rbp
	
	mov rax,0
	ret

section .data
	msg: db "Hello, Holberton",0
	fmt: db "%s",10,0
