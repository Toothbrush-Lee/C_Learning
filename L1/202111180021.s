	.section	__TEXT,__text,regular,pure_instructions
	.build_version macos, 12, 0	sdk_version 12, 1
	.globl	_p1                             ; -- Begin function p1
	.p2align	2
_p1:                                    ; @p1
	.cfi_startproc
; %bb.0:
	stp	x29, x30, [sp, #-16]!           ; 16-byte Folded Spill
	mov	x29, sp
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x0, l_.str@PAGE
	add	x0, x0, l_.str@PAGEOFF
	bl	_printf
	ldp	x29, x30, [sp], #16             ; 16-byte Folded Reload
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_p2                             ; -- Begin function p2
	.p2align	2
_p2:                                    ; @p2
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #123
	stur	w8, [x29, #-4]
	mov	w8, #456
	stur	w8, [x29, #-8]
	ldur	w8, [x29, #-4]
	ldur	w9, [x29, #-8]
	add	w8, w8, w9
	stur	w8, [x29, #-12]
	ldur	w9, [x29, #-12]
                                        ; implicit-def: $x8
	mov	x8, x9
	adrp	x0, l_.str.1@PAGE
	add	x0, x0, l_.str.1@PAGEOFF
	mov	x9, sp
	str	x8, [x9]
	bl	_printf
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_p3                             ; -- Begin function p3
	.p2align	2
_p3:                                    ; @p3
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #48                     ; =48
	stp	x29, x30, [sp, #32]             ; 16-byte Folded Spill
	add	x29, sp, #32                    ; =32
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x0, l_.str.2@PAGE
	add	x0, x0, l_.str.2@PAGEOFF
	mov	x9, sp
	sub	x8, x29, #4                     ; =4
	str	x8, [x9]
	sub	x8, x29, #8                     ; =8
	str	x8, [x9, #8]
	bl	_scanf
	ldur	w0, [x29, #-4]
	ldur	w1, [x29, #-8]
	bl	_max
	stur	w0, [x29, #-12]
	ldur	w9, [x29, #-12]
                                        ; implicit-def: $x8
	mov	x8, x9
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	mov	x9, sp
	str	x8, [x9]
	bl	_printf
	ldp	x29, x30, [sp, #32]             ; 16-byte Folded Reload
	add	sp, sp, #48                     ; =48
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_max                            ; -- Begin function max
	.p2align	2
_max:                                   ; @max
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #16                     ; =16
	.cfi_def_cfa_offset 16
	str	w0, [sp, #12]
	str	w1, [sp, #8]
	ldr	w8, [sp, #12]
	ldr	w9, [sp, #8]
	subs	w8, w8, w9
	b.le	LBB3_2
; %bb.1:
	ldr	w8, [sp, #12]
	str	w8, [sp, #4]
	b	LBB3_3
LBB3_2:
	ldr	w8, [sp, #8]
	str	w8, [sp, #4]
LBB3_3:
	ldr	w0, [sp, #4]
	add	sp, sp, #16                     ; =16
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_p4                             ; -- Begin function p4
	.p2align	2
_p4:                                    ; @p4
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x0, l_.str.4@PAGE
	add	x0, x0, l_.str.4@PAGEOFF
	str	x0, [sp, #8]                    ; 8-byte Folded Spill
	bl	_printf
	adrp	x0, l_.str.5@PAGE
	add	x0, x0, l_.str.5@PAGEOFF
	bl	_printf
	ldr	x0, [sp, #8]                    ; 8-byte Folded Reload
	bl	_printf
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_p5                             ; -- Begin function p5
	.p2align	2
_p5:                                    ; @p5
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #64                     ; =64
	stp	x29, x30, [sp, #48]             ; 16-byte Folded Spill
	add	x29, sp, #48                    ; =48
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	adrp	x0, l_.str.6@PAGE
	add	x0, x0, l_.str.6@PAGEOFF
	mov	x9, sp
	sub	x8, x29, #4                     ; =4
	str	x8, [x9]
	sub	x8, x29, #8                     ; =8
	str	x8, [x9, #8]
	sub	x8, x29, #12                    ; =12
	str	x8, [x9, #16]
	bl	_scanf
	ldur	w8, [x29, #-4]
	stur	w8, [x29, #-16]
	ldur	w8, [x29, #-16]
	ldur	w9, [x29, #-8]
	subs	w8, w8, w9
	b.ge	LBB5_2
; %bb.1:
	ldur	w8, [x29, #-8]
	stur	w8, [x29, #-16]
LBB5_2:
	ldur	w8, [x29, #-16]
	ldur	w9, [x29, #-12]
	subs	w8, w8, w9
	b.ge	LBB5_4
; %bb.3:
	ldur	w8, [x29, #-12]
	stur	w8, [x29, #-16]
LBB5_4:
	ldur	w9, [x29, #-16]
                                        ; implicit-def: $x8
	mov	x8, x9
	adrp	x0, l_.str.3@PAGE
	add	x0, x0, l_.str.3@PAGEOFF
	mov	x9, sp
	str	x8, [x9]
	bl	_printf
	ldp	x29, x30, [sp, #48]             ; 16-byte Folded Reload
	add	sp, sp, #64                     ; =64
	ret
	.cfi_endproc
                                        ; -- End function
	.globl	_main                           ; -- Begin function main
	.p2align	2
_main:                                  ; @main
	.cfi_startproc
; %bb.0:
	sub	sp, sp, #32                     ; =32
	stp	x29, x30, [sp, #16]             ; 16-byte Folded Spill
	add	x29, sp, #16                    ; =16
	.cfi_def_cfa w29, 16
	.cfi_offset w30, -8
	.cfi_offset w29, -16
	mov	w8, #0
	str	w8, [sp, #8]                    ; 4-byte Folded Spill
	stur	wzr, [x29, #-4]
	bl	_p1
	bl	_p2
	bl	_p3
	bl	_p4
	bl	_p5
	ldr	w0, [sp, #8]                    ; 4-byte Folded Reload
	ldp	x29, x30, [sp, #16]             ; 16-byte Folded Reload
	add	sp, sp, #32                     ; =32
	ret
	.cfi_endproc
                                        ; -- End function
	.section	__TEXT,__cstring,cstring_literals
l_.str:                                 ; @.str
	.asciz	"This is a C program.\n"

l_.str.1:                               ; @.str.1
	.asciz	"sum is %d\n"

l_.str.2:                               ; @.str.2
	.asciz	"%d,%d"

l_.str.3:                               ; @.str.3
	.asciz	"max=%d\n"

l_.str.4:                               ; @.str.4
	.asciz	"**********\n"

l_.str.5:                               ; @.str.5
	.asciz	"Very Good!\n"

l_.str.6:                               ; @.str.6
	.asciz	"%d,%d,%d"

.subsections_via_symbols
