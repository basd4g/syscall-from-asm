	.text
	.globl	write_asm
write_asm:
  pushq %rbp # record caller's rbp
  movq %rsp, %rbp # set current stack top to rbp
  sub $0, %rsp # allocate memory for local variables

  movq $1, %rax # write syscall number
  #movq $1, rdi # fd
  #movq msg, %rsi # message pointer
  #movq msg_len, %rdx # message length
  syscall
  movq %rbp, %rsp # ignore the remaing data in the stack
  popq %rbp # set caller's rbp to rsp
  ret
  hlt
