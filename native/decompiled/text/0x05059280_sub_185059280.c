// sub_185059280
// rva 0x05059280  size 513  section .text  group text
// window base 0x185059280: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_185059280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  __int64 v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= v8[1] )
  {
    MEMORY[0x181EB84E0]();
  }
  else
  {
    v9 = *(unsigned int *)(a3 + 8);
    if ( (unsigned int)v9 <= 9 )
      __asm { jmp     r8; switch jump }
  }
  v10 = v8[5];
  if ( (unsigned __int64)(v10 + 40) > v8[4] )
    goto LABEL_8;
  v8[5] = v10 + 40;
  *(_DWORD *)v10 = 34255680;
  *(_DWORD *)(v10 + 4) = 0;
  *(_QWORD *)(v10 + 8) = 0;
  *(_QWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 24) = 0;
  *(_QWORD *)(v10 + 32) = 0;
  v17 = a3;
  while ( 1 )
  {
    *(_DWORD *)(v10 + 20) = 46923644;
    *(_DWORD *)(v10 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v10 + 12) = (unsigned __int64)(v10 - v7) >> 3;
    v16 = v10;
    sub_18503B9A0(a1, a2, a3: (unsigned int *)v10, a4, a5: 0);
    v11 = v16;
    *(_DWORD *)(v16 + 8) = 0;
    *(_DWORD *)(v11 + 12) = 0;
    MEMORY[0x182769900](a1: v13, a2: v14, a3: v11, a4: v12, a5: &a7);
LABEL_8:
    v17 = a3;
    v10 = MEMORY[0x181EAA920](a1, a2, a3: 34255680);
  }
}
