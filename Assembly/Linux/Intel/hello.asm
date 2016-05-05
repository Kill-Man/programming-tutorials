;;; This is assembly
;;; It is used to create programs at the second lowest programming level, next to machine code.
;;; You can do basically anything with assembly, anything from hello world to an entire operating system.
;;; Assembly is the language that lets you control the processor, as in, you can make your computer do literally anything that a computer has been known to do.
;;; There are many types of architectures. This means that there is different syntax and registers for each different processor.
;;; This program will focus on x86 Intel syntax. x86 is an architecture that is backwards compatible with all types, including 32 and 64 bit.

;;; Now, onto actual assembly.
;;; Anything behind semicolons are comments, and not read by the assembler.
;;; There are three sections in an assembly program: data, bss, and text.
	;; data is used to declare initalized data or constants. The data cannot be changed at runtime. You can declare constant values, file names, buffer size, etc.
								; You declare a data section with the following: section .data
	;; bss is used to declare variables.
								; You declare a bss section with the following: section .bss
	;; text is where the actual code is. It MUST start with global _start, which tells the kernel where program execution begins.
								; You declare a text section with the following lines:
								;	section .text
								;		global _start
								;	_start:
	;; Anywhere that you see the keyword "section," it can be replaced with the word "segment".
	;; These all apply to memory segments that we will talk about later.
;;; Assembly consists of three types of statements: executable inscructions, assembler directives or psudo-ops, and macros.
	;; Executable instructions tell the processor what to do. Each of these instructions consists of operation code (opcode).
	;; Assembler directives tell the assembler about the aspects of the assembly process.
	;; Macros are text substitution mechanisms.
;;; Assembly statements are entered with one command per line, with the following format:
	;; [label] mnemonic [operands] [; comment]
	;; Where anything in square brackets ([]) are optional where they are not required. A command has two parts, the name of the instruction (mnemonic) and the parameters (operands)
;;; Some examples of mnemonics:
	;; inc VALUE		increments the value of memory variable VALUE by one.
	;; mov TOTAL, 5		moves the value 5 to the memory variable TOTAL.
	;; add ah, bh		add the value in the BH register to the AH register.
;;; You will understand a little more how this works later.
section .text					; Beginning of text section.
	global 	_start
_start:
	mov edx, len				; message length
	mov ecx, msg				; message to write
	mov ebx, 1					; file descriptor (stdout)
	mov eax, 4					; system call number (sys_write)
	int 0x80					; Call kernel
	
	mov eax, 1					; system call number (sys_exit)
	int 0x80					; Call kernel
	
section .data
	msg db 'Hello World', 0xa	; our dear string
	len equ $ - msg				; length of our dear string
;;; What the above program just did is write out "Hello World".

;;; Now, onto memory segments.
	;; Assembly is a segmented memory model, which divides the system into groups of independent segments refered by pointers located in the segment registers.
	;; Each segment contains a specific and type of data. One for instruction codes, one for storing data elements, and one to keep the programming stack.
	;; Data Segment
								; Represented by the .data and .bss sections
								; Used to declare the memory region, where data elements are stored.
								; Cannot be expanded after data elements are declared.
	;; Code Segment
								; Stores instruction code.
	;; Stack
								; Contains data, functions, and procedures.

;;; Processors can process data from one of two places, either a register or memory address.
;;; Reading data from the memory requires a lot more time, so instead registers are used.
	;; Registers are used to process data without any memory. A limited number of registers are built into a chip.

;;; There are 10 32-bit and 6 16-bit registers on 32 bit architecture.
;;; List of registers:
	;; General Registers, which are split into three groups:
								; Data Registers
								; Pointer Registers
								; Index Registers
	;; Control Registers
	;; Segment Registers
;;; Data registers are the 32-bit registers used for arithmetic, logical, and other operations.
;;; They can be used in three ways:
	;; Complete 32-bit: eax, ebx, ecx, or exd.
								; E meaning extended.
	;; Lower halves of the 32 bits, or the last 16 bits: ax, bx, cx, or dx.
								; You will know what A, B, C, and D means soon.
	;; Lower and higher halves of the lower 32 bits: ah, al, bh, bl, ch, cl, dh, dl.
								; H meaning higher half and L meaning lower half.
	;; A visual representation:
	
								;     31            16 15   8 7     0
								;     +-----------------------------+
								; EAX |               |  AH  |  AL  | AX Accumulator
								; EBX |               |  BH  |  BL  | BX Base
								; ECX |               |  CH  |  CL  | CX Counter
								; EDX |               |  DH  |  DL  | DX Data
								;     +-----------------------------+
	;; The accumulator is used for I/O and arithmetic instructions.
								; Example: In multiplication, one operand is stored in EAX, AX, or AL according to the size of said operand.
	;; Base is used in indexed addressing.
	;; Counter is the register that stores the loop count in iterative operations.
	;; Data is used in I/O operations. AX and DX work together to multiply and divide multiple values.
;;; Pointer registers are 32-bit IP, SP, and BP registers.
	;; IP stands for instruction pointer. It stores the offset address of the next instruction. For the complete address, use it with the CS register, like CS:IP.
	;; SP stands for stack pointer. It provides the offset value with the programming stack. SP and SS work together, like SS:SP, will refer to the current position in the stack.
	;; BP stands for base pointer. It helps to reference parameters values passed to a subroutine. SS and BP work together (SS:BP), and will get the location of the parameter.
								; Can also be combined with DI and SI
	;; A visual representation:
								;     31            16 15            0
								;     +------------------------------+
								; ESP |               |      SP      | Stack Pointer
								; EBP |               |      BP      | Base Pointer
								; EIP |               |      IP      | Instruction Pointer
								;     +------------------------------+
