bits 32
global memspace
global _start
%define Heapsize (1024*1024*1024/4)

Section .heap alloc noexec write nobits align=0x04
	memspace:
		heapsize equ Heapsize
		resd heapsize 

Section .text
	_start:
