// sub_184F47DC0
// rva 0x04f47dc0  size 425  section .text  group text
// window base 0x184f47dc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F47DC0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax
  unsigned int v9; // edx
  __int64 v10; // r8
  _DWORD *v11; // r8
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  unsigned int v13; // [rsp+14h] [rbp-4h]

  v13 = a3;
  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __halt();
  }
  if ( ((0x43Eu >> sub_184F47B80(a1, a2, a3)) & 1) != 0 )
  {
    result = 1;
  }
  else
  {
    if ( (v13 & 0xFFFFFF00) != 0 )
    {
      v9 = v13;
      v10 = HIWORD(v13);
      if ( (unsigned int)v10 <= 0x10 )
        __asm { jmp     rax; switch jump }
      v11 = (_DWORD *)(v4 + 377151472);
    }
    else
    {
      v9 = v13;
      v11 = (_DWORD *)(v4 + 377151376);
    }
    result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, _QWORD))(v3
                                                                                 + *(_QWORD *)(v4
                                                                                             + 8LL * (*v11 >> 3)
                                                                                             + 256)))(
               a1: v6,
               a2: v7,
               a3: v11,
               a4: v9,
               a5: v9);
  }
  if ( *(int *)(v5 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
